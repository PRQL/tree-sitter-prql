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
#define STATE_COUNT 297
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

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
  anon_sym_LPAREN = 34,
  anon_sym_RPAREN = 35,
  anon_sym_COMMA = 36,
  anon_sym_RBRACK = 37,
  anon_sym_DASH = 38,
  anon_sym_PLUS = 39,
  anon_sym_COLON = 40,
  anon_sym_EQ_EQ = 41,
  anon_sym_DQUOTE = 42,
  aux_sym__double_quote_string_token1 = 43,
  anon_sym_SQUOTE = 44,
  aux_sym__literal_string_token1 = 45,
  sym__natural_number = 46,
  anon_sym_DOT = 47,
  sym_identifier = 48,
  anon_sym_DOT_DOT = 49,
  anon_sym_EQ = 50,
  anon_sym_STAR = 51,
  anon_sym_SLASH = 52,
  anon_sym_PIPE = 53,
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
  sym__join_definition = 87,
  sym_conditions = 88,
  sym__self_join = 89,
  sym_select = 90,
  sym_table_reference = 91,
  sym_term = 92,
  sym__expression = 93,
  sym_literal = 94,
  sym__double_quote_string = 95,
  sym__literal_string = 96,
  sym__integer = 97,
  sym__decimal_number = 98,
  sym_field = 99,
  sym__alias_identifier = 100,
  sym_range = 101,
  sym_assignment = 102,
  sym_binary_expression = 103,
  sym__date = 104,
  sym_date = 105,
  sym__time = 106,
  sym_time = 107,
  sym_timestamp = 108,
  sym_timezone = 109,
  sym_comment = 110,
  aux_sym_program_repeat1 = 111,
  aux_sym_transforms_repeat1 = 112,
  aux_sym_derives_repeat1 = 113,
  aux_sym_aggregate_repeat1 = 114,
  aux_sym_sorts_repeat1 = 115,
  aux_sym_window_definitions_repeat1 = 116,
  aux_sym_group_repeat1 = 117,
  aux_sym_group_repeat2 = 118,
  aux_sym_conditions_repeat1 = 119,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__literal_string_token1] = "_literal_string_token1",
  [sym__natural_number] = "_natural_number",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
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
  [sym__join_definition] = "_join_definition",
  [sym_conditions] = "conditions",
  [sym__self_join] = "_self_join",
  [sym_select] = "select",
  [sym_table_reference] = "table_reference",
  [sym_term] = "term",
  [sym__expression] = "_expression",
  [sym_literal] = "literal",
  [sym__double_quote_string] = "_double_quote_string",
  [sym__literal_string] = "_literal_string",
  [sym__integer] = "_integer",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__literal_string_token1] = aux_sym__literal_string_token1,
  [sym__natural_number] = sym__natural_number,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
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
  [sym__join_definition] = sym__join_definition,
  [sym_conditions] = sym_conditions,
  [sym__self_join] = sym__self_join,
  [sym_select] = sym_select,
  [sym_table_reference] = sym_table_reference,
  [sym_term] = sym_term,
  [sym__expression] = sym__expression,
  [sym_literal] = sym_literal,
  [sym__double_quote_string] = sym__double_quote_string,
  [sym__literal_string] = sym__literal_string,
  [sym__integer] = sym__integer,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_EQ_EQ] = {
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
  [sym__natural_number] = {
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
  [sym__join_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_conditions] = {
    .visible = true,
    .named = true,
  },
  [sym__self_join] = {
    .visible = false,
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
  [sym__integer] = {
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
  [13] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 4},
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
  [20] =
    {field_alias, 0},
    {field_operation, 3},
    {field_operator, 1},
  [23] =
    {field_alias, 0},
    {field_operation, 3},
    {field_operation, 4},
    {field_operator, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_identifier,
  },
  [6] = {
    [1] = sym_literal,
  },
  [15] = {
    [2] = sym_literal,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__double_quote_string, 2,
    sym__double_quote_string,
    sym_identifier,
  sym__integer, 2,
    sym__integer,
    sym_literal,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(248);
      if (lookahead == '!') ADVANCE(421);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(301);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == '<') ADVANCE(404);
      if (lookahead == '=') ADVANCE(397);
      if (lookahead == '>') ADVANCE(402);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'M') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(413);
      if (lookahead == 'W') ADVANCE(57);
      if (lookahead == 'Z') ADVANCE(414);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'g') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'j') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'w') ADVANCE(171);
      if (lookahead == '|') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(245)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == '+') ADVANCE(301);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'F') ADVANCE(315);
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(353);
      if (lookahead == 'F') ADVANCE(315);
      if (lookahead == 'S') ADVANCE(348);
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(239)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(351);
      if (lookahead == 'C') ADVANCE(339);
      if (lookahead == 'F') ADVANCE(315);
      if (lookahead == 'M') ADVANCE(316);
      if (lookahead == 'S') ADVANCE(344);
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(356);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'F') ADVANCE(315);
      if (lookahead == 'S') ADVANCE(333);
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(240)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(401);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(303);
      END_STATE();
    case 8:
      if (lookahead == '?') ADVANCE(406);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(66);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'U') ADVANCE(69);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(111);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(79);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(108);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(288);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(58);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(282);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(255);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(259);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(261);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(251);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(264);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(253);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(68);
      if (lookahead == 'I') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == 'U') ADVANCE(72);
      if (lookahead == 'W') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'G') ADVANCE(276);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 42:
      if (lookahead == 'F') ADVANCE(104);
      END_STATE();
    case 43:
      if (lookahead == 'G') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 'G') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(18);
      if (lookahead == 'V') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'G') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'G') ADVANCE(292);
      END_STATE();
    case 47:
      if (lookahead == 'G') ADVANCE(294);
      END_STATE();
    case 48:
      if (lookahead == 'G') ADVANCE(13);
      END_STATE();
    case 49:
      if (lookahead == 'G') ADVANCE(99);
      END_STATE();
    case 50:
      if (lookahead == 'G') ADVANCE(32);
      END_STATE();
    case 51:
      if (lookahead == 'H') ADVANCE(263);
      END_STATE();
    case 52:
      if (lookahead == 'H') ADVANCE(107);
      END_STATE();
    case 53:
      if (lookahead == 'I') ADVANCE(118);
      END_STATE();
    case 54:
      if (lookahead == 'I') ADVANCE(45);
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'I') ADVANCE(66);
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(66);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'U') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'K') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(102);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(112);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(287);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(71);
      if (lookahead == 'W') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(61);
      END_STATE();
    case 72:
      if (lookahead == 'M') ADVANCE(278);
      END_STATE();
    case 73:
      if (lookahead == 'M') ADVANCE(249);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(290);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(266);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(257);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(115);
      END_STATE();
    case 86:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 87:
      if (lookahead == 'O') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 89:
      if (lookahead == 'O') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'O') ADVANCE(60);
      END_STATE();
    case 91:
      if (lookahead == 'P') ADVANCE(14);
      END_STATE();
    case 92:
      if (lookahead == 'P') ADVANCE(252);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(289);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(284);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(250);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(36);
      END_STATE();
    case 100:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(293);
      END_STATE();
    case 102:
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 103:
      if (lookahead == 'S') ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(285);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(254);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(272);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(286);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(258);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(280);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 114:
      if (lookahead == 'U') ADVANCE(92);
      END_STATE();
    case 115:
      if (lookahead == 'U') ADVANCE(80);
      END_STATE();
    case 116:
      if (lookahead == 'U') ADVANCE(29);
      END_STATE();
    case 117:
      if (lookahead == 'V') ADVANCE(274);
      END_STATE();
    case 118:
      if (lookahead == 'V') ADVANCE(31);
      END_STATE();
    case 119:
      if (lookahead == 'W') ADVANCE(256);
      END_STATE();
    case 120:
      if (lookahead == 'X') ADVANCE(91);
      END_STATE();
    case 121:
      if (lookahead == 'X') ADVANCE(268);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(288);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(173);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'g') ADVANCE(276);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 156:
      if (lookahead == 'f') ADVANCE(218);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(292);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(294);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(213);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(146);
      END_STATE();
    case 165:
      if (lookahead == 'h') ADVANCE(263);
      END_STATE();
    case 166:
      if (lookahead == 'h') ADVANCE(220);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 178:
      if (lookahead == 'k') ADVANCE(141);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 231:
      if (lookahead == 'v') ADVANCE(274);
      END_STATE();
    case 232:
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 233:
      if (lookahead == 'w') ADVANCE(256);
      END_STATE();
    case 234:
      if (lookahead == 'x') ADVANCE(205);
      END_STATE();
    case 235:
      if (lookahead == 'x') ADVANCE(268);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(351);
      if (lookahead == 'C') ADVANCE(339);
      if (lookahead == 'F') ADVANCE(315);
      if (lookahead == 'M') ADVANCE(316);
      if (lookahead == 'S') ADVANCE(344);
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 'm') ADVANCE(356);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == '+') ADVANCE(301);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'F') ADVANCE(315);
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 238:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'F') ADVANCE(315);
      if (lookahead == 'S') ADVANCE(333);
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(239)
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(353);
      if (lookahead == 'F') ADVANCE(315);
      if (lookahead == 'S') ADVANCE(348);
      if (lookahead == 'T') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 240:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(240)
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '[') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 243:
      if (eof) ADVANCE(248);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(301);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == '<') ADVANCE(404);
      if (lookahead == '=') ADVANCE(397);
      if (lookahead == '>') ADVANCE(402);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(38);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'W') ADVANCE(57);
      if (lookahead == 'Z') ADVANCE(414);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'g') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'j') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(171);
      if (lookahead == '|') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(246)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 244:
      if (eof) ADVANCE(248);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(301);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == '<') ADVANCE(404);
      if (lookahead == '=') ADVANCE(397);
      if (lookahead == '>') ADVANCE(402);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'F') ADVANCE(55);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(38);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'W') ADVANCE(57);
      if (lookahead == 'Z') ADVANCE(414);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'g') ADVANCE(214);
      if (lookahead == 'j') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(171);
      if (lookahead == '|') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      END_STATE();
    case 245:
      if (eof) ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(245)
      if (lookahead == '!') ADVANCE(421);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(301);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == '<') ADVANCE(404);
      if (lookahead == '=') ADVANCE(397);
      if (lookahead == '>') ADVANCE(402);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'C') ADVANCE(85);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'M') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(413);
      if (lookahead == 'W') ADVANCE(57);
      if (lookahead == 'Z') ADVANCE(414);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'g') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'j') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'w') ADVANCE(171);
      if (lookahead == '|') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 246:
      if (eof) ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(246)
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(301);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == '<') ADVANCE(404);
      if (lookahead == '=') ADVANCE(397);
      if (lookahead == '>') ADVANCE(402);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(38);
      if (lookahead == 'T') ADVANCE(412);
      if (lookahead == 'W') ADVANCE(57);
      if (lookahead == 'Z') ADVANCE(414);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'g') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'j') ADVANCE(204);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(171);
      if (lookahead == '|') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 247:
      if (eof) ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == ')') ADVANCE(297);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(301);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == '<') ADVANCE(404);
      if (lookahead == '=') ADVANCE(397);
      if (lookahead == '>') ADVANCE(402);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'F') ADVANCE(55);
      if (lookahead == 'G') ADVANCE(100);
      if (lookahead == 'J') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(38);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'W') ADVANCE(57);
      if (lookahead == 'Z') ADVANCE(414);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == ']') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'g') ADVANCE(214);
      if (lookahead == 'j') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(171);
      if (lookahead == '|') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
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
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(135);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(307);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead == '#') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(396);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(354);
      if (lookahead == 'I') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(340);
      if (lookahead == 'G') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(320);
      if (lookahead == 'U') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'i') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(380);
      if (lookahead == 'g') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == 'u') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(303);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(64);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(307);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(311);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(401);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 243},
  [3] = {.lex_state = 244},
  [4] = {.lex_state = 244},
  [5] = {.lex_state = 244},
  [6] = {.lex_state = 244},
  [7] = {.lex_state = 244},
  [8] = {.lex_state = 243},
  [9] = {.lex_state = 243},
  [10] = {.lex_state = 243},
  [11] = {.lex_state = 243},
  [12] = {.lex_state = 243},
  [13] = {.lex_state = 243},
  [14] = {.lex_state = 243},
  [15] = {.lex_state = 244},
  [16] = {.lex_state = 243},
  [17] = {.lex_state = 243},
  [18] = {.lex_state = 243},
  [19] = {.lex_state = 243},
  [20] = {.lex_state = 243},
  [21] = {.lex_state = 244},
  [22] = {.lex_state = 243},
  [23] = {.lex_state = 243},
  [24] = {.lex_state = 244},
  [25] = {.lex_state = 243},
  [26] = {.lex_state = 243},
  [27] = {.lex_state = 244},
  [28] = {.lex_state = 243},
  [29] = {.lex_state = 243},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 243},
  [32] = {.lex_state = 243},
  [33] = {.lex_state = 243},
  [34] = {.lex_state = 243},
  [35] = {.lex_state = 243},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 244},
  [40] = {.lex_state = 243},
  [41] = {.lex_state = 243},
  [42] = {.lex_state = 243},
  [43] = {.lex_state = 243},
  [44] = {.lex_state = 243},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 243},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 2},
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
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 243},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 243},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 243},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 243},
  [112] = {.lex_state = 243},
  [113] = {.lex_state = 243},
  [114] = {.lex_state = 243},
  [115] = {.lex_state = 243},
  [116] = {.lex_state = 243},
  [117] = {.lex_state = 243},
  [118] = {.lex_state = 243},
  [119] = {.lex_state = 243},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 243},
  [124] = {.lex_state = 243},
  [125] = {.lex_state = 243},
  [126] = {.lex_state = 243},
  [127] = {.lex_state = 243},
  [128] = {.lex_state = 243},
  [129] = {.lex_state = 243},
  [130] = {.lex_state = 243},
  [131] = {.lex_state = 243},
  [132] = {.lex_state = 243},
  [133] = {.lex_state = 243},
  [134] = {.lex_state = 243},
  [135] = {.lex_state = 243},
  [136] = {.lex_state = 243},
  [137] = {.lex_state = 243},
  [138] = {.lex_state = 243},
  [139] = {.lex_state = 243},
  [140] = {.lex_state = 243},
  [141] = {.lex_state = 243},
  [142] = {.lex_state = 243},
  [143] = {.lex_state = 243},
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
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 244},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 243},
  [213] = {.lex_state = 244},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 243},
  [218] = {.lex_state = 243},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 243},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 243},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 243},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 243},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 244},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 244},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 243},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 244},
  [261] = {.lex_state = 419},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 244},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 243},
  [281] = {.lex_state = 309},
  [282] = {.lex_state = 305},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 305},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 243},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 243},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 5},
  [296] = {(TSStateId)(-1)},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__natural_number] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
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
    [sym_program] = STATE(293),
    [sym_pipeline] = STATE(246),
    [sym_from] = STATE(108),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(208),
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
    STATE(17), 1,
      sym_timezone,
    STATE(257), 1,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [208] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(37), 33,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [255] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_comment,
    ACTIONS(45), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(41), 32,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [304] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 33,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [351] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(45), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(41), 33,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [398] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(53), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(51), 32,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [445] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [492] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      sym__natural_number,
    STATE(12), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 32,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [541] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(63), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 32,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [587] = 4,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [633] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_comment,
    ACTIONS(73), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 31,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [681] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 32,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [727] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [773] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 32,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [819] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 32,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [865] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(93), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 32,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [911] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DOT,
    STATE(21), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 31,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [959] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1005] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      anon_sym_T,
    STATE(23), 1,
      sym_comment,
    ACTIONS(107), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 31,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1053] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1099] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 32,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1145] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 32,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1191] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym_comment,
    ACTIONS(119), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 31,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1239] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(123), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 32,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1285] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_EQ,
    ACTIONS(125), 1,
      sym_keyword_and,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    STATE(29), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(65), 20,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1344] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      sym_keyword_count,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(30), 1,
      sym_comment,
    STATE(112), 1,
      sym_binary_expression,
    STATE(141), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(239), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(141), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1425] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(67), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 29,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1472] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 27,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1521] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    STATE(33), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(65), 22,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_QMARK_QMARK,
  [1576] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    STATE(34), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(67), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 26,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1627] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_EQ,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(65), 21,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1684] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      sym_keyword_count,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(36), 1,
      sym_comment,
    STATE(115), 1,
      sym_binary_expression,
    STATE(141), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(245), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(141), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1762] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      sym_keyword_count,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(37), 1,
      sym_comment,
    STATE(115), 1,
      sym_binary_expression,
    STATE(141), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(245), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(141), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1840] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      sym_keyword_count,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(38), 1,
      sym_comment,
    STATE(115), 1,
      sym_binary_expression,
    STATE(141), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(245), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(141), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1915] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(39), 1,
      sym_comment,
    ACTIONS(119), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 12,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
    ACTIONS(167), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1962] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      sym_keyword_and,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(171), 1,
      sym_keyword_or,
    ACTIONS(173), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(169), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2020] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      sym_keyword_and,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(171), 1,
      sym_keyword_or,
    STATE(41), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
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
  [2075] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      sym_keyword_and,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(171), 1,
      sym_keyword_or,
    STATE(42), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(177), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2130] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      sym_keyword_and,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(171), 1,
      sym_keyword_or,
    STATE(43), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(179), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2185] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(35), 3,
      anon_sym_DOT,
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
    ACTIONS(33), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [2226] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(45), 1,
      sym_comment,
    STATE(69), 1,
      sym_direction,
    STATE(122), 1,
      sym_assignment,
    STATE(215), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2300] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(191), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(46), 1,
      sym_comment,
    STATE(72), 1,
      sym_direction,
    STATE(122), 1,
      sym_assignment,
    STATE(152), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2371] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(47), 1,
      sym_comment,
    STATE(73), 1,
      sym_direction,
    STATE(122), 1,
      sym_assignment,
    STATE(242), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2442] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(48), 1,
      sym_comment,
    STATE(111), 1,
      sym_binary_expression,
    STATE(122), 1,
      sym_assignment,
    STATE(235), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2515] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(49), 1,
      sym_comment,
    STATE(73), 1,
      sym_direction,
    STATE(122), 1,
      sym_assignment,
    STATE(242), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2586] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(50), 1,
      sym_comment,
    STATE(73), 1,
      sym_direction,
    STATE(122), 1,
      sym_assignment,
    STATE(242), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2657] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(51), 1,
      sym_comment,
    STATE(118), 1,
      sym_binary_expression,
    STATE(122), 1,
      sym_assignment,
    STATE(251), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2727] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(52), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(225), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2795] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(213), 1,
      sym_keyword_side,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(53), 1,
      sym_comment,
    STATE(76), 1,
      sym__join_definition,
    STATE(122), 1,
      sym_assignment,
    STATE(144), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2863] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(54), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(229), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2931] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      anon_sym_DASH,
    ACTIONS(189), 1,
      anon_sym_PLUS,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(55), 1,
      sym_comment,
    STATE(73), 1,
      sym_direction,
    STATE(122), 1,
      sym_assignment,
    STATE(242), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2999] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(56), 1,
      sym_comment,
    STATE(118), 1,
      sym_binary_expression,
    STATE(122), 1,
      sym_assignment,
    STATE(251), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3069] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(57), 1,
      sym_comment,
    STATE(118), 1,
      sym_binary_expression,
    STATE(122), 1,
      sym_assignment,
    STATE(251), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3139] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(58), 1,
      sym_comment,
    STATE(118), 1,
      sym_binary_expression,
    STATE(122), 1,
      sym_assignment,
    STATE(251), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3209] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(59), 1,
      sym_comment,
    STATE(158), 1,
      sym_term,
    STATE(162), 1,
      sym_assignment,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3274] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      sym_keyword_and,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(171), 1,
      sym_keyword_or,
    STATE(60), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 10,
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
  [3323] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    ACTIONS(233), 1,
      anon_sym_EQ_EQ,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(61), 1,
      sym_comment,
    STATE(116), 1,
      sym_binary_expression,
    STATE(143), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3390] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(43), 1,
      sym__expression,
    STATE(62), 1,
      sym_comment,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(235), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3453] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(63), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(256), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3518] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(64), 1,
      sym_comment,
    STATE(118), 1,
      sym_binary_expression,
    STATE(122), 1,
      sym_assignment,
    STATE(251), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3585] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(65), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(249), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3650] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(66), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(249), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3715] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(67), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(249), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3780] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(68), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(249), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3845] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(69), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(226), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3907] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(60), 1,
      sym__expression,
    STATE(70), 1,
      sym_comment,
    STATE(167), 1,
      sym__boolean_expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3969] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(71), 1,
      sym_comment,
    STATE(135), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(251), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4029] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(72), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(155), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4091] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(73), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(241), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4153] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(74), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(263), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4215] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_comment,
    STATE(129), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4275] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(76), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(145), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4337] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(77), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(189), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4399] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(39), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym__expression,
    STATE(78), 1,
      sym_comment,
    STATE(122), 1,
      sym_assignment,
    STATE(249), 1,
      sym_term,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4461] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(79), 1,
      sym_comment,
    STATE(127), 1,
      sym_binary_expression,
    STATE(143), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4522] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(80), 1,
      sym_comment,
    STATE(127), 1,
      sym_binary_expression,
    STATE(143), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4583] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__natural_number,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_AT,
    STATE(81), 1,
      sym_comment,
    STATE(107), 1,
      sym__integer,
    STATE(124), 1,
      sym__double_quote_string,
    STATE(142), 1,
      sym__expression,
    STATE(214), 1,
      sym_range,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4642] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_AT,
    ACTIONS(269), 1,
      sym__natural_number,
    STATE(82), 1,
      sym_comment,
    STATE(123), 1,
      sym__integer,
    STATE(124), 1,
      sym__double_quote_string,
    STATE(142), 1,
      sym__expression,
    STATE(151), 1,
      sym_range,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4701] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__natural_number,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_AT,
    STATE(83), 1,
      sym_comment,
    STATE(123), 1,
      sym__integer,
    STATE(124), 1,
      sym__double_quote_string,
    STATE(131), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4757] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__natural_number,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_AT,
    STATE(84), 1,
      sym_comment,
    STATE(123), 1,
      sym__integer,
    STATE(124), 1,
      sym__double_quote_string,
    STATE(133), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4813] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(85), 1,
      sym_comment,
    STATE(137), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4869] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__natural_number,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_AT,
    STATE(86), 1,
      sym_comment,
    STATE(123), 1,
      sym__integer,
    STATE(124), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4925] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(87), 1,
      sym_comment,
    STATE(140), 1,
      sym_binary_expression,
    STATE(143), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4983] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(41), 1,
      sym__expression,
    STATE(88), 1,
      sym_comment,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5039] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(89), 1,
      sym_comment,
    STATE(127), 1,
      sym_binary_expression,
    STATE(143), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5097] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym_comment,
    ACTIONS(35), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(33), 18,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [5129] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym_comment,
    STATE(130), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5185] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym__expression,
    STATE(92), 1,
      sym_comment,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5241] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__natural_number,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_AT,
    STATE(93), 1,
      sym_comment,
    STATE(123), 1,
      sym__integer,
    STATE(124), 1,
      sym__double_quote_string,
    STATE(132), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5297] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(33), 1,
      sym__expression,
    STATE(94), 1,
      sym_comment,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5353] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(32), 1,
      sym__expression,
    STATE(95), 1,
      sym_comment,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5409] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(31), 1,
      sym__expression,
    STATE(96), 1,
      sym_comment,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5465] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(34), 1,
      sym__expression,
    STATE(97), 1,
      sym_comment,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5521] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(14), 1,
      sym__expression,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(98), 1,
      sym_comment,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5577] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(99), 1,
      sym_comment,
    STATE(136), 1,
      sym_binary_expression,
    STATE(143), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5635] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__natural_number,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_AT,
    STATE(14), 1,
      sym__expression,
    STATE(100), 1,
      sym_comment,
    STATE(123), 1,
      sym__integer,
    STATE(124), 1,
      sym__double_quote_string,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5691] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(29), 1,
      sym__expression,
    STATE(101), 1,
      sym_comment,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5747] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__expression,
    STATE(102), 1,
      sym_comment,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5803] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__integer,
    STATE(27), 1,
      sym__double_quote_string,
    STATE(103), 1,
      sym_comment,
    STATE(119), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5859] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__natural_number,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_AT,
    STATE(104), 1,
      sym_comment,
    STATE(123), 1,
      sym__integer,
    STATE(124), 1,
      sym__double_quote_string,
    STATE(139), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5915] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(105), 1,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(37), 18,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [5947] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      sym__natural_number,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_AT,
    STATE(106), 1,
      sym_comment,
    STATE(123), 1,
      sym__integer,
    STATE(124), 1,
      sym__double_quote_string,
    STATE(138), 1,
      sym__expression,
    STATE(274), 1,
      sym__alias_identifier,
    ACTIONS(139), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(25), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(19), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6003] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_DOT,
    STATE(107), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(271), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(95), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6038] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      sym_keyword_filter,
    ACTIONS(279), 1,
      sym_keyword_derive,
    ACTIONS(281), 1,
      sym_keyword_group,
    ACTIONS(283), 1,
      sym_keyword_aggregate,
    ACTIONS(285), 1,
      sym_keyword_sort,
    ACTIONS(287), 1,
      sym_keyword_take,
    ACTIONS(289), 1,
      sym_keyword_join,
    ACTIONS(291), 1,
      sym_keyword_select,
    STATE(108), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym_transforms_repeat1,
    STATE(252), 1,
      sym_transforms,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(166), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [6089] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      sym_keyword_filter,
    ACTIONS(279), 1,
      sym_keyword_derive,
    ACTIONS(281), 1,
      sym_keyword_group,
    ACTIONS(283), 1,
      sym_keyword_aggregate,
    ACTIONS(285), 1,
      sym_keyword_sort,
    ACTIONS(287), 1,
      sym_keyword_take,
    ACTIONS(289), 1,
      sym_keyword_join,
    ACTIONS(291), 1,
      sym_keyword_select,
    STATE(109), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(166), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [6137] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      sym_keyword_filter,
    ACTIONS(300), 1,
      sym_keyword_derive,
    ACTIONS(303), 1,
      sym_keyword_group,
    ACTIONS(306), 1,
      sym_keyword_aggregate,
    ACTIONS(309), 1,
      sym_keyword_sort,
    ACTIONS(312), 1,
      sym_keyword_take,
    ACTIONS(315), 1,
      sym_keyword_join,
    ACTIONS(318), 1,
      sym_keyword_select,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(110), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(166), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [6183] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(111), 1,
      sym_comment,
    STATE(222), 1,
      aux_sym_derives_repeat1,
    ACTIONS(89), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 14,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6214] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym_comment,
    STATE(223), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(89), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 12,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6249] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_DOT,
    STATE(113), 1,
      sym_comment,
    ACTIONS(31), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 14,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [6282] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(331), 1,
      anon_sym_DOT,
    STATE(114), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(17), 14,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [6315] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(115), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(89), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 12,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6345] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym_comment,
    STATE(228), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 12,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6379] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      anon_sym_DOT,
    STATE(117), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(41), 14,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [6409] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(118), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 14,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6437] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      sym_keyword_and,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(171), 1,
      sym_keyword_or,
    STATE(119), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(341), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6478] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(120), 1,
      sym_comment,
    ACTIONS(343), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6503] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(121), 1,
      sym_comment,
    ACTIONS(345), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6528] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(122), 1,
      sym_comment,
    ACTIONS(169), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6553] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_DOT,
    STATE(123), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6582] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      anon_sym_DOT,
    STATE(124), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6611] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6638] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(349), 1,
      anon_sym_T,
    STATE(126), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6667] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(127), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(351), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(87), 12,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6696] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      anon_sym_DOT,
    STATE(128), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6725] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      sym_keyword_and,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(171), 1,
      sym_keyword_or,
    STATE(129), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6766] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      sym_keyword_and,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(171), 1,
      sym_keyword_or,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6806] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    STATE(131), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(361), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(65), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6838] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(132), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6866] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(133), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(361), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(65), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6896] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    STATE(134), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(361), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(367), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(365), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6930] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      sym_keyword_and,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(171), 1,
      sym_keyword_or,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6970] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 12,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6998] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      sym_keyword_and,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(171), 1,
      sym_keyword_or,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7038] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_QMARK_QMARK,
    STATE(138), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(361), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(367), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(365), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7074] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(377), 1,
      sym_keyword_and,
    STATE(139), 1,
      sym_comment,
    ACTIONS(65), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(361), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(367), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7112] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 12,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7140] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      sym_keyword_and,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(171), 1,
      sym_keyword_or,
    ACTIONS(173), 1,
      anon_sym_EQ,
    STATE(141), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7180] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(377), 1,
      sym_keyword_and,
    ACTIONS(381), 1,
      sym_keyword_or,
    ACTIONS(383), 1,
      anon_sym_DOT_DOT,
    STATE(142), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(361), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(367), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7220] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      sym_keyword_and,
    ACTIONS(133), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(171), 1,
      sym_keyword_or,
    STATE(143), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7257] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    STATE(144), 1,
      sym_comment,
    STATE(176), 1,
      sym__self_join,
    STATE(177), 1,
      sym_conditions,
    ACTIONS(385), 10,
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
  [7285] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    STATE(145), 1,
      sym_comment,
    STATE(176), 1,
      sym__self_join,
    STATE(190), 1,
      sym_conditions,
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
  [7313] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(146), 1,
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
  [7334] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(147), 1,
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
  [7355] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(148), 1,
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
  [7376] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(149), 1,
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
  [7397] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
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
  [7418] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(151), 1,
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
  [7439] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(152), 1,
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
  [7460] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(153), 1,
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
  [7481] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(154), 1,
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
  [7502] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(155), 1,
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
  [7523] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(156), 1,
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
  [7544] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(157), 1,
      sym_comment,
    ACTIONS(413), 11,
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
  [7564] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym_comment,
    ACTIONS(415), 11,
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
  [7584] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(159), 1,
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
  [7604] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
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
  [7624] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(161), 1,
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
  [7644] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(162), 1,
      sym_comment,
    ACTIONS(169), 11,
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
  [7664] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
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
  [7684] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
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
  [7704] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym_keyword_aggregate,
    ACTIONS(285), 1,
      sym_keyword_sort,
    ACTIONS(287), 1,
      sym_keyword_take,
    ACTIONS(427), 1,
      sym_keyword_window,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_group_repeat2,
    STATE(207), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [7735] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(431), 10,
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
  [7754] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(433), 10,
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
  [7773] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    ACTIONS(435), 10,
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
  [7792] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(437), 10,
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
  [7811] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(170), 1,
      sym_comment,
    ACTIONS(439), 10,
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
  [7830] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(171), 1,
      sym_comment,
    ACTIONS(441), 10,
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
  [7849] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym_keyword_aggregate,
    ACTIONS(285), 1,
      sym_keyword_sort,
    ACTIONS(287), 1,
      sym_keyword_take,
    ACTIONS(427), 1,
      sym_keyword_window,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_group_repeat2,
    STATE(207), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [7880] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment,
    ACTIONS(445), 10,
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
  [7899] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(174), 1,
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
  [7918] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(175), 1,
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
  [7937] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(176), 1,
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
  [7956] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(177), 1,
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
  [7975] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym_keyword_aggregate,
    ACTIONS(285), 1,
      sym_keyword_sort,
    ACTIONS(287), 1,
      sym_keyword_take,
    ACTIONS(427), 1,
      sym_keyword_window,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_group_repeat2,
    STATE(207), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8006] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(179), 1,
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
  [8025] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(180), 1,
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
  [8044] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(181), 1,
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
  [8063] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(182), 1,
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
  [8082] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(183), 1,
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
  [8101] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym_keyword_aggregate,
    ACTIONS(285), 1,
      sym_keyword_sort,
    ACTIONS(287), 1,
      sym_keyword_take,
    ACTIONS(427), 1,
      sym_keyword_window,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_group_repeat2,
    STATE(207), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8132] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym_keyword_aggregate,
    ACTIONS(285), 1,
      sym_keyword_sort,
    ACTIONS(287), 1,
      sym_keyword_take,
    ACTIONS(427), 1,
      sym_keyword_window,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_group_repeat2,
    STATE(207), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8163] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(186), 1,
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
  [8182] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(187), 1,
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
  [8201] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(188), 1,
      sym_comment,
    ACTIONS(473), 10,
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
  [8220] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(189), 1,
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
  [8239] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(190), 1,
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
  [8258] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(191), 1,
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
  [8277] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(481), 1,
      sym_keyword_aggregate,
    ACTIONS(484), 1,
      sym_keyword_sort,
    ACTIONS(487), 1,
      sym_keyword_take,
    ACTIONS(490), 1,
      sym_keyword_window,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(192), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(207), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8306] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(193), 1,
      sym_comment,
    ACTIONS(495), 10,
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
  [8325] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym_keyword_aggregate,
    ACTIONS(285), 1,
      sym_keyword_sort,
    ACTIONS(287), 1,
      sym_keyword_take,
    ACTIONS(427), 1,
      sym_keyword_window,
    STATE(165), 1,
      aux_sym_group_repeat2,
    STATE(194), 1,
      sym_comment,
    STATE(207), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8353] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(195), 1,
      sym_comment,
    ACTIONS(497), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(499), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [8373] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym_keyword_aggregate,
    ACTIONS(285), 1,
      sym_keyword_sort,
    ACTIONS(287), 1,
      sym_keyword_take,
    ACTIONS(427), 1,
      sym_keyword_window,
    STATE(184), 1,
      aux_sym_group_repeat2,
    STATE(196), 1,
      sym_comment,
    STATE(207), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8401] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(197), 1,
      sym_comment,
    ACTIONS(501), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(503), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [8421] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym_keyword_aggregate,
    ACTIONS(285), 1,
      sym_keyword_sort,
    ACTIONS(287), 1,
      sym_keyword_take,
    ACTIONS(427), 1,
      sym_keyword_window,
    STATE(178), 1,
      aux_sym_group_repeat2,
    STATE(198), 1,
      sym_comment,
    STATE(207), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8449] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym_keyword_aggregate,
    ACTIONS(285), 1,
      sym_keyword_sort,
    ACTIONS(287), 1,
      sym_keyword_take,
    ACTIONS(427), 1,
      sym_keyword_window,
    STATE(172), 1,
      aux_sym_group_repeat2,
    STATE(199), 1,
      sym_comment,
    STATE(207), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8477] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(200), 1,
      sym_comment,
    ACTIONS(497), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(499), 6,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [8497] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym_keyword_aggregate,
    ACTIONS(285), 1,
      sym_keyword_sort,
    ACTIONS(287), 1,
      sym_keyword_take,
    ACTIONS(427), 1,
      sym_keyword_window,
    STATE(185), 1,
      aux_sym_group_repeat2,
    STATE(201), 1,
      sym_comment,
    STATE(207), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8525] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(505), 1,
      anon_sym_LBRACK,
    ACTIONS(507), 1,
      sym_identifier,
    STATE(171), 1,
      sym_field,
    STATE(183), 1,
      sym_table_reference,
    STATE(202), 1,
      sym_comment,
    STATE(260), 1,
      sym__double_quote_string,
    STATE(274), 1,
      sym__alias_identifier,
  [8553] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_comment,
    STATE(205), 1,
      aux_sym_window_definitions_repeat1,
    STATE(211), 1,
      sym__window_definition,
    ACTIONS(509), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [8574] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(203), 1,
      aux_sym_window_definitions_repeat1,
    STATE(204), 1,
      sym_comment,
    STATE(211), 1,
      sym__window_definition,
    STATE(289), 1,
      sym_window_definitions,
    ACTIONS(509), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [8595] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
    STATE(211), 1,
      sym__window_definition,
    STATE(205), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(513), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [8614] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    ACTIONS(520), 1,
      sym_keyword_from,
    STATE(108), 1,
      sym_from,
    STATE(246), 1,
      sym_pipeline,
    STATE(206), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [8634] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(207), 1,
      sym_comment,
    ACTIONS(523), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [8648] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(525), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym_from,
    STATE(206), 1,
      aux_sym_program_repeat1,
    STATE(208), 1,
      sym_comment,
    STATE(246), 1,
      sym_pipeline,
  [8670] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(209), 1,
      sym_comment,
    ACTIONS(527), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [8684] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(529), 1,
      aux_sym__date_token1,
    ACTIONS(531), 1,
      aux_sym__time_token1,
    STATE(22), 1,
      sym__time,
    STATE(23), 1,
      sym__date,
    STATE(210), 1,
      sym_comment,
  [8703] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(211), 1,
      sym_comment,
    ACTIONS(533), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [8716] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(212), 1,
      sym_comment,
    ACTIONS(535), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [8729] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(529), 1,
      aux_sym__date_token1,
    ACTIONS(537), 1,
      aux_sym__time_token1,
    STATE(22), 1,
      sym__time,
    STATE(126), 1,
      sym__date,
    STATE(213), 1,
      sym_comment,
  [8748] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(214), 1,
      sym_comment,
    ACTIONS(539), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [8761] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    STATE(215), 1,
      sym_comment,
    STATE(227), 1,
      aux_sym_sorts_repeat1,
  [8777] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    STATE(216), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [8791] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym__natural_number,
    ACTIONS(548), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym__integer,
    STATE(217), 1,
      sym_comment,
  [8807] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym__natural_number,
    ACTIONS(548), 1,
      anon_sym_DASH,
    STATE(9), 1,
      sym__integer,
    STATE(218), 1,
      sym_comment,
  [8823] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      sym_comment,
    STATE(234), 1,
      aux_sym_group_repeat1,
  [8839] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      sym_comment,
    STATE(240), 1,
      aux_sym_derives_repeat1,
  [8855] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(554), 1,
      anon_sym_DASH,
    STATE(11), 1,
      sym__integer,
    STATE(221), 1,
      sym_comment,
  [8871] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      sym_comment,
    STATE(240), 1,
      aux_sym_derives_repeat1,
  [8887] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      sym_comment,
    STATE(238), 1,
      aux_sym_aggregate_repeat1,
  [8903] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      sym__natural_number,
    ACTIONS(548), 1,
      anon_sym_DASH,
    STATE(11), 1,
      sym__integer,
    STATE(224), 1,
      sym_comment,
  [8919] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      aux_sym_group_repeat1,
    STATE(225), 1,
      sym_comment,
  [8935] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      sym_comment,
    STATE(237), 1,
      aux_sym_sorts_repeat1,
  [8951] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      sym_comment,
    STATE(231), 1,
      aux_sym_sorts_repeat1,
  [8967] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_conditions_repeat1,
    STATE(228), 1,
      sym_comment,
  [8983] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      sym_comment,
    STATE(230), 1,
      aux_sym_group_repeat1,
  [8999] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      sym_comment,
    STATE(234), 1,
      aux_sym_group_repeat1,
  [9015] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RBRACK,
    STATE(231), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [9029] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(554), 1,
      anon_sym_DASH,
    STATE(9), 1,
      sym__integer,
    STATE(232), 1,
      sym_comment,
  [9045] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_derives_repeat1,
    STATE(233), 1,
      sym_comment,
  [9061] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
    STATE(234), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [9075] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      aux_sym_derives_repeat1,
    STATE(235), 1,
      sym_comment,
  [9091] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      sym__natural_number,
    ACTIONS(554), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym__integer,
    STATE(236), 1,
      sym_comment,
  [9107] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_sorts_repeat1,
    STATE(237), 1,
      sym_comment,
  [9123] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    STATE(238), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [9137] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      aux_sym_aggregate_repeat1,
    STATE(239), 1,
      sym_comment,
  [9153] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_RBRACK,
    STATE(240), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [9167] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(241), 1,
      sym_comment,
    ACTIONS(600), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9178] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(242), 1,
      sym_comment,
    ACTIONS(577), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9189] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(602), 1,
      sym__natural_number,
    ACTIONS(604), 1,
      anon_sym_DOT,
    STATE(243), 1,
      sym_comment,
  [9202] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(606), 1,
      aux_sym__time_token1,
    STATE(2), 1,
      sym__time,
    STATE(244), 1,
      sym_comment,
  [9215] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(245), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9226] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(246), 1,
      sym_comment,
    ACTIONS(608), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [9237] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(604), 1,
      anon_sym_DOT,
    ACTIONS(610), 1,
      sym__natural_number,
    STATE(247), 1,
      sym_comment,
  [9250] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(248), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9261] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(249), 1,
      sym_comment,
    ACTIONS(584), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9272] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(614), 1,
      aux_sym__time_token1,
    STATE(2), 1,
      sym__time,
    STATE(250), 1,
      sym_comment,
  [9285] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(251), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9296] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(252), 1,
      sym_comment,
    ACTIONS(616), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [9307] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      sym_keyword_derive,
    STATE(253), 1,
      sym_comment,
    STATE(278), 1,
      sym_derives,
  [9320] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      sym__natural_number,
    STATE(254), 1,
      sym_comment,
  [9330] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(499), 1,
      aux_sym__date_token2,
    STATE(255), 1,
      sym_comment,
  [9340] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    STATE(256), 1,
      sym_comment,
  [9350] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(620), 1,
      aux_sym__date_token2,
    STATE(257), 1,
      sym_comment,
  [9360] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(622), 1,
      aux_sym__date_token2,
    STATE(258), 1,
      sym_comment,
  [9370] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(624), 1,
      aux_sym__date_token2,
    STATE(259), 1,
      sym_comment,
  [9380] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(260), 1,
      sym_comment,
  [9390] = 3,
    ACTIONS(626), 1,
      anon_sym_POUND,
    ACTIONS(628), 1,
      aux_sym_comment_token1,
    STATE(261), 1,
      sym_comment,
  [9400] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(630), 1,
      anon_sym_DASH,
    STATE(262), 1,
      sym_comment,
  [9410] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(632), 1,
      anon_sym_RBRACK,
    STATE(263), 1,
      sym_comment,
  [9420] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(264), 1,
      sym_comment,
  [9430] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(636), 1,
      anon_sym_DASH,
    STATE(265), 1,
      sym_comment,
  [9440] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
    STATE(266), 1,
      sym_comment,
  [9450] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    STATE(267), 1,
      sym_comment,
  [9460] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(268), 1,
      sym_comment,
  [9470] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      sym_comment,
  [9480] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      anon_sym_COLON,
    STATE(270), 1,
      sym_comment,
  [9490] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(588), 1,
      anon_sym_RBRACK,
    STATE(271), 1,
      sym_comment,
  [9500] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    STATE(272), 1,
      sym_comment,
  [9510] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    STATE(273), 1,
      sym_comment,
  [9520] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      anon_sym_DOT,
    STATE(274), 1,
      sym_comment,
  [9530] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
    STATE(275), 1,
      sym_comment,
  [9540] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(650), 1,
      aux_sym__date_token2,
    STATE(276), 1,
      sym_comment,
  [9550] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    STATE(277), 1,
      sym_comment,
  [9560] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      sym_comment,
  [9570] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    STATE(279), 1,
      sym_comment,
  [9580] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      sym__natural_number,
    STATE(280), 1,
      sym_comment,
  [9590] = 3,
    ACTIONS(626), 1,
      anon_sym_POUND,
    ACTIONS(660), 1,
      aux_sym__literal_string_token1,
    STATE(281), 1,
      sym_comment,
  [9600] = 3,
    ACTIONS(626), 1,
      anon_sym_POUND,
    ACTIONS(662), 1,
      aux_sym__double_quote_string_token1,
    STATE(282), 1,
      sym_comment,
  [9610] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(283), 1,
      sym_comment,
  [9620] = 3,
    ACTIONS(626), 1,
      anon_sym_POUND,
    ACTIONS(666), 1,
      aux_sym__double_quote_string_token1,
    STATE(284), 1,
      sym_comment,
  [9630] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    STATE(285), 1,
      sym_comment,
  [9640] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(602), 1,
      sym__natural_number,
    STATE(286), 1,
      sym_comment,
  [9650] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(668), 1,
      aux_sym__date_token2,
    STATE(287), 1,
      sym_comment,
  [9660] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(670), 1,
      anon_sym_COLON,
    STATE(288), 1,
      sym_comment,
  [9670] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    STATE(289), 1,
      sym_comment,
  [9680] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    STATE(290), 1,
      sym_comment,
  [9690] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(610), 1,
      sym__natural_number,
    STATE(291), 1,
      sym_comment,
  [9700] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_DQUOTE,
    STATE(292), 1,
      sym_comment,
  [9710] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
    STATE(293), 1,
      sym_comment,
  [9720] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      aux_sym__date_token2,
    STATE(294), 1,
      sym_comment,
  [9730] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(680), 1,
      aux_sym__date_token2,
    STATE(295), 1,
      sym_comment,
  [9740] = 1,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 109,
  [SMALL_STATE(5)] = 161,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 304,
  [SMALL_STATE(9)] = 351,
  [SMALL_STATE(10)] = 398,
  [SMALL_STATE(11)] = 445,
  [SMALL_STATE(12)] = 492,
  [SMALL_STATE(13)] = 541,
  [SMALL_STATE(14)] = 587,
  [SMALL_STATE(15)] = 633,
  [SMALL_STATE(16)] = 681,
  [SMALL_STATE(17)] = 727,
  [SMALL_STATE(18)] = 773,
  [SMALL_STATE(19)] = 819,
  [SMALL_STATE(20)] = 865,
  [SMALL_STATE(21)] = 911,
  [SMALL_STATE(22)] = 959,
  [SMALL_STATE(23)] = 1005,
  [SMALL_STATE(24)] = 1053,
  [SMALL_STATE(25)] = 1099,
  [SMALL_STATE(26)] = 1145,
  [SMALL_STATE(27)] = 1191,
  [SMALL_STATE(28)] = 1239,
  [SMALL_STATE(29)] = 1285,
  [SMALL_STATE(30)] = 1344,
  [SMALL_STATE(31)] = 1425,
  [SMALL_STATE(32)] = 1472,
  [SMALL_STATE(33)] = 1521,
  [SMALL_STATE(34)] = 1576,
  [SMALL_STATE(35)] = 1627,
  [SMALL_STATE(36)] = 1684,
  [SMALL_STATE(37)] = 1762,
  [SMALL_STATE(38)] = 1840,
  [SMALL_STATE(39)] = 1915,
  [SMALL_STATE(40)] = 1962,
  [SMALL_STATE(41)] = 2020,
  [SMALL_STATE(42)] = 2075,
  [SMALL_STATE(43)] = 2130,
  [SMALL_STATE(44)] = 2185,
  [SMALL_STATE(45)] = 2226,
  [SMALL_STATE(46)] = 2300,
  [SMALL_STATE(47)] = 2371,
  [SMALL_STATE(48)] = 2442,
  [SMALL_STATE(49)] = 2515,
  [SMALL_STATE(50)] = 2586,
  [SMALL_STATE(51)] = 2657,
  [SMALL_STATE(52)] = 2727,
  [SMALL_STATE(53)] = 2795,
  [SMALL_STATE(54)] = 2863,
  [SMALL_STATE(55)] = 2931,
  [SMALL_STATE(56)] = 2999,
  [SMALL_STATE(57)] = 3069,
  [SMALL_STATE(58)] = 3139,
  [SMALL_STATE(59)] = 3209,
  [SMALL_STATE(60)] = 3274,
  [SMALL_STATE(61)] = 3323,
  [SMALL_STATE(62)] = 3390,
  [SMALL_STATE(63)] = 3453,
  [SMALL_STATE(64)] = 3518,
  [SMALL_STATE(65)] = 3585,
  [SMALL_STATE(66)] = 3650,
  [SMALL_STATE(67)] = 3715,
  [SMALL_STATE(68)] = 3780,
  [SMALL_STATE(69)] = 3845,
  [SMALL_STATE(70)] = 3907,
  [SMALL_STATE(71)] = 3969,
  [SMALL_STATE(72)] = 4029,
  [SMALL_STATE(73)] = 4091,
  [SMALL_STATE(74)] = 4153,
  [SMALL_STATE(75)] = 4215,
  [SMALL_STATE(76)] = 4275,
  [SMALL_STATE(77)] = 4337,
  [SMALL_STATE(78)] = 4399,
  [SMALL_STATE(79)] = 4461,
  [SMALL_STATE(80)] = 4522,
  [SMALL_STATE(81)] = 4583,
  [SMALL_STATE(82)] = 4642,
  [SMALL_STATE(83)] = 4701,
  [SMALL_STATE(84)] = 4757,
  [SMALL_STATE(85)] = 4813,
  [SMALL_STATE(86)] = 4869,
  [SMALL_STATE(87)] = 4925,
  [SMALL_STATE(88)] = 4983,
  [SMALL_STATE(89)] = 5039,
  [SMALL_STATE(90)] = 5097,
  [SMALL_STATE(91)] = 5129,
  [SMALL_STATE(92)] = 5185,
  [SMALL_STATE(93)] = 5241,
  [SMALL_STATE(94)] = 5297,
  [SMALL_STATE(95)] = 5353,
  [SMALL_STATE(96)] = 5409,
  [SMALL_STATE(97)] = 5465,
  [SMALL_STATE(98)] = 5521,
  [SMALL_STATE(99)] = 5577,
  [SMALL_STATE(100)] = 5635,
  [SMALL_STATE(101)] = 5691,
  [SMALL_STATE(102)] = 5747,
  [SMALL_STATE(103)] = 5803,
  [SMALL_STATE(104)] = 5859,
  [SMALL_STATE(105)] = 5915,
  [SMALL_STATE(106)] = 5947,
  [SMALL_STATE(107)] = 6003,
  [SMALL_STATE(108)] = 6038,
  [SMALL_STATE(109)] = 6089,
  [SMALL_STATE(110)] = 6137,
  [SMALL_STATE(111)] = 6183,
  [SMALL_STATE(112)] = 6214,
  [SMALL_STATE(113)] = 6249,
  [SMALL_STATE(114)] = 6282,
  [SMALL_STATE(115)] = 6315,
  [SMALL_STATE(116)] = 6345,
  [SMALL_STATE(117)] = 6379,
  [SMALL_STATE(118)] = 6409,
  [SMALL_STATE(119)] = 6437,
  [SMALL_STATE(120)] = 6478,
  [SMALL_STATE(121)] = 6503,
  [SMALL_STATE(122)] = 6528,
  [SMALL_STATE(123)] = 6553,
  [SMALL_STATE(124)] = 6582,
  [SMALL_STATE(125)] = 6611,
  [SMALL_STATE(126)] = 6638,
  [SMALL_STATE(127)] = 6667,
  [SMALL_STATE(128)] = 6696,
  [SMALL_STATE(129)] = 6725,
  [SMALL_STATE(130)] = 6766,
  [SMALL_STATE(131)] = 6806,
  [SMALL_STATE(132)] = 6838,
  [SMALL_STATE(133)] = 6866,
  [SMALL_STATE(134)] = 6896,
  [SMALL_STATE(135)] = 6930,
  [SMALL_STATE(136)] = 6970,
  [SMALL_STATE(137)] = 6998,
  [SMALL_STATE(138)] = 7038,
  [SMALL_STATE(139)] = 7074,
  [SMALL_STATE(140)] = 7112,
  [SMALL_STATE(141)] = 7140,
  [SMALL_STATE(142)] = 7180,
  [SMALL_STATE(143)] = 7220,
  [SMALL_STATE(144)] = 7257,
  [SMALL_STATE(145)] = 7285,
  [SMALL_STATE(146)] = 7313,
  [SMALL_STATE(147)] = 7334,
  [SMALL_STATE(148)] = 7355,
  [SMALL_STATE(149)] = 7376,
  [SMALL_STATE(150)] = 7397,
  [SMALL_STATE(151)] = 7418,
  [SMALL_STATE(152)] = 7439,
  [SMALL_STATE(153)] = 7460,
  [SMALL_STATE(154)] = 7481,
  [SMALL_STATE(155)] = 7502,
  [SMALL_STATE(156)] = 7523,
  [SMALL_STATE(157)] = 7544,
  [SMALL_STATE(158)] = 7564,
  [SMALL_STATE(159)] = 7584,
  [SMALL_STATE(160)] = 7604,
  [SMALL_STATE(161)] = 7624,
  [SMALL_STATE(162)] = 7644,
  [SMALL_STATE(163)] = 7664,
  [SMALL_STATE(164)] = 7684,
  [SMALL_STATE(165)] = 7704,
  [SMALL_STATE(166)] = 7735,
  [SMALL_STATE(167)] = 7754,
  [SMALL_STATE(168)] = 7773,
  [SMALL_STATE(169)] = 7792,
  [SMALL_STATE(170)] = 7811,
  [SMALL_STATE(171)] = 7830,
  [SMALL_STATE(172)] = 7849,
  [SMALL_STATE(173)] = 7880,
  [SMALL_STATE(174)] = 7899,
  [SMALL_STATE(175)] = 7918,
  [SMALL_STATE(176)] = 7937,
  [SMALL_STATE(177)] = 7956,
  [SMALL_STATE(178)] = 7975,
  [SMALL_STATE(179)] = 8006,
  [SMALL_STATE(180)] = 8025,
  [SMALL_STATE(181)] = 8044,
  [SMALL_STATE(182)] = 8063,
  [SMALL_STATE(183)] = 8082,
  [SMALL_STATE(184)] = 8101,
  [SMALL_STATE(185)] = 8132,
  [SMALL_STATE(186)] = 8163,
  [SMALL_STATE(187)] = 8182,
  [SMALL_STATE(188)] = 8201,
  [SMALL_STATE(189)] = 8220,
  [SMALL_STATE(190)] = 8239,
  [SMALL_STATE(191)] = 8258,
  [SMALL_STATE(192)] = 8277,
  [SMALL_STATE(193)] = 8306,
  [SMALL_STATE(194)] = 8325,
  [SMALL_STATE(195)] = 8353,
  [SMALL_STATE(196)] = 8373,
  [SMALL_STATE(197)] = 8401,
  [SMALL_STATE(198)] = 8421,
  [SMALL_STATE(199)] = 8449,
  [SMALL_STATE(200)] = 8477,
  [SMALL_STATE(201)] = 8497,
  [SMALL_STATE(202)] = 8525,
  [SMALL_STATE(203)] = 8553,
  [SMALL_STATE(204)] = 8574,
  [SMALL_STATE(205)] = 8595,
  [SMALL_STATE(206)] = 8614,
  [SMALL_STATE(207)] = 8634,
  [SMALL_STATE(208)] = 8648,
  [SMALL_STATE(209)] = 8670,
  [SMALL_STATE(210)] = 8684,
  [SMALL_STATE(211)] = 8703,
  [SMALL_STATE(212)] = 8716,
  [SMALL_STATE(213)] = 8729,
  [SMALL_STATE(214)] = 8748,
  [SMALL_STATE(215)] = 8761,
  [SMALL_STATE(216)] = 8777,
  [SMALL_STATE(217)] = 8791,
  [SMALL_STATE(218)] = 8807,
  [SMALL_STATE(219)] = 8823,
  [SMALL_STATE(220)] = 8839,
  [SMALL_STATE(221)] = 8855,
  [SMALL_STATE(222)] = 8871,
  [SMALL_STATE(223)] = 8887,
  [SMALL_STATE(224)] = 8903,
  [SMALL_STATE(225)] = 8919,
  [SMALL_STATE(226)] = 8935,
  [SMALL_STATE(227)] = 8951,
  [SMALL_STATE(228)] = 8967,
  [SMALL_STATE(229)] = 8983,
  [SMALL_STATE(230)] = 8999,
  [SMALL_STATE(231)] = 9015,
  [SMALL_STATE(232)] = 9029,
  [SMALL_STATE(233)] = 9045,
  [SMALL_STATE(234)] = 9061,
  [SMALL_STATE(235)] = 9075,
  [SMALL_STATE(236)] = 9091,
  [SMALL_STATE(237)] = 9107,
  [SMALL_STATE(238)] = 9123,
  [SMALL_STATE(239)] = 9137,
  [SMALL_STATE(240)] = 9153,
  [SMALL_STATE(241)] = 9167,
  [SMALL_STATE(242)] = 9178,
  [SMALL_STATE(243)] = 9189,
  [SMALL_STATE(244)] = 9202,
  [SMALL_STATE(245)] = 9215,
  [SMALL_STATE(246)] = 9226,
  [SMALL_STATE(247)] = 9237,
  [SMALL_STATE(248)] = 9250,
  [SMALL_STATE(249)] = 9261,
  [SMALL_STATE(250)] = 9272,
  [SMALL_STATE(251)] = 9285,
  [SMALL_STATE(252)] = 9296,
  [SMALL_STATE(253)] = 9307,
  [SMALL_STATE(254)] = 9320,
  [SMALL_STATE(255)] = 9330,
  [SMALL_STATE(256)] = 9340,
  [SMALL_STATE(257)] = 9350,
  [SMALL_STATE(258)] = 9360,
  [SMALL_STATE(259)] = 9370,
  [SMALL_STATE(260)] = 9380,
  [SMALL_STATE(261)] = 9390,
  [SMALL_STATE(262)] = 9400,
  [SMALL_STATE(263)] = 9410,
  [SMALL_STATE(264)] = 9420,
  [SMALL_STATE(265)] = 9430,
  [SMALL_STATE(266)] = 9440,
  [SMALL_STATE(267)] = 9450,
  [SMALL_STATE(268)] = 9460,
  [SMALL_STATE(269)] = 9470,
  [SMALL_STATE(270)] = 9480,
  [SMALL_STATE(271)] = 9490,
  [SMALL_STATE(272)] = 9500,
  [SMALL_STATE(273)] = 9510,
  [SMALL_STATE(274)] = 9520,
  [SMALL_STATE(275)] = 9530,
  [SMALL_STATE(276)] = 9540,
  [SMALL_STATE(277)] = 9550,
  [SMALL_STATE(278)] = 9560,
  [SMALL_STATE(279)] = 9570,
  [SMALL_STATE(280)] = 9580,
  [SMALL_STATE(281)] = 9590,
  [SMALL_STATE(282)] = 9600,
  [SMALL_STATE(283)] = 9610,
  [SMALL_STATE(284)] = 9620,
  [SMALL_STATE(285)] = 9630,
  [SMALL_STATE(286)] = 9640,
  [SMALL_STATE(287)] = 9650,
  [SMALL_STATE(288)] = 9660,
  [SMALL_STATE(289)] = 9670,
  [SMALL_STATE(290)] = 9680,
  [SMALL_STATE(291)] = 9690,
  [SMALL_STATE(292)] = 9700,
  [SMALL_STATE(293)] = 9710,
  [SMALL_STATE(294)] = 9720,
  [SMALL_STATE(295)] = 9730,
  [SMALL_STATE(296)] = 9740,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 9),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 9),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 12),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 10),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 15),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(70),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(59),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(63),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(273),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(46),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(82),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(53),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(202),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 14),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 13),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 11),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(273),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(46),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(82),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(204),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_definition, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(288),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(89),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(55),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(78),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(38),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(64),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 4),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [676] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
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
