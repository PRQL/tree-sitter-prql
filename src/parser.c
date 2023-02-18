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
#define STATE_COUNT 197
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
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
  anon_sym_DASH = 34,
  anon_sym_PLUS = 35,
  anon_sym_COLON = 36,
  anon_sym_DQUOTE = 37,
  aux_sym__double_quote_string_token1 = 38,
  anon_sym_SQUOTE = 39,
  aux_sym__literal_string_token1 = 40,
  sym__number = 41,
  anon_sym_DOT = 42,
  sym_identifier = 43,
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
  sym_bang = 58,
  sym_program = 59,
  sym_pipeline = 60,
  sym_transforms = 61,
  sym_from = 62,
  sym_derives = 63,
  sym_filter = 64,
  sym__boolean_expression = 65,
  sym_aggregate = 66,
  sym_aggregate_operation = 67,
  sym_sorts = 68,
  sym_direction = 69,
  sym_takes = 70,
  sym_group = 71,
  sym_joins = 72,
  sym_conditions = 73,
  sym_select = 74,
  sym_table_reference = 75,
  sym_term = 76,
  sym__expression = 77,
  sym_literal = 78,
  sym__double_quote_string = 79,
  sym__literal_string = 80,
  sym__decimal_number = 81,
  sym_field = 82,
  sym__alias_identifier = 83,
  sym_binary_expression = 84,
  sym_comment = 85,
  aux_sym_program_repeat1 = 86,
  aux_sym_transforms_repeat1 = 87,
  aux_sym_derives_repeat1 = 88,
  aux_sym_aggregate_repeat1 = 89,
  aux_sym_sorts_repeat1 = 90,
  aux_sym_group_repeat1 = 91,
  aux_sym_group_repeat2 = 92,
  aux_sym_conditions_repeat1 = 93,
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
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__literal_string_token1] = "_literal_string_token1",
  [sym__number] = "_number",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
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
  [sym_bang] = "bang",
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
  [sym_direction] = "direction",
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
  [aux_sym_sorts_repeat1] = "sorts_repeat1",
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__literal_string_token1] = aux_sym__literal_string_token1,
  [sym__number] = sym__number,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
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
  [sym_bang] = sym_bang,
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
  [sym_direction] = sym_direction,
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
  [aux_sym_sorts_repeat1] = aux_sym_sorts_repeat1,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [sym_bang] = {
    .visible = true,
    .named = true,
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
  [sym_direction] = {
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
  [aux_sym_sorts_repeat1] = {
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
      if (eof) ADVANCE(204);
      if (lookahead == '!') ADVANCE(352);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ')') ADVANCE(250);
      if (lookahead == '*') ADVANCE(334);
      if (lookahead == '+') ADVANCE(252);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(337);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '?') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'C') ADVANCE(70);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(63);
      if (lookahead == 'J') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'M') ADVANCE(7);
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'j') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '|') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(201)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == '+') ADVANCE(252);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'F') ADVANCE(265);
      if (lookahead == 'T') ADVANCE(287);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(197)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'A') ADVANCE(296);
      if (lookahead == 'C') ADVANCE(285);
      if (lookahead == 'F') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(266);
      if (lookahead == 'S') ADVANCE(290);
      if (lookahead == 'T') ADVANCE(287);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'c') ADVANCE(319);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(198)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(339);
      END_STATE();
    case 5:
      if (lookahead == '?') ADVANCE(345);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'U') ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'R') ADVANCE(97);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(89);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(242);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(51);
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
      if (lookahead == 'E') ADVANCE(237);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(211);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(214);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(216);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(207);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(219);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(209);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == 'I') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(61);
      if (lookahead == 'W') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == 'G') ADVANCE(231);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(78);
      END_STATE();
    case 37:
      if (lookahead == 'F') ADVANCE(85);
      END_STATE();
    case 38:
      if (lookahead == 'G') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'G') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 40:
      if (lookahead == 'G') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(15);
      if (lookahead == 'V') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'G') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'G') ADVANCE(11);
      END_STATE();
    case 43:
      if (lookahead == 'G') ADVANCE(81);
      END_STATE();
    case 44:
      if (lookahead == 'G') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 'H') ADVANCE(218);
      END_STATE();
    case 46:
      if (lookahead == 'H') ADVANCE(88);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'U') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'I') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'K') ADVANCE(23);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(94);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(241);
      END_STATE();
    case 59:
      if (lookahead == 'L') ADVANCE(21);
      END_STATE();
    case 60:
      if (lookahead == 'L') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'M') ADVANCE(233);
      END_STATE();
    case 62:
      if (lookahead == 'M') ADVANCE(205);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(244);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(221);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(212);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 70:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'O') ADVANCE(52);
      END_STATE();
    case 72:
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 73:
      if (lookahead == 'O') ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == 'P') ADVANCE(208);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(243);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(238);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(206);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 84:
      if (lookahead == 'S') ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(239);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(210);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(227);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(240);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(213);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(235);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 95:
      if (lookahead == 'U') ADVANCE(74);
      END_STATE();
    case 96:
      if (lookahead == 'U') ADVANCE(66);
      END_STATE();
    case 97:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 98:
      if (lookahead == 'V') ADVANCE(229);
      END_STATE();
    case 99:
      if (lookahead == 'V') ADVANCE(26);
      END_STATE();
    case 100:
      if (lookahead == 'X') ADVANCE(223);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 108:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 109:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == 'w') ADVANCE(148);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'v') ADVANCE(129);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(141);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 139:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(218);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 150:
      if (lookahead == 'k') ADVANCE(117);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(208);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 178:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 179:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 193:
      if (lookahead == 'v') ADVANCE(229);
      END_STATE();
    case 194:
      if (lookahead == 'v') ADVANCE(121);
      END_STATE();
    case 195:
      if (lookahead == 'x') ADVANCE(223);
      END_STATE();
    case 196:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'A') ADVANCE(296);
      if (lookahead == 'C') ADVANCE(285);
      if (lookahead == 'F') ADVANCE(265);
      if (lookahead == 'M') ADVANCE(266);
      if (lookahead == 'S') ADVANCE(290);
      if (lookahead == 'T') ADVANCE(287);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'c') ADVANCE(319);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead == 't') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 197:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(197)
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == '+') ADVANCE(252);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'F') ADVANCE(265);
      if (lookahead == 'T') ADVANCE(287);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 't') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 198:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(198)
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '[') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 199:
      if (eof) ADVANCE(204);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ')') ADVANCE(250);
      if (lookahead == '*') ADVANCE(334);
      if (lookahead == '+') ADVANCE(252);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(337);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '?') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(39);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(50);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'J') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'j') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '|') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(202)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 200:
      if (eof) ADVANCE(204);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(49);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'J') ADVANCE(71);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'j') ADVANCE(166);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(203)
      END_STATE();
    case 201:
      if (eof) ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(201)
      if (lookahead == '!') ADVANCE(352);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ')') ADVANCE(250);
      if (lookahead == '*') ADVANCE(334);
      if (lookahead == '+') ADVANCE(252);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead == ':') ADVANCE(253);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(337);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '?') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'C') ADVANCE(70);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(63);
      if (lookahead == 'J') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'M') ADVANCE(7);
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'j') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '|') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 202:
      if (eof) ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(202)
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ')') ADVANCE(250);
      if (lookahead == '*') ADVANCE(334);
      if (lookahead == '+') ADVANCE(252);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '=') ADVANCE(337);
      if (lookahead == '>') ADVANCE(340);
      if (lookahead == '?') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(39);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(50);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'J') ADVANCE(71);
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == '[') ADVANCE(246);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'j') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '|') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 203:
      if (eof) ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(203)
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(49);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'J') ADVANCE(71);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == 'j') ADVANCE(166);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(344);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'I') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(286);
      if (lookahead == 'G') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(270);
      if (lookahead == 'U') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(304);
      if (lookahead == 'u') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(257);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(261);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(339);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 199},
  [3] = {.lex_state = 199},
  [4] = {.lex_state = 199},
  [5] = {.lex_state = 199},
  [6] = {.lex_state = 199},
  [7] = {.lex_state = 199},
  [8] = {.lex_state = 199},
  [9] = {.lex_state = 199},
  [10] = {.lex_state = 199},
  [11] = {.lex_state = 199},
  [12] = {.lex_state = 199},
  [13] = {.lex_state = 199},
  [14] = {.lex_state = 199},
  [15] = {.lex_state = 199},
  [16] = {.lex_state = 199},
  [17] = {.lex_state = 199},
  [18] = {.lex_state = 199},
  [19] = {.lex_state = 199},
  [20] = {.lex_state = 199},
  [21] = {.lex_state = 199},
  [22] = {.lex_state = 199},
  [23] = {.lex_state = 199},
  [24] = {.lex_state = 199},
  [25] = {.lex_state = 199},
  [26] = {.lex_state = 199},
  [27] = {.lex_state = 199},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 199},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 199},
  [42] = {.lex_state = 199},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 199},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 199},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 199},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 199},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 199},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 199},
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
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 199},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 200},
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
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 199},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 259},
  [173] = {.lex_state = 255},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 350},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 255},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 0},
  [196] = {(TSStateId)(-1)},
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [sym_bang] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(192),
    [sym_pipeline] = STATE(161),
    [sym_from] = STATE(35),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(137),
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
  [45] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(3), 1,
      sym_comment,
    ACTIONS(17), 4,
      anon_sym_DOT,
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
  [88] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(4), 1,
      sym_comment,
    ACTIONS(23), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(19), 28,
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
  [133] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(5), 1,
      sym_comment,
    ACTIONS(29), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 28,
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
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(6), 1,
      sym_comment,
    ACTIONS(23), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(19), 28,
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
    ACTIONS(33), 1,
      sym__number,
    STATE(7), 1,
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
  [268] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym__number,
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
  [313] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
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
  [355] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(45), 3,
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
  [397] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
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
  [439] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 24,
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
  [485] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 28,
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
  [527] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    STATE(14), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 19,
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
  [579] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 26,
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
  [623] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      sym_keyword_and,
    ACTIONS(69), 1,
      sym_keyword_or,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    STATE(16), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 4,
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
  [683] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
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
  [725] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    STATE(18), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 23,
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
  [773] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 28,
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
  [815] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      sym_keyword_and,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    STATE(20), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 16,
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
  [873] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    STATE(21), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 17,
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
  [929] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
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
  [971] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    STATE(23), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 18,
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
  [1025] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_EQ,
    STATE(24), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 19,
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
  [1077] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
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
  [1119] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_comment,
    ACTIONS(13), 3,
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
  [1162] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(79), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 11,
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
    ACTIONS(77), 13,
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
  [1202] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(28), 1,
      sym_comment,
    STATE(42), 1,
      sym_binary_expression,
    STATE(85), 1,
      sym__expression,
    STATE(145), 1,
      sym_aggregate_operation,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 2,
      sym_literal,
      sym_field,
    ACTIONS(91), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1270] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(29), 1,
      sym_comment,
    STATE(54), 1,
      sym_binary_expression,
    STATE(85), 1,
      sym__expression,
    STATE(163), 1,
      sym_aggregate_operation,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 2,
      sym_literal,
      sym_field,
    ACTIONS(91), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1335] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(30), 1,
      sym_comment,
    STATE(54), 1,
      sym_binary_expression,
    STATE(85), 1,
      sym__expression,
    STATE(163), 1,
      sym_aggregate_operation,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 2,
      sym_literal,
      sym_field,
    ACTIONS(91), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1400] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      sym_keyword_and,
    ACTIONS(69), 1,
      sym_keyword_or,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    STATE(31), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(113), 10,
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
  [1455] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(32), 1,
      sym_comment,
    STATE(54), 1,
      sym_binary_expression,
    STATE(85), 1,
      sym__expression,
    STATE(163), 1,
      sym_aggregate_operation,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 2,
      sym_literal,
      sym_field,
    ACTIONS(91), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1517] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(33), 1,
      sym_comment,
    STATE(66), 1,
      sym_direction,
    STATE(146), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1579] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(34), 1,
      sym_comment,
    STATE(62), 1,
      sym_direction,
    STATE(164), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1638] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      sym_keyword_filter,
    ACTIONS(129), 1,
      sym_keyword_derive,
    ACTIONS(131), 1,
      sym_keyword_group,
    ACTIONS(133), 1,
      sym_keyword_aggregate,
    ACTIONS(135), 1,
      sym_keyword_sort,
    ACTIONS(137), 1,
      sym_keyword_take,
    ACTIONS(139), 1,
      sym_keyword_join,
    ACTIONS(141), 1,
      sym_keyword_select,
    STATE(35), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_transforms_repeat1,
    STATE(160), 1,
      sym_transforms,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(122), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [1689] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(36), 1,
      sym_comment,
    STATE(67), 1,
      sym_direction,
    STATE(94), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1748] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(37), 1,
      sym_comment,
    STATE(62), 1,
      sym_direction,
    STATE(164), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1807] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(38), 1,
      sym_comment,
    STATE(62), 1,
      sym_direction,
    STATE(164), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1866] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      sym_keyword_filter,
    ACTIONS(154), 1,
      sym_keyword_derive,
    ACTIONS(157), 1,
      sym_keyword_group,
    ACTIONS(160), 1,
      sym_keyword_aggregate,
    ACTIONS(163), 1,
      sym_keyword_sort,
    ACTIONS(166), 1,
      sym_keyword_take,
    ACTIONS(169), 1,
      sym_keyword_join,
    ACTIONS(172), 1,
      sym_keyword_select,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(39), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(122), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [1912] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      sym_keyword_filter,
    ACTIONS(129), 1,
      sym_keyword_derive,
    ACTIONS(131), 1,
      sym_keyword_group,
    ACTIONS(133), 1,
      sym_keyword_aggregate,
    ACTIONS(135), 1,
      sym_keyword_sort,
    ACTIONS(137), 1,
      sym_keyword_take,
    ACTIONS(139), 1,
      sym_keyword_join,
    ACTIONS(141), 1,
      sym_keyword_select,
    STATE(39), 1,
      aux_sym_transforms_repeat1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(122), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [1960] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_derives_repeat1,
    ACTIONS(79), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 15,
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
  [1992] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(79), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 13,
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
  [2028] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(43), 1,
      sym_comment,
    STATE(153), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2084] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(121), 1,
      anon_sym_PLUS,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(44), 1,
      sym_comment,
    STATE(62), 1,
      sym_direction,
    STATE(164), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2140] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(45), 1,
      sym_comment,
    STATE(152), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2196] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(79), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 13,
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
  [2232] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(41), 1,
      sym_binary_expression,
    STATE(47), 1,
      sym_comment,
    STATE(147), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 2,
      sym_literal,
      sym_field,
  [2290] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(48), 1,
      sym_comment,
    STATE(115), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2343] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(49), 1,
      sym_comment,
    STATE(170), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2396] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(79), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 13,
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
  [2427] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_binary_expression,
    STATE(51), 1,
      sym_comment,
    STATE(85), 1,
      sym__expression,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 2,
      sym_literal,
      sym_field,
  [2482] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(31), 1,
      sym__expression,
    STATE(52), 1,
      sym_comment,
    STATE(99), 1,
      sym__boolean_expression,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2535] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(53), 1,
      sym_comment,
    STATE(162), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2588] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(79), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 13,
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
  [2619] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(55), 1,
      sym_comment,
    STATE(162), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2672] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      sym_keyword_and,
    ACTIONS(69), 1,
      sym_keyword_or,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    STATE(56), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(61), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2719] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(57), 1,
      sym_comment,
    STATE(58), 1,
      sym_binary_expression,
    STATE(165), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 2,
      sym_literal,
      sym_field,
  [2774] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym_comment,
    ACTIONS(79), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 15,
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
  [2803] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(59), 1,
      sym_comment,
    STATE(162), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2856] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(58), 1,
      sym_binary_expression,
    STATE(60), 1,
      sym_comment,
    STATE(165), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 2,
      sym_literal,
      sym_field,
  [2911] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(61), 1,
      sym_comment,
    STATE(162), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2964] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(62), 1,
      sym_comment,
    STATE(166), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3014] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      sym_keyword_and,
    ACTIONS(69), 1,
      sym_keyword_or,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3060] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(64), 1,
      sym_comment,
    STATE(107), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3110] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(50), 1,
      sym_binary_expression,
    STATE(65), 1,
      sym_comment,
    STATE(85), 1,
      sym__expression,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 2,
      sym_literal,
      sym_field,
  [3162] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(66), 1,
      sym_comment,
    STATE(149), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3212] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(67), 1,
      sym_comment,
    STATE(96), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3262] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(50), 1,
      sym_binary_expression,
    STATE(68), 1,
      sym_comment,
    STATE(85), 1,
      sym__expression,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 2,
      sym_literal,
      sym_field,
  [3314] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(69), 1,
      sym_comment,
    STATE(162), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3364] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(58), 1,
      sym_binary_expression,
    STATE(70), 1,
      sym_comment,
    STATE(165), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 2,
      sym_literal,
      sym_field,
  [3416] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(4), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(71), 1,
      sym_comment,
    STATE(86), 1,
      sym_term,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3466] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(15), 1,
      sym__expression,
    STATE(72), 1,
      sym_comment,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3513] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym__number,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(27), 1,
      sym_binary_expression,
    STATE(73), 1,
      sym_comment,
    STATE(85), 1,
      sym__expression,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 2,
      sym_literal,
      sym_field,
  [3562] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(24), 1,
      sym__expression,
    STATE(74), 1,
      sym_comment,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3609] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(63), 1,
      sym__expression,
    STATE(75), 1,
      sym_comment,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3656] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym__expression,
    STATE(76), 1,
      sym_comment,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3703] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(77), 1,
      sym_comment,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3750] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(20), 1,
      sym__expression,
    STATE(78), 1,
      sym_comment,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3797] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(50), 1,
      sym_binary_expression,
    STATE(79), 1,
      sym_comment,
    STATE(85), 1,
      sym__expression,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 2,
      sym_literal,
      sym_field,
  [3846] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(18), 1,
      sym__expression,
    STATE(80), 1,
      sym_comment,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3893] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(12), 1,
      sym__expression,
    STATE(81), 1,
      sym_comment,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3940] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(14), 1,
      sym__expression,
    STATE(82), 1,
      sym_comment,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3987] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(19), 1,
      sym__expression,
    STATE(83), 1,
      sym_comment,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4034] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(6), 1,
      sym__double_quote_string,
    STATE(21), 1,
      sym__expression,
    STATE(84), 1,
      sym_comment,
    STATE(182), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(11), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4081] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      sym_keyword_and,
    ACTIONS(69), 1,
      sym_keyword_or,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    STATE(85), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4124] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    STATE(86), 1,
      sym_comment,
    STATE(104), 1,
      sym_conditions,
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
  [4149] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym_comment,
    ACTIONS(237), 11,
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
  [4169] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym_comment,
    ACTIONS(239), 11,
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
  [4189] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(89), 1,
      sym_comment,
    ACTIONS(25), 10,
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
  [4211] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym_comment,
    ACTIONS(243), 11,
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
  [4231] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym_comment,
    ACTIONS(245), 11,
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
  [4251] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(92), 1,
      sym_comment,
    ACTIONS(247), 11,
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
  [4271] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(249), 11,
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
  [4291] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(94), 1,
      sym_comment,
    ACTIONS(251), 11,
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
  [4311] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(95), 1,
      sym_comment,
    ACTIONS(253), 11,
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
  [4331] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(96), 1,
      sym_comment,
    ACTIONS(255), 11,
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
  [4351] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(97), 1,
      sym_comment,
    ACTIONS(257), 11,
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
  [4371] = 3,
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
  [4390] = 3,
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
  [4409] = 3,
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
  [4428] = 3,
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
  [4447] = 3,
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
  [4466] = 3,
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
  [4485] = 3,
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
  [4504] = 3,
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
  [4523] = 3,
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
  [4542] = 3,
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
  [4561] = 3,
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
  [4580] = 3,
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
  [4599] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(110), 1,
      sym_comment,
    ACTIONS(283), 10,
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
  [4618] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(111), 1,
      sym_comment,
    ACTIONS(285), 10,
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
  [4637] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(112), 1,
      sym_comment,
    ACTIONS(287), 10,
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
  [4656] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(113), 1,
      sym_comment,
    ACTIONS(289), 10,
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
  [4675] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(114), 1,
      sym_comment,
    ACTIONS(291), 10,
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
  [4694] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(115), 1,
      sym_comment,
    ACTIONS(293), 10,
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
  [4713] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym_comment,
    ACTIONS(295), 10,
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
  [4732] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(117), 1,
      sym_comment,
    ACTIONS(297), 10,
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
  [4751] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(118), 1,
      sym_comment,
    ACTIONS(299), 10,
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
  [4770] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(119), 1,
      sym_comment,
    ACTIONS(301), 10,
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
  [4789] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(120), 1,
      sym_comment,
    ACTIONS(303), 10,
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
  [4808] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(121), 1,
      sym_comment,
    ACTIONS(305), 10,
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
  [4827] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(122), 1,
      sym_comment,
    ACTIONS(307), 10,
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
  [4846] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(123), 1,
      sym_comment,
    ACTIONS(309), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(311), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__number,
      anon_sym_DOT,
  [4865] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_keyword_aggregate,
    ACTIONS(135), 1,
      sym_keyword_sort,
    ACTIONS(137), 1,
      sym_keyword_take,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym_group_repeat2,
    STATE(139), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4892] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_keyword_aggregate,
    ACTIONS(135), 1,
      sym_keyword_sort,
    ACTIONS(137), 1,
      sym_keyword_take,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym_group_repeat2,
    STATE(139), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4919] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(317), 1,
      sym_keyword_aggregate,
    ACTIONS(320), 1,
      sym_keyword_sort,
    ACTIONS(323), 1,
      sym_keyword_take,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(126), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(139), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4944] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(127), 1,
      sym_comment,
    ACTIONS(309), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(311), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__number,
      anon_sym_DOT,
  [4963] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_keyword_aggregate,
    ACTIONS(135), 1,
      sym_keyword_sort,
    ACTIONS(137), 1,
      sym_keyword_take,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_group_repeat2,
    STATE(128), 1,
      sym_comment,
    STATE(139), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [4990] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_keyword_aggregate,
    ACTIONS(135), 1,
      sym_keyword_sort,
    ACTIONS(137), 1,
      sym_keyword_take,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_group_repeat2,
    STATE(129), 1,
      sym_comment,
    STATE(139), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [5017] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_keyword_aggregate,
    ACTIONS(135), 1,
      sym_keyword_sort,
    ACTIONS(137), 1,
      sym_keyword_take,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_group_repeat2,
    STATE(130), 1,
      sym_comment,
    STATE(139), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [5044] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_keyword_aggregate,
    ACTIONS(135), 1,
      sym_keyword_sort,
    ACTIONS(137), 1,
      sym_keyword_take,
    STATE(130), 1,
      aux_sym_group_repeat2,
    STATE(131), 1,
      sym_comment,
    STATE(139), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [5068] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_keyword_aggregate,
    ACTIONS(135), 1,
      sym_keyword_sort,
    ACTIONS(137), 1,
      sym_keyword_take,
    STATE(128), 1,
      aux_sym_group_repeat2,
    STATE(132), 1,
      sym_comment,
    STATE(139), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [5092] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(98), 1,
      sym_field,
    STATE(102), 1,
      sym_table_reference,
    STATE(133), 1,
      sym_comment,
    STATE(177), 1,
      sym__double_quote_string,
    STATE(182), 1,
      sym__alias_identifier,
  [5120] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_keyword_aggregate,
    ACTIONS(135), 1,
      sym_keyword_sort,
    ACTIONS(137), 1,
      sym_keyword_take,
    STATE(129), 1,
      aux_sym_group_repeat2,
    STATE(134), 1,
      sym_comment,
    STATE(139), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [5144] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_keyword_aggregate,
    ACTIONS(135), 1,
      sym_keyword_sort,
    ACTIONS(137), 1,
      sym_keyword_take,
    STATE(125), 1,
      aux_sym_group_repeat2,
    STATE(135), 1,
      sym_comment,
    STATE(139), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [5168] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_keyword_aggregate,
    ACTIONS(135), 1,
      sym_keyword_sort,
    ACTIONS(137), 1,
      sym_keyword_take,
    STATE(124), 1,
      aux_sym_group_repeat2,
    STATE(136), 1,
      sym_comment,
    STATE(139), 3,
      sym_aggregate,
      sym_sorts,
      sym_takes,
  [5192] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_from,
    STATE(137), 1,
      sym_comment,
    STATE(138), 1,
      aux_sym_program_repeat1,
    STATE(161), 1,
      sym_pipeline,
  [5214] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 1,
      sym_keyword_from,
    STATE(35), 1,
      sym_from,
    STATE(161), 1,
      sym_pipeline,
    STATE(138), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [5234] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(139), 1,
      sym_comment,
    ACTIONS(347), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      anon_sym_RPAREN,
  [5247] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym_comment,
    ACTIONS(349), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [5260] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_sorts_repeat1,
  [5276] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_conditions_repeat1,
  [5292] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(143), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [5306] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_group_repeat1,
    STATE(144), 1,
      sym_comment,
  [5322] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym_aggregate_repeat1,
  [5338] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(141), 1,
      aux_sym_sorts_repeat1,
    STATE(146), 1,
      sym_comment,
  [5354] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_derives_repeat1,
  [5370] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    STATE(148), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [5384] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym_sorts_repeat1,
  [5400] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_aggregate_repeat1,
    STATE(150), 1,
      sym_comment,
  [5416] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_sorts_repeat1,
  [5432] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_group_repeat1,
  [5448] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      aux_sym_group_repeat1,
    STATE(153), 1,
      sym_comment,
  [5464] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    STATE(154), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [5478] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(155), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [5492] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_derives_repeat1,
    STATE(156), 1,
      sym_comment,
  [5508] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_group_repeat1,
    STATE(157), 1,
      sym_comment,
  [5524] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    STATE(158), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [5538] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      sym__number,
    ACTIONS(404), 1,
      anon_sym_DOT,
    STATE(159), 1,
      sym_comment,
  [5551] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [5562] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(161), 1,
      sym_comment,
    ACTIONS(408), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [5573] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(162), 1,
      sym_comment,
    ACTIONS(358), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5584] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5595] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5606] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5617] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5628] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      sym_comment,
  [5638] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym_comment,
  [5648] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(412), 1,
      anon_sym_COLON,
    STATE(169), 1,
      sym_comment,
  [5658] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym_comment,
  [5668] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      sym__number,
    STATE(171), 1,
      sym_comment,
  [5678] = 3,
    ACTIONS(418), 1,
      aux_sym__literal_string_token1,
    ACTIONS(420), 1,
      anon_sym_POUND,
    STATE(172), 1,
      sym_comment,
  [5688] = 3,
    ACTIONS(420), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      aux_sym__double_quote_string_token1,
    STATE(173), 1,
      sym_comment,
  [5698] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      sym_comment,
  [5708] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      sym_comment,
  [5718] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      anon_sym_DOT,
    STATE(176), 1,
      sym_comment,
  [5728] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(177), 1,
      sym_comment,
  [5738] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(428), 1,
      sym_keyword_side,
    STATE(178), 1,
      sym_comment,
  [5748] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(430), 1,
      anon_sym_LBRACK,
    STATE(179), 1,
      sym_comment,
  [5758] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(180), 1,
      sym_comment,
  [5768] = 3,
    ACTIONS(420), 1,
      anon_sym_POUND,
    ACTIONS(434), 1,
      aux_sym_comment_token1,
    STATE(181), 1,
      sym_comment,
  [5778] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(436), 1,
      anon_sym_DOT,
    STATE(182), 1,
      sym_comment,
  [5788] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym_comment,
  [5798] = 3,
    ACTIONS(420), 1,
      anon_sym_POUND,
    ACTIONS(438), 1,
      aux_sym__double_quote_string_token1,
    STATE(184), 1,
      sym_comment,
  [5808] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym__number,
    STATE(185), 1,
      sym_comment,
  [5818] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_comment,
  [5828] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_comment,
  [5838] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_comment,
  [5848] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_comment,
  [5858] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(448), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_comment,
  [5868] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      sym_comment,
  [5878] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    STATE(192), 1,
      sym_comment,
  [5888] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    STATE(193), 1,
      sym_comment,
  [5898] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(194), 1,
      sym_comment,
  [5908] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      sym_comment,
  [5918] = 1,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 133,
  [SMALL_STATE(6)] = 178,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 268,
  [SMALL_STATE(9)] = 313,
  [SMALL_STATE(10)] = 355,
  [SMALL_STATE(11)] = 397,
  [SMALL_STATE(12)] = 439,
  [SMALL_STATE(13)] = 485,
  [SMALL_STATE(14)] = 527,
  [SMALL_STATE(15)] = 579,
  [SMALL_STATE(16)] = 623,
  [SMALL_STATE(17)] = 683,
  [SMALL_STATE(18)] = 725,
  [SMALL_STATE(19)] = 773,
  [SMALL_STATE(20)] = 815,
  [SMALL_STATE(21)] = 873,
  [SMALL_STATE(22)] = 929,
  [SMALL_STATE(23)] = 971,
  [SMALL_STATE(24)] = 1025,
  [SMALL_STATE(25)] = 1077,
  [SMALL_STATE(26)] = 1119,
  [SMALL_STATE(27)] = 1162,
  [SMALL_STATE(28)] = 1202,
  [SMALL_STATE(29)] = 1270,
  [SMALL_STATE(30)] = 1335,
  [SMALL_STATE(31)] = 1400,
  [SMALL_STATE(32)] = 1455,
  [SMALL_STATE(33)] = 1517,
  [SMALL_STATE(34)] = 1579,
  [SMALL_STATE(35)] = 1638,
  [SMALL_STATE(36)] = 1689,
  [SMALL_STATE(37)] = 1748,
  [SMALL_STATE(38)] = 1807,
  [SMALL_STATE(39)] = 1866,
  [SMALL_STATE(40)] = 1912,
  [SMALL_STATE(41)] = 1960,
  [SMALL_STATE(42)] = 1992,
  [SMALL_STATE(43)] = 2028,
  [SMALL_STATE(44)] = 2084,
  [SMALL_STATE(45)] = 2140,
  [SMALL_STATE(46)] = 2196,
  [SMALL_STATE(47)] = 2232,
  [SMALL_STATE(48)] = 2290,
  [SMALL_STATE(49)] = 2343,
  [SMALL_STATE(50)] = 2396,
  [SMALL_STATE(51)] = 2427,
  [SMALL_STATE(52)] = 2482,
  [SMALL_STATE(53)] = 2535,
  [SMALL_STATE(54)] = 2588,
  [SMALL_STATE(55)] = 2619,
  [SMALL_STATE(56)] = 2672,
  [SMALL_STATE(57)] = 2719,
  [SMALL_STATE(58)] = 2774,
  [SMALL_STATE(59)] = 2803,
  [SMALL_STATE(60)] = 2856,
  [SMALL_STATE(61)] = 2911,
  [SMALL_STATE(62)] = 2964,
  [SMALL_STATE(63)] = 3014,
  [SMALL_STATE(64)] = 3060,
  [SMALL_STATE(65)] = 3110,
  [SMALL_STATE(66)] = 3162,
  [SMALL_STATE(67)] = 3212,
  [SMALL_STATE(68)] = 3262,
  [SMALL_STATE(69)] = 3314,
  [SMALL_STATE(70)] = 3364,
  [SMALL_STATE(71)] = 3416,
  [SMALL_STATE(72)] = 3466,
  [SMALL_STATE(73)] = 3513,
  [SMALL_STATE(74)] = 3562,
  [SMALL_STATE(75)] = 3609,
  [SMALL_STATE(76)] = 3656,
  [SMALL_STATE(77)] = 3703,
  [SMALL_STATE(78)] = 3750,
  [SMALL_STATE(79)] = 3797,
  [SMALL_STATE(80)] = 3846,
  [SMALL_STATE(81)] = 3893,
  [SMALL_STATE(82)] = 3940,
  [SMALL_STATE(83)] = 3987,
  [SMALL_STATE(84)] = 4034,
  [SMALL_STATE(85)] = 4081,
  [SMALL_STATE(86)] = 4124,
  [SMALL_STATE(87)] = 4149,
  [SMALL_STATE(88)] = 4169,
  [SMALL_STATE(89)] = 4189,
  [SMALL_STATE(90)] = 4211,
  [SMALL_STATE(91)] = 4231,
  [SMALL_STATE(92)] = 4251,
  [SMALL_STATE(93)] = 4271,
  [SMALL_STATE(94)] = 4291,
  [SMALL_STATE(95)] = 4311,
  [SMALL_STATE(96)] = 4331,
  [SMALL_STATE(97)] = 4351,
  [SMALL_STATE(98)] = 4371,
  [SMALL_STATE(99)] = 4390,
  [SMALL_STATE(100)] = 4409,
  [SMALL_STATE(101)] = 4428,
  [SMALL_STATE(102)] = 4447,
  [SMALL_STATE(103)] = 4466,
  [SMALL_STATE(104)] = 4485,
  [SMALL_STATE(105)] = 4504,
  [SMALL_STATE(106)] = 4523,
  [SMALL_STATE(107)] = 4542,
  [SMALL_STATE(108)] = 4561,
  [SMALL_STATE(109)] = 4580,
  [SMALL_STATE(110)] = 4599,
  [SMALL_STATE(111)] = 4618,
  [SMALL_STATE(112)] = 4637,
  [SMALL_STATE(113)] = 4656,
  [SMALL_STATE(114)] = 4675,
  [SMALL_STATE(115)] = 4694,
  [SMALL_STATE(116)] = 4713,
  [SMALL_STATE(117)] = 4732,
  [SMALL_STATE(118)] = 4751,
  [SMALL_STATE(119)] = 4770,
  [SMALL_STATE(120)] = 4789,
  [SMALL_STATE(121)] = 4808,
  [SMALL_STATE(122)] = 4827,
  [SMALL_STATE(123)] = 4846,
  [SMALL_STATE(124)] = 4865,
  [SMALL_STATE(125)] = 4892,
  [SMALL_STATE(126)] = 4919,
  [SMALL_STATE(127)] = 4944,
  [SMALL_STATE(128)] = 4963,
  [SMALL_STATE(129)] = 4990,
  [SMALL_STATE(130)] = 5017,
  [SMALL_STATE(131)] = 5044,
  [SMALL_STATE(132)] = 5068,
  [SMALL_STATE(133)] = 5092,
  [SMALL_STATE(134)] = 5120,
  [SMALL_STATE(135)] = 5144,
  [SMALL_STATE(136)] = 5168,
  [SMALL_STATE(137)] = 5192,
  [SMALL_STATE(138)] = 5214,
  [SMALL_STATE(139)] = 5234,
  [SMALL_STATE(140)] = 5247,
  [SMALL_STATE(141)] = 5260,
  [SMALL_STATE(142)] = 5276,
  [SMALL_STATE(143)] = 5292,
  [SMALL_STATE(144)] = 5306,
  [SMALL_STATE(145)] = 5322,
  [SMALL_STATE(146)] = 5338,
  [SMALL_STATE(147)] = 5354,
  [SMALL_STATE(148)] = 5370,
  [SMALL_STATE(149)] = 5384,
  [SMALL_STATE(150)] = 5400,
  [SMALL_STATE(151)] = 5416,
  [SMALL_STATE(152)] = 5432,
  [SMALL_STATE(153)] = 5448,
  [SMALL_STATE(154)] = 5464,
  [SMALL_STATE(155)] = 5478,
  [SMALL_STATE(156)] = 5492,
  [SMALL_STATE(157)] = 5508,
  [SMALL_STATE(158)] = 5524,
  [SMALL_STATE(159)] = 5538,
  [SMALL_STATE(160)] = 5551,
  [SMALL_STATE(161)] = 5562,
  [SMALL_STATE(162)] = 5573,
  [SMALL_STATE(163)] = 5584,
  [SMALL_STATE(164)] = 5595,
  [SMALL_STATE(165)] = 5606,
  [SMALL_STATE(166)] = 5617,
  [SMALL_STATE(167)] = 5628,
  [SMALL_STATE(168)] = 5638,
  [SMALL_STATE(169)] = 5648,
  [SMALL_STATE(170)] = 5658,
  [SMALL_STATE(171)] = 5668,
  [SMALL_STATE(172)] = 5678,
  [SMALL_STATE(173)] = 5688,
  [SMALL_STATE(174)] = 5698,
  [SMALL_STATE(175)] = 5708,
  [SMALL_STATE(176)] = 5718,
  [SMALL_STATE(177)] = 5728,
  [SMALL_STATE(178)] = 5738,
  [SMALL_STATE(179)] = 5748,
  [SMALL_STATE(180)] = 5758,
  [SMALL_STATE(181)] = 5768,
  [SMALL_STATE(182)] = 5778,
  [SMALL_STATE(183)] = 5788,
  [SMALL_STATE(184)] = 5798,
  [SMALL_STATE(185)] = 5808,
  [SMALL_STATE(186)] = 5818,
  [SMALL_STATE(187)] = 5828,
  [SMALL_STATE(188)] = 5838,
  [SMALL_STATE(189)] = 5848,
  [SMALL_STATE(190)] = 5858,
  [SMALL_STATE(191)] = 5868,
  [SMALL_STATE(192)] = 5878,
  [SMALL_STATE(193)] = 5888,
  [SMALL_STATE(194)] = 5898,
  [SMALL_STATE(195)] = 5908,
  [SMALL_STATE(196)] = 5918,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 8),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 8),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(52),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(48),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(49),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(179),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(36),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(73),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(178),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(133),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 9),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(179),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(36),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(73),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(64),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(69),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(32),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(44),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(70),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(79),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [450] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
