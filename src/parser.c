#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 10

enum {
  sym_keyword_from = 1,
  sym_keyword_filter = 2,
  sym_keyword_derive = 3,
  sym_keyword_group = 4,
  sym_keyword_aggregate = 5,
  sym_keyword_sort = 6,
  sym_keyword_take = 7,
  sym_keyword_join = 8,
  sym_keyword_select = 9,
  sym_keyword_true = 10,
  sym_keyword_false = 11,
  sym_keyword_switch = 12,
  sym_keyword_average = 13,
  sym_keyword_min = 14,
  sym_keyword_max = 15,
  sym_keyword_count = 16,
  sym_keyword_stddev = 17,
  sym_keyword_avg = 18,
  sym_keyword_sum = 19,
  sym_keyword_count_distinct = 20,
  sym_keyword_side = 21,
  sym_keyword_inner = 22,
  sym_keyword_left = 23,
  sym_keyword_right = 24,
  sym_keyword_full = 25,
  sym_keyword_and = 26,
  sym_keyword_or = 27,
  sym_keyword_in = 28,
  anon_sym_LBRACK = 29,
  anon_sym_COMMA = 30,
  anon_sym_RBRACK = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  anon_sym_COLON = 34,
  anon_sym_DQUOTE = 35,
  aux_sym__double_quote_string_token1 = 36,
  anon_sym_SQUOTE = 37,
  aux_sym__literal_string_token1 = 38,
  sym__number = 39,
  anon_sym_DASH = 40,
  anon_sym_DOT = 41,
  sym_identifier = 42,
  anon_sym_PLUS = 43,
  anon_sym_STAR = 44,
  anon_sym_SLASH = 45,
  anon_sym_PIPE = 46,
  anon_sym_EQ = 47,
  anon_sym_EQ_EQ = 48,
  anon_sym_BANG_EQ = 49,
  anon_sym_GT = 50,
  anon_sym_GT_EQ = 51,
  anon_sym_LT = 52,
  anon_sym_LT_EQ = 53,
  anon_sym_DOT_DOT = 54,
  anon_sym_QMARK_QMARK = 55,
  anon_sym_POUND = 56,
  aux_sym_comment_token1 = 57,
  sym_program = 58,
  sym_pipeline = 59,
  sym_transforms = 60,
  sym_from = 61,
  sym_derives = 62,
  sym_filter = 63,
  sym__boolean_expression = 64,
  sym_aggregate = 65,
  sym_aggregate_operation = 66,
  sym_sorts = 67,
  sym_takes = 68,
  sym_joins = 69,
  sym_conditions = 70,
  sym_select = 71,
  sym_table_reference = 72,
  sym_term = 73,
  sym__expression = 74,
  sym_literal = 75,
  sym__double_quote_string = 76,
  sym__literal_string = 77,
  sym__decimal_number = 78,
  sym_field = 79,
  sym__alias_identifier = 80,
  sym_binary_expression = 81,
  sym_comment = 82,
  aux_sym_program_repeat1 = 83,
  aux_sym_transforms_repeat1 = 84,
  aux_sym_derives_repeat1 = 85,
  aux_sym_aggregate_repeat1 = 86,
  aux_sym_conditions_repeat1 = 87,
  aux_sym_table_reference_repeat1 = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_from] = "keyword_from",
  [sym_keyword_filter] = "keyword_filter",
  [sym_keyword_derive] = "keyword_derive",
  [sym_keyword_group] = "keyword_group",
  [sym_keyword_aggregate] = "keyword_aggregate",
  [sym_keyword_sort] = "keyword_sort",
  [sym_keyword_take] = "keyword_take",
  [sym_keyword_join] = "keyword_join",
  [sym_keyword_select] = "keyword_select",
  [sym_keyword_true] = "keyword_true",
  [sym_keyword_false] = "keyword_false",
  [sym_keyword_switch] = "keyword_switch",
  [sym_keyword_average] = "keyword_average",
  [sym_keyword_min] = "keyword_min",
  [sym_keyword_max] = "keyword_max",
  [sym_keyword_count] = "keyword_count",
  [sym_keyword_stddev] = "keyword_stddev",
  [sym_keyword_avg] = "keyword_avg",
  [sym_keyword_sum] = "keyword_sum",
  [sym_keyword_count_distinct] = "keyword_count_distinct",
  [sym_keyword_side] = "keyword_side",
  [sym_keyword_inner] = "keyword_inner",
  [sym_keyword_left] = "keyword_left",
  [sym_keyword_right] = "keyword_right",
  [sym_keyword_full] = "keyword_full",
  [sym_keyword_and] = "keyword_and",
  [sym_keyword_or] = "keyword_or",
  [sym_keyword_in] = "keyword_in",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__literal_string_token1] = "_literal_string_token1",
  [sym__number] = "_number",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_program] = "program",
  [sym_pipeline] = "pipeline",
  [sym_transforms] = "transforms",
  [sym_from] = "from",
  [sym_derives] = "derives",
  [sym_filter] = "filter",
  [sym__boolean_expression] = "_boolean_expression",
  [sym_aggregate] = "aggregate",
  [sym_aggregate_operation] = "aggregate_operation",
  [sym_sorts] = "sorts",
  [sym_takes] = "takes",
  [sym_joins] = "joins",
  [sym_conditions] = "conditions",
  [sym_select] = "select",
  [sym_table_reference] = "table_reference",
  [sym_term] = "term",
  [sym__expression] = "_expression",
  [sym_literal] = "literal",
  [sym__double_quote_string] = "_double_quote_string",
  [sym__literal_string] = "_literal_string",
  [sym__decimal_number] = "_decimal_number",
  [sym_field] = "field",
  [sym__alias_identifier] = "_alias_identifier",
  [sym_binary_expression] = "binary_expression",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_transforms_repeat1] = "transforms_repeat1",
  [aux_sym_derives_repeat1] = "derives_repeat1",
  [aux_sym_aggregate_repeat1] = "aggregate_repeat1",
  [aux_sym_conditions_repeat1] = "conditions_repeat1",
  [aux_sym_table_reference_repeat1] = "table_reference_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword_from] = sym_keyword_from,
  [sym_keyword_filter] = sym_keyword_filter,
  [sym_keyword_derive] = sym_keyword_derive,
  [sym_keyword_group] = sym_keyword_group,
  [sym_keyword_aggregate] = sym_keyword_aggregate,
  [sym_keyword_sort] = sym_keyword_sort,
  [sym_keyword_take] = sym_keyword_take,
  [sym_keyword_join] = sym_keyword_join,
  [sym_keyword_select] = sym_keyword_select,
  [sym_keyword_true] = sym_keyword_true,
  [sym_keyword_false] = sym_keyword_false,
  [sym_keyword_switch] = sym_keyword_switch,
  [sym_keyword_average] = sym_keyword_average,
  [sym_keyword_min] = sym_keyword_min,
  [sym_keyword_max] = sym_keyword_max,
  [sym_keyword_count] = sym_keyword_count,
  [sym_keyword_stddev] = sym_keyword_stddev,
  [sym_keyword_avg] = sym_keyword_avg,
  [sym_keyword_sum] = sym_keyword_sum,
  [sym_keyword_count_distinct] = sym_keyword_count_distinct,
  [sym_keyword_side] = sym_keyword_side,
  [sym_keyword_inner] = sym_keyword_inner,
  [sym_keyword_left] = sym_keyword_left,
  [sym_keyword_right] = sym_keyword_right,
  [sym_keyword_full] = sym_keyword_full,
  [sym_keyword_and] = sym_keyword_and,
  [sym_keyword_or] = sym_keyword_or,
  [sym_keyword_in] = sym_keyword_in,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__literal_string_token1] = aux_sym__literal_string_token1,
  [sym__number] = sym__number,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_program] = sym_program,
  [sym_pipeline] = sym_pipeline,
  [sym_transforms] = sym_transforms,
  [sym_from] = sym_from,
  [sym_derives] = sym_derives,
  [sym_filter] = sym_filter,
  [sym__boolean_expression] = sym__boolean_expression,
  [sym_aggregate] = sym_aggregate,
  [sym_aggregate_operation] = sym_aggregate_operation,
  [sym_sorts] = sym_sorts,
  [sym_takes] = sym_takes,
  [sym_joins] = sym_joins,
  [sym_conditions] = sym_conditions,
  [sym_select] = sym_select,
  [sym_table_reference] = sym_table_reference,
  [sym_term] = sym_term,
  [sym__expression] = sym__expression,
  [sym_literal] = sym_literal,
  [sym__double_quote_string] = sym__double_quote_string,
  [sym__literal_string] = sym__literal_string,
  [sym__decimal_number] = sym__decimal_number,
  [sym_field] = sym_field,
  [sym__alias_identifier] = sym__alias_identifier,
  [sym_binary_expression] = sym_binary_expression,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_transforms_repeat1] = aux_sym_transforms_repeat1,
  [aux_sym_derives_repeat1] = aux_sym_derives_repeat1,
  [aux_sym_aggregate_repeat1] = aux_sym_aggregate_repeat1,
  [aux_sym_conditions_repeat1] = aux_sym_conditions_repeat1,
  [aux_sym_table_reference_repeat1] = aux_sym_table_reference_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_from] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_derive] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_group] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_aggregate] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_sort] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_take] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_join] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_select] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_true] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_false] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_average] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_min] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_max] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_count] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_stddev] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_avg] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_count_distinct] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_side] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_inner] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_left] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_right] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_full] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_and] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_or] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_in] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__literal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_transforms] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_derives] = {
    .visible = true,
    .named = true,
  },
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_aggregate] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_sorts] = {
    .visible = true,
    .named = true,
  },
  [sym_takes] = {
    .visible = true,
    .named = true,
  },
  [sym_joins] = {
    .visible = true,
    .named = true,
  },
  [sym_conditions] = {
    .visible = true,
    .named = true,
  },
  [sym_select] = {
    .visible = true,
    .named = true,
  },
  [sym_table_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__double_quote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal_number] = {
    .visible = false,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__alias_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transforms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_derives_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregate_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_reference_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_name = 2,
  field_operator = 3,
  field_predicate = 4,
  field_right = 5,
  field_table = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_predicate] = "predicate",
  [field_right] = "right",
  [field_table] = "table",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
  [7] = {.index = 4, .length = 3},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_value, 0},
  [2] =
    {field_predicate, 1, .inherited = true},
  [3] =
    {field_predicate, 0},
  [4] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [7] =
    {field_name, 2},
    {field_table, 0},
  [9] =
    {field_predicate, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_identifier,
  },
  [6] = {
    [1] = sym_term,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__double_quote_string, 2,
    sym__double_quote_string,
    sym_identifier,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(198);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(328);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '.') ADVANCE(257);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == ':') ADVANCE(245);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '=') ADVANCE(331);
      if (lookahead == '>') ADVANCE(334);
      if (lookahead == '?') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(39);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'G') ADVANCE(80);
      if (lookahead == 'I') ADVANCE(61);
      if (lookahead == 'J') ADVANCE(69);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'M') ADVANCE(7);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'c') ADVANCE(161);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'j') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '|') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == 'F') ADVANCE(258);
      if (lookahead == 'T') ADVANCE(280);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(292);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(193)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == 'A') ADVANCE(289);
      if (lookahead == 'C') ADVANCE(278);
      if (lookahead == 'F') ADVANCE(258);
      if (lookahead == 'M') ADVANCE(259);
      if (lookahead == 'S') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(280);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead == 'f') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(293);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(192)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(194)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(333);
      END_STATE();
    case 5:
      if (lookahead == '?') ADVANCE(339);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'R') ADVANCE(70);
      if (lookahead == 'U') ADVANCE(58);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead == 'I') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'R') ADVANCE(95);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(87);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(88);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(236);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(231);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(205);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(208);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(210);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(201);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(203);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'W') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'O') ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == 'G') ADVANCE(225);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'F') ADVANCE(83);
      END_STATE();
    case 38:
      if (lookahead == 'G') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'G') ADVANCE(42);
      if (lookahead == 'N') ADVANCE(15);
      if (lookahead == 'V') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'G') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'G') ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == 'G') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'G') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'H') ADVANCE(212);
      END_STATE();
    case 45:
      if (lookahead == 'H') ADVANCE(86);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'R') ADVANCE(70);
      if (lookahead == 'U') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(82);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(89);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'K') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(92);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(235);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(21);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 59:
      if (lookahead == 'M') ADVANCE(227);
      END_STATE();
    case 60:
      if (lookahead == 'M') ADVANCE(199);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(238);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(215);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(206);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 68:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 69:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 70:
      if (lookahead == 'O') ADVANCE(60);
      END_STATE();
    case 71:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'P') ADVANCE(202);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(237);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(232);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(200);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(46);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 82:
      if (lookahead == 'S') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(233);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(204);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(221);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(234);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(207);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(229);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 93:
      if (lookahead == 'U') ADVANCE(72);
      END_STATE();
    case 94:
      if (lookahead == 'U') ADVANCE(64);
      END_STATE();
    case 95:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 96:
      if (lookahead == 'V') ADVANCE(223);
      END_STATE();
    case 97:
      if (lookahead == 'V') ADVANCE(26);
      END_STATE();
    case 98:
      if (lookahead == 'X') ADVANCE(217);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 106:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'g') ADVANCE(225);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 130:
      if (lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'v') ADVANCE(127);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(178);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 146:
      if (lookahead == 'k') ADVANCE(115);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 186:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 189:
      if (lookahead == 'v') ADVANCE(223);
      END_STATE();
    case 190:
      if (lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 191:
      if (lookahead == 'x') ADVANCE(217);
      END_STATE();
    case 192:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(192)
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == 'A') ADVANCE(289);
      if (lookahead == 'C') ADVANCE(278);
      if (lookahead == 'F') ADVANCE(258);
      if (lookahead == 'M') ADVANCE(259);
      if (lookahead == 'S') ADVANCE(283);
      if (lookahead == 'T') ADVANCE(280);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'c') ADVANCE(312);
      if (lookahead == 'f') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(293);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 't') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 193:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(193)
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == 'F') ADVANCE(258);
      if (lookahead == 'T') ADVANCE(280);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(292);
      if (lookahead == 't') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 194:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(194)
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '[') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 195:
      if (eof) ADVANCE(198);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(48);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'J') ADVANCE(69);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'j') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(197)
      END_STATE();
    case 196:
      if (eof) ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(328);
      if (lookahead == '+') ADVANCE(327);
      if (lookahead == ',') ADVANCE(241);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '.') ADVANCE(257);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == ':') ADVANCE(245);
      if (lookahead == '<') ADVANCE(336);
      if (lookahead == '=') ADVANCE(331);
      if (lookahead == '>') ADVANCE(334);
      if (lookahead == '?') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(39);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'G') ADVANCE(80);
      if (lookahead == 'I') ADVANCE(61);
      if (lookahead == 'J') ADVANCE(69);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'M') ADVANCE(7);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == '[') ADVANCE(240);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'c') ADVANCE(161);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'j') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '|') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 197:
      if (eof) ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(197)
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(48);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'J') ADVANCE(69);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'j') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(110);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead == '#') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == '#') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(338);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(291);
      if (lookahead == 'I') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(279);
      if (lookahead == 'G') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(263);
      if (lookahead == 'U') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'g') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == 'u') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(249);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(253);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 195},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 195},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 247},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 251},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 247},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 344},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_from] = ACTIONS(1),
    [sym_keyword_filter] = ACTIONS(1),
    [sym_keyword_derive] = ACTIONS(1),
    [sym_keyword_group] = ACTIONS(1),
    [sym_keyword_aggregate] = ACTIONS(1),
    [sym_keyword_sort] = ACTIONS(1),
    [sym_keyword_take] = ACTIONS(1),
    [sym_keyword_join] = ACTIONS(1),
    [sym_keyword_select] = ACTIONS(1),
    [sym_keyword_true] = ACTIONS(1),
    [sym_keyword_false] = ACTIONS(1),
    [sym_keyword_switch] = ACTIONS(1),
    [sym_keyword_average] = ACTIONS(1),
    [sym_keyword_min] = ACTIONS(1),
    [sym_keyword_max] = ACTIONS(1),
    [sym_keyword_count] = ACTIONS(1),
    [sym_keyword_stddev] = ACTIONS(1),
    [sym_keyword_avg] = ACTIONS(1),
    [sym_keyword_sum] = ACTIONS(1),
    [sym_keyword_count_distinct] = ACTIONS(1),
    [sym_keyword_side] = ACTIONS(1),
    [sym_keyword_inner] = ACTIONS(1),
    [sym_keyword_left] = ACTIONS(1),
    [sym_keyword_right] = ACTIONS(1),
    [sym_keyword_full] = ACTIONS(1),
    [sym_keyword_and] = ACTIONS(1),
    [sym_keyword_or] = ACTIONS(1),
    [sym_keyword_in] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(122),
    [sym_pipeline] = STATE(117),
    [sym_from] = STATE(43),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_keyword_from] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_DOT,
    STATE(2), 1,
      sym_comment,
    ACTIONS(13), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [43] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym__number,
    STATE(3), 1,
      sym_comment,
    ACTIONS(19), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(15), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [86] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOT,
    STATE(4), 1,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(21), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [129] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(5), 1,
      sym_comment,
    ACTIONS(29), 4,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(27), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [170] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym__number,
    STATE(6), 1,
      sym_comment,
    ACTIONS(35), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [213] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(37), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [256] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(45), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [296] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [336] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(19), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(15), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [376] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(13), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [416] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [456] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [496] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_EQ,
    STATE(14), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 17,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [546] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    STATE(15), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [598] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    STATE(16), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [644] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_comment,
    ACTIONS(35), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [684] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    STATE(18), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 15,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [738] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOT,
    STATE(19), 1,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(21), 25,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [780] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_EQ,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 17,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [830] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 22,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [874] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 24,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [916] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [956] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(79), 1,
      sym_keyword_and,
    STATE(24), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [1012] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(79), 1,
      sym_keyword_and,
    ACTIONS(83), 1,
      sym_keyword_or,
    STATE(25), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1069] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym_comment,
    STATE(37), 1,
      sym_binary_expression,
    STATE(61), 1,
      sym__expression,
    STATE(112), 1,
      sym_aggregate_operation,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(8), 2,
      sym_literal,
      sym_field,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(87), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1137] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym_comment,
    ACTIONS(13), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
    ACTIONS(9), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [1178] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(28), 1,
      sym_comment,
    STATE(41), 1,
      sym_binary_expression,
    STATE(61), 1,
      sym__expression,
    STATE(116), 1,
      sym_aggregate_operation,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(8), 2,
      sym_literal,
      sym_field,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(87), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1243] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(29), 1,
      sym_comment,
    STATE(41), 1,
      sym_binary_expression,
    STATE(61), 1,
      sym__expression,
    STATE(116), 1,
      sym_aggregate_operation,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(8), 2,
      sym_literal,
      sym_field,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(87), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1308] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(45), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
    ACTIONS(43), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [1346] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(79), 1,
      sym_keyword_and,
    ACTIONS(83), 1,
      sym_keyword_or,
    STATE(31), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(113), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [1400] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(32), 1,
      sym_comment,
    STATE(41), 1,
      sym_binary_expression,
    STATE(61), 1,
      sym__expression,
    STATE(116), 1,
      sym_aggregate_operation,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(8), 2,
      sym_literal,
      sym_field,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(87), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1462] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(45), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [1498] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(34), 1,
      sym_comment,
    STATE(35), 1,
      sym_binary_expression,
    STATE(109), 1,
      sym_term,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(8), 2,
      sym_literal,
      sym_field,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
  [1556] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_derives_repeat1,
    ACTIONS(45), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 15,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [1588] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(36), 1,
      sym_comment,
    STATE(105), 1,
      sym_term,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1644] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(45), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [1680] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(38), 1,
      sym_comment,
    STATE(39), 1,
      sym_binary_expression,
    STATE(120), 1,
      sym_term,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(8), 2,
      sym_literal,
      sym_field,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
  [1735] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(45), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 15,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [1764] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(33), 1,
      sym_binary_expression,
    STATE(40), 1,
      sym_comment,
    STATE(61), 1,
      sym__expression,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(8), 2,
      sym_literal,
      sym_field,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
  [1819] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(45), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [1850] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(31), 1,
      sym__expression,
    STATE(42), 1,
      sym_comment,
    STATE(77), 1,
      sym__boolean_expression,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1903] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      sym_keyword_filter,
    ACTIONS(145), 1,
      sym_keyword_derive,
    ACTIONS(147), 1,
      sym_keyword_aggregate,
    ACTIONS(149), 1,
      sym_keyword_sort,
    ACTIONS(151), 1,
      sym_keyword_take,
    ACTIONS(153), 1,
      sym_keyword_join,
    ACTIONS(155), 1,
      sym_keyword_select,
    STATE(43), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_transforms_repeat1,
    STATE(118), 1,
      sym_transforms,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(96), 7,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_joins,
      sym_select,
  [1950] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(45), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [1981] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(45), 1,
      sym_comment,
    STATE(119), 1,
      sym_term,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2034] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(46), 1,
      sym_comment,
    STATE(119), 1,
      sym_term,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2087] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(47), 1,
      sym_comment,
    STATE(87), 1,
      sym_term,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2140] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(39), 1,
      sym_binary_expression,
    STATE(48), 1,
      sym_comment,
    STATE(120), 1,
      sym_term,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(8), 2,
      sym_literal,
      sym_field,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
  [2195] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(79), 1,
      sym_keyword_and,
    ACTIONS(83), 1,
      sym_keyword_or,
    STATE(49), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2242] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(50), 1,
      sym_comment,
    STATE(89), 1,
      sym_term,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2292] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(51), 1,
      sym_comment,
    STATE(74), 1,
      sym_term,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2342] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(52), 1,
      sym_comment,
    STATE(78), 1,
      sym_term,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2392] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      sym_keyword_filter,
    ACTIONS(174), 1,
      sym_keyword_derive,
    ACTIONS(177), 1,
      sym_keyword_aggregate,
    ACTIONS(180), 1,
      sym_keyword_sort,
    ACTIONS(183), 1,
      sym_keyword_take,
    ACTIONS(186), 1,
      sym_keyword_join,
    ACTIONS(189), 1,
      sym_keyword_select,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(53), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(96), 7,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_joins,
      sym_select,
  [2434] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(44), 1,
      sym_binary_expression,
    STATE(54), 1,
      sym_comment,
    STATE(61), 1,
      sym__expression,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(8), 2,
      sym_literal,
      sym_field,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
  [2486] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(44), 1,
      sym_binary_expression,
    STATE(55), 1,
      sym_comment,
    STATE(61), 1,
      sym__expression,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(8), 2,
      sym_literal,
      sym_field,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
  [2538] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(56), 1,
      sym_comment,
    STATE(119), 1,
      sym_term,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2588] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      sym_keyword_filter,
    ACTIONS(145), 1,
      sym_keyword_derive,
    ACTIONS(147), 1,
      sym_keyword_aggregate,
    ACTIONS(149), 1,
      sym_keyword_sort,
    ACTIONS(151), 1,
      sym_keyword_take,
    ACTIONS(153), 1,
      sym_keyword_join,
    ACTIONS(155), 1,
      sym_keyword_select,
    STATE(53), 1,
      aux_sym_transforms_repeat1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(96), 7,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_joins,
      sym_select,
  [2632] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(79), 1,
      sym_keyword_and,
    ACTIONS(83), 1,
      sym_keyword_or,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2678] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(39), 1,
      sym_binary_expression,
    STATE(59), 1,
      sym_comment,
    STATE(120), 1,
      sym_term,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(8), 2,
      sym_literal,
      sym_field,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
  [2730] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(24), 1,
      sym__expression,
    STATE(60), 1,
      sym_comment,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2777] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(79), 1,
      sym_keyword_and,
    ACTIONS(83), 1,
      sym_keyword_or,
    STATE(61), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(61), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(69), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2820] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(58), 1,
      sym__expression,
    STATE(62), 1,
      sym_comment,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2867] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(14), 1,
      sym__expression,
    STATE(63), 1,
      sym_comment,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2914] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(15), 1,
      sym__expression,
    STATE(64), 1,
      sym_comment,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2961] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(65), 1,
      sym_comment,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3008] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(20), 1,
      sym__expression,
    STATE(66), 1,
      sym_comment,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3055] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(21), 1,
      sym__expression,
    STATE(67), 1,
      sym_comment,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3102] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(200), 1,
      sym__number,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(30), 1,
      sym_binary_expression,
    STATE(61), 1,
      sym__expression,
    STATE(68), 1,
      sym_comment,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(8), 2,
      sym_literal,
      sym_field,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
  [3151] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(22), 1,
      sym__expression,
    STATE(69), 1,
      sym_comment,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3198] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(9), 1,
      sym__expression,
    STATE(70), 1,
      sym_comment,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3245] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(49), 1,
      sym__expression,
    STATE(71), 1,
      sym_comment,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3292] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(18), 1,
      sym__expression,
    STATE(72), 1,
      sym_comment,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(8), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3339] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      sym__number,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(44), 1,
      sym_binary_expression,
    STATE(61), 1,
      sym__expression,
    STATE(73), 1,
      sym_comment,
    STATE(128), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(8), 2,
      sym_literal,
      sym_field,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
  [3388] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    STATE(74), 1,
      sym_comment,
    STATE(85), 1,
      sym_conditions,
    ACTIONS(202), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3412] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      anon_sym_DOT,
    STATE(75), 1,
      sym_comment,
    ACTIONS(37), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3433] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(76), 1,
      sym_comment,
    ACTIONS(208), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3451] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(77), 1,
      sym_comment,
    ACTIONS(210), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3469] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(78), 1,
      sym_comment,
    ACTIONS(212), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3487] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(79), 1,
      sym_comment,
    ACTIONS(214), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3505] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(80), 1,
      sym_comment,
    ACTIONS(216), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3523] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(81), 1,
      sym_comment,
    ACTIONS(218), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3541] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(82), 1,
      sym_comment,
    ACTIONS(220), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3559] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(83), 1,
      sym_comment,
    ACTIONS(222), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3577] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(84), 1,
      sym_comment,
    ACTIONS(224), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3595] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(85), 1,
      sym_comment,
    ACTIONS(226), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3613] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(86), 1,
      sym_comment,
    ACTIONS(228), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3631] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym_comment,
    ACTIONS(230), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3649] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym_comment,
    ACTIONS(232), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3667] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(89), 1,
      sym_comment,
    ACTIONS(234), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3685] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym_comment,
    ACTIONS(236), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3703] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym_comment,
    ACTIONS(238), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3721] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(92), 1,
      sym_comment,
    ACTIONS(240), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3739] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(242), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3757] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(94), 1,
      sym_comment,
    ACTIONS(244), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3775] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(95), 1,
      sym_comment,
    ACTIONS(246), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3793] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(96), 1,
      sym_comment,
    ACTIONS(248), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3811] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(97), 1,
      sym_comment,
    ACTIONS(250), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3829] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym_comment,
    ACTIONS(252), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3847] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(99), 1,
      sym_comment,
    ACTIONS(254), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3865] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym_comment,
    ACTIONS(256), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3883] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      sym_identifier,
    STATE(92), 1,
      sym_table_reference,
    STATE(97), 1,
      sym_field,
    STATE(101), 1,
      sym_comment,
    STATE(125), 1,
      sym__double_quote_string,
    STATE(128), 1,
      sym__alias_identifier,
  [3911] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 1,
      sym_keyword_from,
    STATE(43), 1,
      sym_from,
    STATE(117), 1,
      sym_pipeline,
    STATE(102), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [3931] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_from,
    STATE(102), 1,
      aux_sym_program_repeat1,
    STATE(103), 1,
      sym_comment,
    STATE(117), 1,
      sym_pipeline,
  [3953] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(104), 1,
      sym_comment,
    ACTIONS(271), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [3966] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_table_reference_repeat1,
  [3982] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      sym_comment,
    STATE(114), 1,
      aux_sym_table_reference_repeat1,
  [3998] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(107), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [4012] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_conditions_repeat1,
    STATE(108), 1,
      sym_comment,
  [4028] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_derives_repeat1,
  [4044] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_derives_repeat1,
  [4060] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    STATE(111), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [4074] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_aggregate_repeat1,
  [4090] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym_aggregate_repeat1,
  [4106] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(114), 2,
      sym_comment,
      aux_sym_table_reference_repeat1,
  [4120] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    STATE(115), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [4134] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4145] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(117), 1,
      sym_comment,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [4156] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(118), 1,
      sym_comment,
    ACTIONS(307), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [4167] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(119), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4178] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(120), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4189] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      sym__number,
    ACTIONS(311), 1,
      anon_sym_DOT,
    STATE(121), 1,
      sym_comment,
  [4202] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    STATE(122), 1,
      sym_comment,
  [4212] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym__number,
    STATE(123), 1,
      sym_comment,
  [4222] = 3,
    ACTIONS(315), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(317), 1,
      anon_sym_POUND,
    STATE(124), 1,
      sym_comment,
  [4232] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      anon_sym_DOT,
    STATE(125), 1,
      sym_comment,
  [4242] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym_comment,
  [4252] = 3,
    ACTIONS(317), 1,
      anon_sym_POUND,
    ACTIONS(321), 1,
      aux_sym__literal_string_token1,
    STATE(127), 1,
      sym_comment,
  [4262] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_DOT,
    STATE(128), 1,
      sym_comment,
  [4272] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      sym_comment,
  [4282] = 3,
    ACTIONS(317), 1,
      anon_sym_POUND,
    ACTIONS(325), 1,
      aux_sym__double_quote_string_token1,
    STATE(130), 1,
      sym_comment,
  [4292] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      sym_identifier,
    STATE(131), 1,
      sym_comment,
  [4302] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      sym_comment,
  [4312] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      sym_keyword_side,
    STATE(133), 1,
      sym_comment,
  [4322] = 3,
    ACTIONS(317), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      aux_sym_comment_token1,
    STATE(134), 1,
      sym_comment,
  [4332] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(333), 1,
      anon_sym_COLON,
    STATE(135), 1,
      sym_comment,
  [4342] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      anon_sym_DOT,
    STATE(136), 1,
      sym_comment,
  [4352] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    STATE(137), 1,
      sym_comment,
  [4362] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      sym_comment,
  [4372] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      sym__number,
    STATE(139), 1,
      sym_comment,
  [4382] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      sym_comment,
  [4392] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_comment,
  [4402] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(142), 1,
      sym_comment,
  [4412] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_comment,
  [4422] = 1,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 213,
  [SMALL_STATE(8)] = 256,
  [SMALL_STATE(9)] = 296,
  [SMALL_STATE(10)] = 336,
  [SMALL_STATE(11)] = 376,
  [SMALL_STATE(12)] = 416,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 496,
  [SMALL_STATE(15)] = 546,
  [SMALL_STATE(16)] = 598,
  [SMALL_STATE(17)] = 644,
  [SMALL_STATE(18)] = 684,
  [SMALL_STATE(19)] = 738,
  [SMALL_STATE(20)] = 780,
  [SMALL_STATE(21)] = 830,
  [SMALL_STATE(22)] = 874,
  [SMALL_STATE(23)] = 916,
  [SMALL_STATE(24)] = 956,
  [SMALL_STATE(25)] = 1012,
  [SMALL_STATE(26)] = 1069,
  [SMALL_STATE(27)] = 1137,
  [SMALL_STATE(28)] = 1178,
  [SMALL_STATE(29)] = 1243,
  [SMALL_STATE(30)] = 1308,
  [SMALL_STATE(31)] = 1346,
  [SMALL_STATE(32)] = 1400,
  [SMALL_STATE(33)] = 1462,
  [SMALL_STATE(34)] = 1498,
  [SMALL_STATE(35)] = 1556,
  [SMALL_STATE(36)] = 1588,
  [SMALL_STATE(37)] = 1644,
  [SMALL_STATE(38)] = 1680,
  [SMALL_STATE(39)] = 1735,
  [SMALL_STATE(40)] = 1764,
  [SMALL_STATE(41)] = 1819,
  [SMALL_STATE(42)] = 1850,
  [SMALL_STATE(43)] = 1903,
  [SMALL_STATE(44)] = 1950,
  [SMALL_STATE(45)] = 1981,
  [SMALL_STATE(46)] = 2034,
  [SMALL_STATE(47)] = 2087,
  [SMALL_STATE(48)] = 2140,
  [SMALL_STATE(49)] = 2195,
  [SMALL_STATE(50)] = 2242,
  [SMALL_STATE(51)] = 2292,
  [SMALL_STATE(52)] = 2342,
  [SMALL_STATE(53)] = 2392,
  [SMALL_STATE(54)] = 2434,
  [SMALL_STATE(55)] = 2486,
  [SMALL_STATE(56)] = 2538,
  [SMALL_STATE(57)] = 2588,
  [SMALL_STATE(58)] = 2632,
  [SMALL_STATE(59)] = 2678,
  [SMALL_STATE(60)] = 2730,
  [SMALL_STATE(61)] = 2777,
  [SMALL_STATE(62)] = 2820,
  [SMALL_STATE(63)] = 2867,
  [SMALL_STATE(64)] = 2914,
  [SMALL_STATE(65)] = 2961,
  [SMALL_STATE(66)] = 3008,
  [SMALL_STATE(67)] = 3055,
  [SMALL_STATE(68)] = 3102,
  [SMALL_STATE(69)] = 3151,
  [SMALL_STATE(70)] = 3198,
  [SMALL_STATE(71)] = 3245,
  [SMALL_STATE(72)] = 3292,
  [SMALL_STATE(73)] = 3339,
  [SMALL_STATE(74)] = 3388,
  [SMALL_STATE(75)] = 3412,
  [SMALL_STATE(76)] = 3433,
  [SMALL_STATE(77)] = 3451,
  [SMALL_STATE(78)] = 3469,
  [SMALL_STATE(79)] = 3487,
  [SMALL_STATE(80)] = 3505,
  [SMALL_STATE(81)] = 3523,
  [SMALL_STATE(82)] = 3541,
  [SMALL_STATE(83)] = 3559,
  [SMALL_STATE(84)] = 3577,
  [SMALL_STATE(85)] = 3595,
  [SMALL_STATE(86)] = 3613,
  [SMALL_STATE(87)] = 3631,
  [SMALL_STATE(88)] = 3649,
  [SMALL_STATE(89)] = 3667,
  [SMALL_STATE(90)] = 3685,
  [SMALL_STATE(91)] = 3703,
  [SMALL_STATE(92)] = 3721,
  [SMALL_STATE(93)] = 3739,
  [SMALL_STATE(94)] = 3757,
  [SMALL_STATE(95)] = 3775,
  [SMALL_STATE(96)] = 3793,
  [SMALL_STATE(97)] = 3811,
  [SMALL_STATE(98)] = 3829,
  [SMALL_STATE(99)] = 3847,
  [SMALL_STATE(100)] = 3865,
  [SMALL_STATE(101)] = 3883,
  [SMALL_STATE(102)] = 3911,
  [SMALL_STATE(103)] = 3931,
  [SMALL_STATE(104)] = 3953,
  [SMALL_STATE(105)] = 3966,
  [SMALL_STATE(106)] = 3982,
  [SMALL_STATE(107)] = 3998,
  [SMALL_STATE(108)] = 4012,
  [SMALL_STATE(109)] = 4028,
  [SMALL_STATE(110)] = 4044,
  [SMALL_STATE(111)] = 4060,
  [SMALL_STATE(112)] = 4074,
  [SMALL_STATE(113)] = 4090,
  [SMALL_STATE(114)] = 4106,
  [SMALL_STATE(115)] = 4120,
  [SMALL_STATE(116)] = 4134,
  [SMALL_STATE(117)] = 4145,
  [SMALL_STATE(118)] = 4156,
  [SMALL_STATE(119)] = 4167,
  [SMALL_STATE(120)] = 4178,
  [SMALL_STATE(121)] = 4189,
  [SMALL_STATE(122)] = 4202,
  [SMALL_STATE(123)] = 4212,
  [SMALL_STATE(124)] = 4222,
  [SMALL_STATE(125)] = 4232,
  [SMALL_STATE(126)] = 4242,
  [SMALL_STATE(127)] = 4252,
  [SMALL_STATE(128)] = 4262,
  [SMALL_STATE(129)] = 4272,
  [SMALL_STATE(130)] = 4282,
  [SMALL_STATE(131)] = 4292,
  [SMALL_STATE(132)] = 4302,
  [SMALL_STATE(133)] = 4312,
  [SMALL_STATE(134)] = 4322,
  [SMALL_STATE(135)] = 4332,
  [SMALL_STATE(136)] = 4342,
  [SMALL_STATE(137)] = 4352,
  [SMALL_STATE(138)] = 4362,
  [SMALL_STATE(139)] = 4372,
  [SMALL_STATE(140)] = 4382,
  [SMALL_STATE(141)] = 4392,
  [SMALL_STATE(142)] = 4402,
  [SMALL_STATE(143)] = 4412,
  [SMALL_STATE(144)] = 4422,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 8),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 8),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(42),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(47),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(141),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(50),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(68),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(133),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(101),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 6),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 9),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(73),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(59),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_reference_repeat1, 2), SHIFT_REPEAT(56),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_reference_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(32),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [313] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_prql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
