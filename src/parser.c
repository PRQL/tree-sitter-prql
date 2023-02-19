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
#define STATE_COUNT 299
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
      if (eof) ADVANCE(248);
      if (lookahead == '!') ADVANCE(414);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == '@') ADVANCE(402);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'M') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == 'Z') ADVANCE(407);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead == '|') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(244)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(405);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == '|') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '@') ADVANCE(402);
      if (lookahead == 'F') ADVANCE(312);
      if (lookahead == 'T') ADVANCE(335);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(234)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '@') ADVANCE(402);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'C') ADVANCE(333);
      if (lookahead == 'F') ADVANCE(312);
      if (lookahead == 'M') ADVANCE(313);
      if (lookahead == 'S') ADVANCE(338);
      if (lookahead == 'T') ADVANCE(335);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(350);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(233)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '@') ADVANCE(402);
      if (lookahead == 'A') ADVANCE(347);
      if (lookahead == 'F') ADVANCE(312);
      if (lookahead == 'S') ADVANCE(342);
      if (lookahead == 'T') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(387);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(393);
      END_STATE();
    case 8:
      if (lookahead == '?') ADVANCE(398);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == 'U') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(111);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(79);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(108);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(286);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(57);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(281);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(255);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(260);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(251);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(263);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(253);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(116);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == 'U') ADVANCE(71);
      if (lookahead == 'W') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'G') ADVANCE(275);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 41:
      if (lookahead == 'F') ADVANCE(104);
      END_STATE();
    case 42:
      if (lookahead == 'G') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 'G') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(18);
      if (lookahead == 'V') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'G') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'G') ADVANCE(290);
      END_STATE();
    case 46:
      if (lookahead == 'G') ADVANCE(292);
      END_STATE();
    case 47:
      if (lookahead == 'G') ADVANCE(13);
      END_STATE();
    case 48:
      if (lookahead == 'G') ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'G') ADVANCE(31);
      END_STATE();
    case 50:
      if (lookahead == 'H') ADVANCE(262);
      END_STATE();
    case 51:
      if (lookahead == 'H') ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 53:
      if (lookahead == 'I') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 55:
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == 'U') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(81);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'K') ADVANCE(28);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(102);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(112);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(285);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(70);
      if (lookahead == 'W') ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 71:
      if (lookahead == 'M') ADVANCE(277);
      END_STATE();
    case 72:
      if (lookahead == 'M') ADVANCE(249);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(288);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(265);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(257);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(115);
      END_STATE();
    case 86:
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 87:
      if (lookahead == 'O') ADVANCE(118);
      END_STATE();
    case 88:
      if (lookahead == 'O') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 90:
      if (lookahead == 'O') ADVANCE(59);
      END_STATE();
    case 91:
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 92:
      if (lookahead == 'P') ADVANCE(252);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(287);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(282);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(250);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 100:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(291);
      END_STATE();
    case 102:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 103:
      if (lookahead == 'S') ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(283);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(254);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(271);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(284);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(258);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(279);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 114:
      if (lookahead == 'U') ADVANCE(92);
      END_STATE();
    case 115:
      if (lookahead == 'U') ADVANCE(80);
      END_STATE();
    case 116:
      if (lookahead == 'V') ADVANCE(273);
      END_STATE();
    case 117:
      if (lookahead == 'V') ADVANCE(30);
      END_STATE();
    case 118:
      if (lookahead == 'W') ADVANCE(256);
      END_STATE();
    case 119:
      if (lookahead == 'X') ADVANCE(91);
      END_STATE();
    case 120:
      if (lookahead == 'X') ADVANCE(267);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(183);
      if (lookahead == 'w') ADVANCE(170);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 153:
      if (lookahead == 'f') ADVANCE(216);
      END_STATE();
    case 154:
      if (lookahead == 'g') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'v') ADVANCE(150);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(163);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(292);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(211);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 162:
      if (lookahead == 'h') ADVANCE(262);
      END_STATE();
    case 163:
      if (lookahead == 'h') ADVANCE(218);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 175:
      if (lookahead == 'k') ADVANCE(139);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'w') ADVANCE(213);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 228:
      if (lookahead == 'v') ADVANCE(273);
      END_STATE();
    case 229:
      if (lookahead == 'v') ADVANCE(142);
      END_STATE();
    case 230:
      if (lookahead == 'w') ADVANCE(256);
      END_STATE();
    case 231:
      if (lookahead == 'x') ADVANCE(204);
      END_STATE();
    case 232:
      if (lookahead == 'x') ADVANCE(267);
      END_STATE();
    case 233:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(233)
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '@') ADVANCE(402);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'C') ADVANCE(333);
      if (lookahead == 'F') ADVANCE(312);
      if (lookahead == 'M') ADVANCE(313);
      if (lookahead == 'S') ADVANCE(338);
      if (lookahead == 'T') ADVANCE(335);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(350);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(234)
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '@') ADVANCE(402);
      if (lookahead == 'F') ADVANCE(312);
      if (lookahead == 'T') ADVANCE(335);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(405);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == '|') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '@') ADVANCE(402);
      if (lookahead == 'A') ADVANCE(347);
      if (lookahead == 'F') ADVANCE(312);
      if (lookahead == 'S') ADVANCE(342);
      if (lookahead == 'T') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '[') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(403);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 241:
      if (eof) ADVANCE(248);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(55);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == 'Z') ADVANCE(407);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead == '|') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(245)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 242:
      if (eof) ADVANCE(248);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == 'Z') ADVANCE(407);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead == '|') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(246)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 243:
      if (eof) ADVANCE(248);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead == '|') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 244:
      if (eof) ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(244)
      if (lookahead == '!') ADVANCE(414);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == '@') ADVANCE(402);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'M') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == 'Z') ADVANCE(407);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead == '|') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 245:
      if (eof) ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(245)
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(55);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(406);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == 'Z') ADVANCE(407);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead == '|') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 246:
      if (eof) ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(246)
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(310);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == 'Z') ADVANCE(407);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead == '|') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 247:
      if (eof) ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(408);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(390);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == '[') ADVANCE(293);
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'g') ADVANCE(212);
      if (lookahead == 'j') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead == '|') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(133);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead == '#') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(308);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead == '#') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(387);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(348);
      if (lookahead == 'I') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(334);
      if (lookahead == 'G') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(317);
      if (lookahead == 'U') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == 'g') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == 'u') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(392);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(397);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__time_token1);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_T);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(63);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(413);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(304);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(308);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(393);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 241},
  [3] = {.lex_state = 241},
  [4] = {.lex_state = 241},
  [5] = {.lex_state = 241},
  [6] = {.lex_state = 242},
  [7] = {.lex_state = 242},
  [8] = {.lex_state = 243},
  [9] = {.lex_state = 242},
  [10] = {.lex_state = 241},
  [11] = {.lex_state = 241},
  [12] = {.lex_state = 241},
  [13] = {.lex_state = 243},
  [14] = {.lex_state = 241},
  [15] = {.lex_state = 241},
  [16] = {.lex_state = 241},
  [17] = {.lex_state = 241},
  [18] = {.lex_state = 242},
  [19] = {.lex_state = 241},
  [20] = {.lex_state = 242},
  [21] = {.lex_state = 241},
  [22] = {.lex_state = 241},
  [23] = {.lex_state = 241},
  [24] = {.lex_state = 241},
  [25] = {.lex_state = 242},
  [26] = {.lex_state = 241},
  [27] = {.lex_state = 241},
  [28] = {.lex_state = 241},
  [29] = {.lex_state = 241},
  [30] = {.lex_state = 241},
  [31] = {.lex_state = 242},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 242},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 241},
  [38] = {.lex_state = 241},
  [39] = {.lex_state = 241},
  [40] = {.lex_state = 241},
  [41] = {.lex_state = 241},
  [42] = {.lex_state = 241},
  [43] = {.lex_state = 241},
  [44] = {.lex_state = 241},
  [45] = {.lex_state = 241},
  [46] = {.lex_state = 241},
  [47] = {.lex_state = 241},
  [48] = {.lex_state = 241},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 241},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 241},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 241},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 241},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 241},
  [81] = {.lex_state = 241},
  [82] = {.lex_state = 241},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 241},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 241},
  [111] = {.lex_state = 241},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 241},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 241},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 241},
  [129] = {.lex_state = 241},
  [130] = {.lex_state = 241},
  [131] = {.lex_state = 241},
  [132] = {.lex_state = 241},
  [133] = {.lex_state = 241},
  [134] = {.lex_state = 241},
  [135] = {.lex_state = 241},
  [136] = {.lex_state = 241},
  [137] = {.lex_state = 241},
  [138] = {.lex_state = 241},
  [139] = {.lex_state = 241},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 241},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 241},
  [144] = {.lex_state = 241},
  [145] = {.lex_state = 241},
  [146] = {.lex_state = 241},
  [147] = {.lex_state = 241},
  [148] = {.lex_state = 241},
  [149] = {.lex_state = 241},
  [150] = {.lex_state = 241},
  [151] = {.lex_state = 241},
  [152] = {.lex_state = 241},
  [153] = {.lex_state = 241},
  [154] = {.lex_state = 241},
  [155] = {.lex_state = 241},
  [156] = {.lex_state = 241},
  [157] = {.lex_state = 241},
  [158] = {.lex_state = 241},
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
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
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
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 241},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 242},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 412},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 242},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 242},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 242},
  [273] = {.lex_state = 242},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 242},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 242},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 242},
  [285] = {.lex_state = 306},
  [286] = {.lex_state = 302},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 242},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 302},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 5},
  [298] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(295),
    [sym_pipeline] = STATE(242),
    [sym_from] = STATE(120),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(216),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_keyword_from] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      aux_sym__time_token1,
    ACTIONS(17), 1,
      anon_sym_Z,
    STATE(2), 1,
      sym_comment,
    STATE(4), 1,
      sym__time,
    STATE(16), 1,
      sym_timezone,
    STATE(255), 1,
      sym_direction,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(13), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 29,
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
  [62] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      aux_sym__time_token1,
    ACTIONS(17), 1,
      anon_sym_Z,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      sym__time,
    STATE(15), 1,
      sym_timezone,
    STATE(255), 1,
      sym_direction,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(19), 29,
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
  [124] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_Z,
    STATE(4), 1,
      sym_comment,
    STATE(27), 1,
      sym_timezone,
    STATE(255), 1,
      sym_direction,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(25), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(23), 30,
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
  [181] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_Z,
    STATE(5), 1,
      sym_comment,
    STATE(16), 1,
      sym_timezone,
    STATE(255), 1,
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
  [238] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_COLON,
    ACTIONS(31), 1,
      anon_sym_DOT,
    STATE(6), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(27), 32,
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
  [290] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 32,
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
  [342] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym__number,
    STATE(8), 1,
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
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [391] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
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
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [440] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 33,
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
  [487] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 33,
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
  [534] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(27), 33,
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
  [581] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym__number,
    STATE(13), 1,
      sym_comment,
    ACTIONS(63), 3,
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
  [630] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(67), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 32,
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
  [676] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(13), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 32,
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
  [722] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(25), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(23), 32,
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
  [768] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
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
  [814] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      anon_sym_DOT,
    STATE(18), 1,
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
  [862] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 32,
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
  [908] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      anon_sym_DOT,
    STATE(20), 1,
      sym_comment,
    ACTIONS(87), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 31,
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
  [956] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
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
  [1002] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
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
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1048] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
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
  [1094] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
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
  [1140] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DOT,
    STATE(25), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 31,
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
  [1188] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 32,
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
  [1234] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 32,
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
  [1280] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 32,
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
  [1326] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(63), 3,
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
  [1372] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 32,
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
  [1418] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
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
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1464] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      sym_keyword_count,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(32), 1,
      sym_comment,
    STATE(134), 1,
      sym_binary_expression,
    STATE(148), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(236), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(24), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(125), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1542] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      sym_keyword_count,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(33), 1,
      sym_comment,
    STATE(138), 1,
      sym_binary_expression,
    STATE(148), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(249), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(24), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(125), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1617] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DOT,
    STATE(34), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 28,
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
  [1662] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      sym_keyword_count,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym_comment,
    STATE(138), 1,
      sym_binary_expression,
    STATE(148), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(249), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(24), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(125), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1737] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      sym_keyword_count,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(36), 1,
      sym_comment,
    STATE(138), 1,
      sym_binary_expression,
    STATE(148), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(249), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(24), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(125), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1809] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      anon_sym_T,
    STATE(37), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 25,
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
  [1851] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(159), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(157), 25,
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
  [1891] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_EQ,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(93), 16,
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
      anon_sym_RPAREN,
      anon_sym_QMARK_QMARK,
  [1940] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(95), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 21,
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
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1983] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(95), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 23,
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
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [2024] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    STATE(42), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(95), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 20,
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
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [2069] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(175), 1,
      sym_keyword_or,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_QMARK_QMARK,
    STATE(43), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(171), 13,
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
      anon_sym_RPAREN,
  [2124] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_DOT,
    STATE(44), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 12,
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
  [2167] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_EQ,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(179), 1,
      anon_sym_QMARK_QMARK,
    STATE(45), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(93), 14,
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
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [2220] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_EQ,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_QMARK_QMARK,
    STATE(46), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(93), 15,
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
      anon_sym_RPAREN,
  [2271] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(175), 1,
      sym_keyword_or,
    ACTIONS(179), 1,
      anon_sym_QMARK_QMARK,
    STATE(47), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(185), 13,
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
      anon_sym_RPAREN,
  [2323] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(175), 1,
      sym_keyword_or,
    ACTIONS(179), 1,
      anon_sym_QMARK_QMARK,
    STATE(48), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 13,
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
      anon_sym_RPAREN,
  [2375] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_PLUS,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(49), 1,
      sym_comment,
    STATE(86), 1,
      sym_direction,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(223), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2446] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(175), 1,
      sym_keyword_or,
    ACTIONS(179), 1,
      anon_sym_QMARK_QMARK,
    STATE(50), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(197), 12,
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
  [2497] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(51), 1,
      sym_comment,
    STATE(71), 1,
      sym_direction,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(245), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2565] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_PLUS,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(43), 1,
      sym__expression,
    STATE(52), 1,
      sym_comment,
    STATE(73), 1,
      sym_direction,
    STATE(140), 1,
      sym_assignment,
    STATE(161), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2633] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_PLUS,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(53), 1,
      sym_comment,
    STATE(71), 1,
      sym_direction,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(245), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2701] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_PLUS,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(54), 1,
      sym_comment,
    STATE(71), 1,
      sym_direction,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(245), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2769] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_PLUS,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(55), 1,
      sym_comment,
    STATE(71), 1,
      sym_direction,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(245), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2834] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      anon_sym_PIPE,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(175), 1,
      sym_keyword_or,
    ACTIONS(179), 1,
      anon_sym_QMARK_QMARK,
    STATE(56), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 4,
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
  [2883] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(57), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(131), 1,
      sym_binary_expression,
    STATE(140), 1,
      sym_assignment,
    STATE(229), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2950] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(58), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(230), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3015] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(59), 1,
      sym_comment,
    ACTIONS(159), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(157), 21,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
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
      anon_sym_T,
  [3050] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(60), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(239), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3115] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(43), 1,
      sym__expression,
    STATE(61), 1,
      sym_comment,
    STATE(140), 1,
      sym_assignment,
    STATE(174), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3177] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(62), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(136), 1,
      sym_binary_expression,
    STATE(140), 1,
      sym_assignment,
    STATE(246), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3241] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(63), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(174), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3303] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(64), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(248), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3365] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(65), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(248), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3427] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_T,
    STATE(66), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 19,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
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
  [3463] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(67), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(136), 1,
      sym_binary_expression,
    STATE(140), 1,
      sym_assignment,
    STATE(246), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3527] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(68), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(248), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3589] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(69), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(264), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3651] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(70), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(248), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3713] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(71), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(247), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3772] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_comment,
    STATE(137), 1,
      sym_binary_expression,
    STATE(158), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3833] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(43), 1,
      sym__expression,
    STATE(73), 1,
      sym_comment,
    STATE(140), 1,
      sym_assignment,
    STATE(167), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3892] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    STATE(74), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(95), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 14,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [3931] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(136), 1,
      sym_binary_expression,
    STATE(140), 1,
      sym_assignment,
    STATE(246), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3992] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(76), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(248), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4051] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(77), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(95), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 15,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
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
  [4088] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(48), 1,
      sym__expression,
    STATE(78), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(251), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4145] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(43), 1,
      sym__expression,
    STATE(79), 1,
      sym_comment,
    STATE(140), 1,
      sym_assignment,
    STATE(170), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4204] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_EQ,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      sym_keyword_and,
    ACTIONS(259), 1,
      anon_sym_QMARK_QMARK,
    STATE(80), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(93), 8,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4251] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_EQ,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(259), 1,
      anon_sym_QMARK_QMARK,
    STATE(81), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(93), 9,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4296] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(82), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(95), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 17,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
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
  [4331] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(83), 1,
      sym_comment,
    STATE(132), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(261), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4388] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(43), 1,
      sym__expression,
    STATE(84), 1,
      sym_comment,
    STATE(140), 1,
      sym_assignment,
    STATE(200), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4447] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(85), 1,
      sym_comment,
    STATE(144), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(263), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4504] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_comment,
    STATE(125), 1,
      sym__expression,
    STATE(140), 1,
      sym_assignment,
    STATE(224), 1,
      sym_term,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4563] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym__expression,
    STATE(87), 1,
      sym_comment,
    STATE(190), 1,
      sym__boolean_expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4622] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_EQ,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    STATE(88), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(93), 10,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_QMARK,
  [4665] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__number,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    STATE(89), 1,
      sym_comment,
    STATE(146), 1,
      sym__double_quote_string,
    STATE(152), 1,
      sym__expression,
    STATE(221), 1,
      sym_range,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4721] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(90), 1,
      sym_comment,
    STATE(141), 1,
      sym_binary_expression,
    STATE(158), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4779] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(277), 1,
      sym__number,
    STATE(91), 1,
      sym_comment,
    STATE(146), 1,
      sym__double_quote_string,
    STATE(157), 1,
      sym__expression,
    STATE(162), 1,
      sym_range,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4835] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(92), 1,
      sym_comment,
    STATE(141), 1,
      sym_binary_expression,
    STATE(158), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4893] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(80), 1,
      sym__expression,
    STATE(93), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4946] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym__expression,
    STATE(94), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4999] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(23), 1,
      sym__expression,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5052] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(23), 1,
      sym__expression,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(96), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5105] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(41), 1,
      sym__expression,
    STATE(97), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5158] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(98), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5211] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(99), 1,
      sym_comment,
    STATE(129), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5264] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      sym__number,
    STATE(100), 1,
      sym_comment,
    STATE(146), 1,
      sym__double_quote_string,
    STATE(149), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5317] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      sym__number,
    STATE(101), 1,
      sym_comment,
    STATE(146), 1,
      sym__double_quote_string,
    STATE(150), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5370] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      sym__number,
    STATE(102), 1,
      sym_comment,
    STATE(146), 1,
      sym__double_quote_string,
    STATE(156), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5423] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      sym__number,
    STATE(103), 1,
      sym_comment,
    STATE(146), 1,
      sym__double_quote_string,
    STATE(155), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5476] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      sym__number,
    STATE(23), 1,
      sym__expression,
    STATE(104), 1,
      sym_comment,
    STATE(146), 1,
      sym__double_quote_string,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5529] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      sym__number,
    STATE(105), 1,
      sym_comment,
    STATE(146), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5582] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(106), 1,
      sym_comment,
    STATE(143), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5635] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(47), 1,
      sym__expression,
    STATE(107), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5688] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      sym__number,
    STATE(108), 1,
      sym_comment,
    STATE(146), 1,
      sym__double_quote_string,
    STATE(153), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5741] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(82), 1,
      sym__expression,
    STATE(109), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5794] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_DOT,
    STATE(110), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(283), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
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
  [5829] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_Z,
    ACTIONS(285), 1,
      aux_sym__time_token1,
    STATE(5), 1,
      sym__time,
    STATE(15), 1,
      sym_timezone,
    STATE(111), 1,
      sym_comment,
    STATE(255), 1,
      sym_direction,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(19), 11,
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
  [5872] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym__expression,
    STATE(112), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5925] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(50), 1,
      sym__expression,
    STATE(113), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5978] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(114), 1,
      sym_comment,
    STATE(141), 1,
      sym_binary_expression,
    STATE(158), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6033] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym__expression,
    STATE(115), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6086] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(88), 1,
      sym__expression,
    STATE(116), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6139] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(117), 1,
      sym_comment,
    STATE(128), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6192] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_Z,
    ACTIONS(285), 1,
      aux_sym__time_token1,
    STATE(4), 1,
      sym__time,
    STATE(16), 1,
      sym_timezone,
    STATE(118), 1,
      sym_comment,
    STATE(255), 1,
      sym_direction,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(13), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 11,
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
  [6235] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(74), 1,
      sym__expression,
    STATE(119), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6288] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_keyword_filter,
    ACTIONS(291), 1,
      sym_keyword_derive,
    ACTIONS(293), 1,
      sym_keyword_group,
    ACTIONS(295), 1,
      sym_keyword_aggregate,
    ACTIONS(297), 1,
      sym_keyword_sort,
    ACTIONS(299), 1,
      sym_keyword_take,
    ACTIONS(301), 1,
      sym_keyword_join,
    ACTIONS(303), 1,
      sym_keyword_select,
    STATE(120), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym_transforms_repeat1,
    STATE(244), 1,
      sym_transforms,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(197), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [6339] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(77), 1,
      sym__expression,
    STATE(121), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6392] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym__expression,
    STATE(122), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6445] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(123), 1,
      sym_comment,
    STATE(151), 1,
      sym__expression,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6498] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_DOT,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__double_quote_string,
    STATE(39), 1,
      sym__expression,
    STATE(124), 1,
      sym_comment,
    STATE(281), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(26), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(24), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6551] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      sym_keyword_and,
    ACTIONS(259), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(305), 1,
      sym_keyword_or,
    ACTIONS(307), 1,
      anon_sym_EQ,
    STATE(125), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(171), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(255), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6597] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(311), 1,
      sym_keyword_filter,
    ACTIONS(314), 1,
      sym_keyword_derive,
    ACTIONS(317), 1,
      sym_keyword_group,
    ACTIONS(320), 1,
      sym_keyword_aggregate,
    ACTIONS(323), 1,
      sym_keyword_sort,
    ACTIONS(326), 1,
      sym_keyword_take,
    ACTIONS(329), 1,
      sym_keyword_join,
    ACTIONS(332), 1,
      sym_keyword_select,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(126), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(197), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [6643] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_keyword_filter,
    ACTIONS(291), 1,
      sym_keyword_derive,
    ACTIONS(293), 1,
      sym_keyword_group,
    ACTIONS(295), 1,
      sym_keyword_aggregate,
    ACTIONS(297), 1,
      sym_keyword_sort,
    ACTIONS(299), 1,
      sym_keyword_take,
    ACTIONS(301), 1,
      sym_keyword_join,
    ACTIONS(303), 1,
      sym_keyword_select,
    STATE(126), 1,
      aux_sym_transforms_repeat1,
    STATE(127), 1,
      sym_comment,
    ACTIONS(335), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(197), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [6691] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      sym_keyword_and,
    ACTIONS(259), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(305), 1,
      sym_keyword_or,
    STATE(128), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(255), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6734] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      sym_keyword_and,
    ACTIONS(259), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(305), 1,
      sym_keyword_or,
    STATE(129), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(255), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6777] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      anon_sym_COLON,
    ACTIONS(339), 1,
      anon_sym_DOT,
    STATE(130), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 14,
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
  [6810] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym_derives_repeat1,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 14,
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
  [6841] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      sym_keyword_and,
    ACTIONS(259), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(305), 1,
      sym_keyword_or,
    STATE(132), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(255), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6884] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      anon_sym_COLON,
    ACTIONS(343), 1,
      anon_sym_DOT,
    STATE(133), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(27), 14,
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
  [6917] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      sym_comment,
    STATE(240), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 12,
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
  [6952] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(349), 1,
      anon_sym_DOT,
    STATE(135), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 14,
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
  [6982] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 14,
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
  [7010] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      sym_comment,
    STATE(233), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 12,
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
  [7044] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 12,
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
  [7074] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(357), 1,
      anon_sym_DOT,
    STATE(139), 1,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 13,
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
  [7103] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym_comment,
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
  [7128] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(97), 12,
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
  [7157] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(361), 1,
      anon_sym_T,
    STATE(142), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 13,
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
  [7186] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      sym_keyword_and,
    ACTIONS(259), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(305), 1,
      sym_keyword_or,
    STATE(143), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(255), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7227] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      sym_keyword_and,
    ACTIONS(259), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(305), 1,
      sym_keyword_or,
    STATE(144), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(255), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7268] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_DOT,
    STATE(145), 1,
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
  [7297] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_DOT,
    STATE(146), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 13,
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
  [7326] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(147), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 13,
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
  [7353] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      sym_keyword_and,
    ACTIONS(259), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(305), 1,
      sym_keyword_or,
    ACTIONS(307), 1,
      anon_sym_EQ,
    STATE(148), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7393] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    STATE(149), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(377), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(375), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7427] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    STATE(150), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(369), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(93), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7459] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      sym_keyword_and,
    ACTIONS(259), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(305), 1,
      sym_keyword_or,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7499] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(381), 1,
      sym_keyword_and,
    ACTIONS(383), 1,
      sym_keyword_or,
    ACTIONS(385), 1,
      anon_sym_DOT_DOT,
    ACTIONS(387), 1,
      anon_sym_QMARK_QMARK,
    STATE(152), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(377), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(375), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7539] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(387), 1,
      anon_sym_QMARK_QMARK,
    STATE(153), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(377), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(375), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7575] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(381), 1,
      sym_keyword_and,
    ACTIONS(387), 1,
      anon_sym_QMARK_QMARK,
    STATE(154), 1,
      sym_comment,
    ACTIONS(93), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(369), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(377), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(375), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7613] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(155), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(369), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(93), 11,
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
  [7641] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(369), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(93), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7671] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(381), 1,
      sym_keyword_and,
    ACTIONS(383), 1,
      sym_keyword_or,
    ACTIONS(387), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(389), 1,
      anon_sym_DOT_DOT,
    STATE(157), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(371), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(377), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(375), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7711] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      sym_keyword_and,
    ACTIONS(259), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(305), 1,
      sym_keyword_or,
    STATE(158), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(257), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7748] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_comment,
    ACTIONS(391), 12,
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
  [7769] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(393), 12,
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
  [7790] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(161), 1,
      sym_comment,
    ACTIONS(395), 12,
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
  [7811] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(162), 1,
      sym_comment,
    ACTIONS(397), 12,
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
  [7832] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(399), 12,
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
  [7853] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_comment,
    ACTIONS(401), 12,
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
  [7874] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(403), 12,
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
  [7895] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(405), 12,
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
  [7916] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(407), 12,
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
  [7937] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    ACTIONS(409), 12,
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
  [7958] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(411), 12,
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
  [7979] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      anon_sym_LBRACK,
    STATE(170), 1,
      sym_comment,
    STATE(195), 1,
      sym_conditions,
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
  [8004] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(171), 1,
      sym_comment,
    ACTIONS(417), 11,
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
  [8024] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(172), 1,
      sym_comment,
    ACTIONS(419), 11,
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
  [8044] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment,
    ACTIONS(421), 11,
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
  [8064] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(174), 1,
      sym_comment,
    ACTIONS(423), 11,
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
  [8084] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym_comment,
    ACTIONS(425), 11,
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
  [8104] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(176), 1,
      sym_comment,
    ACTIONS(427), 10,
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
  [8123] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      sym_keyword_aggregate,
    ACTIONS(297), 1,
      sym_keyword_sort,
    ACTIONS(299), 1,
      sym_keyword_take,
    ACTIONS(429), 1,
      sym_keyword_window,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_group_repeat2,
    STATE(219), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8154] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(433), 1,
      sym_keyword_aggregate,
    ACTIONS(436), 1,
      sym_keyword_sort,
    ACTIONS(439), 1,
      sym_keyword_take,
    ACTIONS(442), 1,
      sym_keyword_window,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(178), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(219), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8183] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      sym_keyword_aggregate,
    ACTIONS(297), 1,
      sym_keyword_sort,
    ACTIONS(299), 1,
      sym_keyword_take,
    ACTIONS(429), 1,
      sym_keyword_window,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_group_repeat2,
    STATE(179), 1,
      sym_comment,
    STATE(219), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8214] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(180), 1,
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
  [8233] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(181), 1,
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
  [8252] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      sym_keyword_aggregate,
    ACTIONS(297), 1,
      sym_keyword_sort,
    ACTIONS(299), 1,
      sym_keyword_take,
    ACTIONS(429), 1,
      sym_keyword_window,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_group_repeat2,
    STATE(182), 1,
      sym_comment,
    STATE(219), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8283] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(183), 1,
      sym_comment,
    ACTIONS(455), 10,
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
  [8302] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(184), 1,
      sym_comment,
    ACTIONS(457), 10,
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
  [8321] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(185), 1,
      sym_comment,
    ACTIONS(459), 10,
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
  [8340] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(186), 1,
      sym_comment,
    ACTIONS(461), 10,
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
  [8359] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(187), 1,
      sym_comment,
    ACTIONS(463), 10,
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
  [8378] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(188), 1,
      sym_comment,
    ACTIONS(465), 10,
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
  [8397] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(189), 1,
      sym_comment,
    ACTIONS(467), 10,
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
  [8416] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(190), 1,
      sym_comment,
    ACTIONS(469), 10,
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
  [8435] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(191), 1,
      sym_comment,
    ACTIONS(471), 10,
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
  [8454] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      sym_keyword_aggregate,
    ACTIONS(297), 1,
      sym_keyword_sort,
    ACTIONS(299), 1,
      sym_keyword_take,
    ACTIONS(429), 1,
      sym_keyword_window,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_group_repeat2,
    STATE(192), 1,
      sym_comment,
    STATE(219), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8485] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(193), 1,
      sym_comment,
    ACTIONS(475), 10,
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
  [8504] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(194), 1,
      sym_comment,
    ACTIONS(477), 10,
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
  [8523] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(195), 1,
      sym_comment,
    ACTIONS(479), 10,
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
  [8542] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(196), 1,
      sym_comment,
    ACTIONS(481), 10,
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
  [8561] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(197), 1,
      sym_comment,
    ACTIONS(483), 10,
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
  [8580] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      sym_keyword_aggregate,
    ACTIONS(297), 1,
      sym_keyword_sort,
    ACTIONS(299), 1,
      sym_keyword_take,
    ACTIONS(429), 1,
      sym_keyword_window,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_group_repeat2,
    STATE(198), 1,
      sym_comment,
    STATE(219), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8611] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(199), 1,
      sym_comment,
    ACTIONS(487), 10,
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
  [8630] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(200), 1,
      sym_comment,
    ACTIONS(489), 10,
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
  [8649] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(201), 1,
      sym_comment,
    ACTIONS(491), 10,
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
  [8668] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      sym_keyword_aggregate,
    ACTIONS(297), 1,
      sym_keyword_sort,
    ACTIONS(299), 1,
      sym_keyword_take,
    ACTIONS(429), 1,
      sym_keyword_window,
    STATE(192), 1,
      aux_sym_group_repeat2,
    STATE(202), 1,
      sym_comment,
    STATE(219), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8696] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      sym_keyword_aggregate,
    ACTIONS(297), 1,
      sym_keyword_sort,
    ACTIONS(299), 1,
      sym_keyword_take,
    ACTIONS(429), 1,
      sym_keyword_window,
    STATE(182), 1,
      aux_sym_group_repeat2,
    STATE(203), 1,
      sym_comment,
    STATE(219), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8724] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      sym_keyword_aggregate,
    ACTIONS(297), 1,
      sym_keyword_sort,
    ACTIONS(299), 1,
      sym_keyword_take,
    ACTIONS(429), 1,
      sym_keyword_window,
    STATE(198), 1,
      aux_sym_group_repeat2,
    STATE(204), 1,
      sym_comment,
    STATE(219), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8752] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      sym_keyword_aggregate,
    ACTIONS(297), 1,
      sym_keyword_sort,
    ACTIONS(299), 1,
      sym_keyword_take,
    ACTIONS(429), 1,
      sym_keyword_window,
    STATE(177), 1,
      aux_sym_group_repeat2,
    STATE(205), 1,
      sym_comment,
    STATE(219), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8780] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      sym_keyword_aggregate,
    ACTIONS(297), 1,
      sym_keyword_sort,
    ACTIONS(299), 1,
      sym_keyword_take,
    ACTIONS(429), 1,
      sym_keyword_window,
    STATE(179), 1,
      aux_sym_group_repeat2,
    STATE(206), 1,
      sym_comment,
    STATE(219), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8808] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(207), 1,
      sym_comment,
    ACTIONS(493), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(495), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__number,
      anon_sym_DOT,
      anon_sym_AT,
  [8828] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(208), 1,
      sym_comment,
    ACTIONS(493), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(495), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__number,
      anon_sym_DOT,
      anon_sym_AT,
  [8848] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      sym_identifier,
    STATE(176), 1,
      sym_table_reference,
    STATE(181), 1,
      sym_field,
    STATE(209), 1,
      sym_comment,
    STATE(260), 1,
      sym__double_quote_string,
    STATE(281), 1,
      sym__alias_identifier,
  [8876] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(210), 1,
      sym_comment,
    STATE(212), 1,
      aux_sym_window_definitions_repeat1,
    STATE(222), 1,
      sym__window_definition,
    STATE(292), 1,
      sym_window_definitions,
    ACTIONS(501), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [8897] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    STATE(222), 1,
      sym__window_definition,
    STATE(211), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(503), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [8916] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    STATE(211), 1,
      aux_sym_window_definitions_repeat1,
    STATE(212), 1,
      sym_comment,
    STATE(222), 1,
      sym__window_definition,
    ACTIONS(501), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [8937] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(213), 1,
      sym_comment,
    ACTIONS(510), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [8951] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
    ACTIONS(514), 1,
      sym_keyword_from,
    STATE(120), 1,
      sym_from,
    STATE(242), 1,
      sym_pipeline,
    STATE(214), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [8971] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(517), 1,
      aux_sym__date_token1,
    ACTIONS(519), 1,
      aux_sym__time_token1,
    ACTIONS(521), 1,
      anon_sym_T,
    STATE(14), 1,
      sym__time,
    STATE(142), 1,
      sym__date,
    STATE(215), 1,
      sym_comment,
  [8993] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    STATE(120), 1,
      sym_from,
    STATE(214), 1,
      aux_sym_program_repeat1,
    STATE(216), 1,
      sym_comment,
    STATE(242), 1,
      sym_pipeline,
  [9015] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(525), 1,
      aux_sym__date_token1,
    ACTIONS(527), 1,
      aux_sym__time_token1,
    ACTIONS(529), 1,
      anon_sym_T,
    STATE(14), 1,
      sym__time,
    STATE(37), 1,
      sym__date,
    STATE(217), 1,
      sym_comment,
  [9037] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(517), 1,
      aux_sym__date_token1,
    ACTIONS(527), 1,
      aux_sym__time_token1,
    ACTIONS(529), 1,
      anon_sym_T,
    STATE(14), 1,
      sym__time,
    STATE(66), 1,
      sym__date,
    STATE(218), 1,
      sym_comment,
  [9059] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym_comment,
    ACTIONS(531), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [9073] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(220), 1,
      sym_comment,
    ACTIONS(533), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [9086] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(221), 1,
      sym_comment,
    ACTIONS(535), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [9099] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(222), 1,
      sym_comment,
    ACTIONS(537), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [9112] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      sym_comment,
    STATE(225), 1,
      aux_sym_sorts_repeat1,
  [9128] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      sym_comment,
    STATE(238), 1,
      aux_sym_sorts_repeat1,
  [9144] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    STATE(225), 1,
      sym_comment,
    STATE(234), 1,
      aux_sym_sorts_repeat1,
  [9160] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      sym_comment,
    STATE(235), 1,
      aux_sym_group_repeat1,
  [9176] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    STATE(227), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [9190] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      sym_comment,
    STATE(235), 1,
      aux_sym_group_repeat1,
  [9206] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym_derives_repeat1,
  [9222] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      aux_sym_group_repeat1,
    STATE(230), 1,
      sym_comment,
  [9238] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_RBRACK,
    STATE(231), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [9252] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_derives_repeat1,
    STATE(232), 1,
      sym_comment,
  [9268] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      sym_comment,
    STATE(237), 1,
      aux_sym_conditions_repeat1,
  [9284] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RBRACK,
    STATE(234), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [9298] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RBRACK,
    STATE(235), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [9312] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      sym_comment,
    STATE(240), 1,
      aux_sym_aggregate_repeat1,
  [9328] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(237), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [9342] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_sorts_repeat1,
    STATE(238), 1,
      sym_comment,
  [9358] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    STATE(226), 1,
      aux_sym_group_repeat1,
    STATE(239), 1,
      sym_comment,
  [9374] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_aggregate_repeat1,
    STATE(240), 1,
      sym_comment,
  [9390] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      sym__number,
    ACTIONS(592), 1,
      anon_sym_DOT,
    STATE(241), 1,
      sym_comment,
  [9403] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(242), 1,
      sym_comment,
    ACTIONS(594), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [9414] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(596), 1,
      sym_keyword_derive,
    STATE(243), 1,
      sym_comment,
    STATE(276), 1,
      sym_derives,
  [9427] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(244), 1,
      sym_comment,
    ACTIONS(598), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [9438] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(245), 1,
      sym_comment,
    ACTIONS(572), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9449] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(246), 1,
      sym_comment,
    ACTIONS(563), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9460] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(247), 1,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9471] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(248), 1,
      sym_comment,
    ACTIONS(577), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9482] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(249), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9493] = 3,
    ACTIONS(602), 1,
      anon_sym_POUND,
    ACTIONS(604), 1,
      aux_sym_comment_token1,
    STATE(250), 1,
      sym_comment,
  [9503] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      sym_comment,
  [9513] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(606), 1,
      anon_sym_DASH,
    STATE(252), 1,
      sym_comment,
  [9523] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(554), 1,
      anon_sym_RBRACK,
    STATE(253), 1,
      sym_comment,
  [9533] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      aux_sym__date_token2,
    STATE(254), 1,
      sym_comment,
  [9543] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(608), 1,
      aux_sym__date_token2,
    STATE(255), 1,
      sym_comment,
  [9553] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(610), 1,
      sym__number,
    STATE(256), 1,
      sym_comment,
  [9563] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(612), 1,
      aux_sym__date_token2,
    STATE(257), 1,
      sym_comment,
  [9573] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(614), 1,
      aux_sym__date_token2,
    STATE(258), 1,
      sym_comment,
  [9583] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    STATE(259), 1,
      sym_comment,
  [9593] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DOT,
    STATE(260), 1,
      sym_comment,
  [9603] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(616), 1,
      anon_sym_COLON,
    STATE(261), 1,
      sym_comment,
  [9613] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    STATE(262), 1,
      sym_comment,
  [9623] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      sym_comment,
  [9633] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    STATE(264), 1,
      sym_comment,
  [9643] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
    STATE(265), 1,
      sym_comment,
  [9653] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(622), 1,
      sym_identifier,
    STATE(266), 1,
      sym_comment,
  [9663] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    STATE(267), 1,
      sym_comment,
  [9673] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(626), 1,
      anon_sym_DASH,
    STATE(268), 1,
      sym_comment,
  [9683] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(628), 1,
      anon_sym_DQUOTE,
    STATE(269), 1,
      sym_comment,
  [9693] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(270), 1,
      sym_comment,
  [9703] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(632), 1,
      anon_sym_DQUOTE,
    STATE(271), 1,
      sym_comment,
  [9713] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym__number,
    STATE(272), 1,
      sym_comment,
  [9723] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(634), 1,
      anon_sym_DOT,
    STATE(273), 1,
      sym_comment,
  [9733] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
    STATE(274), 1,
      sym_comment,
  [9743] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(558), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      sym_comment,
  [9753] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      sym_comment,
  [9763] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      sym__number,
    STATE(277), 1,
      sym_comment,
  [9773] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      aux_sym__date_token2,
    STATE(278), 1,
      sym_comment,
  [9783] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(644), 1,
      sym_keyword_side,
    STATE(279), 1,
      sym_comment,
  [9793] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    STATE(280), 1,
      sym_comment,
  [9803] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_DOT,
    STATE(281), 1,
      sym_comment,
  [9813] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(650), 1,
      aux_sym__date_token2,
    STATE(282), 1,
      sym_comment,
  [9823] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      aux_sym__date_token2,
    STATE(283), 1,
      sym_comment,
  [9833] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      sym__number,
    STATE(284), 1,
      sym_comment,
  [9843] = 3,
    ACTIONS(602), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      aux_sym__literal_string_token1,
    STATE(285), 1,
      sym_comment,
  [9853] = 3,
    ACTIONS(602), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      aux_sym__double_quote_string_token1,
    STATE(286), 1,
      sym_comment,
  [9863] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(660), 1,
      anon_sym_LPAREN,
    STATE(287), 1,
      sym_comment,
  [9873] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(662), 1,
      anon_sym_DASH,
    STATE(288), 1,
      sym_comment,
  [9883] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(664), 1,
      sym__number,
    STATE(289), 1,
      sym_comment,
  [9893] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(666), 1,
      aux_sym__date_token2,
    STATE(290), 1,
      sym_comment,
  [9903] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(668), 1,
      aux_sym__date_token2,
    STATE(291), 1,
      sym_comment,
  [9913] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    STATE(292), 1,
      sym_comment,
  [9923] = 3,
    ACTIONS(602), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      aux_sym__double_quote_string_token1,
    STATE(293), 1,
      sym_comment,
  [9933] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_COLON,
    STATE(294), 1,
      sym_comment,
  [9943] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
    STATE(295), 1,
      sym_comment,
  [9953] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      anon_sym_DASH,
    STATE(296), 1,
      sym_comment,
  [9963] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(680), 1,
      aux_sym__date_token2,
    STATE(297), 1,
      sym_comment,
  [9973] = 1,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 181,
  [SMALL_STATE(6)] = 238,
  [SMALL_STATE(7)] = 290,
  [SMALL_STATE(8)] = 342,
  [SMALL_STATE(9)] = 391,
  [SMALL_STATE(10)] = 440,
  [SMALL_STATE(11)] = 487,
  [SMALL_STATE(12)] = 534,
  [SMALL_STATE(13)] = 581,
  [SMALL_STATE(14)] = 630,
  [SMALL_STATE(15)] = 676,
  [SMALL_STATE(16)] = 722,
  [SMALL_STATE(17)] = 768,
  [SMALL_STATE(18)] = 814,
  [SMALL_STATE(19)] = 862,
  [SMALL_STATE(20)] = 908,
  [SMALL_STATE(21)] = 956,
  [SMALL_STATE(22)] = 1002,
  [SMALL_STATE(23)] = 1048,
  [SMALL_STATE(24)] = 1094,
  [SMALL_STATE(25)] = 1140,
  [SMALL_STATE(26)] = 1188,
  [SMALL_STATE(27)] = 1234,
  [SMALL_STATE(28)] = 1280,
  [SMALL_STATE(29)] = 1326,
  [SMALL_STATE(30)] = 1372,
  [SMALL_STATE(31)] = 1418,
  [SMALL_STATE(32)] = 1464,
  [SMALL_STATE(33)] = 1542,
  [SMALL_STATE(34)] = 1617,
  [SMALL_STATE(35)] = 1662,
  [SMALL_STATE(36)] = 1737,
  [SMALL_STATE(37)] = 1809,
  [SMALL_STATE(38)] = 1851,
  [SMALL_STATE(39)] = 1891,
  [SMALL_STATE(40)] = 1940,
  [SMALL_STATE(41)] = 1983,
  [SMALL_STATE(42)] = 2024,
  [SMALL_STATE(43)] = 2069,
  [SMALL_STATE(44)] = 2124,
  [SMALL_STATE(45)] = 2167,
  [SMALL_STATE(46)] = 2220,
  [SMALL_STATE(47)] = 2271,
  [SMALL_STATE(48)] = 2323,
  [SMALL_STATE(49)] = 2375,
  [SMALL_STATE(50)] = 2446,
  [SMALL_STATE(51)] = 2497,
  [SMALL_STATE(52)] = 2565,
  [SMALL_STATE(53)] = 2633,
  [SMALL_STATE(54)] = 2701,
  [SMALL_STATE(55)] = 2769,
  [SMALL_STATE(56)] = 2834,
  [SMALL_STATE(57)] = 2883,
  [SMALL_STATE(58)] = 2950,
  [SMALL_STATE(59)] = 3015,
  [SMALL_STATE(60)] = 3050,
  [SMALL_STATE(61)] = 3115,
  [SMALL_STATE(62)] = 3177,
  [SMALL_STATE(63)] = 3241,
  [SMALL_STATE(64)] = 3303,
  [SMALL_STATE(65)] = 3365,
  [SMALL_STATE(66)] = 3427,
  [SMALL_STATE(67)] = 3463,
  [SMALL_STATE(68)] = 3527,
  [SMALL_STATE(69)] = 3589,
  [SMALL_STATE(70)] = 3651,
  [SMALL_STATE(71)] = 3713,
  [SMALL_STATE(72)] = 3772,
  [SMALL_STATE(73)] = 3833,
  [SMALL_STATE(74)] = 3892,
  [SMALL_STATE(75)] = 3931,
  [SMALL_STATE(76)] = 3992,
  [SMALL_STATE(77)] = 4051,
  [SMALL_STATE(78)] = 4088,
  [SMALL_STATE(79)] = 4145,
  [SMALL_STATE(80)] = 4204,
  [SMALL_STATE(81)] = 4251,
  [SMALL_STATE(82)] = 4296,
  [SMALL_STATE(83)] = 4331,
  [SMALL_STATE(84)] = 4388,
  [SMALL_STATE(85)] = 4447,
  [SMALL_STATE(86)] = 4504,
  [SMALL_STATE(87)] = 4563,
  [SMALL_STATE(88)] = 4622,
  [SMALL_STATE(89)] = 4665,
  [SMALL_STATE(90)] = 4721,
  [SMALL_STATE(91)] = 4779,
  [SMALL_STATE(92)] = 4835,
  [SMALL_STATE(93)] = 4893,
  [SMALL_STATE(94)] = 4946,
  [SMALL_STATE(95)] = 4999,
  [SMALL_STATE(96)] = 5052,
  [SMALL_STATE(97)] = 5105,
  [SMALL_STATE(98)] = 5158,
  [SMALL_STATE(99)] = 5211,
  [SMALL_STATE(100)] = 5264,
  [SMALL_STATE(101)] = 5317,
  [SMALL_STATE(102)] = 5370,
  [SMALL_STATE(103)] = 5423,
  [SMALL_STATE(104)] = 5476,
  [SMALL_STATE(105)] = 5529,
  [SMALL_STATE(106)] = 5582,
  [SMALL_STATE(107)] = 5635,
  [SMALL_STATE(108)] = 5688,
  [SMALL_STATE(109)] = 5741,
  [SMALL_STATE(110)] = 5794,
  [SMALL_STATE(111)] = 5829,
  [SMALL_STATE(112)] = 5872,
  [SMALL_STATE(113)] = 5925,
  [SMALL_STATE(114)] = 5978,
  [SMALL_STATE(115)] = 6033,
  [SMALL_STATE(116)] = 6086,
  [SMALL_STATE(117)] = 6139,
  [SMALL_STATE(118)] = 6192,
  [SMALL_STATE(119)] = 6235,
  [SMALL_STATE(120)] = 6288,
  [SMALL_STATE(121)] = 6339,
  [SMALL_STATE(122)] = 6392,
  [SMALL_STATE(123)] = 6445,
  [SMALL_STATE(124)] = 6498,
  [SMALL_STATE(125)] = 6551,
  [SMALL_STATE(126)] = 6597,
  [SMALL_STATE(127)] = 6643,
  [SMALL_STATE(128)] = 6691,
  [SMALL_STATE(129)] = 6734,
  [SMALL_STATE(130)] = 6777,
  [SMALL_STATE(131)] = 6810,
  [SMALL_STATE(132)] = 6841,
  [SMALL_STATE(133)] = 6884,
  [SMALL_STATE(134)] = 6917,
  [SMALL_STATE(135)] = 6952,
  [SMALL_STATE(136)] = 6982,
  [SMALL_STATE(137)] = 7010,
  [SMALL_STATE(138)] = 7044,
  [SMALL_STATE(139)] = 7074,
  [SMALL_STATE(140)] = 7103,
  [SMALL_STATE(141)] = 7128,
  [SMALL_STATE(142)] = 7157,
  [SMALL_STATE(143)] = 7186,
  [SMALL_STATE(144)] = 7227,
  [SMALL_STATE(145)] = 7268,
  [SMALL_STATE(146)] = 7297,
  [SMALL_STATE(147)] = 7326,
  [SMALL_STATE(148)] = 7353,
  [SMALL_STATE(149)] = 7393,
  [SMALL_STATE(150)] = 7427,
  [SMALL_STATE(151)] = 7459,
  [SMALL_STATE(152)] = 7499,
  [SMALL_STATE(153)] = 7539,
  [SMALL_STATE(154)] = 7575,
  [SMALL_STATE(155)] = 7613,
  [SMALL_STATE(156)] = 7641,
  [SMALL_STATE(157)] = 7671,
  [SMALL_STATE(158)] = 7711,
  [SMALL_STATE(159)] = 7748,
  [SMALL_STATE(160)] = 7769,
  [SMALL_STATE(161)] = 7790,
  [SMALL_STATE(162)] = 7811,
  [SMALL_STATE(163)] = 7832,
  [SMALL_STATE(164)] = 7853,
  [SMALL_STATE(165)] = 7874,
  [SMALL_STATE(166)] = 7895,
  [SMALL_STATE(167)] = 7916,
  [SMALL_STATE(168)] = 7937,
  [SMALL_STATE(169)] = 7958,
  [SMALL_STATE(170)] = 7979,
  [SMALL_STATE(171)] = 8004,
  [SMALL_STATE(172)] = 8024,
  [SMALL_STATE(173)] = 8044,
  [SMALL_STATE(174)] = 8064,
  [SMALL_STATE(175)] = 8084,
  [SMALL_STATE(176)] = 8104,
  [SMALL_STATE(177)] = 8123,
  [SMALL_STATE(178)] = 8154,
  [SMALL_STATE(179)] = 8183,
  [SMALL_STATE(180)] = 8214,
  [SMALL_STATE(181)] = 8233,
  [SMALL_STATE(182)] = 8252,
  [SMALL_STATE(183)] = 8283,
  [SMALL_STATE(184)] = 8302,
  [SMALL_STATE(185)] = 8321,
  [SMALL_STATE(186)] = 8340,
  [SMALL_STATE(187)] = 8359,
  [SMALL_STATE(188)] = 8378,
  [SMALL_STATE(189)] = 8397,
  [SMALL_STATE(190)] = 8416,
  [SMALL_STATE(191)] = 8435,
  [SMALL_STATE(192)] = 8454,
  [SMALL_STATE(193)] = 8485,
  [SMALL_STATE(194)] = 8504,
  [SMALL_STATE(195)] = 8523,
  [SMALL_STATE(196)] = 8542,
  [SMALL_STATE(197)] = 8561,
  [SMALL_STATE(198)] = 8580,
  [SMALL_STATE(199)] = 8611,
  [SMALL_STATE(200)] = 8630,
  [SMALL_STATE(201)] = 8649,
  [SMALL_STATE(202)] = 8668,
  [SMALL_STATE(203)] = 8696,
  [SMALL_STATE(204)] = 8724,
  [SMALL_STATE(205)] = 8752,
  [SMALL_STATE(206)] = 8780,
  [SMALL_STATE(207)] = 8808,
  [SMALL_STATE(208)] = 8828,
  [SMALL_STATE(209)] = 8848,
  [SMALL_STATE(210)] = 8876,
  [SMALL_STATE(211)] = 8897,
  [SMALL_STATE(212)] = 8916,
  [SMALL_STATE(213)] = 8937,
  [SMALL_STATE(214)] = 8951,
  [SMALL_STATE(215)] = 8971,
  [SMALL_STATE(216)] = 8993,
  [SMALL_STATE(217)] = 9015,
  [SMALL_STATE(218)] = 9037,
  [SMALL_STATE(219)] = 9059,
  [SMALL_STATE(220)] = 9073,
  [SMALL_STATE(221)] = 9086,
  [SMALL_STATE(222)] = 9099,
  [SMALL_STATE(223)] = 9112,
  [SMALL_STATE(224)] = 9128,
  [SMALL_STATE(225)] = 9144,
  [SMALL_STATE(226)] = 9160,
  [SMALL_STATE(227)] = 9176,
  [SMALL_STATE(228)] = 9190,
  [SMALL_STATE(229)] = 9206,
  [SMALL_STATE(230)] = 9222,
  [SMALL_STATE(231)] = 9238,
  [SMALL_STATE(232)] = 9252,
  [SMALL_STATE(233)] = 9268,
  [SMALL_STATE(234)] = 9284,
  [SMALL_STATE(235)] = 9298,
  [SMALL_STATE(236)] = 9312,
  [SMALL_STATE(237)] = 9328,
  [SMALL_STATE(238)] = 9342,
  [SMALL_STATE(239)] = 9358,
  [SMALL_STATE(240)] = 9374,
  [SMALL_STATE(241)] = 9390,
  [SMALL_STATE(242)] = 9403,
  [SMALL_STATE(243)] = 9414,
  [SMALL_STATE(244)] = 9427,
  [SMALL_STATE(245)] = 9438,
  [SMALL_STATE(246)] = 9449,
  [SMALL_STATE(247)] = 9460,
  [SMALL_STATE(248)] = 9471,
  [SMALL_STATE(249)] = 9482,
  [SMALL_STATE(250)] = 9493,
  [SMALL_STATE(251)] = 9503,
  [SMALL_STATE(252)] = 9513,
  [SMALL_STATE(253)] = 9523,
  [SMALL_STATE(254)] = 9533,
  [SMALL_STATE(255)] = 9543,
  [SMALL_STATE(256)] = 9553,
  [SMALL_STATE(257)] = 9563,
  [SMALL_STATE(258)] = 9573,
  [SMALL_STATE(259)] = 9583,
  [SMALL_STATE(260)] = 9593,
  [SMALL_STATE(261)] = 9603,
  [SMALL_STATE(262)] = 9613,
  [SMALL_STATE(263)] = 9623,
  [SMALL_STATE(264)] = 9633,
  [SMALL_STATE(265)] = 9643,
  [SMALL_STATE(266)] = 9653,
  [SMALL_STATE(267)] = 9663,
  [SMALL_STATE(268)] = 9673,
  [SMALL_STATE(269)] = 9683,
  [SMALL_STATE(270)] = 9693,
  [SMALL_STATE(271)] = 9703,
  [SMALL_STATE(272)] = 9713,
  [SMALL_STATE(273)] = 9723,
  [SMALL_STATE(274)] = 9733,
  [SMALL_STATE(275)] = 9743,
  [SMALL_STATE(276)] = 9753,
  [SMALL_STATE(277)] = 9763,
  [SMALL_STATE(278)] = 9773,
  [SMALL_STATE(279)] = 9783,
  [SMALL_STATE(280)] = 9793,
  [SMALL_STATE(281)] = 9803,
  [SMALL_STATE(282)] = 9813,
  [SMALL_STATE(283)] = 9823,
  [SMALL_STATE(284)] = 9833,
  [SMALL_STATE(285)] = 9843,
  [SMALL_STATE(286)] = 9853,
  [SMALL_STATE(287)] = 9863,
  [SMALL_STATE(288)] = 9873,
  [SMALL_STATE(289)] = 9883,
  [SMALL_STATE(290)] = 9893,
  [SMALL_STATE(291)] = 9903,
  [SMALL_STATE(292)] = 9913,
  [SMALL_STATE(293)] = 9923,
  [SMALL_STATE(294)] = 9933,
  [SMALL_STATE(295)] = 9943,
  [SMALL_STATE(296)] = 9953,
  [SMALL_STATE(297)] = 9963,
  [SMALL_STATE(298)] = 9973,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 9),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 9),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 10),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 12),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 13),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(87),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(61),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(69),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(280),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(52),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(91),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(279),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(209),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(280),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(52),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(91),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(210),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 11),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(294),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(36),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(75),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(55),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(76),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(114),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [676] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
