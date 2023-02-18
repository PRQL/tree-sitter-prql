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
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

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
  anon_sym_LBRACK = 26,
  anon_sym_COMMA = 27,
  anon_sym_RBRACK = 28,
  anon_sym_COLON = 29,
  anon_sym_DQUOTE = 30,
  aux_sym__double_quote_string_token1 = 31,
  anon_sym_SQUOTE = 32,
  aux_sym__literal_string_token1 = 33,
  sym__number = 34,
  anon_sym_DASH = 35,
  anon_sym_DOT = 36,
  sym_identifier = 37,
  anon_sym_PLUS = 38,
  anon_sym_STAR = 39,
  anon_sym_SLASH = 40,
  anon_sym_PIPE = 41,
  anon_sym_EQ = 42,
  anon_sym_EQ_EQ = 43,
  anon_sym_GT = 44,
  anon_sym_GT_EQ = 45,
  anon_sym_LT = 46,
  anon_sym_LT_EQ = 47,
  anon_sym_DOT_DOT = 48,
  anon_sym_QMARK_QMARK = 49,
  anon_sym_POUND = 50,
  aux_sym_comment_token1 = 51,
  sym_program = 52,
  sym_pipeline = 53,
  sym_transforms = 54,
  sym_from = 55,
  sym_derives = 56,
  sym_filter = 57,
  sym_aggregate = 58,
  sym_aggregate_operation = 59,
  sym_sorts = 60,
  sym_takes = 61,
  sym_joins = 62,
  sym_conditions = 63,
  sym_select = 64,
  sym_selects = 65,
  sym_term = 66,
  sym__expression = 67,
  sym_literal = 68,
  sym__double_quote_string = 69,
  sym__literal_string = 70,
  sym__decimal_number = 71,
  sym_field = 72,
  sym__alias_identifier = 73,
  sym_binary_expression = 74,
  sym_comment = 75,
  aux_sym_program_repeat1 = 76,
  aux_sym_transforms_repeat1 = 77,
  aux_sym_derives_repeat1 = 78,
  aux_sym_aggregate_repeat1 = 79,
  aux_sym_conditions_repeat1 = 80,
  aux_sym_selects_repeat1 = 81,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [6] = {.index = 3, .length = 3},
  [7] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_value, 0},
  [2] =
    {field_predicate, 1},
  [3] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [6] =
    {field_name, 2},
    {field_table, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_identifier,
  },
  [5] = {
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
      if (eof) ADVANCE(181);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '*') ADVANCE(305);
      if (lookahead == '+') ADVANCE(304);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '<') ADVANCE(312);
      if (lookahead == '=') ADVANCE(308);
      if (lookahead == '>') ADVANCE(310);
      if (lookahead == '?') ADVANCE(4);
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'C') ADVANCE(61);
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'G') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead == 'J') ADVANCE(62);
      if (lookahead == 'L') ADVANCE(17);
      if (lookahead == 'M') ADVANCE(6);
      if (lookahead == 'R') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(7);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == ']') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'j') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '|') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(180)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == 'A') ADVANCE(266);
      if (lookahead == 'C') ADVANCE(255);
      if (lookahead == 'F') ADVANCE(235);
      if (lookahead == 'M') ADVANCE(236);
      if (lookahead == 'S') ADVANCE(260);
      if (lookahead == 'T') ADVANCE(257);
      if (lookahead == ']') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'm') ADVANCE(270);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == 'F') ADVANCE(235);
      if (lookahead == 'T') ADVANCE(257);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == ']') ADVANCE(221);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 't') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(178)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(179)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 4:
      if (lookahead == '?') ADVANCE(315);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'I') ADVANCE(49);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'U') ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'R') ADVANCE(87);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(82);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(80);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(214);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(188);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(191);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(196);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(186);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == 'I') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(16);
      if (lookahead == 'U') ADVANCE(53);
      if (lookahead == 'W') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead == 'G') ADVANCE(208);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 33:
      if (lookahead == 'F') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'G') ADVANCE(37);
      if (lookahead == 'V') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'G') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'G') ADVANCE(9);
      END_STATE();
    case 37:
      if (lookahead == 'G') ADVANCE(71);
      END_STATE();
    case 38:
      if (lookahead == 'G') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'H') ADVANCE(195);
      END_STATE();
    case 40:
      if (lookahead == 'H') ADVANCE(78);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'I') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'K') ADVANCE(20);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'L') ADVANCE(84);
      END_STATE();
    case 50:
      if (lookahead == 'L') ADVANCE(218);
      END_STATE();
    case 51:
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'M') ADVANCE(210);
      END_STATE();
    case 54:
      if (lookahead == 'M') ADVANCE(182);
      END_STATE();
    case 55:
      if (lookahead == 'N') ADVANCE(198);
      END_STATE();
    case 56:
      if (lookahead == 'N') ADVANCE(189);
      END_STATE();
    case 57:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'N') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 61:
      if (lookahead == 'O') ADVANCE(86);
      END_STATE();
    case 62:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 63:
      if (lookahead == 'O') ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == 'P') ADVANCE(185);
      END_STATE();
    case 66:
      if (lookahead == 'R') ADVANCE(8);
      END_STATE();
    case 67:
      if (lookahead == 'R') ADVANCE(215);
      END_STATE();
    case 68:
      if (lookahead == 'R') ADVANCE(183);
      END_STATE();
    case 69:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 71:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 72:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 73:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 74:
      if (lookahead == 'S') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 'T') ADVANCE(216);
      END_STATE();
    case 76:
      if (lookahead == 'T') ADVANCE(187);
      END_STATE();
    case 77:
      if (lookahead == 'T') ADVANCE(202);
      END_STATE();
    case 78:
      if (lookahead == 'T') ADVANCE(217);
      END_STATE();
    case 79:
      if (lookahead == 'T') ADVANCE(190);
      END_STATE();
    case 80:
      if (lookahead == 'T') ADVANCE(212);
      END_STATE();
    case 81:
      if (lookahead == 'T') ADVANCE(10);
      END_STATE();
    case 82:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 85:
      if (lookahead == 'U') ADVANCE(65);
      END_STATE();
    case 86:
      if (lookahead == 'U') ADVANCE(58);
      END_STATE();
    case 87:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 88:
      if (lookahead == 'V') ADVANCE(206);
      END_STATE();
    case 89:
      if (lookahead == 'V') ADVANCE(23);
      END_STATE();
    case 90:
      if (lookahead == 'X') ADVANCE(200);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(139);
      if (lookahead == 'w') ADVANCE(130);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(195);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 133:
      if (lookahead == 'k') ADVANCE(105);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(182);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 174:
      if (lookahead == 'v') ADVANCE(206);
      END_STATE();
    case 175:
      if (lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 176:
      if (lookahead == 'x') ADVANCE(200);
      END_STATE();
    case 177:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(177)
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == 'A') ADVANCE(266);
      if (lookahead == 'C') ADVANCE(255);
      if (lookahead == 'F') ADVANCE(235);
      if (lookahead == 'M') ADVANCE(236);
      if (lookahead == 'S') ADVANCE(260);
      if (lookahead == 'T') ADVANCE(257);
      if (lookahead == ']') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 'm') ADVANCE(270);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead == 't') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 178:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(178)
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == 'F') ADVANCE(235);
      if (lookahead == 'T') ADVANCE(257);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == ']') ADVANCE(221);
      if (lookahead == 'f') ADVANCE(269);
      if (lookahead == 't') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 179:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(179)
      if (lookahead == '#') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 180:
      if (eof) ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(180)
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '*') ADVANCE(305);
      if (lookahead == '+') ADVANCE(304);
      if (lookahead == ',') ADVANCE(220);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '<') ADVANCE(312);
      if (lookahead == '=') ADVANCE(308);
      if (lookahead == '>') ADVANCE(310);
      if (lookahead == '?') ADVANCE(4);
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'C') ADVANCE(61);
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'G') ADVANCE(72);
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead == 'J') ADVANCE(62);
      if (lookahead == 'L') ADVANCE(17);
      if (lookahead == 'M') ADVANCE(6);
      if (lookahead == 'R') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(7);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == ']') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'g') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'j') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '|') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(14);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(100);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead == '#') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(314);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(268);
      if (lookahead == 'I') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(256);
      if (lookahead == 'G') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(240);
      if (lookahead == 'U') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'g') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(321);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(226);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(230);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(321);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
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
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
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
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 320},
  [125] = {.lex_state = 228},
  [126] = {.lex_state = 224},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {(TSStateId)(-1)},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(129),
    [sym_pipeline] = STATE(105),
    [sym_from] = STATE(37),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_keyword_from] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(15), 1,
      anon_sym_RBRACK,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(2), 1,
      sym_comment,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(59), 1,
      sym_binary_expression,
    STATE(67), 1,
      sym__expression,
    STATE(100), 1,
      sym_aggregate_operation,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(18), 2,
      sym_literal,
      sym_field,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(11), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [68] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(3), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(29), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [107] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(64), 1,
      sym_binary_expression,
    STATE(67), 1,
      sym__expression,
    STATE(107), 1,
      sym_aggregate_operation,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(18), 2,
      sym_literal,
      sym_field,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(11), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [172] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_comment,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(64), 1,
      sym_binary_expression,
    STATE(67), 1,
      sym__expression,
    STATE(107), 1,
      sym_aggregate_operation,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(18), 2,
      sym_literal,
      sym_field,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(11), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [237] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__number,
    STATE(6), 1,
      sym_comment,
    ACTIONS(43), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(39), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [276] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_comment,
    ACTIONS(47), 4,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(45), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [313] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      sym__number,
    STATE(8), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [352] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [391] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_DOT,
    STATE(10), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [430] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_DOT,
    STATE(11), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [469] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 20,
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
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [507] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    STATE(13), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 17,
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
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [549] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    STATE(14), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(79), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(67), 14,
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
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [595] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 18,
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
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [635] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [671] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_DOT_DOT,
    ACTIONS(87), 1,
      anon_sym_QMARK_QMARK,
    STATE(17), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(79), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 3,
      anon_sym_EQ_EQ,
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
  [721] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [757] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(95), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [793] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(29), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [829] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [865] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [901] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(87), 1,
      anon_sym_QMARK_QMARK,
    STATE(23), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(79), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(67), 13,
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
      anon_sym_DOT_DOT,
  [949] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(83), 1,
      anon_sym_EQ,
    STATE(24), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(79), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(67), 14,
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
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [995] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [1031] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    ACTIONS(43), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(39), 22,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [1067] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(27), 1,
      sym_comment,
    STATE(64), 1,
      sym_binary_expression,
    STATE(67), 1,
      sym__expression,
    STATE(107), 1,
      sym_aggregate_operation,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(18), 2,
      sym_literal,
      sym_field,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(11), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1129] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(28), 1,
      sym_comment,
    ACTIONS(33), 3,
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
    ACTIONS(29), 10,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [1167] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_DOT_DOT,
    ACTIONS(87), 1,
      anon_sym_QMARK_QMARK,
    STATE(29), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(79), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(107), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [1214] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
    ACTIONS(89), 10,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [1249] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(31), 1,
      sym_comment,
    STATE(97), 1,
      sym_term,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1305] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(32), 1,
      sym_comment,
    STATE(61), 1,
      sym_binary_expression,
    STATE(101), 1,
      sym_term,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(18), 2,
      sym_literal,
      sym_field,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
  [1363] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(33), 1,
      sym_comment,
    STATE(62), 1,
      sym_binary_expression,
    STATE(67), 1,
      sym__expression,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(18), 2,
      sym_literal,
      sym_field,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
  [1418] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(34), 1,
      sym_comment,
    STATE(65), 1,
      sym_binary_expression,
    STATE(106), 1,
      sym_term,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(18), 2,
      sym_literal,
      sym_field,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
  [1473] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(35), 1,
      sym_comment,
    STATE(109), 1,
      sym_term,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1526] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(36), 1,
      sym_comment,
    STATE(65), 1,
      sym_binary_expression,
    STATE(106), 1,
      sym_term,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(18), 2,
      sym_literal,
      sym_field,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
  [1581] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      sym_keyword_filter,
    ACTIONS(133), 1,
      sym_keyword_derive,
    ACTIONS(135), 1,
      sym_keyword_aggregate,
    ACTIONS(137), 1,
      sym_keyword_sort,
    ACTIONS(139), 1,
      sym_keyword_take,
    ACTIONS(141), 1,
      sym_keyword_join,
    ACTIONS(143), 1,
      sym_keyword_select,
    STATE(37), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_transforms_repeat1,
    STATE(111), 1,
      sym_transforms,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(71), 7,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_joins,
      sym_select,
  [1628] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(38), 1,
      sym_comment,
    STATE(80), 1,
      sym_term,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1681] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(39), 1,
      sym_comment,
    STATE(109), 1,
      sym_term,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1734] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(9), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(40), 1,
      sym_comment,
    STATE(109), 1,
      sym_term,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1784] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(9), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(41), 1,
      sym_comment,
    STATE(81), 1,
      sym_term,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1834] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      sym_keyword_filter,
    ACTIONS(133), 1,
      sym_keyword_derive,
    ACTIONS(135), 1,
      sym_keyword_aggregate,
    ACTIONS(137), 1,
      sym_keyword_sort,
    ACTIONS(139), 1,
      sym_keyword_take,
    ACTIONS(141), 1,
      sym_keyword_join,
    ACTIONS(143), 1,
      sym_keyword_select,
    STATE(42), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(71), 7,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_joins,
      sym_select,
  [1878] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(9), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(43), 1,
      sym_comment,
    STATE(68), 1,
      sym_term,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1928] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(9), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(44), 1,
      sym_comment,
    STATE(65), 1,
      sym_binary_expression,
    STATE(106), 1,
      sym_term,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(18), 2,
      sym_literal,
      sym_field,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
  [1980] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_comment,
    STATE(63), 1,
      sym_binary_expression,
    STATE(67), 1,
      sym__expression,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(18), 2,
      sym_literal,
      sym_field,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
  [2032] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_comment,
    STATE(63), 1,
      sym_binary_expression,
    STATE(67), 1,
      sym__expression,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(18), 2,
      sym_literal,
      sym_field,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
  [2084] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      sym_keyword_filter,
    ACTIONS(160), 1,
      sym_keyword_derive,
    ACTIONS(163), 1,
      sym_keyword_aggregate,
    ACTIONS(166), 1,
      sym_keyword_sort,
    ACTIONS(169), 1,
      sym_keyword_take,
    ACTIONS(172), 1,
      sym_keyword_join,
    ACTIONS(175), 1,
      sym_keyword_select,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(47), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(71), 7,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_joins,
      sym_select,
  [2126] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(9), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(48), 1,
      sym_comment,
    STATE(78), 1,
      sym_term,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2176] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(29), 1,
      sym__expression,
    STATE(49), 1,
      sym_comment,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2223] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(50), 1,
      sym_comment,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2270] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(13), 1,
      sym__expression,
    STATE(51), 1,
      sym_comment,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2317] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(52), 1,
      sym_comment,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2364] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(24), 1,
      sym__expression,
    STATE(53), 1,
      sym_comment,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2411] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(14), 1,
      sym__expression,
    STATE(54), 1,
      sym_comment,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2458] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(12), 1,
      sym__expression,
    STATE(55), 1,
      sym_comment,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2505] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_comment,
    STATE(63), 1,
      sym_binary_expression,
    STATE(67), 1,
      sym__expression,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(18), 2,
      sym_literal,
      sym_field,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
  [2554] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(15), 1,
      sym__expression,
    STATE(57), 1,
      sym_comment,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2601] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__number,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(30), 1,
      sym_binary_expression,
    STATE(58), 1,
      sym_comment,
    STATE(67), 1,
      sym__expression,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(18), 2,
      sym_literal,
      sym_field,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
  [2650] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 10,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [2683] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym__number,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(11), 1,
      sym__double_quote_string,
    STATE(60), 1,
      sym_comment,
    STATE(66), 1,
      sym__expression,
    STATE(121), 1,
      sym__alias_identifier,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(20), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2730] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_derives_repeat1,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 12,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [2759] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 10,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [2792] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(63), 1,
      sym_comment,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 10,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [2820] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 10,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [2848] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 12,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [2874] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_DOT_DOT,
    ACTIONS(87), 1,
      anon_sym_QMARK_QMARK,
    STATE(66), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(79), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(77), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2914] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_DOT_DOT,
    ACTIONS(87), 1,
      anon_sym_QMARK_QMARK,
    STATE(67), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(79), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2950] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      sym_comment,
    STATE(83), 1,
      sym_conditions,
    ACTIONS(194), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2974] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym_comment,
    ACTIONS(198), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2992] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym_comment,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3010] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(71), 1,
      sym_comment,
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
  [3028] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym_comment,
    ACTIONS(204), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [3046] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(73), 1,
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
  [3064] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(74), 1,
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
  [3082] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(75), 1,
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
  [3100] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(76), 1,
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
  [3118] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(77), 1,
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
  [3136] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(78), 1,
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
  [3154] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(79), 1,
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
  [3172] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(80), 1,
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
  [3190] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(81), 1,
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
  [3208] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(82), 1,
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
  [3226] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(83), 1,
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
  [3244] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(84), 1,
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
  [3262] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(85), 1,
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
  [3280] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(86), 1,
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
  [3298] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(87), 1,
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
  [3316] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(88), 1,
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
  [3334] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(89), 1,
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
  [3352] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(90), 1,
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
  [3370] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      sym_keyword_from,
    STATE(37), 1,
      sym_from,
    STATE(105), 1,
      sym_pipeline,
    STATE(91), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [3390] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_from,
    STATE(91), 1,
      aux_sym_program_repeat1,
    STATE(92), 1,
      sym_comment,
    STATE(105), 1,
      sym_pipeline,
  [3412] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(249), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [3425] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_selects_repeat1,
  [3441] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_derives_repeat1,
  [3457] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(96), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [3471] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym_selects_repeat1,
    STATE(97), 1,
      sym_comment,
  [3487] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(98), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [3501] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_aggregate_repeat1,
  [3517] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      aux_sym_aggregate_repeat1,
    STATE(100), 1,
      sym_comment,
  [3533] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      aux_sym_derives_repeat1,
    STATE(101), 1,
      sym_comment,
  [3549] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(102), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [3563] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_conditions_repeat1,
    STATE(103), 1,
      sym_comment,
  [3579] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(104), 2,
      sym_comment,
      aux_sym_selects_repeat1,
  [3593] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(105), 1,
      sym_comment,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [3604] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(106), 1,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3615] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3626] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(285), 1,
      sym__number,
    ACTIONS(287), 1,
      anon_sym_DOT,
    STATE(108), 1,
      sym_comment,
  [3639] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(109), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3650] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_selects,
    STATE(110), 1,
      sym_comment,
  [3663] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(111), 1,
      sym_comment,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [3674] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(112), 1,
      sym_comment,
  [3684] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      sym_comment,
  [3694] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    STATE(114), 1,
      sym_comment,
  [3704] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      sym_comment,
  [3714] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__number,
    STATE(116), 1,
      sym_comment,
  [3724] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(117), 1,
      sym_comment,
  [3734] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      sym_keyword_side,
    STATE(118), 1,
      sym_comment,
  [3744] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      sym_comment,
  [3754] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    STATE(120), 1,
      sym_comment,
  [3764] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      anon_sym_DOT,
    STATE(121), 1,
      sym_comment,
  [3774] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(307), 1,
      sym__number,
    STATE(122), 1,
      sym_comment,
  [3784] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      anon_sym_COLON,
    STATE(123), 1,
      sym_comment,
  [3794] = 3,
    ACTIONS(311), 1,
      anon_sym_POUND,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    STATE(124), 1,
      sym_comment,
  [3804] = 3,
    ACTIONS(311), 1,
      anon_sym_POUND,
    ACTIONS(315), 1,
      aux_sym__literal_string_token1,
    STATE(125), 1,
      sym_comment,
  [3814] = 3,
    ACTIONS(311), 1,
      anon_sym_POUND,
    ACTIONS(317), 1,
      aux_sym__double_quote_string_token1,
    STATE(126), 1,
      sym_comment,
  [3824] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      sym_comment,
  [3834] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym_comment,
  [3844] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_comment,
  [3854] = 1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 107,
  [SMALL_STATE(5)] = 172,
  [SMALL_STATE(6)] = 237,
  [SMALL_STATE(7)] = 276,
  [SMALL_STATE(8)] = 313,
  [SMALL_STATE(9)] = 352,
  [SMALL_STATE(10)] = 391,
  [SMALL_STATE(11)] = 430,
  [SMALL_STATE(12)] = 469,
  [SMALL_STATE(13)] = 507,
  [SMALL_STATE(14)] = 549,
  [SMALL_STATE(15)] = 595,
  [SMALL_STATE(16)] = 635,
  [SMALL_STATE(17)] = 671,
  [SMALL_STATE(18)] = 721,
  [SMALL_STATE(19)] = 757,
  [SMALL_STATE(20)] = 793,
  [SMALL_STATE(21)] = 829,
  [SMALL_STATE(22)] = 865,
  [SMALL_STATE(23)] = 901,
  [SMALL_STATE(24)] = 949,
  [SMALL_STATE(25)] = 995,
  [SMALL_STATE(26)] = 1031,
  [SMALL_STATE(27)] = 1067,
  [SMALL_STATE(28)] = 1129,
  [SMALL_STATE(29)] = 1167,
  [SMALL_STATE(30)] = 1214,
  [SMALL_STATE(31)] = 1249,
  [SMALL_STATE(32)] = 1305,
  [SMALL_STATE(33)] = 1363,
  [SMALL_STATE(34)] = 1418,
  [SMALL_STATE(35)] = 1473,
  [SMALL_STATE(36)] = 1526,
  [SMALL_STATE(37)] = 1581,
  [SMALL_STATE(38)] = 1628,
  [SMALL_STATE(39)] = 1681,
  [SMALL_STATE(40)] = 1734,
  [SMALL_STATE(41)] = 1784,
  [SMALL_STATE(42)] = 1834,
  [SMALL_STATE(43)] = 1878,
  [SMALL_STATE(44)] = 1928,
  [SMALL_STATE(45)] = 1980,
  [SMALL_STATE(46)] = 2032,
  [SMALL_STATE(47)] = 2084,
  [SMALL_STATE(48)] = 2126,
  [SMALL_STATE(49)] = 2176,
  [SMALL_STATE(50)] = 2223,
  [SMALL_STATE(51)] = 2270,
  [SMALL_STATE(52)] = 2317,
  [SMALL_STATE(53)] = 2364,
  [SMALL_STATE(54)] = 2411,
  [SMALL_STATE(55)] = 2458,
  [SMALL_STATE(56)] = 2505,
  [SMALL_STATE(57)] = 2554,
  [SMALL_STATE(58)] = 2601,
  [SMALL_STATE(59)] = 2650,
  [SMALL_STATE(60)] = 2683,
  [SMALL_STATE(61)] = 2730,
  [SMALL_STATE(62)] = 2759,
  [SMALL_STATE(63)] = 2792,
  [SMALL_STATE(64)] = 2820,
  [SMALL_STATE(65)] = 2848,
  [SMALL_STATE(66)] = 2874,
  [SMALL_STATE(67)] = 2914,
  [SMALL_STATE(68)] = 2950,
  [SMALL_STATE(69)] = 2974,
  [SMALL_STATE(70)] = 2992,
  [SMALL_STATE(71)] = 3010,
  [SMALL_STATE(72)] = 3028,
  [SMALL_STATE(73)] = 3046,
  [SMALL_STATE(74)] = 3064,
  [SMALL_STATE(75)] = 3082,
  [SMALL_STATE(76)] = 3100,
  [SMALL_STATE(77)] = 3118,
  [SMALL_STATE(78)] = 3136,
  [SMALL_STATE(79)] = 3154,
  [SMALL_STATE(80)] = 3172,
  [SMALL_STATE(81)] = 3190,
  [SMALL_STATE(82)] = 3208,
  [SMALL_STATE(83)] = 3226,
  [SMALL_STATE(84)] = 3244,
  [SMALL_STATE(85)] = 3262,
  [SMALL_STATE(86)] = 3280,
  [SMALL_STATE(87)] = 3298,
  [SMALL_STATE(88)] = 3316,
  [SMALL_STATE(89)] = 3334,
  [SMALL_STATE(90)] = 3352,
  [SMALL_STATE(91)] = 3370,
  [SMALL_STATE(92)] = 3390,
  [SMALL_STATE(93)] = 3412,
  [SMALL_STATE(94)] = 3425,
  [SMALL_STATE(95)] = 3441,
  [SMALL_STATE(96)] = 3457,
  [SMALL_STATE(97)] = 3471,
  [SMALL_STATE(98)] = 3487,
  [SMALL_STATE(99)] = 3501,
  [SMALL_STATE(100)] = 3517,
  [SMALL_STATE(101)] = 3533,
  [SMALL_STATE(102)] = 3549,
  [SMALL_STATE(103)] = 3563,
  [SMALL_STATE(104)] = 3579,
  [SMALL_STATE(105)] = 3593,
  [SMALL_STATE(106)] = 3604,
  [SMALL_STATE(107)] = 3615,
  [SMALL_STATE(108)] = 3626,
  [SMALL_STATE(109)] = 3639,
  [SMALL_STATE(110)] = 3650,
  [SMALL_STATE(111)] = 3663,
  [SMALL_STATE(112)] = 3674,
  [SMALL_STATE(113)] = 3684,
  [SMALL_STATE(114)] = 3694,
  [SMALL_STATE(115)] = 3704,
  [SMALL_STATE(116)] = 3714,
  [SMALL_STATE(117)] = 3724,
  [SMALL_STATE(118)] = 3734,
  [SMALL_STATE(119)] = 3744,
  [SMALL_STATE(120)] = 3754,
  [SMALL_STATE(121)] = 3764,
  [SMALL_STATE(122)] = 3774,
  [SMALL_STATE(123)] = 3784,
  [SMALL_STATE(124)] = 3794,
  [SMALL_STATE(125)] = 3804,
  [SMALL_STATE(126)] = 3814,
  [SMALL_STATE(127)] = 3824,
  [SMALL_STATE(128)] = 3834,
  [SMALL_STATE(129)] = 3844,
  [SMALL_STATE(130)] = 3854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 7),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(49),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(38),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(120),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(48),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(58),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(118),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(110),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 6),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(56),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(44),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(27),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selects_repeat1, 2), SHIFT_REPEAT(40),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selects_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [319] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
