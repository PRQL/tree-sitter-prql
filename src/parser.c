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
#define STATE_COUNT 174
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 9
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
  sym_group = 69,
  sym_joins = 70,
  sym_conditions = 71,
  sym_select = 72,
  sym_table_reference = 73,
  sym_term = 74,
  sym__expression = 75,
  sym_literal = 76,
  sym__double_quote_string = 77,
  sym__literal_string = 78,
  sym__decimal_number = 79,
  sym_field = 80,
  sym__alias_identifier = 81,
  sym_binary_expression = 82,
  sym_comment = 83,
  aux_sym_program_repeat1 = 84,
  aux_sym_transforms_repeat1 = 85,
  aux_sym_derives_repeat1 = 86,
  aux_sym_aggregate_repeat1 = 87,
  aux_sym_group_repeat1 = 88,
  aux_sym_group_repeat2 = 89,
  aux_sym_conditions_repeat1 = 90,
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
  [sym_group] = "group",
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
  [aux_sym_group_repeat1] = "group_repeat1",
  [aux_sym_group_repeat2] = "group_repeat2",
  [aux_sym_conditions_repeat1] = "conditions_repeat1",
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
  [sym_group] = sym_group,
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
  [aux_sym_group_repeat1] = aux_sym_group_repeat1,
  [aux_sym_group_repeat2] = aux_sym_group_repeat2,
  [aux_sym_conditions_repeat1] = aux_sym_conditions_repeat1,
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
  [sym_group] = {
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
  [aux_sym_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditions_repeat1] = {
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
      if (lookahead == 'G') ADVANCE(80);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'J') ADVANCE(69);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'g') ADVANCE(173);
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
      if (lookahead == 'G') ADVANCE(80);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'J') ADVANCE(69);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'g') ADVANCE(173);
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
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 195},
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
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
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
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 195},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 344},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 251},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 247},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 247},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 0},
  [173] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(170),
    [sym_pipeline] = STATE(141),
    [sym_from] = STATE(33),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(122),
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
    ACTIONS(9), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [45] = 5,
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
    ACTIONS(15), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [90] = 5,
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
    ACTIONS(21), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [135] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(5), 1,
      sym_comment,
    ACTIONS(29), 4,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(27), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [178] = 5,
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
    ACTIONS(31), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [223] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(21), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [268] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_DOT,
    STATE(8), 1,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(37), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [313] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 24,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [359] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(35), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [401] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(37), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [443] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_EQ,
    STATE(12), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(43), 19,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [495] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [539] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_QMARK_QMARK,
    STATE(14), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(43), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [593] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [635] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(61), 1,
      sym_keyword_and,
    ACTIONS(63), 1,
      anon_sym_DOT_DOT,
    STATE(16), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(43), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_or,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [693] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(61), 1,
      sym_keyword_and,
    ACTIONS(63), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      sym_keyword_or,
    STATE(17), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(65), 15,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [753] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [795] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [837] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(63), 1,
      anon_sym_DOT_DOT,
    STATE(20), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(43), 17,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [893] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_EQ,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    STATE(21), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(43), 19,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [945] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(19), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(15), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [987] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(79), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [1029] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(83), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(81), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
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
  [1071] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 23,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [1119] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 11,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
    ACTIONS(37), 13,
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
  [1162] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(27), 1,
      sym_comment,
    STATE(41), 1,
      sym_binary_expression,
    STATE(67), 1,
      sym__expression,
    STATE(132), 1,
      sym_aggregate_operation,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
    ACTIONS(89), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1230] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 11,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
    ACTIONS(69), 13,
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
  [1270] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(61), 1,
      sym_keyword_and,
    ACTIONS(63), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      sym_keyword_or,
    STATE(29), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(109), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [1325] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(30), 1,
      sym_comment,
    STATE(49), 1,
      sym_binary_expression,
    STATE(67), 1,
      sym__expression,
    STATE(143), 1,
      sym_aggregate_operation,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
    ACTIONS(89), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1390] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(31), 1,
      sym_comment,
    STATE(49), 1,
      sym_binary_expression,
    STATE(67), 1,
      sym__expression,
    STATE(143), 1,
      sym_aggregate_operation,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
    ACTIONS(89), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1455] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(32), 1,
      sym_comment,
    STATE(49), 1,
      sym_binary_expression,
    STATE(67), 1,
      sym__expression,
    STATE(143), 1,
      sym_aggregate_operation,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
    ACTIONS(89), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1517] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      sym_keyword_filter,
    ACTIONS(119), 1,
      sym_keyword_derive,
    ACTIONS(121), 1,
      sym_keyword_group,
    ACTIONS(123), 1,
      sym_keyword_aggregate,
    ACTIONS(125), 1,
      sym_keyword_sort,
    ACTIONS(127), 1,
      sym_keyword_take,
    ACTIONS(129), 1,
      sym_keyword_join,
    ACTIONS(131), 1,
      sym_keyword_select,
    STATE(33), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_transforms_repeat1,
    STATE(140), 1,
      sym_transforms,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(88), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [1568] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_comment,
    STATE(131), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 13,
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
  [1604] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      sym_keyword_filter,
    ACTIONS(142), 1,
      sym_keyword_derive,
    ACTIONS(145), 1,
      sym_keyword_group,
    ACTIONS(148), 1,
      sym_keyword_aggregate,
    ACTIONS(151), 1,
      sym_keyword_sort,
    ACTIONS(154), 1,
      sym_keyword_take,
    ACTIONS(157), 1,
      sym_keyword_join,
    ACTIONS(160), 1,
      sym_keyword_select,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(35), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(88), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [1650] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      sym_keyword_filter,
    ACTIONS(119), 1,
      sym_keyword_derive,
    ACTIONS(121), 1,
      sym_keyword_group,
    ACTIONS(123), 1,
      sym_keyword_aggregate,
    ACTIONS(125), 1,
      sym_keyword_sort,
    ACTIONS(127), 1,
      sym_keyword_take,
    ACTIONS(129), 1,
      sym_keyword_join,
    ACTIONS(131), 1,
      sym_keyword_select,
    STATE(35), 1,
      aux_sym_transforms_repeat1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(88), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [1698] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(37), 1,
      sym_comment,
    STATE(128), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1754] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym_derives_repeat1,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 15,
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
  [1786] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(38), 1,
      sym_binary_expression,
    STATE(39), 1,
      sym_comment,
    STATE(129), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [1844] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(40), 1,
      sym_comment,
    STATE(133), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1900] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 13,
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
  [1936] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(42), 1,
      sym_comment,
    STATE(142), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1989] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(43), 1,
      sym_comment,
    STATE(142), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2042] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(44), 1,
      sym_comment,
    STATE(48), 1,
      sym_binary_expression,
    STATE(144), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [2097] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(45), 1,
      sym_comment,
    STATE(142), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2150] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(46), 1,
      sym_comment,
    STATE(48), 1,
      sym_binary_expression,
    STATE(144), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [2205] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 13,
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
  [2236] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 15,
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
  [2265] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 13,
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
  [2296] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(34), 1,
      sym_binary_expression,
    STATE(50), 1,
      sym_comment,
    STATE(67), 1,
      sym__expression,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [2351] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(51), 1,
      sym_comment,
    STATE(142), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2404] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(61), 1,
      sym_keyword_and,
    ACTIONS(63), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      sym_keyword_or,
    STATE(52), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2451] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(29), 1,
      sym__expression,
    STATE(53), 1,
      sym_comment,
    STATE(99), 1,
      sym__boolean_expression,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2504] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(54), 1,
      sym_comment,
    STATE(106), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2557] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(55), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    STATE(167), 1,
      sym_term,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2610] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(48), 1,
      sym_binary_expression,
    STATE(56), 1,
      sym_comment,
    STATE(144), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [2662] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(57), 1,
      sym_comment,
    STATE(142), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2712] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(47), 1,
      sym_binary_expression,
    STATE(58), 1,
      sym_comment,
    STATE(67), 1,
      sym__expression,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [2764] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(59), 1,
      sym_comment,
    STATE(78), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2814] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(60), 1,
      sym_comment,
    STATE(80), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2864] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(47), 1,
      sym_binary_expression,
    STATE(61), 1,
      sym_comment,
    STATE(67), 1,
      sym__expression,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [2916] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(7), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(62), 1,
      sym_comment,
    STATE(108), 1,
      sym_term,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2966] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(61), 1,
      sym_keyword_and,
    ACTIONS(63), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      sym_keyword_or,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3012] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(64), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3059] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(215), 1,
      sym__number,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(28), 1,
      sym_binary_expression,
    STATE(65), 1,
      sym_comment,
    STATE(67), 1,
      sym__expression,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [3108] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(21), 1,
      sym__expression,
    STATE(66), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3155] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(61), 1,
      sym_keyword_and,
    ACTIONS(63), 1,
      anon_sym_DOT_DOT,
    ACTIONS(67), 1,
      sym_keyword_or,
    STATE(67), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3198] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(20), 1,
      sym__expression,
    STATE(68), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3245] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(9), 1,
      sym__expression,
    STATE(69), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3292] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(15), 1,
      sym__expression,
    STATE(70), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3339] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(13), 1,
      sym__expression,
    STATE(71), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3386] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(63), 1,
      sym__expression,
    STATE(72), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3433] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(12), 1,
      sym__expression,
    STATE(73), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3480] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(47), 1,
      sym_binary_expression,
    STATE(67), 1,
      sym__expression,
    STATE(74), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [3529] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(14), 1,
      sym__expression,
    STATE(75), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3576] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(76), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3623] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_SQUOTE,
    ACTIONS(99), 1,
      sym__number,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(52), 1,
      sym__expression,
    STATE(77), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    ACTIONS(87), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3670] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_comment,
    STATE(105), 1,
      sym_conditions,
    ACTIONS(217), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3695] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(79), 1,
      sym_comment,
    ACTIONS(221), 11,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3715] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(80), 1,
      sym_comment,
    ACTIONS(223), 11,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3735] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(81), 1,
      sym_comment,
    ACTIONS(225), 11,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3755] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(82), 1,
      sym_comment,
    ACTIONS(227), 11,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3775] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(229), 1,
      anon_sym_DOT,
    STATE(83), 1,
      sym_comment,
    ACTIONS(9), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3797] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(84), 1,
      sym_comment,
    ACTIONS(231), 11,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [3817] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(85), 1,
      sym_comment,
    ACTIONS(233), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3836] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(86), 1,
      sym_comment,
    ACTIONS(235), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3855] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym_comment,
    ACTIONS(237), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3874] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym_comment,
    ACTIONS(239), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3893] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(89), 1,
      sym_comment,
    ACTIONS(241), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3912] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym_comment,
    ACTIONS(243), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3931] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym_comment,
    ACTIONS(245), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3950] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(92), 1,
      sym_comment,
    ACTIONS(247), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3969] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(249), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3988] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(94), 1,
      sym_comment,
    ACTIONS(251), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4007] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(95), 1,
      sym_comment,
    ACTIONS(253), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4026] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(96), 1,
      sym_comment,
    ACTIONS(255), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4045] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(97), 1,
      sym_comment,
    ACTIONS(257), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4064] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym_comment,
    ACTIONS(259), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4083] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(99), 1,
      sym_comment,
    ACTIONS(261), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4102] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym_comment,
    ACTIONS(263), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4121] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(101), 1,
      sym_comment,
    ACTIONS(265), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4140] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(102), 1,
      sym_comment,
    ACTIONS(267), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4159] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym_comment,
    ACTIONS(269), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4178] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(104), 1,
      sym_comment,
    ACTIONS(271), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4197] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(105), 1,
      sym_comment,
    ACTIONS(273), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4216] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(106), 1,
      sym_comment,
    ACTIONS(275), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4235] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym_comment,
    ACTIONS(277), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4254] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym_comment,
    ACTIONS(279), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4273] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(109), 1,
      sym_comment,
    ACTIONS(281), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [4292] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_aggregate,
    ACTIONS(125), 1,
      sym_keyword_sort,
    ACTIONS(127), 1,
      sym_keyword_take,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      sym_comment,
    STATE(114), 1,
      aux_sym_group_repeat2,
    STATE(124), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4319] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_aggregate,
    ACTIONS(125), 1,
      sym_keyword_sort,
    ACTIONS(127), 1,
      sym_keyword_take,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_comment,
    STATE(114), 1,
      aux_sym_group_repeat2,
    STATE(124), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4346] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_aggregate,
    ACTIONS(125), 1,
      sym_keyword_sort,
    ACTIONS(127), 1,
      sym_keyword_take,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_comment,
    STATE(114), 1,
      aux_sym_group_repeat2,
    STATE(124), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4373] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_aggregate,
    ACTIONS(125), 1,
      sym_keyword_sort,
    ACTIONS(127), 1,
      sym_keyword_take,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_comment,
    STATE(114), 1,
      aux_sym_group_repeat2,
    STATE(124), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4400] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      sym_keyword_aggregate,
    ACTIONS(294), 1,
      sym_keyword_sort,
    ACTIONS(297), 1,
      sym_keyword_take,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(114), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(124), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4425] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_aggregate,
    ACTIONS(125), 1,
      sym_keyword_sort,
    ACTIONS(127), 1,
      sym_keyword_take,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_group_repeat2,
    STATE(115), 1,
      sym_comment,
    STATE(124), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4452] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_aggregate,
    ACTIONS(125), 1,
      sym_keyword_sort,
    ACTIONS(127), 1,
      sym_keyword_take,
    STATE(112), 1,
      aux_sym_group_repeat2,
    STATE(116), 1,
      sym_comment,
    STATE(124), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4476] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_aggregate,
    ACTIONS(125), 1,
      sym_keyword_sort,
    ACTIONS(127), 1,
      sym_keyword_take,
    STATE(115), 1,
      aux_sym_group_repeat2,
    STATE(117), 1,
      sym_comment,
    STATE(124), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4500] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_aggregate,
    ACTIONS(125), 1,
      sym_keyword_sort,
    ACTIONS(127), 1,
      sym_keyword_take,
    STATE(111), 1,
      aux_sym_group_repeat2,
    STATE(118), 1,
      sym_comment,
    STATE(124), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4524] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_aggregate,
    ACTIONS(125), 1,
      sym_keyword_sort,
    ACTIONS(127), 1,
      sym_keyword_take,
    STATE(113), 1,
      aux_sym_group_repeat2,
    STATE(119), 1,
      sym_comment,
    STATE(124), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4548] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(100), 1,
      sym_field,
    STATE(107), 1,
      sym_table_reference,
    STATE(120), 1,
      sym_comment,
    STATE(148), 1,
      sym__alias_identifier,
    STATE(153), 1,
      sym__double_quote_string,
  [4576] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_aggregate,
    ACTIONS(125), 1,
      sym_keyword_sort,
    ACTIONS(127), 1,
      sym_keyword_take,
    STATE(110), 1,
      aux_sym_group_repeat2,
    STATE(121), 1,
      sym_comment,
    STATE(124), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4600] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_from,
    STATE(122), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym_program_repeat1,
    STATE(141), 1,
      sym_pipeline,
  [4622] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      sym_keyword_from,
    STATE(33), 1,
      sym_from,
    STATE(141), 1,
      sym_pipeline,
    STATE(123), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [4642] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(124), 1,
      sym_comment,
    ACTIONS(317), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      anon_sym_RPAREN,
  [4655] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym_comment,
    ACTIONS(319), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [4668] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      sym_comment,
    STATE(136), 1,
      aux_sym_aggregate_repeat1,
  [4684] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    STATE(127), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [4698] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym_group_repeat1,
  [4714] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym_derives_repeat1,
  [4730] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(130), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [4744] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_conditions_repeat1,
    STATE(131), 1,
      sym_comment,
  [4760] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      aux_sym_aggregate_repeat1,
    STATE(132), 1,
      sym_comment,
  [4776] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      sym_comment,
    STATE(138), 1,
      aux_sym_group_repeat1,
  [4792] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_comment,
    STATE(137), 1,
      aux_sym_derives_repeat1,
  [4808] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_group_repeat1,
    STATE(135), 1,
      sym_comment,
  [4824] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    STATE(136), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [4838] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    STATE(137), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [4852] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_group_repeat1,
    STATE(138), 1,
      sym_comment,
  [4868] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(359), 1,
      sym__number,
    ACTIONS(361), 1,
      anon_sym_DOT,
    STATE(139), 1,
      sym_comment,
  [4881] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym_comment,
    ACTIONS(363), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [4892] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(365), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [4903] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(142), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4914] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(143), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4925] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4936] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      sym_comment,
  [4946] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOT,
    STATE(146), 1,
      sym_comment,
  [4956] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_comment,
  [4966] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(371), 1,
      anon_sym_DOT,
    STATE(148), 1,
      sym_comment,
  [4976] = 3,
    ACTIONS(373), 1,
      anon_sym_POUND,
    ACTIONS(375), 1,
      aux_sym_comment_token1,
    STATE(149), 1,
      sym_comment,
  [4986] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(377), 1,
      sym__number,
    STATE(150), 1,
      sym_comment,
  [4996] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_comment,
  [5006] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_comment,
  [5016] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(383), 1,
      anon_sym_DOT,
    STATE(153), 1,
      sym_comment,
  [5026] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym__number,
    STATE(154), 1,
      sym_comment,
  [5036] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      sym_comment,
  [5046] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(385), 1,
      sym_keyword_side,
    STATE(156), 1,
      sym_comment,
  [5056] = 3,
    ACTIONS(373), 1,
      anon_sym_POUND,
    ACTIONS(387), 1,
      aux_sym__literal_string_token1,
    STATE(157), 1,
      sym_comment,
  [5066] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      sym_identifier,
    STATE(158), 1,
      sym_comment,
  [5076] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      sym_comment,
  [5086] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      anon_sym_COLON,
    STATE(160), 1,
      sym_comment,
  [5096] = 3,
    ACTIONS(373), 1,
      anon_sym_POUND,
    ACTIONS(393), 1,
      aux_sym__double_quote_string_token1,
    STATE(161), 1,
      sym_comment,
  [5106] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      sym_comment,
  [5116] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      sym_comment,
  [5126] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_comment,
  [5136] = 3,
    ACTIONS(373), 1,
      anon_sym_POUND,
    ACTIONS(397), 1,
      aux_sym__double_quote_string_token1,
    STATE(165), 1,
      sym_comment,
  [5146] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    STATE(166), 1,
      sym_comment,
  [5156] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_comment,
  [5166] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_comment,
  [5176] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    STATE(169), 1,
      sym_comment,
  [5186] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    STATE(170), 1,
      sym_comment,
  [5196] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(171), 1,
      sym_comment,
  [5206] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym_comment,
  [5216] = 1,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 268,
  [SMALL_STATE(9)] = 313,
  [SMALL_STATE(10)] = 359,
  [SMALL_STATE(11)] = 401,
  [SMALL_STATE(12)] = 443,
  [SMALL_STATE(13)] = 495,
  [SMALL_STATE(14)] = 539,
  [SMALL_STATE(15)] = 593,
  [SMALL_STATE(16)] = 635,
  [SMALL_STATE(17)] = 693,
  [SMALL_STATE(18)] = 753,
  [SMALL_STATE(19)] = 795,
  [SMALL_STATE(20)] = 837,
  [SMALL_STATE(21)] = 893,
  [SMALL_STATE(22)] = 945,
  [SMALL_STATE(23)] = 987,
  [SMALL_STATE(24)] = 1029,
  [SMALL_STATE(25)] = 1071,
  [SMALL_STATE(26)] = 1119,
  [SMALL_STATE(27)] = 1162,
  [SMALL_STATE(28)] = 1230,
  [SMALL_STATE(29)] = 1270,
  [SMALL_STATE(30)] = 1325,
  [SMALL_STATE(31)] = 1390,
  [SMALL_STATE(32)] = 1455,
  [SMALL_STATE(33)] = 1517,
  [SMALL_STATE(34)] = 1568,
  [SMALL_STATE(35)] = 1604,
  [SMALL_STATE(36)] = 1650,
  [SMALL_STATE(37)] = 1698,
  [SMALL_STATE(38)] = 1754,
  [SMALL_STATE(39)] = 1786,
  [SMALL_STATE(40)] = 1844,
  [SMALL_STATE(41)] = 1900,
  [SMALL_STATE(42)] = 1936,
  [SMALL_STATE(43)] = 1989,
  [SMALL_STATE(44)] = 2042,
  [SMALL_STATE(45)] = 2097,
  [SMALL_STATE(46)] = 2150,
  [SMALL_STATE(47)] = 2205,
  [SMALL_STATE(48)] = 2236,
  [SMALL_STATE(49)] = 2265,
  [SMALL_STATE(50)] = 2296,
  [SMALL_STATE(51)] = 2351,
  [SMALL_STATE(52)] = 2404,
  [SMALL_STATE(53)] = 2451,
  [SMALL_STATE(54)] = 2504,
  [SMALL_STATE(55)] = 2557,
  [SMALL_STATE(56)] = 2610,
  [SMALL_STATE(57)] = 2662,
  [SMALL_STATE(58)] = 2712,
  [SMALL_STATE(59)] = 2764,
  [SMALL_STATE(60)] = 2814,
  [SMALL_STATE(61)] = 2864,
  [SMALL_STATE(62)] = 2916,
  [SMALL_STATE(63)] = 2966,
  [SMALL_STATE(64)] = 3012,
  [SMALL_STATE(65)] = 3059,
  [SMALL_STATE(66)] = 3108,
  [SMALL_STATE(67)] = 3155,
  [SMALL_STATE(68)] = 3198,
  [SMALL_STATE(69)] = 3245,
  [SMALL_STATE(70)] = 3292,
  [SMALL_STATE(71)] = 3339,
  [SMALL_STATE(72)] = 3386,
  [SMALL_STATE(73)] = 3433,
  [SMALL_STATE(74)] = 3480,
  [SMALL_STATE(75)] = 3529,
  [SMALL_STATE(76)] = 3576,
  [SMALL_STATE(77)] = 3623,
  [SMALL_STATE(78)] = 3670,
  [SMALL_STATE(79)] = 3695,
  [SMALL_STATE(80)] = 3715,
  [SMALL_STATE(81)] = 3735,
  [SMALL_STATE(82)] = 3755,
  [SMALL_STATE(83)] = 3775,
  [SMALL_STATE(84)] = 3797,
  [SMALL_STATE(85)] = 3817,
  [SMALL_STATE(86)] = 3836,
  [SMALL_STATE(87)] = 3855,
  [SMALL_STATE(88)] = 3874,
  [SMALL_STATE(89)] = 3893,
  [SMALL_STATE(90)] = 3912,
  [SMALL_STATE(91)] = 3931,
  [SMALL_STATE(92)] = 3950,
  [SMALL_STATE(93)] = 3969,
  [SMALL_STATE(94)] = 3988,
  [SMALL_STATE(95)] = 4007,
  [SMALL_STATE(96)] = 4026,
  [SMALL_STATE(97)] = 4045,
  [SMALL_STATE(98)] = 4064,
  [SMALL_STATE(99)] = 4083,
  [SMALL_STATE(100)] = 4102,
  [SMALL_STATE(101)] = 4121,
  [SMALL_STATE(102)] = 4140,
  [SMALL_STATE(103)] = 4159,
  [SMALL_STATE(104)] = 4178,
  [SMALL_STATE(105)] = 4197,
  [SMALL_STATE(106)] = 4216,
  [SMALL_STATE(107)] = 4235,
  [SMALL_STATE(108)] = 4254,
  [SMALL_STATE(109)] = 4273,
  [SMALL_STATE(110)] = 4292,
  [SMALL_STATE(111)] = 4319,
  [SMALL_STATE(112)] = 4346,
  [SMALL_STATE(113)] = 4373,
  [SMALL_STATE(114)] = 4400,
  [SMALL_STATE(115)] = 4425,
  [SMALL_STATE(116)] = 4452,
  [SMALL_STATE(117)] = 4476,
  [SMALL_STATE(118)] = 4500,
  [SMALL_STATE(119)] = 4524,
  [SMALL_STATE(120)] = 4548,
  [SMALL_STATE(121)] = 4576,
  [SMALL_STATE(122)] = 4600,
  [SMALL_STATE(123)] = 4622,
  [SMALL_STATE(124)] = 4642,
  [SMALL_STATE(125)] = 4655,
  [SMALL_STATE(126)] = 4668,
  [SMALL_STATE(127)] = 4684,
  [SMALL_STATE(128)] = 4698,
  [SMALL_STATE(129)] = 4714,
  [SMALL_STATE(130)] = 4730,
  [SMALL_STATE(131)] = 4744,
  [SMALL_STATE(132)] = 4760,
  [SMALL_STATE(133)] = 4776,
  [SMALL_STATE(134)] = 4792,
  [SMALL_STATE(135)] = 4808,
  [SMALL_STATE(136)] = 4824,
  [SMALL_STATE(137)] = 4838,
  [SMALL_STATE(138)] = 4852,
  [SMALL_STATE(139)] = 4868,
  [SMALL_STATE(140)] = 4881,
  [SMALL_STATE(141)] = 4892,
  [SMALL_STATE(142)] = 4903,
  [SMALL_STATE(143)] = 4914,
  [SMALL_STATE(144)] = 4925,
  [SMALL_STATE(145)] = 4936,
  [SMALL_STATE(146)] = 4946,
  [SMALL_STATE(147)] = 4956,
  [SMALL_STATE(148)] = 4966,
  [SMALL_STATE(149)] = 4976,
  [SMALL_STATE(150)] = 4986,
  [SMALL_STATE(151)] = 4996,
  [SMALL_STATE(152)] = 5006,
  [SMALL_STATE(153)] = 5016,
  [SMALL_STATE(154)] = 5026,
  [SMALL_STATE(155)] = 5036,
  [SMALL_STATE(156)] = 5046,
  [SMALL_STATE(157)] = 5056,
  [SMALL_STATE(158)] = 5066,
  [SMALL_STATE(159)] = 5076,
  [SMALL_STATE(160)] = 5086,
  [SMALL_STATE(161)] = 5096,
  [SMALL_STATE(162)] = 5106,
  [SMALL_STATE(163)] = 5116,
  [SMALL_STATE(164)] = 5126,
  [SMALL_STATE(165)] = 5136,
  [SMALL_STATE(166)] = 5146,
  [SMALL_STATE(167)] = 5156,
  [SMALL_STATE(168)] = 5166,
  [SMALL_STATE(169)] = 5176,
  [SMALL_STATE(170)] = 5186,
  [SMALL_STATE(171)] = 5196,
  [SMALL_STATE(172)] = 5206,
  [SMALL_STATE(173)] = 5216,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 8),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(53),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(54),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(55),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(169),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(60),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(65),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(156),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(120),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 9),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 6),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(169),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(60),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(65),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(62),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(74),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(57),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(32),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(56),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [407] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
