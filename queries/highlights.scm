[
  (keyword_from)
  (keyword_filter)
  (keyword_derive)
  (keyword_group)
  (keyword_aggregate)
  (keyword_sort)
  (keyword_take)
  (keyword_window)
  (keyword_join)
  (keyword_select)
  (keyword_switch)
  (keyword_average)
  (keyword_inner)
  (keyword_right)
  (keyword_full)
  (keyword_in)
  (keyword_rolling)
  (keyword_rows)
  (keyword_expanding)
] @keyword

(literal) @string

(comment) @comment

[
  "+"
  "-"
  "*"
  "/"
  "="
  "=="
  "<"
  "<="
  "!="
  ">="
  ">"
] @operator

[
  "("
  ")"
  "["
  "]"
] @punctuation.bracket

[
  ","
  "."
] @punctuation.delimiter

((literal) @number
 (#lua-match? @number "^%d+$"))

((literal) @float
(#lua-match? @float "^[+-]?%d*\.%d*$"))

[
 (keyword_min)
 (keyword_max)
 (keyword_count)
 (keyword_count_distinct)
 (keyword_average)
 (keyword_avg)
 (keyword_sum)
 (keyword_stddev)
] @function.call

[
 (keyword_side)
 (date)
 (time)
 (timestamp)
] @attribute

[
 (keyword_left)
] @method

[
 (keyword_true)
 (keyword_false)
] @boolean

(term
  value: (field
    table: (identifier) @storageclass))

(term
  value: (field
    table: (identifier)
    name: (identifier) @field))

(term
  value: (field
    name: (identifier) @field))

[
 (keyword_and)
 (keyword_or)
] @keyword.operator
