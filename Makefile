ts := $(shell which tree-sitter 2> /dev/null)
ifeq (, ${ts})
	ts := $(shell which tree-sitter-cli 2> /dev/null)
endif

generate:
	${ts} generate

test: generate
	${ts} test

format: generate
	${ts} test --update

compile: generate
	gcc -shared -o target/parser.so -fPIC src/parser.c -I./src

watch_playground:
	watchexec -e txt,js,prql "tree-sitter generate && tree-sitter parse test.prql"

watch_compile:
	watchexec -e txt,js,prql "prqlc compile test.prql"

watch_tests:
	watchexec -e txt,js,prql "tree-sitter generate && tree-sitter test"
