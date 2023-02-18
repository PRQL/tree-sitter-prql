#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
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
  sym_program = 44,
  sym_pipeline = 45,
  sym_transforms = 46,
  sym_from = 47,
  sym_derives = 48,
  sym_filter = 49,
  sym_aggregate = 50,
  sym_aggregate_operation = 51,
  sym_sorts = 52,
  sym_takes = 53,
  sym_joins = 54,
  sym_select = 55,
  sym_selects = 56,
  sym_term = 57,
  sym__expression = 58,
  sym_literal = 59,
  sym__double_quote_string = 60,
  sym__literal_string = 61,
  sym__decimal_number = 62,
  sym_field = 63,
  sym_binary_expression = 64,
  aux_sym_program_repeat1 = 65,
  aux_sym_transforms_repeat1 = 66,
  aux_sym_derives_repeat1 = 67,
  aux_sym_aggregate_repeat1 = 68,
  aux_sym_selects_repeat1 = 69,
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
      if (eof) ADVANCE(146);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead == '+') ADVANCE(261);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(191);
      if (lookahead == '/') ADVANCE(263);
      if (lookahead == '<') ADVANCE(269);
      if (lookahead == '=') ADVANCE(265);
      if (lookahead == '>') ADVANCE(267);
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
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == 'j') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == '|') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == 'A') ADVANCE(223);
      if (lookahead == 'C') ADVANCE(212);
      if (lookahead == 'F') ADVANCE(192);
      if (lookahead == 'M') ADVANCE(193);
      if (lookahead == 'S') ADVANCE(217);
      if (lookahead == 'T') ADVANCE(214);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'c') ADVANCE(246);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == ',') ADVANCE(180);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(190);
      if (lookahead == 'F') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(214);
      if (lookahead == '[') ADVANCE(179);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 3:
      if (lookahead == '?') ADVANCE(272);
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
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(161);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(151);
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
      if (lookahead == 'G') ADVANCE(173);
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
      if (lookahead == 'H') ADVANCE(160);
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
      if (lookahead == 'M') ADVANCE(175);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(147);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(163);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(154);
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
      if (lookahead == 'P') ADVANCE(150);
      END_STATE();
    case 53:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 54:
      if (lookahead == 'R') ADVANCE(148);
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
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(167);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(155);
      END_STATE();
    case 64:
      if (lookahead == 'T') ADVANCE(177);
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
      if (lookahead == 'V') ADVANCE(171);
      END_STATE();
    case 73:
      if (lookahead == 'V') ADVANCE(19);
      END_STATE();
    case 74:
      if (lookahead == 'X') ADVANCE(165);
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
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(151);
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
      if (lookahead == 'g') ADVANCE(173);
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
      if (lookahead == 'h') ADVANCE(160);
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
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(154);
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
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(148);
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
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(168);
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
      if (lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 144:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 145:
      if (lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(271);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(225);
      if (lookahead == 'I') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == 'G') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(197);
      if (lookahead == 'U') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'i') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == 'g') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
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
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
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
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 186},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 183},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
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
  },
  [1] = {
    [sym_program] = STATE(92),
    [sym_pipeline] = STATE(71),
    [sym_from] = STATE(38),
    [aux_sym_program_repeat1] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_keyword_from] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(11), 1,
      anon_sym_COMMA,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(35), 1,
      sym_binary_expression,
    STATE(73), 1,
      sym_aggregate_operation,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(52), 3,
      sym__expression,
      sym_literal,
      sym_field,
    ACTIONS(9), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [55] = 3,
    ACTIONS(29), 1,
      sym__number,
    ACTIONS(31), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(27), 21,
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
  [87] = 3,
    ACTIONS(35), 1,
      sym__number,
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
  [119] = 3,
    ACTIONS(41), 1,
      anon_sym_DOT,
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
  [151] = 13,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_binary_expression,
    STATE(81), 1,
      sym_aggregate_operation,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(52), 3,
      sym__expression,
      sym_literal,
      sym_field,
    ACTIONS(9), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [203] = 13,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_binary_expression,
    STATE(81), 1,
      sym_aggregate_operation,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(52), 3,
      sym__expression,
      sym_literal,
      sym_field,
    ACTIONS(9), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [255] = 2,
    ACTIONS(51), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 21,
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
  [284] = 2,
    ACTIONS(55), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 21,
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
  [313] = 2,
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
  [342] = 2,
    ACTIONS(31), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(27), 21,
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
  [371] = 12,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(42), 1,
      sym_binary_expression,
    STATE(81), 1,
      sym_aggregate_operation,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(52), 3,
      sym__expression,
      sym_literal,
      sym_field,
    ACTIONS(9), 8,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_count,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [420] = 2,
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
  [449] = 2,
    ACTIONS(59), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 21,
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
  [478] = 2,
    ACTIONS(63), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 21,
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
  [507] = 8,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(77), 1,
      anon_sym_DOT_DOT,
    ACTIONS(79), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(67), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(73), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(65), 11,
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
  [548] = 3,
    ACTIONS(67), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 19,
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
  [579] = 4,
    ACTIONS(67), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 17,
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
  [612] = 5,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(67), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 16,
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
  [647] = 2,
    ACTIONS(83), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(81), 21,
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
  [676] = 7,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(67), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(73), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(61), 12,
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
  [715] = 6,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(67), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(73), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(61), 13,
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
  [752] = 4,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
    ACTIONS(39), 10,
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
  [784] = 3,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 9,
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
  [813] = 8,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(77), 1,
      anon_sym_DOT_DOT,
    ACTIONS(79), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(67), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(73), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(93), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [852] = 12,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym_term,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(16), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [895] = 12,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym_term,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(16), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [938] = 9,
    ACTIONS(105), 1,
      sym_keyword_filter,
    ACTIONS(107), 1,
      sym_keyword_derive,
    ACTIONS(109), 1,
      sym_keyword_aggregate,
    ACTIONS(111), 1,
      sym_keyword_sort,
    ACTIONS(113), 1,
      sym_keyword_take,
    ACTIONS(115), 1,
      sym_keyword_join,
    ACTIONS(117), 1,
      sym_keyword_select,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(34), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_joins,
      sym_select,
      aux_sym_transforms_repeat1,
  [974] = 11,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_term,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(16), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1014] = 11,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_term,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(16), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1054] = 11,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_term,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(16), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1094] = 11,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_term,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(16), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1134] = 11,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_term,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(16), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1174] = 9,
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
    STATE(34), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_joins,
      sym_select,
      aux_sym_transforms_repeat1,
  [1210] = 5,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
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
  [1237] = 10,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(66), 1,
      sym_term,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(16), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1274] = 10,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(69), 1,
      sym_term,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(16), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1311] = 9,
    ACTIONS(105), 1,
      sym_keyword_filter,
    ACTIONS(107), 1,
      sym_keyword_derive,
    ACTIONS(109), 1,
      sym_keyword_aggregate,
    ACTIONS(111), 1,
      sym_keyword_sort,
    ACTIONS(113), 1,
      sym_keyword_take,
    ACTIONS(115), 1,
      sym_keyword_join,
    ACTIONS(117), 1,
      sym_keyword_select,
    STATE(83), 1,
      sym_transforms,
    STATE(28), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_joins,
      sym_select,
      aux_sym_transforms_repeat1,
  [1346] = 10,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(82), 1,
      sym_term,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(16), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1383] = 10,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(85), 1,
      sym_term,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(16), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1420] = 8,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(77), 1,
      anon_sym_DOT_DOT,
    ACTIONS(79), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(67), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(156), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(73), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1452] = 3,
    ACTIONS(158), 2,
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
  [1474] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(18), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1508] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1542] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(21), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1576] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1610] = 10,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(160), 1,
      sym__number,
    STATE(24), 1,
      sym_binary_expression,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(52), 3,
      sym__expression,
      sym_literal,
      sym_field,
  [1646] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(25), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1680] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(17), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1714] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(41), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1748] = 9,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(7), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(10), 3,
      sym__double_quote_string,
      sym__literal_string,
      sym__decimal_number,
    STATE(15), 4,
      sym__expression,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1782] = 7,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(77), 1,
      anon_sym_DOT_DOT,
    ACTIONS(79), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(67), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(73), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 3,
      anon_sym_EQ_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1810] = 1,
    ACTIONS(162), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [1822] = 1,
    ACTIONS(164), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [1834] = 1,
    ACTIONS(166), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [1846] = 1,
    ACTIONS(168), 9,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [1858] = 1,
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
  [1870] = 1,
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
  [1882] = 1,
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
  [1894] = 1,
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
  [1906] = 1,
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
  [1918] = 1,
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
  [1930] = 1,
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
  [1942] = 1,
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
  [1954] = 1,
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
  [1966] = 1,
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
  [1978] = 1,
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
  [1990] = 1,
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
  [2002] = 1,
    ACTIONS(194), 7,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [2012] = 4,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 1,
      sym_keyword_from,
    STATE(38), 1,
      sym_from,
    STATE(70), 2,
      sym_pipeline,
      aux_sym_program_repeat1,
  [2026] = 4,
    ACTIONS(5), 1,
      sym_keyword_from,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_from,
    STATE(70), 2,
      sym_pipeline,
      aux_sym_program_repeat1,
  [2040] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_derives_repeat1,
  [2050] = 3,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_aggregate_repeat1,
  [2060] = 3,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_derives_repeat1,
  [2070] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_selects_repeat1,
  [2080] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_aggregate_repeat1,
  [2090] = 3,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_aggregate_repeat1,
  [2100] = 3,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_selects_repeat1,
  [2110] = 3,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    STATE(75), 1,
      aux_sym_selects_repeat1,
  [2120] = 3,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_derives_repeat1,
  [2130] = 1,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2135] = 1,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2140] = 1,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [2145] = 2,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      sym_selects,
  [2152] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2157] = 2,
    ACTIONS(234), 1,
      sym__number,
    ACTIONS(236), 1,
      anon_sym_DOT,
  [2164] = 1,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
  [2168] = 1,
    ACTIONS(238), 1,
      anon_sym_LBRACK,
  [2172] = 1,
    ACTIONS(240), 1,
      sym__number,
  [2176] = 1,
    ACTIONS(222), 1,
      anon_sym_RBRACK,
  [2180] = 1,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
  [2184] = 1,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
  [2188] = 1,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
  [2192] = 1,
    ACTIONS(246), 1,
      aux_sym__literal_string_token1,
  [2196] = 1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
  [2200] = 1,
    ACTIONS(250), 1,
      aux_sym__double_quote_string_token1,
  [2204] = 1,
    ACTIONS(252), 1,
      anon_sym_DOT,
  [2208] = 1,
    ACTIONS(35), 1,
      sym__number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 87,
  [SMALL_STATE(5)] = 119,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 255,
  [SMALL_STATE(9)] = 284,
  [SMALL_STATE(10)] = 313,
  [SMALL_STATE(11)] = 342,
  [SMALL_STATE(12)] = 371,
  [SMALL_STATE(13)] = 420,
  [SMALL_STATE(14)] = 449,
  [SMALL_STATE(15)] = 478,
  [SMALL_STATE(16)] = 507,
  [SMALL_STATE(17)] = 548,
  [SMALL_STATE(18)] = 579,
  [SMALL_STATE(19)] = 612,
  [SMALL_STATE(20)] = 647,
  [SMALL_STATE(21)] = 676,
  [SMALL_STATE(22)] = 715,
  [SMALL_STATE(23)] = 752,
  [SMALL_STATE(24)] = 784,
  [SMALL_STATE(25)] = 813,
  [SMALL_STATE(26)] = 852,
  [SMALL_STATE(27)] = 895,
  [SMALL_STATE(28)] = 938,
  [SMALL_STATE(29)] = 974,
  [SMALL_STATE(30)] = 1014,
  [SMALL_STATE(31)] = 1054,
  [SMALL_STATE(32)] = 1094,
  [SMALL_STATE(33)] = 1134,
  [SMALL_STATE(34)] = 1174,
  [SMALL_STATE(35)] = 1210,
  [SMALL_STATE(36)] = 1237,
  [SMALL_STATE(37)] = 1274,
  [SMALL_STATE(38)] = 1311,
  [SMALL_STATE(39)] = 1346,
  [SMALL_STATE(40)] = 1383,
  [SMALL_STATE(41)] = 1420,
  [SMALL_STATE(42)] = 1452,
  [SMALL_STATE(43)] = 1474,
  [SMALL_STATE(44)] = 1508,
  [SMALL_STATE(45)] = 1542,
  [SMALL_STATE(46)] = 1576,
  [SMALL_STATE(47)] = 1610,
  [SMALL_STATE(48)] = 1646,
  [SMALL_STATE(49)] = 1680,
  [SMALL_STATE(50)] = 1714,
  [SMALL_STATE(51)] = 1748,
  [SMALL_STATE(52)] = 1782,
  [SMALL_STATE(53)] = 1810,
  [SMALL_STATE(54)] = 1822,
  [SMALL_STATE(55)] = 1834,
  [SMALL_STATE(56)] = 1846,
  [SMALL_STATE(57)] = 1858,
  [SMALL_STATE(58)] = 1870,
  [SMALL_STATE(59)] = 1882,
  [SMALL_STATE(60)] = 1894,
  [SMALL_STATE(61)] = 1906,
  [SMALL_STATE(62)] = 1918,
  [SMALL_STATE(63)] = 1930,
  [SMALL_STATE(64)] = 1942,
  [SMALL_STATE(65)] = 1954,
  [SMALL_STATE(66)] = 1966,
  [SMALL_STATE(67)] = 1978,
  [SMALL_STATE(68)] = 1990,
  [SMALL_STATE(69)] = 2002,
  [SMALL_STATE(70)] = 2012,
  [SMALL_STATE(71)] = 2026,
  [SMALL_STATE(72)] = 2040,
  [SMALL_STATE(73)] = 2050,
  [SMALL_STATE(74)] = 2060,
  [SMALL_STATE(75)] = 2070,
  [SMALL_STATE(76)] = 2080,
  [SMALL_STATE(77)] = 2090,
  [SMALL_STATE(78)] = 2100,
  [SMALL_STATE(79)] = 2110,
  [SMALL_STATE(80)] = 2120,
  [SMALL_STATE(81)] = 2130,
  [SMALL_STATE(82)] = 2135,
  [SMALL_STATE(83)] = 2140,
  [SMALL_STATE(84)] = 2145,
  [SMALL_STATE(85)] = 2152,
  [SMALL_STATE(86)] = 2157,
  [SMALL_STATE(87)] = 2164,
  [SMALL_STATE(88)] = 2168,
  [SMALL_STATE(89)] = 2172,
  [SMALL_STATE(90)] = 2176,
  [SMALL_STATE(91)] = 2180,
  [SMALL_STATE(92)] = 2184,
  [SMALL_STATE(93)] = 2188,
  [SMALL_STATE(94)] = 2192,
  [SMALL_STATE(95)] = 2196,
  [SMALL_STATE(96)] = 2200,
  [SMALL_STATE(97)] = 2204,
  [SMALL_STATE(98)] = 2208,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(48),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(30),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(88),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(36),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(47),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(68),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(84),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selects, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(37),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(39),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selects_repeat1, 2), SHIFT_REPEAT(40),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selects_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(12),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [242] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
