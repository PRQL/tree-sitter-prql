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
#define STATE_COUNT 139
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
  sym_selects = 72,
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
  aux_sym_selects_repeat1 = 88,
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
  [sym_selects] = "selects",
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
  [aux_sym_selects_repeat1] = "selects_repeat1",
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
  [sym_selects] = sym_selects,
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
  [aux_sym_selects_repeat1] = aux_sym_selects_repeat1,
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
  [sym_selects] = {
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
  [aux_sym_selects_repeat1] = {
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
      if (eof) ADVANCE(192);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '*') ADVANCE(322);
      if (lookahead == '+') ADVANCE(321);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == ':') ADVANCE(239);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == '>') ADVANCE(328);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'C') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(7);
      if (lookahead == 'G') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(58);
      if (lookahead == 'J') ADVANCE(66);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'M') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == '[') ADVANCE(234);
      if (lookahead == ']') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'g') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'j') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '|') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(191)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == 'F') ADVANCE(252);
      if (lookahead == 'T') ADVANCE(274);
      if (lookahead == '[') ADVANCE(234);
      if (lookahead == ']') ADVANCE(236);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(188)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == 'A') ADVANCE(283);
      if (lookahead == 'C') ADVANCE(272);
      if (lookahead == 'F') ADVANCE(252);
      if (lookahead == 'M') ADVANCE(253);
      if (lookahead == 'S') ADVANCE(277);
      if (lookahead == 'T') ADVANCE(274);
      if (lookahead == ']') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(287);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == 'F') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(62);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(190)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(327);
      END_STATE();
    case 6:
      if (lookahead == '?') ADVANCE(333);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'I') ADVANCE(52);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'U') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(85);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(230);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(225);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(199);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(202);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(204);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(207);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(197);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(56);
      if (lookahead == 'W') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead == 'G') ADVANCE(219);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead == 'F') ADVANCE(80);
      END_STATE();
    case 37:
      if (lookahead == 'G') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(15);
      if (lookahead == 'V') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'G') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'G') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 'G') ADVANCE(76);
      END_STATE();
    case 41:
      if (lookahead == 'G') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'H') ADVANCE(206);
      END_STATE();
    case 43:
      if (lookahead == 'H') ADVANCE(83);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'K') ADVANCE(23);
      END_STATE();
    case 51:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(89);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(229);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(21);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 'M') ADVANCE(221);
      END_STATE();
    case 57:
      if (lookahead == 'M') ADVANCE(193);
      END_STATE();
    case 58:
      if (lookahead == 'N') ADVANCE(232);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(209);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(200);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 65:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'O') ADVANCE(47);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 69:
      if (lookahead == 'P') ADVANCE(196);
      END_STATE();
    case 70:
      if (lookahead == 'R') ADVANCE(231);
      END_STATE();
    case 71:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 72:
      if (lookahead == 'R') ADVANCE(226);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(194);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(44);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 78:
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 80:
      if (lookahead == 'T') ADVANCE(227);
      END_STATE();
    case 81:
      if (lookahead == 'T') ADVANCE(198);
      END_STATE();
    case 82:
      if (lookahead == 'T') ADVANCE(215);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(228);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(201);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(223);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 90:
      if (lookahead == 'U') ADVANCE(69);
      END_STATE();
    case 91:
      if (lookahead == 'U') ADVANCE(61);
      END_STATE();
    case 92:
      if (lookahead == 'U') ADVANCE(55);
      END_STATE();
    case 93:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 94:
      if (lookahead == 'V') ADVANCE(217);
      END_STATE();
    case 95:
      if (lookahead == 'V') ADVANCE(26);
      END_STATE();
    case 96:
      if (lookahead == 'X') ADVANCE(211);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 98:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 99:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == 'w') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(170);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(206);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(172);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 140:
      if (lookahead == 'k') ADVANCE(112);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(193);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 168:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 169:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 184:
      if (lookahead == 'v') ADVANCE(217);
      END_STATE();
    case 185:
      if (lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 186:
      if (lookahead == 'x') ADVANCE(211);
      END_STATE();
    case 187:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == 'A') ADVANCE(283);
      if (lookahead == 'C') ADVANCE(272);
      if (lookahead == 'F') ADVANCE(252);
      if (lookahead == 'M') ADVANCE(253);
      if (lookahead == 'S') ADVANCE(277);
      if (lookahead == 'T') ADVANCE(274);
      if (lookahead == ']') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(287);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead == 't') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 188:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(188)
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == 'F') ADVANCE(252);
      if (lookahead == 'T') ADVANCE(274);
      if (lookahead == '[') ADVANCE(234);
      if (lookahead == ']') ADVANCE(236);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 't') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 189:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == 'F') ADVANCE(92);
      if (lookahead == 'I') ADVANCE(62);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 190:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(190)
      if (lookahead == '#') ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 191:
      if (eof) ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(191)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '*') ADVANCE(322);
      if (lookahead == '+') ADVANCE(321);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == ':') ADVANCE(239);
      if (lookahead == '<') ADVANCE(330);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == '>') ADVANCE(328);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == 'C') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(7);
      if (lookahead == 'G') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(58);
      if (lookahead == 'J') ADVANCE(66);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'M') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == '[') ADVANCE(234);
      if (lookahead == ']') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'g') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'j') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '|') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(332);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(285);
      if (lookahead == 'I') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(273);
      if (lookahead == 'G') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(257);
      if (lookahead == 'U') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'i') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'g') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(243);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(247);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
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
  [75] = {.lex_state = 0},
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
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 241},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 245},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 338},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(137),
    [sym_pipeline] = STATE(114),
    [sym_from] = STATE(42),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(100),
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
      sym__number,
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
      anon_sym_DOT,
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
  [376] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      sym_keyword_and,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_DOT_DOT,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    STATE(11), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(51), 14,
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
  [432] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
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
  [472] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_DOT_DOT,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    STATE(13), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(51), 15,
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
  [526] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
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
  [566] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
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
  [606] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    STATE(16), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 21,
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
  [652] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    STATE(17), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(51), 17,
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
  [702] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 26,
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
  [742] = 5,
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
  [784] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    STATE(20), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(51), 16,
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
  [836] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 24,
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
  [878] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(79), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 26,
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
  [918] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 22,
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
  [962] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_EQ,
    STATE(24), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(51), 17,
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
  [1012] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      sym_keyword_and,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_DOT_DOT,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(83), 1,
      sym_keyword_or,
    STATE(25), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 4,
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
    STATE(110), 1,
      sym_aggregate_operation,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
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
    ACTIONS(33), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym_comment,
    ACTIONS(35), 3,
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
    ACTIONS(31), 13,
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
    STATE(43), 1,
      sym_binary_expression,
    STATE(61), 1,
      sym__expression,
    STATE(116), 1,
      sym_aggregate_operation,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
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
    STATE(43), 1,
      sym_binary_expression,
    STATE(61), 1,
      sym__expression,
    STATE(116), 1,
      sym_aggregate_operation,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
    ACTIONS(87), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1308] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      sym_keyword_and,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_DOT_DOT,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(83), 1,
      sym_keyword_or,
    STATE(30), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
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
  [1362] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
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
    ACTIONS(73), 13,
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
    STATE(43), 1,
      sym_binary_expression,
    STATE(61), 1,
      sym__expression,
    STATE(116), 1,
      sym_aggregate_operation,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
    ACTIONS(87), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1462] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_derives_repeat1,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 15,
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
  [1494] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 13,
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
  [1530] = 17,
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
    STATE(35), 1,
      sym_comment,
    STATE(102), 1,
      sym_term,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1586] = 18,
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
    STATE(33), 1,
      sym_binary_expression,
    STATE(36), 1,
      sym_comment,
    STATE(107), 1,
      sym_term,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [1644] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 13,
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
  [1680] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 13,
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
  [1711] = 16,
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
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(39), 1,
      sym_comment,
    STATE(118), 1,
      sym_term,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1764] = 16,
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
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(40), 1,
      sym_comment,
    STATE(86), 1,
      sym_term,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1817] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      sym_keyword_and,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_DOT_DOT,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(83), 1,
      sym_keyword_or,
    STATE(41), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1864] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      sym_keyword_filter,
    ACTIONS(143), 1,
      sym_keyword_derive,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(151), 1,
      sym_keyword_join,
    ACTIONS(153), 1,
      sym_keyword_select,
    STATE(42), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_transforms_repeat1,
    STATE(115), 1,
      sym_transforms,
    ACTIONS(139), 2,
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
  [1911] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 13,
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
  [1942] = 17,
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
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(44), 1,
      sym_comment,
    STATE(49), 1,
      sym_binary_expression,
    STATE(113), 1,
      sym_term,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [1997] = 16,
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
      anon_sym_LPAREN,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(30), 1,
      sym__expression,
    STATE(45), 1,
      sym_comment,
    STATE(91), 1,
      sym__boolean_expression,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2050] = 17,
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
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(34), 1,
      sym_binary_expression,
    STATE(46), 1,
      sym_comment,
    STATE(61), 1,
      sym__expression,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [2105] = 17,
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
    STATE(47), 1,
      sym_comment,
    STATE(49), 1,
      sym_binary_expression,
    STATE(113), 1,
      sym_term,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [2160] = 16,
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
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(48), 1,
      sym_comment,
    STATE(118), 1,
      sym_term,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2213] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 15,
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
  [2242] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      sym_keyword_filter,
    ACTIONS(143), 1,
      sym_keyword_derive,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(151), 1,
      sym_keyword_join,
    ACTIONS(153), 1,
      sym_keyword_select,
    STATE(50), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(169), 2,
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
  [2286] = 16,
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
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(38), 1,
      sym_binary_expression,
    STATE(51), 1,
      sym_comment,
    STATE(61), 1,
      sym__expression,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [2338] = 15,
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
    STATE(74), 1,
      sym_term,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2388] = 16,
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
    STATE(49), 1,
      sym_binary_expression,
    STATE(53), 1,
      sym_comment,
    STATE(113), 1,
      sym_term,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [2440] = 15,
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
    STATE(54), 1,
      sym_comment,
    STATE(118), 1,
      sym_term,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2490] = 15,
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
    STATE(55), 1,
      sym_comment,
    STATE(88), 1,
      sym_term,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2540] = 15,
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
    STATE(82), 1,
      sym_term,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2590] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      sym_keyword_and,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_DOT_DOT,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(83), 1,
      sym_keyword_or,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2636] = 16,
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
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(38), 1,
      sym_binary_expression,
    STATE(58), 1,
      sym_comment,
    STATE(61), 1,
      sym__expression,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [2688] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      sym_keyword_filter,
    ACTIONS(182), 1,
      sym_keyword_derive,
    ACTIONS(185), 1,
      sym_keyword_aggregate,
    ACTIONS(188), 1,
      sym_keyword_sort,
    ACTIONS(191), 1,
      sym_keyword_take,
    ACTIONS(194), 1,
      sym_keyword_join,
    ACTIONS(197), 1,
      sym_keyword_select,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(59), 2,
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
    STATE(16), 1,
      sym__expression,
    STATE(60), 1,
      sym_comment,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2777] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      sym_keyword_and,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_DOT_DOT,
    ACTIONS(71), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(83), 1,
      sym_keyword_or,
    STATE(61), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(59), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2820] = 15,
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
    STATE(31), 1,
      sym_binary_expression,
    STATE(61), 1,
      sym__expression,
    STATE(62), 1,
      sym_comment,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [2869] = 14,
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
    STATE(13), 1,
      sym__expression,
    STATE(63), 1,
      sym_comment,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2916] = 14,
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
    STATE(41), 1,
      sym__expression,
    STATE(64), 1,
      sym_comment,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2963] = 14,
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
    STATE(57), 1,
      sym__expression,
    STATE(65), 1,
      sym_comment,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3010] = 15,
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
    STATE(38), 1,
      sym_binary_expression,
    STATE(61), 1,
      sym__expression,
    STATE(66), 1,
      sym_comment,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 2,
      sym_literal,
      sym_field,
  [3059] = 14,
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
    STATE(67), 1,
      sym_comment,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3106] = 14,
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
    STATE(68), 1,
      sym_comment,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3153] = 14,
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
    STATE(17), 1,
      sym__expression,
    STATE(69), 1,
      sym_comment,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3200] = 14,
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
    STATE(23), 1,
      sym__expression,
    STATE(70), 1,
      sym_comment,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3247] = 14,
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
    STATE(71), 1,
      sym_comment,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3294] = 14,
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
    STATE(10), 1,
      sym__expression,
    STATE(72), 1,
      sym_comment,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3341] = 14,
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
    STATE(11), 1,
      sym__expression,
    STATE(73), 1,
      sym_comment,
    STATE(125), 1,
      sym__alias_identifier,
    ACTIONS(85), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3388] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    STATE(74), 1,
      sym_comment,
    STATE(87), 1,
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
  [3412] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(75), 1,
      sym_comment,
    ACTIONS(206), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3430] = 3,
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
  [3448] = 3,
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
  [3466] = 3,
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
  [3484] = 3,
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
  [3502] = 3,
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
  [3520] = 3,
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
  [3538] = 3,
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
  [3556] = 3,
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
  [3574] = 3,
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
  [3592] = 3,
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
  [3610] = 3,
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
  [3628] = 3,
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
  [3646] = 3,
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
  [3664] = 3,
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
  [3682] = 3,
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
  [3700] = 3,
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
  [3718] = 3,
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
  [3736] = 3,
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
  [3754] = 3,
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
  [3772] = 3,
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
  [3790] = 3,
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
  [3808] = 3,
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
  [3826] = 3,
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
  [3844] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      sym_keyword_from,
    STATE(42), 1,
      sym_from,
    STATE(114), 1,
      sym_pipeline,
    STATE(99), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [3864] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym_from,
    STATE(99), 1,
      aux_sym_program_repeat1,
    STATE(100), 1,
      sym_comment,
    STATE(114), 1,
      sym_pipeline,
  [3886] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(101), 1,
      sym_comment,
    ACTIONS(261), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [3899] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_selects_repeat1,
  [3915] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_selects_repeat1,
  [3931] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(104), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [3945] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(105), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [3959] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_derives_repeat1,
    STATE(106), 1,
      sym_comment,
  [3975] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_derives_repeat1,
    STATE(107), 1,
      sym_comment,
  [3991] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    STATE(108), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [4005] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_conditions_repeat1,
    STATE(109), 1,
      sym_comment,
  [4021] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_aggregate_repeat1,
  [4037] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    STATE(111), 2,
      sym_comment,
      aux_sym_selects_repeat1,
  [4051] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_aggregate_repeat1,
    STATE(112), 1,
      sym_comment,
  [4067] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(113), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4078] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(114), 1,
      sym_comment,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [4089] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(115), 1,
      sym_comment,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [4100] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4111] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_selects,
    STATE(117), 1,
      sym_comment,
  [4124] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(118), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4135] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(303), 1,
      anon_sym_DOT,
    STATE(119), 1,
      sym_comment,
  [4148] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(120), 1,
      sym_comment,
  [4158] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      sym_comment,
  [4168] = 3,
    ACTIONS(307), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(309), 1,
      anon_sym_POUND,
    STATE(122), 1,
      sym_comment,
  [4178] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(311), 1,
      anon_sym_DOT,
    STATE(123), 1,
      sym_comment,
  [4188] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(313), 1,
      anon_sym_SQUOTE,
    STATE(124), 1,
      sym_comment,
  [4198] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(315), 1,
      anon_sym_DOT,
    STATE(125), 1,
      sym_comment,
  [4208] = 3,
    ACTIONS(309), 1,
      anon_sym_POUND,
    ACTIONS(317), 1,
      aux_sym__literal_string_token1,
    STATE(126), 1,
      sym_comment,
  [4218] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      sym_comment,
  [4228] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym_comment,
  [4238] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      sym__number,
    STATE(129), 1,
      sym_comment,
  [4248] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(321), 1,
      anon_sym_COLON,
    STATE(130), 1,
      sym_comment,
  [4258] = 3,
    ACTIONS(309), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      aux_sym_comment_token1,
    STATE(131), 1,
      sym_comment,
  [4268] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(325), 1,
      anon_sym_LBRACK,
    STATE(132), 1,
      sym_comment,
  [4278] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_comment,
  [4288] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      sym_keyword_side,
    STATE(134), 1,
      sym_comment,
  [4298] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym__number,
    STATE(135), 1,
      sym_comment,
  [4308] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      sym_comment,
  [4318] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_comment,
  [4328] = 1,
    ACTIONS(333), 1,
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
  [SMALL_STATE(12)] = 432,
  [SMALL_STATE(13)] = 472,
  [SMALL_STATE(14)] = 526,
  [SMALL_STATE(15)] = 566,
  [SMALL_STATE(16)] = 606,
  [SMALL_STATE(17)] = 652,
  [SMALL_STATE(18)] = 702,
  [SMALL_STATE(19)] = 742,
  [SMALL_STATE(20)] = 784,
  [SMALL_STATE(21)] = 836,
  [SMALL_STATE(22)] = 878,
  [SMALL_STATE(23)] = 918,
  [SMALL_STATE(24)] = 962,
  [SMALL_STATE(25)] = 1012,
  [SMALL_STATE(26)] = 1069,
  [SMALL_STATE(27)] = 1137,
  [SMALL_STATE(28)] = 1178,
  [SMALL_STATE(29)] = 1243,
  [SMALL_STATE(30)] = 1308,
  [SMALL_STATE(31)] = 1362,
  [SMALL_STATE(32)] = 1400,
  [SMALL_STATE(33)] = 1462,
  [SMALL_STATE(34)] = 1494,
  [SMALL_STATE(35)] = 1530,
  [SMALL_STATE(36)] = 1586,
  [SMALL_STATE(37)] = 1644,
  [SMALL_STATE(38)] = 1680,
  [SMALL_STATE(39)] = 1711,
  [SMALL_STATE(40)] = 1764,
  [SMALL_STATE(41)] = 1817,
  [SMALL_STATE(42)] = 1864,
  [SMALL_STATE(43)] = 1911,
  [SMALL_STATE(44)] = 1942,
  [SMALL_STATE(45)] = 1997,
  [SMALL_STATE(46)] = 2050,
  [SMALL_STATE(47)] = 2105,
  [SMALL_STATE(48)] = 2160,
  [SMALL_STATE(49)] = 2213,
  [SMALL_STATE(50)] = 2242,
  [SMALL_STATE(51)] = 2286,
  [SMALL_STATE(52)] = 2338,
  [SMALL_STATE(53)] = 2388,
  [SMALL_STATE(54)] = 2440,
  [SMALL_STATE(55)] = 2490,
  [SMALL_STATE(56)] = 2540,
  [SMALL_STATE(57)] = 2590,
  [SMALL_STATE(58)] = 2636,
  [SMALL_STATE(59)] = 2688,
  [SMALL_STATE(60)] = 2730,
  [SMALL_STATE(61)] = 2777,
  [SMALL_STATE(62)] = 2820,
  [SMALL_STATE(63)] = 2869,
  [SMALL_STATE(64)] = 2916,
  [SMALL_STATE(65)] = 2963,
  [SMALL_STATE(66)] = 3010,
  [SMALL_STATE(67)] = 3059,
  [SMALL_STATE(68)] = 3106,
  [SMALL_STATE(69)] = 3153,
  [SMALL_STATE(70)] = 3200,
  [SMALL_STATE(71)] = 3247,
  [SMALL_STATE(72)] = 3294,
  [SMALL_STATE(73)] = 3341,
  [SMALL_STATE(74)] = 3388,
  [SMALL_STATE(75)] = 3412,
  [SMALL_STATE(76)] = 3430,
  [SMALL_STATE(77)] = 3448,
  [SMALL_STATE(78)] = 3466,
  [SMALL_STATE(79)] = 3484,
  [SMALL_STATE(80)] = 3502,
  [SMALL_STATE(81)] = 3520,
  [SMALL_STATE(82)] = 3538,
  [SMALL_STATE(83)] = 3556,
  [SMALL_STATE(84)] = 3574,
  [SMALL_STATE(85)] = 3592,
  [SMALL_STATE(86)] = 3610,
  [SMALL_STATE(87)] = 3628,
  [SMALL_STATE(88)] = 3646,
  [SMALL_STATE(89)] = 3664,
  [SMALL_STATE(90)] = 3682,
  [SMALL_STATE(91)] = 3700,
  [SMALL_STATE(92)] = 3718,
  [SMALL_STATE(93)] = 3736,
  [SMALL_STATE(94)] = 3754,
  [SMALL_STATE(95)] = 3772,
  [SMALL_STATE(96)] = 3790,
  [SMALL_STATE(97)] = 3808,
  [SMALL_STATE(98)] = 3826,
  [SMALL_STATE(99)] = 3844,
  [SMALL_STATE(100)] = 3864,
  [SMALL_STATE(101)] = 3886,
  [SMALL_STATE(102)] = 3899,
  [SMALL_STATE(103)] = 3915,
  [SMALL_STATE(104)] = 3931,
  [SMALL_STATE(105)] = 3945,
  [SMALL_STATE(106)] = 3959,
  [SMALL_STATE(107)] = 3975,
  [SMALL_STATE(108)] = 3991,
  [SMALL_STATE(109)] = 4005,
  [SMALL_STATE(110)] = 4021,
  [SMALL_STATE(111)] = 4037,
  [SMALL_STATE(112)] = 4051,
  [SMALL_STATE(113)] = 4067,
  [SMALL_STATE(114)] = 4078,
  [SMALL_STATE(115)] = 4089,
  [SMALL_STATE(116)] = 4100,
  [SMALL_STATE(117)] = 4111,
  [SMALL_STATE(118)] = 4124,
  [SMALL_STATE(119)] = 4135,
  [SMALL_STATE(120)] = 4148,
  [SMALL_STATE(121)] = 4158,
  [SMALL_STATE(122)] = 4168,
  [SMALL_STATE(123)] = 4178,
  [SMALL_STATE(124)] = 4188,
  [SMALL_STATE(125)] = 4198,
  [SMALL_STATE(126)] = 4208,
  [SMALL_STATE(127)] = 4218,
  [SMALL_STATE(128)] = 4228,
  [SMALL_STATE(129)] = 4238,
  [SMALL_STATE(130)] = 4248,
  [SMALL_STATE(131)] = 4258,
  [SMALL_STATE(132)] = 4268,
  [SMALL_STATE(133)] = 4278,
  [SMALL_STATE(134)] = 4288,
  [SMALL_STATE(135)] = 4298,
  [SMALL_STATE(136)] = 4308,
  [SMALL_STATE(137)] = 4318,
  [SMALL_STATE(138)] = 4328,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 8),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 8),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(45),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(40),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(132),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(56),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(62),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(134),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(117),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 9),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(55),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(66),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(53),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(32),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selects_repeat1, 2), SHIFT_REPEAT(54),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selects_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [331] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
