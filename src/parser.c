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
#define STATE_COUNT 265
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 14

enum {
  sym_keyword_from = 1,
  sym_keyword_filter = 2,
  sym_keyword_derive = 3,
  sym_keyword_group = 4,
  sym_keyword_aggregate = 5,
  sym_keyword_sort = 6,
  sym_keyword_take = 7,
  sym_keyword_window = 8,
  sym_keyword_join = 9,
  sym_keyword_select = 10,
  sym_keyword_true = 11,
  sym_keyword_false = 12,
  sym_keyword_switch = 13,
  sym_keyword_average = 14,
  sym_keyword_min = 15,
  sym_keyword_max = 16,
  sym_keyword_count = 17,
  sym_keyword_stddev = 18,
  sym_keyword_avg = 19,
  sym_keyword_sum = 20,
  sym_keyword_count_distinct = 21,
  sym_keyword_side = 22,
  sym_keyword_inner = 23,
  sym_keyword_left = 24,
  sym_keyword_right = 25,
  sym_keyword_full = 26,
  sym_keyword_and = 27,
  sym_keyword_or = 28,
  sym_keyword_in = 29,
  sym_keyword_rolling = 30,
  sym_keyword_rows = 31,
  sym_keyword_expanding = 32,
  anon_sym_LBRACK = 33,
  anon_sym_COMMA = 34,
  anon_sym_RBRACK = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  anon_sym_DASH = 38,
  anon_sym_PLUS = 39,
  anon_sym_COLON = 40,
  anon_sym_DQUOTE = 41,
  aux_sym__double_quote_string_token1 = 42,
  anon_sym_SQUOTE = 43,
  aux_sym__literal_string_token1 = 44,
  sym__number = 45,
  anon_sym_DOT = 46,
  sym_identifier = 47,
  anon_sym_DOT_DOT = 48,
  anon_sym_EQ = 49,
  anon_sym_STAR = 50,
  anon_sym_SLASH = 51,
  anon_sym_PIPE = 52,
  anon_sym_EQ_EQ = 53,
  anon_sym_BANG_EQ = 54,
  anon_sym_GT = 55,
  anon_sym_GT_EQ = 56,
  anon_sym_LT = 57,
  anon_sym_LT_EQ = 58,
  anon_sym_QMARK_QMARK = 59,
  aux_sym__date_token1 = 60,
  aux_sym__date_token2 = 61,
  anon_sym_AT = 62,
  aux_sym__time_token1 = 63,
  anon_sym_T = 64,
  anon_sym_Z = 65,
  anon_sym_POUND = 66,
  aux_sym_comment_token1 = 67,
  sym_bang = 68,
  sym_program = 69,
  sym_pipeline = 70,
  sym_transforms = 71,
  sym_from = 72,
  sym_derives = 73,
  sym_filter = 74,
  sym__boolean_expression = 75,
  sym_aggregate = 76,
  sym_aggregate_operation = 77,
  sym__aggregate_count = 78,
  sym_sorts = 79,
  sym_direction = 80,
  sym_takes = 81,
  sym_window = 82,
  sym_window_definitions = 83,
  sym__window_definition = 84,
  sym_group = 85,
  sym_joins = 86,
  sym_conditions = 87,
  sym_select = 88,
  sym_table_reference = 89,
  sym_term = 90,
  sym__expression = 91,
  sym_literal = 92,
  sym__double_quote_string = 93,
  sym__literal_string = 94,
  sym__decimal_number = 95,
  sym_field = 96,
  sym__alias_identifier = 97,
  sym_range = 98,
  sym_assignment = 99,
  sym_binary_expression = 100,
  sym__date = 101,
  sym_date = 102,
  sym__time = 103,
  sym_time = 104,
  sym_timestamp = 105,
  sym_timezone = 106,
  sym_comment = 107,
  aux_sym_program_repeat1 = 108,
  aux_sym_transforms_repeat1 = 109,
  aux_sym_derives_repeat1 = 110,
  aux_sym_aggregate_repeat1 = 111,
  aux_sym_sorts_repeat1 = 112,
  aux_sym_window_definitions_repeat1 = 113,
  aux_sym_group_repeat1 = 114,
  aux_sym_group_repeat2 = 115,
  aux_sym_conditions_repeat1 = 116,
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
  [sym_keyword_window] = "keyword_window",
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
  [sym_keyword_rolling] = "keyword_rolling",
  [sym_keyword_rows] = "keyword_rows",
  [sym_keyword_expanding] = "keyword_expanding",
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
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [aux_sym__date_token1] = "_date_token1",
  [aux_sym__date_token2] = "_date_token2",
  [anon_sym_AT] = "@",
  [aux_sym__time_token1] = "_time_token1",
  [anon_sym_T] = "T",
  [anon_sym_Z] = "Z",
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
  [sym__aggregate_count] = "aggregate_operation",
  [sym_sorts] = "sorts",
  [sym_direction] = "direction",
  [sym_takes] = "takes",
  [sym_window] = "window",
  [sym_window_definitions] = "window_definitions",
  [sym__window_definition] = "_window_definition",
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
  [sym_range] = "range",
  [sym_assignment] = "assignment",
  [sym_binary_expression] = "binary_expression",
  [sym__date] = "_date",
  [sym_date] = "date",
  [sym__time] = "_time",
  [sym_time] = "time",
  [sym_timestamp] = "timestamp",
  [sym_timezone] = "timezone",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_transforms_repeat1] = "transforms_repeat1",
  [aux_sym_derives_repeat1] = "derives_repeat1",
  [aux_sym_aggregate_repeat1] = "aggregate_repeat1",
  [aux_sym_sorts_repeat1] = "sorts_repeat1",
  [aux_sym_window_definitions_repeat1] = "window_definitions_repeat1",
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
  [sym_keyword_window] = sym_keyword_window,
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
  [sym_keyword_rolling] = sym_keyword_rolling,
  [sym_keyword_rows] = sym_keyword_rows,
  [sym_keyword_expanding] = sym_keyword_expanding,
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
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [aux_sym__date_token1] = aux_sym__date_token1,
  [aux_sym__date_token2] = aux_sym__date_token2,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym__time_token1] = aux_sym__time_token1,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_Z] = anon_sym_Z,
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
  [sym__aggregate_count] = sym_aggregate_operation,
  [sym_sorts] = sym_sorts,
  [sym_direction] = sym_direction,
  [sym_takes] = sym_takes,
  [sym_window] = sym_window,
  [sym_window_definitions] = sym_window_definitions,
  [sym__window_definition] = sym__window_definition,
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
  [sym_range] = sym_range,
  [sym_assignment] = sym_assignment,
  [sym_binary_expression] = sym_binary_expression,
  [sym__date] = sym__date,
  [sym_date] = sym_date,
  [sym__time] = sym__time,
  [sym_time] = sym_time,
  [sym_timestamp] = sym_timestamp,
  [sym_timezone] = sym_timezone,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_transforms_repeat1] = aux_sym_transforms_repeat1,
  [aux_sym_derives_repeat1] = aux_sym_derives_repeat1,
  [aux_sym_aggregate_repeat1] = aux_sym_aggregate_repeat1,
  [aux_sym_sorts_repeat1] = aux_sym_sorts_repeat1,
  [aux_sym_window_definitions_repeat1] = aux_sym_window_definitions_repeat1,
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
  [sym_keyword_window] = {
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
  [sym_keyword_rolling] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_rows] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_expanding] = {
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
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__date_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__date_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__time_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_T] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Z] = {
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
  [sym__aggregate_count] = {
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
  [sym_window] = {
    .visible = true,
    .named = true,
  },
  [sym_window_definitions] = {
    .visible = true,
    .named = true,
  },
  [sym__window_definition] = {
    .visible = false,
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
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__date] = {
    .visible = false,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym__time] = {
    .visible = false,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_timestamp] = {
    .visible = true,
    .named = true,
  },
  [sym_timezone] = {
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
  [aux_sym_window_definitions_repeat1] = {
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
  field_alias = 1,
  field_from = 2,
  field_left = 3,
  field_name = 4,
  field_operation = 5,
  field_operator = 6,
  field_predicate = 7,
  field_right = 8,
  field_table = 9,
  field_till = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_from] = "from",
  [field_left] = "left",
  [field_name] = "name",
  [field_operation] = "operation",
  [field_operator] = "operator",
  [field_predicate] = "predicate",
  [field_right] = "right",
  [field_table] = "table",
  [field_till] = "till",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
  [7] = {.index = 4, .length = 3},
  [8] = {.index = 7, .length = 3},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 4},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 3},
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
    {field_alias, 0},
    {field_operation, 2},
    {field_operator, 1},
  [10] =
    {field_name, 2},
    {field_table, 0},
  [12] =
    {field_alias, 0},
    {field_operation, 2},
    {field_operation, 3},
    {field_operator, 1},
  [16] =
    {field_predicate, 1},
  [17] =
    {field_from, 0},
    {field_operator, 1},
    {field_till, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_identifier,
  },
  [6] = {
    [1] = sym_term,
  },
  [13] = {
    [2] = sym_literal,
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
      if (eof) ADVANCE(245);
      if (lookahead == '!') ADVANCE(411);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '/') ADVANCE(388);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '<') ADVANCE(394);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead == '>') ADVANCE(392);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(7);
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead == 'J') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == 'M') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(403);
      if (lookahead == 'W') ADVANCE(55);
      if (lookahead == 'Z') ADVANCE(404);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(169);
      if (lookahead == '|') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(242)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'F') ADVANCE(310);
      if (lookahead == 'T') ADVANCE(333);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(343);
      if (lookahead == 'C') ADVANCE(331);
      if (lookahead == 'F') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(311);
      if (lookahead == 'S') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(333);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 'm') ADVANCE(348);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(234)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'F') ADVANCE(310);
      if (lookahead == 'S') ADVANCE(340);
      if (lookahead == 'T') ADVANCE(333);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 's') ADVANCE(377);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(391);
      END_STATE();
    case 6:
      if (lookahead == '?') ADVANCE(396);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(63);
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'U') ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(119);
      if (lookahead == 'I') ADVANCE(73);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(109);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(77);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(106);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(107);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(284);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(279);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(252);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(256);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(258);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(248);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(261);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead == 'I') ADVANCE(18);
      if (lookahead == 'O') ADVANCE(96);
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead == 'U') ADVANCE(70);
      if (lookahead == 'W') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'G') ADVANCE(273);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 40:
      if (lookahead == 'F') ADVANCE(102);
      END_STATE();
    case 41:
      if (lookahead == 'G') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 42:
      if (lookahead == 'G') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(16);
      if (lookahead == 'V') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'G') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'G') ADVANCE(288);
      END_STATE();
    case 45:
      if (lookahead == 'G') ADVANCE(290);
      END_STATE();
    case 46:
      if (lookahead == 'G') ADVANCE(11);
      END_STATE();
    case 47:
      if (lookahead == 'G') ADVANCE(97);
      END_STATE();
    case 48:
      if (lookahead == 'G') ADVANCE(30);
      END_STATE();
    case 49:
      if (lookahead == 'H') ADVANCE(260);
      END_STATE();
    case 50:
      if (lookahead == 'H') ADVANCE(105);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(116);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'I') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'U') ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(82);
      END_STATE();
    case 62:
      if (lookahead == 'K') ADVANCE(26);
      END_STATE();
    case 63:
      if (lookahead == 'L') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(110);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(283);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(65);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(69);
      if (lookahead == 'W') ADVANCE(99);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 70:
      if (lookahead == 'M') ADVANCE(275);
      END_STATE();
    case 71:
      if (lookahead == 'M') ADVANCE(246);
      END_STATE();
    case 72:
      if (lookahead == 'N') ADVANCE(286);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(263);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(254);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 83:
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 84:
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'O') ADVANCE(71);
      END_STATE();
    case 87:
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 88:
      if (lookahead == 'O') ADVANCE(58);
      END_STATE();
    case 89:
      if (lookahead == 'P') ADVANCE(12);
      END_STATE();
    case 90:
      if (lookahead == 'P') ADVANCE(249);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(285);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(280);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(247);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(34);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'S') ADVANCE(289);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(28);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(111);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(281);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(251);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(269);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(282);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(255);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(277);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(13);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 112:
      if (lookahead == 'U') ADVANCE(90);
      END_STATE();
    case 113:
      if (lookahead == 'U') ADVANCE(78);
      END_STATE();
    case 114:
      if (lookahead == 'U') ADVANCE(27);
      END_STATE();
    case 115:
      if (lookahead == 'V') ADVANCE(271);
      END_STATE();
    case 116:
      if (lookahead == 'V') ADVANCE(29);
      END_STATE();
    case 117:
      if (lookahead == 'W') ADVANCE(253);
      END_STATE();
    case 118:
      if (lookahead == 'X') ADVANCE(89);
      END_STATE();
    case 119:
      if (lookahead == 'X') ADVANCE(265);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(171);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'g') ADVANCE(273);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 154:
      if (lookahead == 'f') ADVANCE(216);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'v') ADVANCE(151);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 163:
      if (lookahead == 'h') ADVANCE(260);
      END_STATE();
    case 164:
      if (lookahead == 'h') ADVANCE(218);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 176:
      if (lookahead == 'k') ADVANCE(139);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'w') ADVANCE(213);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(275);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(249);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 229:
      if (lookahead == 'v') ADVANCE(271);
      END_STATE();
    case 230:
      if (lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 231:
      if (lookahead == 'w') ADVANCE(253);
      END_STATE();
    case 232:
      if (lookahead == 'x') ADVANCE(203);
      END_STATE();
    case 233:
      if (lookahead == 'x') ADVANCE(265);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(234)
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(343);
      if (lookahead == 'C') ADVANCE(331);
      if (lookahead == 'F') ADVANCE(310);
      if (lookahead == 'M') ADVANCE(311);
      if (lookahead == 'S') ADVANCE(336);
      if (lookahead == 'T') ADVANCE(333);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 'm') ADVANCE(348);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == 't') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'F') ADVANCE(310);
      if (lookahead == 'T') ADVANCE(333);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 't') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'F') ADVANCE(310);
      if (lookahead == 'S') ADVANCE(340);
      if (lookahead == 'T') ADVANCE(333);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 's') ADVANCE(377);
      if (lookahead == 't') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '[') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 240:
      if (eof) ADVANCE(245);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '/') ADVANCE(388);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '<') ADVANCE(394);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead == '>') ADVANCE(392);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(41);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead == 'J') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(402);
      if (lookahead == 'W') ADVANCE(55);
      if (lookahead == 'Z') ADVANCE(404);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(169);
      if (lookahead == '|') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(243)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 241:
      if (eof) ADVANCE(245);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(388);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '<') ADVANCE(394);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead == '>') ADVANCE(392);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(41);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'J') ADVANCE(88);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'W') ADVANCE(55);
      if (lookahead == 'Z') ADVANCE(404);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(169);
      if (lookahead == '|') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(244)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 242:
      if (eof) ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(242)
      if (lookahead == '!') ADVANCE(411);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '/') ADVANCE(388);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '<') ADVANCE(394);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead == '>') ADVANCE(392);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == '@') ADVANCE(400);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(7);
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead == 'J') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == 'M') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(403);
      if (lookahead == 'W') ADVANCE(55);
      if (lookahead == 'Z') ADVANCE(404);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(169);
      if (lookahead == '|') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 243:
      if (eof) ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(243)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(309);
      if (lookahead == '/') ADVANCE(388);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '<') ADVANCE(394);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead == '>') ADVANCE(392);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(41);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'I') ADVANCE(80);
      if (lookahead == 'J') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(402);
      if (lookahead == 'W') ADVANCE(55);
      if (lookahead == 'Z') ADVANCE(404);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(169);
      if (lookahead == '|') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 244:
      if (eof) ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(244)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '#') ADVANCE(405);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(388);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '<') ADVANCE(394);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead == '>') ADVANCE(392);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(41);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'J') ADVANCE(88);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == 'R') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'W') ADVANCE(55);
      if (lookahead == 'Z') ADVANCE(404);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == ']') ADVANCE(293);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(169);
      if (lookahead == '|') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(133);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(302);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == '#') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(306);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(385);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(346);
      if (lookahead == 'I') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(332);
      if (lookahead == 'G') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(315);
      if (lookahead == 'U') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'g') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(352);
      if (lookahead == 'u') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(390);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(62);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead == 'R') ADVANCE(114);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(302);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(306);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(391);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 240},
  [3] = {.lex_state = 241},
  [4] = {.lex_state = 241},
  [5] = {.lex_state = 240},
  [6] = {.lex_state = 240},
  [7] = {.lex_state = 241},
  [8] = {.lex_state = 240},
  [9] = {.lex_state = 240},
  [10] = {.lex_state = 240},
  [11] = {.lex_state = 240},
  [12] = {.lex_state = 240},
  [13] = {.lex_state = 240},
  [14] = {.lex_state = 241},
  [15] = {.lex_state = 241},
  [16] = {.lex_state = 240},
  [17] = {.lex_state = 241},
  [18] = {.lex_state = 241},
  [19] = {.lex_state = 240},
  [20] = {.lex_state = 240},
  [21] = {.lex_state = 240},
  [22] = {.lex_state = 240},
  [23] = {.lex_state = 240},
  [24] = {.lex_state = 240},
  [25] = {.lex_state = 240},
  [26] = {.lex_state = 240},
  [27] = {.lex_state = 240},
  [28] = {.lex_state = 240},
  [29] = {.lex_state = 240},
  [30] = {.lex_state = 240},
  [31] = {.lex_state = 240},
  [32] = {.lex_state = 240},
  [33] = {.lex_state = 240},
  [34] = {.lex_state = 240},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 241},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 240},
  [41] = {.lex_state = 240},
  [42] = {.lex_state = 240},
  [43] = {.lex_state = 240},
  [44] = {.lex_state = 240},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 240},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 240},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 240},
  [102] = {.lex_state = 240},
  [103] = {.lex_state = 240},
  [104] = {.lex_state = 240},
  [105] = {.lex_state = 240},
  [106] = {.lex_state = 240},
  [107] = {.lex_state = 240},
  [108] = {.lex_state = 240},
  [109] = {.lex_state = 240},
  [110] = {.lex_state = 240},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 240},
  [113] = {.lex_state = 240},
  [114] = {.lex_state = 240},
  [115] = {.lex_state = 240},
  [116] = {.lex_state = 240},
  [117] = {.lex_state = 240},
  [118] = {.lex_state = 240},
  [119] = {.lex_state = 240},
  [120] = {.lex_state = 240},
  [121] = {.lex_state = 240},
  [122] = {.lex_state = 240},
  [123] = {.lex_state = 240},
  [124] = {.lex_state = 240},
  [125] = {.lex_state = 240},
  [126] = {.lex_state = 240},
  [127] = {.lex_state = 240},
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
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
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
  [159] = {.lex_state = 0},
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
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 241},
  [187] = {.lex_state = 241},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 240},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 241},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 241},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 409},
  [232] = {.lex_state = 240},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 240},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 240},
  [240] = {.lex_state = 241},
  [241] = {.lex_state = 241},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 241},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 240},
  [253] = {.lex_state = 304},
  [254] = {.lex_state = 300},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 300},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 240},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 4},
  [264] = {(TSStateId)(-1)},
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
    [sym_keyword_window] = ACTIONS(1),
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
    [sym_keyword_rolling] = ACTIONS(1),
    [sym_keyword_rows] = ACTIONS(1),
    [sym_keyword_expanding] = ACTIONS(1),
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
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [aux_sym__date_token1] = ACTIONS(1),
    [aux_sym__date_token2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__time_token1] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_bang] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(261),
    [sym_pipeline] = STATE(217),
    [sym_from] = STATE(81),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(182),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_keyword_from] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_Z,
    STATE(2), 1,
      sym_comment,
    STATE(22), 1,
      sym_timezone,
    STATE(235), 1,
      sym_direction,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(13), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 30,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [57] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_COLON,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(3), 1,
      sym_comment,
    ACTIONS(23), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(17), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
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
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [109] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_DOT,
    STATE(4), 1,
      sym_comment,
    ACTIONS(31), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
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
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [161] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(5), 1,
      sym_comment,
    ACTIONS(35), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(33), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [208] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym__number,
    STATE(6), 1,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(37), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [257] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_comment,
    ACTIONS(47), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
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
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [306] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(31), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [353] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(47), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [400] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(51), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(49), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [447] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      sym__number,
    STATE(11), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [496] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [542] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [588] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [634] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_comment,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
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
      anon_sym_QMARK_QMARK,
  [682] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [728] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      anon_sym_DOT,
    STATE(17), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
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
      anon_sym_QMARK_QMARK,
  [776] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(18), 1,
      sym_comment,
    ACTIONS(83), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
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
      anon_sym_QMARK_QMARK,
  [824] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(87), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [870] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [916] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(95), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [962] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1008] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1054] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(107), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1100] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(111), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1146] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_T,
    STATE(26), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
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
      anon_sym_QMARK_QMARK,
  [1194] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1240] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(37), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1286] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(123), 1,
      sym_keyword_and,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_QMARK_QMARK,
    STATE(29), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(105), 20,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1345] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(107), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 27,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
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
      anon_sym_QMARK_QMARK,
  [1394] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    STATE(31), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(107), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1445] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    STATE(32), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(105), 22,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_QMARK,
  [1500] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(107), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 29,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
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
      anon_sym_QMARK_QMARK,
  [1547] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_QMARK_QMARK,
    STATE(34), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(105), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1604] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      sym_keyword_count,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym_comment,
    STATE(104), 1,
      sym_binary_expression,
    STATE(118), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(203), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(139), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1682] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(36), 1,
      sym_comment,
    ACTIONS(83), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
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
      anon_sym_QMARK_QMARK,
  [1727] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      sym_keyword_count,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(37), 1,
      sym_comment,
    STATE(106), 1,
      sym_binary_expression,
    STATE(118), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(213), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(139), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1802] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      sym_keyword_count,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(38), 1,
      sym_comment,
    STATE(106), 1,
      sym_binary_expression,
    STATE(118), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(213), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(139), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1877] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      sym_keyword_count,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(39), 1,
      sym_comment,
    STATE(106), 1,
      sym_binary_expression,
    STATE(118), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(213), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(139), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1949] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_and,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(167), 1,
      sym_keyword_or,
    ACTIONS(169), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2007] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_and,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(167), 1,
      sym_keyword_or,
    STATE(41), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(171), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2062] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_and,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(167), 1,
      sym_keyword_or,
    STATE(42), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(173), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2117] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_and,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(167), 1,
      sym_keyword_or,
    STATE(43), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(175), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2172] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(44), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
    ACTIONS(59), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [2215] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    ACTIONS(185), 1,
      anon_sym_DASH,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(45), 1,
      sym_comment,
    STATE(71), 1,
      sym_direction,
    STATE(111), 1,
      sym_assignment,
    STATE(205), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2286] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      anon_sym_DASH,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(46), 1,
      sym_comment,
    STATE(72), 1,
      sym_direction,
    STATE(111), 1,
      sym_assignment,
    STATE(218), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2354] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      anon_sym_DASH,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(47), 1,
      sym_comment,
    STATE(72), 1,
      sym_direction,
    STATE(111), 1,
      sym_assignment,
    STATE(218), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2422] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      anon_sym_DASH,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(48), 1,
      sym_comment,
    STATE(66), 1,
      sym_direction,
    STATE(111), 1,
      sym_assignment,
    STATE(128), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2490] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      anon_sym_DASH,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(49), 1,
      sym_comment,
    STATE(72), 1,
      sym_direction,
    STATE(111), 1,
      sym_assignment,
    STATE(218), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2558] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(50), 1,
      sym_comment,
    STATE(101), 1,
      sym_binary_expression,
    STATE(111), 1,
      sym_assignment,
    STATE(207), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2625] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(51), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(194), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2690] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      anon_sym_DASH,
    ACTIONS(187), 1,
      anon_sym_PLUS,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(52), 1,
      sym_comment,
    STATE(72), 1,
      sym_direction,
    STATE(111), 1,
      sym_assignment,
    STATE(218), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2755] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(53), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(206), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2820] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_and,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(167), 1,
      sym_keyword_or,
    STATE(54), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(209), 10,
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
  [2869] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(55), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(216), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2931] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(56), 1,
      sym_comment,
    STATE(108), 1,
      sym_binary_expression,
    STATE(111), 1,
      sym_assignment,
    STATE(210), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2995] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(57), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(216), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3057] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(58), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(216), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3119] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(59), 1,
      sym_comment,
    STATE(108), 1,
      sym_binary_expression,
    STATE(111), 1,
      sym_assignment,
    STATE(210), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3183] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(60), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(216), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3245] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(61), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(225), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3307] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(62), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(140), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3369] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(63), 1,
      sym_comment,
    STATE(115), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3426] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(54), 1,
      sym__expression,
    STATE(64), 1,
      sym_comment,
    STATE(156), 1,
      sym__boolean_expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3485] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(65), 1,
      sym_comment,
    STATE(108), 1,
      sym_binary_expression,
    STATE(111), 1,
      sym_assignment,
    STATE(210), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3546] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(66), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(134), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3605] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(67), 1,
      sym_comment,
    STATE(107), 1,
      sym_binary_expression,
    STATE(127), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3666] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(68), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(136), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3725] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(69), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(216), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3784] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(41), 1,
      sym__expression,
    STATE(70), 1,
      sym_comment,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(235), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3841] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(71), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(199), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3900] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(72), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(209), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3959] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(36), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(73), 1,
      sym_comment,
    STATE(111), 1,
      sym_assignment,
    STATE(169), 1,
      sym_term,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4018] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(74), 1,
      sym_comment,
    STATE(110), 1,
      sym_binary_expression,
    STATE(127), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4076] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_comment,
    STATE(110), 1,
      sym_binary_expression,
    STATE(127), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4134] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      sym__number,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_AT,
    STATE(76), 1,
      sym_comment,
    STATE(112), 1,
      sym__double_quote_string,
    STATE(125), 1,
      sym__expression,
    STATE(190), 1,
      sym_range,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4190] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      sym__number,
    STATE(77), 1,
      sym_comment,
    STATE(112), 1,
      sym__double_quote_string,
    STATE(125), 1,
      sym__expression,
    STATE(129), 1,
      sym_range,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4246] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(251), 1,
      sym__number,
    STATE(78), 1,
      sym_comment,
    STATE(112), 1,
      sym__double_quote_string,
    STATE(120), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4299] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(43), 1,
      sym__expression,
    STATE(79), 1,
      sym_comment,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4352] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(80), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(59), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [4387] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      sym_keyword_filter,
    ACTIONS(259), 1,
      sym_keyword_derive,
    ACTIONS(261), 1,
      sym_keyword_group,
    ACTIONS(263), 1,
      sym_keyword_aggregate,
    ACTIONS(265), 1,
      sym_keyword_sort,
    ACTIONS(267), 1,
      sym_keyword_take,
    ACTIONS(269), 1,
      sym_keyword_join,
    ACTIONS(271), 1,
      sym_keyword_select,
    STATE(81), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_transforms_repeat1,
    STATE(212), 1,
      sym_transforms,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(167), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [4438] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(251), 1,
      sym__number,
    STATE(82), 1,
      sym_comment,
    STATE(112), 1,
      sym__double_quote_string,
    STATE(124), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4491] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(251), 1,
      sym__number,
    STATE(83), 1,
      sym_comment,
    STATE(112), 1,
      sym__double_quote_string,
    STATE(123), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4544] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(251), 1,
      sym__number,
    STATE(84), 1,
      sym_comment,
    STATE(112), 1,
      sym__double_quote_string,
    STATE(122), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4597] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(85), 1,
      sym_comment,
    STATE(126), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4650] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(251), 1,
      sym__number,
    STATE(86), 1,
      sym_comment,
    STATE(112), 1,
      sym__double_quote_string,
    STATE(121), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4703] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(32), 1,
      sym__expression,
    STATE(87), 1,
      sym_comment,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4756] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym__expression,
    STATE(88), 1,
      sym_comment,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4809] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(31), 1,
      sym__expression,
    STATE(89), 1,
      sym_comment,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4862] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(30), 1,
      sym__expression,
    STATE(90), 1,
      sym_comment,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4915] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(33), 1,
      sym__expression,
    STATE(91), 1,
      sym_comment,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4968] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(24), 1,
      sym__expression,
    STATE(92), 1,
      sym_comment,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5021] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(29), 1,
      sym__expression,
    STATE(93), 1,
      sym_comment,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5074] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(34), 1,
      sym__expression,
    STATE(94), 1,
      sym_comment,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5127] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(251), 1,
      sym__number,
    STATE(24), 1,
      sym__expression,
    STATE(95), 1,
      sym_comment,
    STATE(112), 1,
      sym__double_quote_string,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5180] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(96), 1,
      sym_comment,
    STATE(110), 1,
      sym_binary_expression,
    STATE(127), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5235] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym__number,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(97), 1,
      sym_comment,
    STATE(116), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5288] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(251), 1,
      sym__number,
    STATE(98), 1,
      sym_comment,
    STATE(112), 1,
      sym__double_quote_string,
    STATE(119), 1,
      sym__expression,
    STATE(247), 1,
      sym__alias_identifier,
    ACTIONS(137), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(12), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5341] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      sym_keyword_filter,
    ACTIONS(259), 1,
      sym_keyword_derive,
    ACTIONS(261), 1,
      sym_keyword_group,
    ACTIONS(263), 1,
      sym_keyword_aggregate,
    ACTIONS(265), 1,
      sym_keyword_sort,
    ACTIONS(267), 1,
      sym_keyword_take,
    ACTIONS(269), 1,
      sym_keyword_join,
    ACTIONS(271), 1,
      sym_keyword_select,
    STATE(99), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(167), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [5389] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      sym_keyword_filter,
    ACTIONS(280), 1,
      sym_keyword_derive,
    ACTIONS(283), 1,
      sym_keyword_group,
    ACTIONS(286), 1,
      sym_keyword_aggregate,
    ACTIONS(289), 1,
      sym_keyword_sort,
    ACTIONS(292), 1,
      sym_keyword_take,
    ACTIONS(295), 1,
      sym_keyword_join,
    ACTIONS(298), 1,
      sym_keyword_select,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(100), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(167), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [5435] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(101), 1,
      sym_comment,
    STATE(197), 1,
      aux_sym_derives_repeat1,
    ACTIONS(87), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 14,
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
      anon_sym_QMARK_QMARK,
  [5466] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      anon_sym_COLON,
    ACTIONS(303), 1,
      anon_sym_DOT,
    STATE(102), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(17), 14,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [5499] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      anon_sym_COLON,
    ACTIONS(307), 1,
      anon_sym_DOT,
    STATE(103), 1,
      sym_comment,
    ACTIONS(31), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 14,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [5532] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(87), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 12,
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
      anon_sym_QMARK_QMARK,
  [5567] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(313), 1,
      anon_sym_DOT,
    STATE(105), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 14,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [5597] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(106), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(87), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 12,
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
      anon_sym_QMARK_QMARK,
  [5627] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym_comment,
    STATE(201), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(87), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 12,
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
      anon_sym_QMARK_QMARK,
  [5661] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym_comment,
    ACTIONS(87), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 14,
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
      anon_sym_QMARK_QMARK,
  [5689] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(321), 1,
      anon_sym_T,
    STATE(109), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [5718] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(110), 1,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(85), 12,
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
      anon_sym_QMARK_QMARK,
  [5747] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(111), 1,
      sym_comment,
    ACTIONS(165), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5772] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(325), 1,
      anon_sym_DOT,
    STATE(112), 1,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [5801] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_DOT,
    STATE(113), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [5830] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(114), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [5857] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_and,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(167), 1,
      sym_keyword_or,
    STATE(115), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(131), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5898] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_and,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(167), 1,
      sym_keyword_or,
    STATE(116), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(131), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5939] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_DOT,
    STATE(117), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [5968] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_and,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(167), 1,
      sym_keyword_or,
    ACTIONS(169), 1,
      anon_sym_EQ,
    STATE(118), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6008] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(343), 1,
      anon_sym_QMARK_QMARK,
    STATE(119), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(341), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(339), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6044] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(343), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(345), 1,
      sym_keyword_and,
    STATE(120), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(333), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(341), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(339), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6082] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(121), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(105), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6110] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(122), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(105), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6140] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    STATE(123), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(105), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6172] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    STATE(124), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(341), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(339), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6206] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(343), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(345), 1,
      sym_keyword_and,
    ACTIONS(347), 1,
      sym_keyword_or,
    ACTIONS(349), 1,
      anon_sym_DOT_DOT,
    STATE(125), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(341), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(339), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6246] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_and,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(167), 1,
      sym_keyword_or,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6286] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_and,
    ACTIONS(129), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(167), 1,
      sym_keyword_or,
    STATE(127), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6323] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(128), 1,
      sym_comment,
    ACTIONS(353), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [6344] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(129), 1,
      sym_comment,
    ACTIONS(355), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [6365] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(130), 1,
      sym_comment,
    ACTIONS(357), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [6386] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym_comment,
    ACTIONS(359), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [6407] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(132), 1,
      sym_comment,
    ACTIONS(361), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [6428] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(133), 1,
      sym_comment,
    ACTIONS(363), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [6449] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(134), 1,
      sym_comment,
    ACTIONS(365), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [6470] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(135), 1,
      sym_comment,
    ACTIONS(367), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [6491] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    STATE(136), 1,
      sym_comment,
    STATE(154), 1,
      sym_conditions,
    ACTIONS(369), 10,
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
  [6516] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(137), 1,
      sym_comment,
    ACTIONS(373), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [6537] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_comment,
    ACTIONS(375), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [6558] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(139), 1,
      sym_comment,
    ACTIONS(377), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [6579] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym_comment,
    ACTIONS(379), 11,
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
  [6599] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(381), 11,
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
  [6619] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(142), 1,
      sym_comment,
    ACTIONS(383), 11,
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
  [6639] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(143), 1,
      sym_comment,
    ACTIONS(385), 11,
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
  [6659] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym_comment,
    ACTIONS(387), 11,
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
  [6679] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(145), 1,
      sym_comment,
    ACTIONS(389), 10,
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
  [6698] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(146), 1,
      sym_comment,
    ACTIONS(391), 10,
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
  [6717] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(147), 1,
      sym_comment,
    ACTIONS(393), 10,
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
  [6736] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(148), 1,
      sym_comment,
    ACTIONS(395), 10,
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
  [6755] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(149), 1,
      sym_comment,
    ACTIONS(397), 10,
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
  [6774] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym_keyword_aggregate,
    ACTIONS(265), 1,
      sym_keyword_sort,
    ACTIONS(267), 1,
      sym_keyword_take,
    ACTIONS(399), 1,
      sym_keyword_window,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_group_repeat2,
    STATE(184), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [6805] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym_keyword_aggregate,
    ACTIONS(265), 1,
      sym_keyword_sort,
    ACTIONS(267), 1,
      sym_keyword_take,
    ACTIONS(399), 1,
      sym_keyword_window,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_group_repeat2,
    STATE(184), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [6836] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(152), 1,
      sym_comment,
    ACTIONS(405), 10,
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
  [6855] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(153), 1,
      sym_comment,
    ACTIONS(407), 10,
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
  [6874] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(154), 1,
      sym_comment,
    ACTIONS(409), 10,
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
  [6893] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(155), 1,
      sym_comment,
    ACTIONS(411), 10,
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
  [6912] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_comment,
    ACTIONS(413), 10,
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
  [6931] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(157), 1,
      sym_comment,
    ACTIONS(415), 10,
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
  [6950] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym_comment,
    ACTIONS(417), 10,
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
  [6969] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_comment,
    ACTIONS(419), 10,
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
  [6988] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(421), 10,
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
  [7007] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym_keyword_aggregate,
    ACTIONS(265), 1,
      sym_keyword_sort,
    ACTIONS(267), 1,
      sym_keyword_take,
    ACTIONS(399), 1,
      sym_keyword_window,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_group_repeat2,
    STATE(184), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [7038] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(162), 1,
      sym_comment,
    ACTIONS(425), 10,
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
  [7057] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym_keyword_aggregate,
    ACTIONS(265), 1,
      sym_keyword_sort,
    ACTIONS(267), 1,
      sym_keyword_take,
    ACTIONS(399), 1,
      sym_keyword_window,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_group_repeat2,
    STATE(184), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [7088] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_comment,
    ACTIONS(429), 10,
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
  [7107] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(431), 1,
      sym_keyword_aggregate,
    ACTIONS(434), 1,
      sym_keyword_sort,
    ACTIONS(437), 1,
      sym_keyword_take,
    ACTIONS(440), 1,
      sym_keyword_window,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(165), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(184), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [7136] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym_keyword_aggregate,
    ACTIONS(265), 1,
      sym_keyword_sort,
    ACTIONS(267), 1,
      sym_keyword_take,
    ACTIONS(399), 1,
      sym_keyword_window,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_group_repeat2,
    STATE(166), 1,
      sym_comment,
    STATE(184), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [7167] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(447), 10,
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
  [7186] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    ACTIONS(449), 10,
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
  [7205] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(451), 10,
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
  [7224] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(170), 1,
      sym_comment,
    ACTIONS(453), 10,
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
  [7243] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym_keyword_aggregate,
    ACTIONS(265), 1,
      sym_keyword_sort,
    ACTIONS(267), 1,
      sym_keyword_take,
    ACTIONS(399), 1,
      sym_keyword_window,
    STATE(161), 1,
      aux_sym_group_repeat2,
    STATE(171), 1,
      sym_comment,
    STATE(184), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [7271] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym_keyword_aggregate,
    ACTIONS(265), 1,
      sym_keyword_sort,
    ACTIONS(267), 1,
      sym_keyword_take,
    ACTIONS(399), 1,
      sym_keyword_window,
    STATE(163), 1,
      aux_sym_group_repeat2,
    STATE(172), 1,
      sym_comment,
    STATE(184), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [7299] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym_keyword_aggregate,
    ACTIONS(265), 1,
      sym_keyword_sort,
    ACTIONS(267), 1,
      sym_keyword_take,
    ACTIONS(399), 1,
      sym_keyword_window,
    STATE(150), 1,
      aux_sym_group_repeat2,
    STATE(173), 1,
      sym_comment,
    STATE(184), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [7327] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(174), 1,
      sym_comment,
    ACTIONS(455), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(457), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__number,
      anon_sym_DOT,
      anon_sym_AT,
  [7347] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym_comment,
    ACTIONS(455), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(457), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__number,
      anon_sym_DOT,
      anon_sym_AT,
  [7367] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym_keyword_aggregate,
    ACTIONS(265), 1,
      sym_keyword_sort,
    ACTIONS(267), 1,
      sym_keyword_take,
    ACTIONS(399), 1,
      sym_keyword_window,
    STATE(166), 1,
      aux_sym_group_repeat2,
    STATE(176), 1,
      sym_comment,
    STATE(184), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [7395] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym_keyword_aggregate,
    ACTIONS(265), 1,
      sym_keyword_sort,
    ACTIONS(267), 1,
      sym_keyword_take,
    ACTIONS(399), 1,
      sym_keyword_window,
    STATE(151), 1,
      aux_sym_group_repeat2,
    STATE(177), 1,
      sym_comment,
    STATE(184), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [7423] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(459), 1,
      anon_sym_LBRACK,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(145), 1,
      sym_table_reference,
    STATE(146), 1,
      sym_field,
    STATE(178), 1,
      sym_comment,
    STATE(241), 1,
      sym__double_quote_string,
    STATE(247), 1,
      sym__alias_identifier,
  [7451] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym__window_definition,
    STATE(179), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(463), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [7470] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      aux_sym_window_definitions_repeat1,
    STATE(180), 1,
      sym_comment,
    STATE(188), 1,
      sym__window_definition,
    ACTIONS(468), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [7491] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(180), 1,
      aux_sym_window_definitions_repeat1,
    STATE(181), 1,
      sym_comment,
    STATE(188), 1,
      sym__window_definition,
    STATE(251), 1,
      sym_window_definitions,
    ACTIONS(468), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [7512] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_from,
    STATE(182), 1,
      sym_comment,
    STATE(183), 1,
      aux_sym_program_repeat1,
    STATE(217), 1,
      sym_pipeline,
  [7534] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
    ACTIONS(476), 1,
      sym_keyword_from,
    STATE(81), 1,
      sym_from,
    STATE(217), 1,
      sym_pipeline,
    STATE(183), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [7554] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(184), 1,
      sym_comment,
    ACTIONS(479), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [7568] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(185), 1,
      sym_comment,
    ACTIONS(481), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [7582] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(483), 1,
      aux_sym__date_token1,
    ACTIONS(485), 1,
      aux_sym__time_token1,
    STATE(25), 1,
      sym__time,
    STATE(109), 1,
      sym__date,
    STATE(186), 1,
      sym_comment,
  [7601] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(483), 1,
      aux_sym__date_token1,
    ACTIONS(487), 1,
      aux_sym__time_token1,
    STATE(25), 1,
      sym__time,
    STATE(26), 1,
      sym__date,
    STATE(187), 1,
      sym_comment,
  [7620] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(188), 1,
      sym_comment,
    ACTIONS(489), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [7633] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(189), 1,
      sym_comment,
    ACTIONS(491), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [7646] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(190), 1,
      sym_comment,
    ACTIONS(493), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [7659] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_group_repeat1,
  [7675] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      sym_comment,
    STATE(204), 1,
      aux_sym_aggregate_repeat1,
  [7691] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    STATE(193), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [7705] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      sym_comment,
    STATE(196), 1,
      aux_sym_group_repeat1,
  [7721] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_RBRACK,
    STATE(195), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [7735] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_group_repeat1,
    STATE(196), 1,
      sym_comment,
  [7751] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_derives_repeat1,
  [7767] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(198), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [7781] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      sym_comment,
    STATE(202), 1,
      aux_sym_sorts_repeat1,
  [7797] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_sorts_repeat1,
    STATE(200), 1,
      sym_comment,
  [7813] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      sym_comment,
    STATE(208), 1,
      aux_sym_conditions_repeat1,
  [7829] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    STATE(195), 1,
      aux_sym_sorts_repeat1,
    STATE(202), 1,
      sym_comment,
  [7845] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      aux_sym_aggregate_repeat1,
    STATE(203), 1,
      sym_comment,
  [7861] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(204), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [7875] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      anon_sym_RBRACK,
    STATE(200), 1,
      aux_sym_sorts_repeat1,
    STATE(205), 1,
      sym_comment,
  [7891] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      aux_sym_group_repeat1,
    STATE(206), 1,
      sym_comment,
  [7907] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(197), 1,
      aux_sym_derives_repeat1,
    STATE(207), 1,
      sym_comment,
  [7923] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    STATE(208), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [7937] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(209), 1,
      sym_comment,
    ACTIONS(546), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7948] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(210), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7959] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      sym_keyword_derive,
    STATE(211), 1,
      sym_comment,
    STATE(243), 1,
      sym_derives,
  [7972] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(212), 1,
      sym_comment,
    ACTIONS(548), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [7983] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(213), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7994] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(550), 1,
      aux_sym__time_token1,
    STATE(2), 1,
      sym__time,
    STATE(214), 1,
      sym_comment,
  [8007] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(552), 1,
      sym__number,
    ACTIONS(554), 1,
      anon_sym_DOT,
    STATE(215), 1,
      sym_comment,
  [8020] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(216), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8031] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(217), 1,
      sym_comment,
    ACTIONS(556), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [8042] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(218), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8053] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(558), 1,
      aux_sym__time_token1,
    STATE(2), 1,
      sym__time,
    STATE(219), 1,
      sym_comment,
  [8066] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(560), 1,
      anon_sym_COLON,
    STATE(220), 1,
      sym_comment,
  [8076] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(533), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym_comment,
  [8086] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      sym_comment,
  [8096] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      sym_comment,
  [8106] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      sym_comment,
  [8116] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
    STATE(225), 1,
      sym_comment,
  [8126] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    STATE(226), 1,
      sym_comment,
  [8136] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      sym_comment,
  [8146] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      aux_sym__date_token2,
    STATE(228), 1,
      sym_comment,
  [8156] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(568), 1,
      aux_sym__date_token2,
    STATE(229), 1,
      sym_comment,
  [8166] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(570), 1,
      anon_sym_DASH,
    STATE(230), 1,
      sym_comment,
  [8176] = 3,
    ACTIONS(572), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      aux_sym_comment_token1,
    STATE(231), 1,
      sym_comment,
  [8186] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(576), 1,
      sym__number,
    STATE(232), 1,
      sym_comment,
  [8196] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(578), 1,
      sym_identifier,
    STATE(233), 1,
      sym_comment,
  [8206] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(580), 1,
      sym__number,
    STATE(234), 1,
      sym_comment,
  [8216] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(582), 1,
      aux_sym__date_token2,
    STATE(235), 1,
      sym_comment,
  [8226] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(584), 1,
      anon_sym_DASH,
    STATE(236), 1,
      sym_comment,
  [8236] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(586), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      sym_comment,
  [8246] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    STATE(238), 1,
      sym_comment,
  [8256] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym__number,
    STATE(239), 1,
      sym_comment,
  [8266] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      anon_sym_DOT,
    STATE(240), 1,
      sym_comment,
  [8276] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(241), 1,
      sym_comment,
  [8286] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    STATE(242), 1,
      sym_comment,
  [8296] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      sym_comment,
  [8306] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      sym_comment,
  [8316] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(596), 1,
      sym_keyword_side,
    STATE(245), 1,
      sym_comment,
  [8326] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(598), 1,
      anon_sym_LBRACK,
    STATE(246), 1,
      sym_comment,
  [8336] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(600), 1,
      anon_sym_DOT,
    STATE(247), 1,
      sym_comment,
  [8346] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(457), 1,
      aux_sym__date_token2,
    STATE(248), 1,
      sym_comment,
  [8356] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(602), 1,
      aux_sym__date_token2,
    STATE(249), 1,
      sym_comment,
  [8366] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(604), 1,
      aux_sym__date_token2,
    STATE(250), 1,
      sym_comment,
  [8376] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
    STATE(251), 1,
      sym_comment,
  [8386] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(608), 1,
      sym__number,
    STATE(252), 1,
      sym_comment,
  [8396] = 3,
    ACTIONS(572), 1,
      anon_sym_POUND,
    ACTIONS(610), 1,
      aux_sym__literal_string_token1,
    STATE(253), 1,
      sym_comment,
  [8406] = 3,
    ACTIONS(572), 1,
      anon_sym_POUND,
    ACTIONS(612), 1,
      aux_sym__double_quote_string_token1,
    STATE(254), 1,
      sym_comment,
  [8416] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(614), 1,
      anon_sym_LPAREN,
    STATE(255), 1,
      sym_comment,
  [8426] = 3,
    ACTIONS(572), 1,
      anon_sym_POUND,
    ACTIONS(616), 1,
      aux_sym__double_quote_string_token1,
    STATE(256), 1,
      sym_comment,
  [8436] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(618), 1,
      anon_sym_COLON,
    STATE(257), 1,
      sym_comment,
  [8446] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(620), 1,
      sym__number,
    STATE(258), 1,
      sym_comment,
  [8456] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(622), 1,
      anon_sym_LPAREN,
    STATE(259), 1,
      sym_comment,
  [8466] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(624), 1,
      anon_sym_DQUOTE,
    STATE(260), 1,
      sym_comment,
  [8476] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
    STATE(261), 1,
      sym_comment,
  [8486] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(628), 1,
      aux_sym__date_token2,
    STATE(262), 1,
      sym_comment,
  [8496] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(630), 1,
      aux_sym__date_token2,
    STATE(263), 1,
      sym_comment,
  [8506] = 1,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 109,
  [SMALL_STATE(5)] = 161,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 257,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 353,
  [SMALL_STATE(10)] = 400,
  [SMALL_STATE(11)] = 447,
  [SMALL_STATE(12)] = 496,
  [SMALL_STATE(13)] = 542,
  [SMALL_STATE(14)] = 588,
  [SMALL_STATE(15)] = 634,
  [SMALL_STATE(16)] = 682,
  [SMALL_STATE(17)] = 728,
  [SMALL_STATE(18)] = 776,
  [SMALL_STATE(19)] = 824,
  [SMALL_STATE(20)] = 870,
  [SMALL_STATE(21)] = 916,
  [SMALL_STATE(22)] = 962,
  [SMALL_STATE(23)] = 1008,
  [SMALL_STATE(24)] = 1054,
  [SMALL_STATE(25)] = 1100,
  [SMALL_STATE(26)] = 1146,
  [SMALL_STATE(27)] = 1194,
  [SMALL_STATE(28)] = 1240,
  [SMALL_STATE(29)] = 1286,
  [SMALL_STATE(30)] = 1345,
  [SMALL_STATE(31)] = 1394,
  [SMALL_STATE(32)] = 1445,
  [SMALL_STATE(33)] = 1500,
  [SMALL_STATE(34)] = 1547,
  [SMALL_STATE(35)] = 1604,
  [SMALL_STATE(36)] = 1682,
  [SMALL_STATE(37)] = 1727,
  [SMALL_STATE(38)] = 1802,
  [SMALL_STATE(39)] = 1877,
  [SMALL_STATE(40)] = 1949,
  [SMALL_STATE(41)] = 2007,
  [SMALL_STATE(42)] = 2062,
  [SMALL_STATE(43)] = 2117,
  [SMALL_STATE(44)] = 2172,
  [SMALL_STATE(45)] = 2215,
  [SMALL_STATE(46)] = 2286,
  [SMALL_STATE(47)] = 2354,
  [SMALL_STATE(48)] = 2422,
  [SMALL_STATE(49)] = 2490,
  [SMALL_STATE(50)] = 2558,
  [SMALL_STATE(51)] = 2625,
  [SMALL_STATE(52)] = 2690,
  [SMALL_STATE(53)] = 2755,
  [SMALL_STATE(54)] = 2820,
  [SMALL_STATE(55)] = 2869,
  [SMALL_STATE(56)] = 2931,
  [SMALL_STATE(57)] = 2995,
  [SMALL_STATE(58)] = 3057,
  [SMALL_STATE(59)] = 3119,
  [SMALL_STATE(60)] = 3183,
  [SMALL_STATE(61)] = 3245,
  [SMALL_STATE(62)] = 3307,
  [SMALL_STATE(63)] = 3369,
  [SMALL_STATE(64)] = 3426,
  [SMALL_STATE(65)] = 3485,
  [SMALL_STATE(66)] = 3546,
  [SMALL_STATE(67)] = 3605,
  [SMALL_STATE(68)] = 3666,
  [SMALL_STATE(69)] = 3725,
  [SMALL_STATE(70)] = 3784,
  [SMALL_STATE(71)] = 3841,
  [SMALL_STATE(72)] = 3900,
  [SMALL_STATE(73)] = 3959,
  [SMALL_STATE(74)] = 4018,
  [SMALL_STATE(75)] = 4076,
  [SMALL_STATE(76)] = 4134,
  [SMALL_STATE(77)] = 4190,
  [SMALL_STATE(78)] = 4246,
  [SMALL_STATE(79)] = 4299,
  [SMALL_STATE(80)] = 4352,
  [SMALL_STATE(81)] = 4387,
  [SMALL_STATE(82)] = 4438,
  [SMALL_STATE(83)] = 4491,
  [SMALL_STATE(84)] = 4544,
  [SMALL_STATE(85)] = 4597,
  [SMALL_STATE(86)] = 4650,
  [SMALL_STATE(87)] = 4703,
  [SMALL_STATE(88)] = 4756,
  [SMALL_STATE(89)] = 4809,
  [SMALL_STATE(90)] = 4862,
  [SMALL_STATE(91)] = 4915,
  [SMALL_STATE(92)] = 4968,
  [SMALL_STATE(93)] = 5021,
  [SMALL_STATE(94)] = 5074,
  [SMALL_STATE(95)] = 5127,
  [SMALL_STATE(96)] = 5180,
  [SMALL_STATE(97)] = 5235,
  [SMALL_STATE(98)] = 5288,
  [SMALL_STATE(99)] = 5341,
  [SMALL_STATE(100)] = 5389,
  [SMALL_STATE(101)] = 5435,
  [SMALL_STATE(102)] = 5466,
  [SMALL_STATE(103)] = 5499,
  [SMALL_STATE(104)] = 5532,
  [SMALL_STATE(105)] = 5567,
  [SMALL_STATE(106)] = 5597,
  [SMALL_STATE(107)] = 5627,
  [SMALL_STATE(108)] = 5661,
  [SMALL_STATE(109)] = 5689,
  [SMALL_STATE(110)] = 5718,
  [SMALL_STATE(111)] = 5747,
  [SMALL_STATE(112)] = 5772,
  [SMALL_STATE(113)] = 5801,
  [SMALL_STATE(114)] = 5830,
  [SMALL_STATE(115)] = 5857,
  [SMALL_STATE(116)] = 5898,
  [SMALL_STATE(117)] = 5939,
  [SMALL_STATE(118)] = 5968,
  [SMALL_STATE(119)] = 6008,
  [SMALL_STATE(120)] = 6044,
  [SMALL_STATE(121)] = 6082,
  [SMALL_STATE(122)] = 6110,
  [SMALL_STATE(123)] = 6140,
  [SMALL_STATE(124)] = 6172,
  [SMALL_STATE(125)] = 6206,
  [SMALL_STATE(126)] = 6246,
  [SMALL_STATE(127)] = 6286,
  [SMALL_STATE(128)] = 6323,
  [SMALL_STATE(129)] = 6344,
  [SMALL_STATE(130)] = 6365,
  [SMALL_STATE(131)] = 6386,
  [SMALL_STATE(132)] = 6407,
  [SMALL_STATE(133)] = 6428,
  [SMALL_STATE(134)] = 6449,
  [SMALL_STATE(135)] = 6470,
  [SMALL_STATE(136)] = 6491,
  [SMALL_STATE(137)] = 6516,
  [SMALL_STATE(138)] = 6537,
  [SMALL_STATE(139)] = 6558,
  [SMALL_STATE(140)] = 6579,
  [SMALL_STATE(141)] = 6599,
  [SMALL_STATE(142)] = 6619,
  [SMALL_STATE(143)] = 6639,
  [SMALL_STATE(144)] = 6659,
  [SMALL_STATE(145)] = 6679,
  [SMALL_STATE(146)] = 6698,
  [SMALL_STATE(147)] = 6717,
  [SMALL_STATE(148)] = 6736,
  [SMALL_STATE(149)] = 6755,
  [SMALL_STATE(150)] = 6774,
  [SMALL_STATE(151)] = 6805,
  [SMALL_STATE(152)] = 6836,
  [SMALL_STATE(153)] = 6855,
  [SMALL_STATE(154)] = 6874,
  [SMALL_STATE(155)] = 6893,
  [SMALL_STATE(156)] = 6912,
  [SMALL_STATE(157)] = 6931,
  [SMALL_STATE(158)] = 6950,
  [SMALL_STATE(159)] = 6969,
  [SMALL_STATE(160)] = 6988,
  [SMALL_STATE(161)] = 7007,
  [SMALL_STATE(162)] = 7038,
  [SMALL_STATE(163)] = 7057,
  [SMALL_STATE(164)] = 7088,
  [SMALL_STATE(165)] = 7107,
  [SMALL_STATE(166)] = 7136,
  [SMALL_STATE(167)] = 7167,
  [SMALL_STATE(168)] = 7186,
  [SMALL_STATE(169)] = 7205,
  [SMALL_STATE(170)] = 7224,
  [SMALL_STATE(171)] = 7243,
  [SMALL_STATE(172)] = 7271,
  [SMALL_STATE(173)] = 7299,
  [SMALL_STATE(174)] = 7327,
  [SMALL_STATE(175)] = 7347,
  [SMALL_STATE(176)] = 7367,
  [SMALL_STATE(177)] = 7395,
  [SMALL_STATE(178)] = 7423,
  [SMALL_STATE(179)] = 7451,
  [SMALL_STATE(180)] = 7470,
  [SMALL_STATE(181)] = 7491,
  [SMALL_STATE(182)] = 7512,
  [SMALL_STATE(183)] = 7534,
  [SMALL_STATE(184)] = 7554,
  [SMALL_STATE(185)] = 7568,
  [SMALL_STATE(186)] = 7582,
  [SMALL_STATE(187)] = 7601,
  [SMALL_STATE(188)] = 7620,
  [SMALL_STATE(189)] = 7633,
  [SMALL_STATE(190)] = 7646,
  [SMALL_STATE(191)] = 7659,
  [SMALL_STATE(192)] = 7675,
  [SMALL_STATE(193)] = 7691,
  [SMALL_STATE(194)] = 7705,
  [SMALL_STATE(195)] = 7721,
  [SMALL_STATE(196)] = 7735,
  [SMALL_STATE(197)] = 7751,
  [SMALL_STATE(198)] = 7767,
  [SMALL_STATE(199)] = 7781,
  [SMALL_STATE(200)] = 7797,
  [SMALL_STATE(201)] = 7813,
  [SMALL_STATE(202)] = 7829,
  [SMALL_STATE(203)] = 7845,
  [SMALL_STATE(204)] = 7861,
  [SMALL_STATE(205)] = 7875,
  [SMALL_STATE(206)] = 7891,
  [SMALL_STATE(207)] = 7907,
  [SMALL_STATE(208)] = 7923,
  [SMALL_STATE(209)] = 7937,
  [SMALL_STATE(210)] = 7948,
  [SMALL_STATE(211)] = 7959,
  [SMALL_STATE(212)] = 7972,
  [SMALL_STATE(213)] = 7983,
  [SMALL_STATE(214)] = 7994,
  [SMALL_STATE(215)] = 8007,
  [SMALL_STATE(216)] = 8020,
  [SMALL_STATE(217)] = 8031,
  [SMALL_STATE(218)] = 8042,
  [SMALL_STATE(219)] = 8053,
  [SMALL_STATE(220)] = 8066,
  [SMALL_STATE(221)] = 8076,
  [SMALL_STATE(222)] = 8086,
  [SMALL_STATE(223)] = 8096,
  [SMALL_STATE(224)] = 8106,
  [SMALL_STATE(225)] = 8116,
  [SMALL_STATE(226)] = 8126,
  [SMALL_STATE(227)] = 8136,
  [SMALL_STATE(228)] = 8146,
  [SMALL_STATE(229)] = 8156,
  [SMALL_STATE(230)] = 8166,
  [SMALL_STATE(231)] = 8176,
  [SMALL_STATE(232)] = 8186,
  [SMALL_STATE(233)] = 8196,
  [SMALL_STATE(234)] = 8206,
  [SMALL_STATE(235)] = 8216,
  [SMALL_STATE(236)] = 8226,
  [SMALL_STATE(237)] = 8236,
  [SMALL_STATE(238)] = 8246,
  [SMALL_STATE(239)] = 8256,
  [SMALL_STATE(240)] = 8266,
  [SMALL_STATE(241)] = 8276,
  [SMALL_STATE(242)] = 8286,
  [SMALL_STATE(243)] = 8296,
  [SMALL_STATE(244)] = 8306,
  [SMALL_STATE(245)] = 8316,
  [SMALL_STATE(246)] = 8326,
  [SMALL_STATE(247)] = 8336,
  [SMALL_STATE(248)] = 8346,
  [SMALL_STATE(249)] = 8356,
  [SMALL_STATE(250)] = 8366,
  [SMALL_STATE(251)] = 8376,
  [SMALL_STATE(252)] = 8386,
  [SMALL_STATE(253)] = 8396,
  [SMALL_STATE(254)] = 8406,
  [SMALL_STATE(255)] = 8416,
  [SMALL_STATE(256)] = 8426,
  [SMALL_STATE(257)] = 8436,
  [SMALL_STATE(258)] = 8446,
  [SMALL_STATE(259)] = 8456,
  [SMALL_STATE(260)] = 8466,
  [SMALL_STATE(261)] = 8476,
  [SMALL_STATE(262)] = 8486,
  [SMALL_STATE(263)] = 8496,
  [SMALL_STATE(264)] = 8506,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 9),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 9),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 10),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 12),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 13),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(64),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(62),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(61),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(246),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(48),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(77),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(245),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(178),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 6),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(246),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(48),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(77),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(181),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 11),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(257),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(69),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(52),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(65),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(39),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(96),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [626] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
