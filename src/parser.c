#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

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
  anon_sym_LBRACK = 21,
  anon_sym_COMMA = 22,
  anon_sym_RBRACK = 23,
  anon_sym_DQUOTE = 24,
  aux_sym__double_quote_string_token1 = 25,
  anon_sym_SQUOTE = 26,
  aux_sym__literal_string_token1 = 27,
  sym__number = 28,
  anon_sym_DASH = 29,
  anon_sym_DOT = 30,
  sym_identifier = 31,
  anon_sym_PLUS = 32,
  anon_sym_STAR = 33,
  anon_sym_SLASH = 34,
  anon_sym_PIPE = 35,
  anon_sym_EQ = 36,
  anon_sym_EQ_EQ = 37,
  anon_sym_GT = 38,
  anon_sym_GT_EQ = 39,
  anon_sym_LT = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_DOT_DOT = 42,
  anon_sym_QMARK_QMARK = 43,
  anon_sym_POUND = 44,
  aux_sym_comment_token1 = 45,
  sym_program = 46,
  sym_pipeline = 47,
  sym_transforms = 48,
  sym_from = 49,
  sym_derives = 50,
  sym_filter = 51,
  sym_aggregate = 52,
  sym_aggregate_operation = 53,
  sym_sorts = 54,
  sym_takes = 55,
  sym_joins = 56,
  sym_select = 57,
  sym_selects = 58,
  sym_term = 59,
  sym__expression = 60,
  sym_literal = 61,
  sym__double_quote_string = 62,
  sym__literal_string = 63,
  sym__decimal_number = 64,
  sym_field = 65,
  sym_binary_expression = 66,
  sym_comment = 67,
  aux_sym_program_repeat1 = 68,
  aux_sym_transforms_repeat1 = 69,
  aux_sym_derives_repeat1 = 70,
  aux_sym_aggregate_repeat1 = 71,
  aux_sym_selects_repeat1 = 72,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
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
  [sym_select] = "select",
  [sym_selects] = "selects",
  [sym_term] = "term",
  [sym__expression] = "_expression",
  [sym_literal] = "literal",
  [sym__double_quote_string] = "_double_quote_string",
  [sym__literal_string] = "_literal_string",
  [sym__decimal_number] = "_decimal_number",
  [sym_field] = "field",
  [sym_binary_expression] = "binary_expression",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_transforms_repeat1] = "transforms_repeat1",
  [aux_sym_derives_repeat1] = "derives_repeat1",
  [aux_sym_aggregate_repeat1] = "aggregate_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_select] = sym_select,
  [sym_selects] = sym_selects,
  [sym_term] = sym_term,
  [sym__expression] = sym__expression,
  [sym_literal] = sym_literal,
  [sym__double_quote_string] = sym__double_quote_string,
  [sym__literal_string] = sym__literal_string,
  [sym__decimal_number] = sym__decimal_number,
  [sym_field] = sym_field,
  [sym_binary_expression] = sym_binary_expression,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_transforms_repeat1] = aux_sym_transforms_repeat1,
  [aux_sym_derives_repeat1] = aux_sym_derives_repeat1,
  [aux_sym_aggregate_repeat1] = aux_sym_aggregate_repeat1,
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
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_predicate] = "predicate",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 3},
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [1] = sym_term,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(149);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '+') ADVANCE(266);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == '<') ADVANCE(274);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '>') ADVANCE(272);
      if (lookahead == '?') ADVANCE(3);
      if (lookahead == 'A') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(4);
      if (lookahead == 'G') ADVANCE(58);
      if (lookahead == 'J') ADVANCE(49);
      if (lookahead == 'M') ADVANCE(5);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(6);
      if (lookahead == '[') ADVANCE(182);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == 'j') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '|') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == 'A') ADVANCE(228);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'F') ADVANCE(197);
      if (lookahead == 'M') ADVANCE(198);
      if (lookahead == 'S') ADVANCE(222);
      if (lookahead == 'T') ADVANCE(219);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == 'F') ADVANCE(197);
      if (lookahead == 'T') ADVANCE(219);
      if (lookahead == '[') ADVANCE(182);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(231);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 3:
      if (lookahead == '?') ADVANCE(277);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(39);
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead == 'R') ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(74);
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(159);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(161);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(41);
      if (lookahead == 'O') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == 'U') ADVANCE(42);
      if (lookahead == 'W') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == 'G') ADVANCE(176);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'G') ADVANCE(30);
      if (lookahead == 'V') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'G') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 'G') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'G') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'H') ADVANCE(163);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'K') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 41:
      if (lookahead == 'L') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 'M') ADVANCE(178);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(150);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(166);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(157);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 48:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 52:
      if (lookahead == 'P') ADVANCE(153);
      END_STATE();
    case 53:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 54:
      if (lookahead == 'R') ADVANCE(151);
      END_STATE();
    case 55:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 57:
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(155);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(170);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(158);
      END_STATE();
    case 64:
      if (lookahead == 'T') ADVANCE(180);
      END_STATE();
    case 65:
      if (lookahead == 'T') ADVANCE(9);
      END_STATE();
    case 66:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 67:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 69:
      if (lookahead == 'U') ADVANCE(52);
      END_STATE();
    case 70:
      if (lookahead == 'U') ADVANCE(46);
      END_STATE();
    case 71:
      if (lookahead == 'U') ADVANCE(17);
      END_STATE();
    case 72:
      if (lookahead == 'V') ADVANCE(174);
      END_STATE();
    case 73:
      if (lookahead == 'V') ADVANCE(19);
      END_STATE();
    case 74:
      if (lookahead == 'X') ADVANCE(168);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(113);
      if (lookahead == 'w') ADVANCE(107);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead == 'v') ADVANCE(97);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 109:
      if (lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 143:
      if (lookahead == 'v') ADVANCE(174);
      END_STATE();
    case 144:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 145:
      if (lookahead == 'x') ADVANCE(168);
      END_STATE();
    case 146:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == 'A') ADVANCE(228);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'F') ADVANCE(197);
      if (lookahead == 'M') ADVANCE(198);
      if (lookahead == 'S') ADVANCE(222);
      if (lookahead == 'T') ADVANCE(219);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 147:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == 'F') ADVANCE(197);
      if (lookahead == 'T') ADVANCE(219);
      if (lookahead == '[') ADVANCE(182);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(231);
      if (lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 148:
      if (eof) ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (lookahead == '"') ADVANCE(185);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '+') ADVANCE(266);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead == '<') ADVANCE(274);
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '>') ADVANCE(272);
      if (lookahead == '?') ADVANCE(3);
      if (lookahead == 'A') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(4);
      if (lookahead == 'G') ADVANCE(58);
      if (lookahead == 'J') ADVANCE(49);
      if (lookahead == 'M') ADVANCE(5);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(6);
      if (lookahead == '[') ADVANCE(182);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == 'j') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '|') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(276);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(230);
      if (lookahead == 'I') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(218);
      if (lookahead == 'G') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(202);
      if (lookahead == 'U') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'g') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == 'u') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(192);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
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
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
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
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
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
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 190},
  [96] = {.lex_state = 186},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 282},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {(TSStateId)(-1)},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_program] = STATE(106),
    [sym_pipeline] = STATE(92),
    [sym_from] = STATE(30),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(77),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_keyword_from] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
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
    STATE(22), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_binary_expression,
    STATE(57), 1,
      sym__expression,
    STATE(80), 1,
      sym_aggregate_operation,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 2,
      sym_literal,
      sym_field,
    ACTIONS(11), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [65] = 17,
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
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_comment,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(52), 1,
      sym_binary_expression,
    STATE(57), 1,
      sym__expression,
    STATE(93), 1,
      sym_aggregate_operation,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 2,
      sym_literal,
      sym_field,
    ACTIONS(11), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [127] = 17,
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
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(52), 1,
      sym_binary_expression,
    STATE(57), 1,
      sym__expression,
    STATE(93), 1,
      sym_aggregate_operation,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 2,
      sym_literal,
      sym_field,
    ACTIONS(11), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [189] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      sym__number,
    STATE(5), 1,
      sym_comment,
    ACTIONS(37), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(33), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [227] = 5,
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
    ACTIONS(39), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [265] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(45), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [303] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 19,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [340] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(45), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [375] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    STATE(10), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(51), 13,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [418] = 16,
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
      sym_comment,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(52), 1,
      sym_binary_expression,
    STATE(57), 1,
      sym__expression,
    STATE(93), 1,
      sym_aggregate_operation,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 2,
      sym_literal,
      sym_field,
    ACTIONS(11), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [477] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(67), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [512] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_DOT_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK_QMARK,
    STATE(13), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(69), 11,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [559] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [594] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [629] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(55), 3,
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
  [664] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      anon_sym_QMARK_QMARK,
    STATE(17), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(51), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
  [709] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [744] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(37), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(33), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [779] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(55), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [818] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [853] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [888] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(43), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(39), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [923] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(93), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
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
  [958] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(55), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
  [999] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
    ACTIONS(45), 10,
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
  [1037] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
    ACTIONS(79), 10,
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
  [1072] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_DOT_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK_QMARK,
    STATE(28), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [1117] = 17,
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
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      sym__expression,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(29), 1,
      sym_comment,
    STATE(39), 1,
      sym_binary_expression,
    STATE(85), 1,
      sym_term,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 2,
      sym_literal,
      sym_field,
  [1172] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      sym_keyword_filter,
    ACTIONS(109), 1,
      sym_keyword_derive,
    ACTIONS(111), 1,
      sym_keyword_aggregate,
    ACTIONS(113), 1,
      sym_keyword_sort,
    ACTIONS(115), 1,
      sym_keyword_take,
    ACTIONS(117), 1,
      sym_keyword_join,
    ACTIONS(119), 1,
      sym_keyword_select,
    STATE(30), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_transforms_repeat1,
    STATE(88), 1,
      sym_transforms,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(74), 7,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_joins,
      sym_select,
  [1219] = 16,
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
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      sym__expression,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(31), 1,
      sym_comment,
    STATE(78), 1,
      sym_term,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1272] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      sym_keyword_filter,
    ACTIONS(109), 1,
      sym_keyword_derive,
    ACTIONS(111), 1,
      sym_keyword_aggregate,
    ACTIONS(113), 1,
      sym_keyword_sort,
    ACTIONS(115), 1,
      sym_keyword_take,
    ACTIONS(117), 1,
      sym_keyword_join,
    ACTIONS(119), 1,
      sym_keyword_select,
    STATE(32), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(74), 7,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_joins,
      sym_select,
  [1316] = 15,
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
    STATE(13), 1,
      sym__expression,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(33), 1,
      sym_comment,
    STATE(87), 1,
      sym_term,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1366] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      sym_keyword_filter,
    ACTIONS(134), 1,
      sym_keyword_derive,
    ACTIONS(137), 1,
      sym_keyword_aggregate,
    ACTIONS(140), 1,
      sym_keyword_sort,
    ACTIONS(143), 1,
      sym_keyword_take,
    ACTIONS(146), 1,
      sym_keyword_join,
    ACTIONS(149), 1,
      sym_keyword_select,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(34), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(74), 7,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_joins,
      sym_select,
  [1408] = 16,
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
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      sym__expression,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym_comment,
    STATE(50), 1,
      sym_binary_expression,
    STATE(90), 1,
      sym_term,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 2,
      sym_literal,
      sym_field,
  [1460] = 15,
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
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      sym__expression,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(36), 1,
      sym_comment,
    STATE(87), 1,
      sym_term,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1510] = 15,
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
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      sym__expression,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(37), 1,
      sym_comment,
    STATE(62), 1,
      sym_term,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1560] = 16,
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
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      sym__expression,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(38), 1,
      sym_comment,
    STATE(50), 1,
      sym_binary_expression,
    STATE(90), 1,
      sym_term,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 2,
      sym_literal,
      sym_field,
  [1612] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_derives_repeat1,
    ACTIONS(81), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 12,
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
  [1641] = 14,
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
    STATE(13), 1,
      sym__expression,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym_comment,
    STATE(68), 1,
      sym_term,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1688] = 14,
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
    STATE(13), 1,
      sym__expression,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(41), 1,
      sym_comment,
    STATE(87), 1,
      sym_term,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1735] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(81), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 10,
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
  [1768] = 15,
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
    STATE(13), 1,
      sym__expression,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(43), 1,
      sym_comment,
    STATE(50), 1,
      sym_binary_expression,
    STATE(90), 1,
      sym_term,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 2,
      sym_literal,
      sym_field,
  [1817] = 14,
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
    STATE(13), 1,
      sym__expression,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(44), 1,
      sym_comment,
    STATE(61), 1,
      sym_term,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1864] = 14,
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
    ACTIONS(164), 1,
      sym__number,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(27), 1,
      sym_binary_expression,
    STATE(45), 1,
      sym_comment,
    STATE(57), 1,
      sym__expression,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 2,
      sym_literal,
      sym_field,
  [1910] = 13,
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
    STATE(22), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_comment,
    STATE(47), 1,
      sym__expression,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1954] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_DOT_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK_QMARK,
    STATE(47), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1992] = 13,
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
    STATE(22), 1,
      sym__double_quote_string,
    STATE(28), 1,
      sym__expression,
    STATE(48), 1,
      sym_comment,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2036] = 13,
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
    STATE(10), 1,
      sym__expression,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(49), 1,
      sym_comment,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2080] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 12,
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
  [2106] = 13,
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
    STATE(17), 1,
      sym__expression,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(51), 1,
      sym_comment,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2150] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(81), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 10,
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
  [2178] = 13,
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
    STATE(22), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(53), 1,
      sym_comment,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2222] = 13,
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
    STATE(20), 1,
      sym__expression,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(54), 1,
      sym_comment,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2266] = 13,
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
    STATE(8), 1,
      sym__expression,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(55), 1,
      sym_comment,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2310] = 13,
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
    STATE(16), 1,
      sym__expression,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_comment,
    ACTIONS(9), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2354] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_DOT_DOT,
    ACTIONS(73), 1,
      anon_sym_QMARK_QMARK,
    STATE(57), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [2388] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym_comment,
    ACTIONS(170), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2406] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(59), 1,
      sym_comment,
    ACTIONS(172), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2424] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym_comment,
    ACTIONS(174), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2442] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_comment,
    ACTIONS(176), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2460] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_comment,
    ACTIONS(178), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2478] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(63), 1,
      sym_comment,
    ACTIONS(180), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2496] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_comment,
    ACTIONS(182), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2514] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym_comment,
    ACTIONS(184), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2532] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym_comment,
    ACTIONS(186), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2550] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym_comment,
    ACTIONS(188), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2568] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym_comment,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2586] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym_comment,
    ACTIONS(192), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2604] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym_comment,
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
  [2622] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(71), 1,
      sym_comment,
    ACTIONS(196), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2640] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(72), 1,
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
  [2658] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(73), 1,
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
  [2676] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(74), 1,
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
  [2694] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(75), 1,
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
  [2712] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      sym_keyword_from,
    STATE(30), 1,
      sym_from,
    STATE(92), 1,
      sym_pipeline,
    STATE(76), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [2732] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_from,
    STATE(76), 1,
      aux_sym_program_repeat1,
    STATE(77), 1,
      sym_comment,
    STATE(92), 1,
      sym_pipeline,
  [2754] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_selects_repeat1,
  [2770] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_derives_repeat1,
  [2786] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_aggregate_repeat1,
  [2802] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(81), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [2816] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_aggregate_repeat1,
    STATE(82), 1,
      sym_comment,
  [2832] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(83), 2,
      sym_comment,
      aux_sym_selects_repeat1,
  [2846] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_selects_repeat1,
    STATE(84), 1,
      sym_comment,
  [2862] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_derives_repeat1,
    STATE(85), 1,
      sym_comment,
  [2878] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(86), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [2892] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2903] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym_comment,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [2914] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    STATE(60), 1,
      sym_selects,
    STATE(89), 1,
      sym_comment,
  [2927] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym_comment,
    ACTIONS(238), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2938] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      sym__number,
    ACTIONS(246), 1,
      anon_sym_DOT,
    STATE(91), 1,
      sym_comment,
  [2951] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(92), 1,
      sym_comment,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [2962] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2973] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym_comment,
  [2983] = 3,
    ACTIONS(252), 1,
      aux_sym__literal_string_token1,
    ACTIONS(254), 1,
      anon_sym_POUND,
    STATE(95), 1,
      sym_comment,
  [2993] = 3,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(256), 1,
      aux_sym__double_quote_string_token1,
    STATE(96), 1,
      sym_comment,
  [3003] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      sym__number,
    STATE(97), 1,
      sym_comment,
  [3013] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__number,
    STATE(98), 1,
      sym_comment,
  [3023] = 3,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(260), 1,
      aux_sym_comment_token1,
    STATE(99), 1,
      sym_comment,
  [3033] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      sym_comment,
  [3043] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      sym_comment,
  [3053] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_comment,
  [3063] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    STATE(103), 1,
      sym_comment,
  [3073] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym_comment,
  [3083] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(266), 1,
      anon_sym_DOT,
    STATE(105), 1,
      sym_comment,
  [3093] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym_comment,
  [3103] = 1,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 127,
  [SMALL_STATE(5)] = 189,
  [SMALL_STATE(6)] = 227,
  [SMALL_STATE(7)] = 265,
  [SMALL_STATE(8)] = 303,
  [SMALL_STATE(9)] = 340,
  [SMALL_STATE(10)] = 375,
  [SMALL_STATE(11)] = 418,
  [SMALL_STATE(12)] = 477,
  [SMALL_STATE(13)] = 512,
  [SMALL_STATE(14)] = 559,
  [SMALL_STATE(15)] = 594,
  [SMALL_STATE(16)] = 629,
  [SMALL_STATE(17)] = 664,
  [SMALL_STATE(18)] = 709,
  [SMALL_STATE(19)] = 744,
  [SMALL_STATE(20)] = 779,
  [SMALL_STATE(21)] = 818,
  [SMALL_STATE(22)] = 853,
  [SMALL_STATE(23)] = 888,
  [SMALL_STATE(24)] = 923,
  [SMALL_STATE(25)] = 958,
  [SMALL_STATE(26)] = 999,
  [SMALL_STATE(27)] = 1037,
  [SMALL_STATE(28)] = 1072,
  [SMALL_STATE(29)] = 1117,
  [SMALL_STATE(30)] = 1172,
  [SMALL_STATE(31)] = 1219,
  [SMALL_STATE(32)] = 1272,
  [SMALL_STATE(33)] = 1316,
  [SMALL_STATE(34)] = 1366,
  [SMALL_STATE(35)] = 1408,
  [SMALL_STATE(36)] = 1460,
  [SMALL_STATE(37)] = 1510,
  [SMALL_STATE(38)] = 1560,
  [SMALL_STATE(39)] = 1612,
  [SMALL_STATE(40)] = 1641,
  [SMALL_STATE(41)] = 1688,
  [SMALL_STATE(42)] = 1735,
  [SMALL_STATE(43)] = 1768,
  [SMALL_STATE(44)] = 1817,
  [SMALL_STATE(45)] = 1864,
  [SMALL_STATE(46)] = 1910,
  [SMALL_STATE(47)] = 1954,
  [SMALL_STATE(48)] = 1992,
  [SMALL_STATE(49)] = 2036,
  [SMALL_STATE(50)] = 2080,
  [SMALL_STATE(51)] = 2106,
  [SMALL_STATE(52)] = 2150,
  [SMALL_STATE(53)] = 2178,
  [SMALL_STATE(54)] = 2222,
  [SMALL_STATE(55)] = 2266,
  [SMALL_STATE(56)] = 2310,
  [SMALL_STATE(57)] = 2354,
  [SMALL_STATE(58)] = 2388,
  [SMALL_STATE(59)] = 2406,
  [SMALL_STATE(60)] = 2424,
  [SMALL_STATE(61)] = 2442,
  [SMALL_STATE(62)] = 2460,
  [SMALL_STATE(63)] = 2478,
  [SMALL_STATE(64)] = 2496,
  [SMALL_STATE(65)] = 2514,
  [SMALL_STATE(66)] = 2532,
  [SMALL_STATE(67)] = 2550,
  [SMALL_STATE(68)] = 2568,
  [SMALL_STATE(69)] = 2586,
  [SMALL_STATE(70)] = 2604,
  [SMALL_STATE(71)] = 2622,
  [SMALL_STATE(72)] = 2640,
  [SMALL_STATE(73)] = 2658,
  [SMALL_STATE(74)] = 2676,
  [SMALL_STATE(75)] = 2694,
  [SMALL_STATE(76)] = 2712,
  [SMALL_STATE(77)] = 2732,
  [SMALL_STATE(78)] = 2754,
  [SMALL_STATE(79)] = 2770,
  [SMALL_STATE(80)] = 2786,
  [SMALL_STATE(81)] = 2802,
  [SMALL_STATE(82)] = 2816,
  [SMALL_STATE(83)] = 2832,
  [SMALL_STATE(84)] = 2846,
  [SMALL_STATE(85)] = 2862,
  [SMALL_STATE(86)] = 2878,
  [SMALL_STATE(87)] = 2892,
  [SMALL_STATE(88)] = 2903,
  [SMALL_STATE(89)] = 2914,
  [SMALL_STATE(90)] = 2927,
  [SMALL_STATE(91)] = 2938,
  [SMALL_STATE(92)] = 2951,
  [SMALL_STATE(93)] = 2962,
  [SMALL_STATE(94)] = 2973,
  [SMALL_STATE(95)] = 2983,
  [SMALL_STATE(96)] = 2993,
  [SMALL_STATE(97)] = 3003,
  [SMALL_STATE(98)] = 3013,
  [SMALL_STATE(99)] = 3023,
  [SMALL_STATE(100)] = 3033,
  [SMALL_STATE(101)] = 3043,
  [SMALL_STATE(102)] = 3053,
  [SMALL_STATE(103)] = 3063,
  [SMALL_STATE(104)] = 3073,
  [SMALL_STATE(105)] = 3083,
  [SMALL_STATE(106)] = 3093,
  [SMALL_STATE(107)] = 3103,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(48),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(37),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(94),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(44),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(45),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(72),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(89),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(40),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(11),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selects_repeat1, 2), SHIFT_REPEAT(41),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selects_repeat1, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(43),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [268] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
