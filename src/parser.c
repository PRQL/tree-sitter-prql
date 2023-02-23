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
#define STATE_COUNT 419
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 23

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
  sym_keyword_func = 33,
  anon_sym_DASH_GT = 34,
  anon_sym_COLON = 35,
  anon_sym_LBRACK = 36,
  anon_sym_LPAREN = 37,
  anon_sym_RPAREN = 38,
  anon_sym_COMMA = 39,
  anon_sym_RBRACK = 40,
  anon_sym_DASH = 41,
  anon_sym_PLUS = 42,
  anon_sym_EQ_EQ = 43,
  anon_sym_f = 44,
  anon_sym_DQUOTE = 45,
  aux_sym__double_quote_string_token1 = 46,
  anon_sym_SQUOTE = 47,
  aux_sym__literal_string_token1 = 48,
  sym__natural_number = 49,
  anon_sym_DOT = 50,
  sym_identifier = 51,
  anon_sym_DOT_DOT = 52,
  anon_sym_EQ = 53,
  anon_sym_STAR = 54,
  anon_sym_SLASH = 55,
  anon_sym_PIPE = 56,
  anon_sym_BANG_EQ = 57,
  anon_sym_GT = 58,
  anon_sym_GT_EQ = 59,
  anon_sym_LT = 60,
  anon_sym_LT_EQ = 61,
  anon_sym_QMARK_QMARK = 62,
  aux_sym__date_token1 = 63,
  aux_sym__date_token2 = 64,
  anon_sym_AT = 65,
  aux_sym__time_token1 = 66,
  anon_sym_T = 67,
  anon_sym_Z = 68,
  anon_sym_POUND = 69,
  aux_sym_comment_token1 = 70,
  sym_bang = 71,
  sym_program = 72,
  sym_pipeline = 73,
  sym_function_definition = 74,
  sym_parameter = 75,
  sym__call_parameter = 76,
  sym_function_call = 77,
  sym_transforms = 78,
  sym_from = 79,
  sym_derives = 80,
  sym_filter = 81,
  sym__boolean_expression = 82,
  sym_aggregate = 83,
  sym_aggregate_operation = 84,
  sym__aggregate_count = 85,
  sym_sorts = 86,
  sym_direction = 87,
  sym_takes = 88,
  sym_window = 89,
  sym_window_definitions = 90,
  sym__window_definition = 91,
  sym_group = 92,
  sym_joins = 93,
  sym__join_definition = 94,
  sym_conditions = 95,
  sym__self_join = 96,
  sym_select = 97,
  sym_table_reference = 98,
  sym_term = 99,
  sym__expression = 100,
  sym_literal = 101,
  sym_f_string = 102,
  sym__double_quote_string = 103,
  sym__literal_string = 104,
  sym__integer = 105,
  sym__decimal_number = 106,
  sym_field = 107,
  sym__alias_identifier = 108,
  sym_range = 109,
  sym_assignment = 110,
  sym_binary_expression = 111,
  sym__date = 112,
  sym_date = 113,
  sym__time = 114,
  sym_time = 115,
  sym_timestamp = 116,
  sym_timezone = 117,
  sym_comment = 118,
  aux_sym_program_repeat1 = 119,
  aux_sym_function_definition_repeat1 = 120,
  aux_sym_function_call_repeat1 = 121,
  aux_sym_transforms_repeat1 = 122,
  aux_sym_derives_repeat1 = 123,
  aux_sym_aggregate_repeat1 = 124,
  aux_sym_sorts_repeat1 = 125,
  aux_sym_window_definitions_repeat1 = 126,
  aux_sym_group_repeat1 = 127,
  aux_sym_group_repeat2 = 128,
  aux_sym_conditions_repeat1 = 129,
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
  [sym_keyword_func] = "keyword_func",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_f] = "f",
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
  [sym_function_definition] = "function_definition",
  [sym_parameter] = "parameter",
  [sym__call_parameter] = "parameter",
  [sym_function_call] = "function_call",
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
  [sym_f_string] = "f_string",
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
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
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
  [sym_keyword_func] = sym_keyword_func,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_f] = anon_sym_f,
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
  [sym_function_definition] = sym_function_definition,
  [sym_parameter] = sym_parameter,
  [sym__call_parameter] = sym_parameter,
  [sym_function_call] = sym_function_call,
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
  [sym_f_string] = sym_f_string,
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
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
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
  [sym_keyword_func] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
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
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__call_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
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
  [sym_f_string] = {
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
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
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
  field_default = 2,
  field_from = 3,
  field_left = 4,
  field_logic = 5,
  field_name = 6,
  field_operation = 7,
  field_operator = 8,
  field_predicate = 9,
  field_right = 10,
  field_table = 11,
  field_till = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_default] = "default",
  [field_from] = "from",
  [field_left] = "left",
  [field_logic] = "logic",
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
  [9] = {.index = 10, .length = 3},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 4},
  [12] = {.index = 19, .length = 1},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 21, .length = 2},
  [15] = {.index = 23, .length = 1},
  [16] = {.index = 24, .length = 3},
  [17] = {.index = 27, .length = 3},
  [18] = {.index = 30, .length = 3},
  [19] = {.index = 33, .length = 3},
  [20] = {.index = 36, .length = 4},
  [21] = {.index = 40, .length = 1},
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
    {field_operator, 1},
    {field_operator, 2},
  [10] =
    {field_alias, 0},
    {field_operation, 2},
    {field_operator, 1},
  [13] =
    {field_name, 2},
    {field_table, 0},
  [15] =
    {field_alias, 0},
    {field_operation, 2},
    {field_operation, 3},
    {field_operator, 1},
  [19] =
    {field_value, 0, .inherited = true},
  [20] =
    {field_default, 2},
  [21] =
    {field_logic, 4},
    {field_name, 1},
  [23] =
    {field_predicate, 1},
  [24] =
    {field_from, 0},
    {field_operator, 1},
    {field_till, 2},
  [27] =
    {field_left, 1},
    {field_operator, 2},
    {field_right, 3},
  [30] =
    {field_alias, 0},
    {field_operator, 1},
    {field_operator, 3},
  [33] =
    {field_alias, 0},
    {field_operation, 3},
    {field_operator, 1},
  [36] =
    {field_alias, 0},
    {field_operation, 3},
    {field_operation, 4},
    {field_operator, 1},
  [40] =
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_identifier,
  },
  [6] = {
    [1] = sym_literal,
  },
  [22] = {
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
      if (eof) ADVANCE(268);
      if (lookahead == '!') ADVANCE(557);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(337);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == '/') ADVANCE(535);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == '<') ADVANCE(540);
      if (lookahead == '=') ADVANCE(533);
      if (lookahead == '>') ADVANCE(538);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '@') ADVANCE(546);
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'C') ADVANCE(94);
      if (lookahead == 'D') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == 'F') ADVANCE(16);
      if (lookahead == 'G') ADVANCE(109);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'J') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(34);
      if (lookahead == 'M') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(549);
      if (lookahead == 'W') ADVANCE(65);
      if (lookahead == 'Z') ADVANCE(550);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'g') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'j') ADVANCE(214);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == '|') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '/') ADVANCE(535);
      if (lookahead == '<') ADVANCE(540);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(538);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(400);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'O') ADVANCE(414);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '|') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(248)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '/') ADVANCE(535);
      if (lookahead == '<') ADVANCE(540);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(538);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(383);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'O') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(412);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == 'w') ADVANCE(480);
      if (lookahead == '|') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '@') ADVANCE(546);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(249)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '@') ADVANCE(546);
      if (lookahead == 'A') ADVANCE(436);
      if (lookahead == 'C') ADVANCE(411);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'M') ADVANCE(356);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(525);
      if (lookahead == 'c') ADVANCE(500);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(445);
      if (lookahead == 's') ADVANCE(516);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(246)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '@') ADVANCE(546);
      if (lookahead == 'A') ADVANCE(439);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'S') ADVANCE(433);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 's') ADVANCE(522);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(251)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '@') ADVANCE(546);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'S') ADVANCE(393);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'A') ADVANCE(384);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'S') ADVANCE(412);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == 'w') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(256)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(537);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(339);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(329);
      END_STATE();
    case 15:
      if (lookahead == '?') ADVANCE(542);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'U') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(73);
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'U') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(130);
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(120);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(88);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(327);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(118);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(318);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(96);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(312);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(281);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(289);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(291);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(273);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(294);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(277);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(29);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'U') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == 'G') ADVANCE(306);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == 'F') ADVANCE(113);
      END_STATE();
    case 52:
      if (lookahead == 'G') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'G') ADVANCE(58);
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == 'V') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 'G') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'G') ADVANCE(324);
      END_STATE();
    case 56:
      if (lookahead == 'G') ADVANCE(326);
      END_STATE();
    case 57:
      if (lookahead == 'G') ADVANCE(21);
      END_STATE();
    case 58:
      if (lookahead == 'G') ADVANCE(108);
      END_STATE();
    case 59:
      if (lookahead == 'G') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == 'H') ADVANCE(293);
      END_STATE();
    case 61:
      if (lookahead == 'H') ADVANCE(116);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(127);
      END_STATE();
    case 63:
      if (lookahead == 'I') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'I') ADVANCE(74);
      if (lookahead == 'R') ADVANCE(97);
      if (lookahead == 'U') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(90);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'K') ADVANCE(36);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(111);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(121);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(317);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(42);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(75);
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 78:
      if (lookahead == 'L') ADVANCE(79);
      if (lookahead == 'W') ADVANCE(110);
      END_STATE();
    case 79:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 80:
      if (lookahead == 'M') ADVANCE(308);
      END_STATE();
    case 81:
      if (lookahead == 'M') ADVANCE(269);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(322);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 84:
      if (lookahead == 'N') ADVANCE(296);
      END_STATE();
    case 85:
      if (lookahead == 'N') ADVANCE(285);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(26);
      END_STATE();
    case 94:
      if (lookahead == 'O') ADVANCE(124);
      END_STATE();
    case 95:
      if (lookahead == 'O') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 97:
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 98:
      if (lookahead == 'O') ADVANCE(123);
      END_STATE();
    case 99:
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 100:
      if (lookahead == 'P') ADVANCE(22);
      END_STATE();
    case 101:
      if (lookahead == 'P') ADVANCE(275);
      END_STATE();
    case 102:
      if (lookahead == 'R') ADVANCE(320);
      END_STATE();
    case 103:
      if (lookahead == 'R') ADVANCE(314);
      END_STATE();
    case 104:
      if (lookahead == 'R') ADVANCE(271);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(20);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(114);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == 'S') ADVANCE(325);
      END_STATE();
    case 111:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 112:
      if (lookahead == 'S') ADVANCE(122);
      END_STATE();
    case 113:
      if (lookahead == 'T') ADVANCE(315);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(279);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(302);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(316);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(287);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(310);
      END_STATE();
    case 119:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 120:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 123:
      if (lookahead == 'U') ADVANCE(101);
      END_STATE();
    case 124:
      if (lookahead == 'U') ADVANCE(89);
      END_STATE();
    case 125:
      if (lookahead == 'U') ADVANCE(37);
      END_STATE();
    case 126:
      if (lookahead == 'V') ADVANCE(304);
      END_STATE();
    case 127:
      if (lookahead == 'V') ADVANCE(39);
      END_STATE();
    case 128:
      if (lookahead == 'W') ADVANCE(283);
      END_STATE();
    case 129:
      if (lookahead == 'X') ADVANCE(100);
      END_STATE();
    case 130:
      if (lookahead == 'X') ADVANCE(298);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 141:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == 'u') ADVANCE(195);
      if (lookahead == 'w') ADVANCE(182);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'g') ADVANCE(306);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 166:
      if (lookahead == 'f') ADVANCE(228);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 168:
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(163);
      END_STATE();
    case 169:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 170:
      if (lookahead == 'g') ADVANCE(324);
      END_STATE();
    case 171:
      if (lookahead == 'g') ADVANCE(326);
      END_STATE();
    case 172:
      if (lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 173:
      if (lookahead == 'g') ADVANCE(223);
      END_STATE();
    case 174:
      if (lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 175:
      if (lookahead == 'h') ADVANCE(293);
      END_STATE();
    case 176:
      if (lookahead == 'h') ADVANCE(230);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 187:
      if (lookahead == 'k') ADVANCE(151);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'w') ADVANCE(225);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 196:
      if (lookahead == 'm') ADVANCE(269);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 239:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 241:
      if (lookahead == 'v') ADVANCE(304);
      END_STATE();
    case 242:
      if (lookahead == 'v') ADVANCE(154);
      END_STATE();
    case 243:
      if (lookahead == 'w') ADVANCE(283);
      END_STATE();
    case 244:
      if (lookahead == 'x') ADVANCE(215);
      END_STATE();
    case 245:
      if (lookahead == 'x') ADVANCE(298);
      END_STATE();
    case 246:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(246)
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '@') ADVANCE(546);
      if (lookahead == 'A') ADVANCE(436);
      if (lookahead == 'C') ADVANCE(411);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'M') ADVANCE(356);
      if (lookahead == 'S') ADVANCE(428);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(525);
      if (lookahead == 'c') ADVANCE(500);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(445);
      if (lookahead == 's') ADVANCE(516);
      if (lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 247:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '/') ADVANCE(535);
      if (lookahead == '<') ADVANCE(540);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(538);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(383);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'O') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(412);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == 'w') ADVANCE(480);
      if (lookahead == '|') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 248:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(248)
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '/') ADVANCE(535);
      if (lookahead == '<') ADVANCE(540);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(538);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(400);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'O') ADVANCE(414);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead == '|') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 249:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(249)
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '@') ADVANCE(546);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 250:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '@') ADVANCE(546);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'S') ADVANCE(393);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 251:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(251)
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '@') ADVANCE(546);
      if (lookahead == 'A') ADVANCE(439);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'S') ADVANCE(433);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 's') ADVANCE(522);
      if (lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 252:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'A') ADVANCE(384);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'S') ADVANCE(412);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == 'W') ADVANCE(391);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == 'w') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 253:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'F') ADVANCE(354);
      if (lookahead == 'T') ADVANCE(415);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 254:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 255:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 256:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(256)
      if (lookahead == '#') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      END_STATE();
    case 259:
      if (eof) ADVANCE(268);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '/') ADVANCE(535);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == '<') ADVANCE(540);
      if (lookahead == '=') ADVANCE(533);
      if (lookahead == '>') ADVANCE(538);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(52);
      if (lookahead == 'D') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == 'F') ADVANCE(17);
      if (lookahead == 'G') ADVANCE(109);
      if (lookahead == 'J') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(95);
      if (lookahead == 'S') ADVANCE(47);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == 'W') ADVANCE(65);
      if (lookahead == 'Z') ADVANCE(550);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'g') ADVANCE(224);
      if (lookahead == 'j') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == '|') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 260:
      if (eof) ADVANCE(268);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '/') ADVANCE(535);
      if (lookahead == '<') ADVANCE(540);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(538);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(383);
      if (lookahead == 'D') ADVANCE(377);
      if (lookahead == 'F') ADVANCE(353);
      if (lookahead == 'G') ADVANCE(419);
      if (lookahead == 'J') ADVANCE(407);
      if (lookahead == 'O') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(378);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'f') ADVANCE(442);
      if (lookahead == 'g') ADVANCE(509);
      if (lookahead == 'j') ADVANCE(496);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == '|') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(265)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 261:
      if (eof) ADVANCE(268);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == '/') ADVANCE(535);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == '<') ADVANCE(540);
      if (lookahead == '=') ADVANCE(533);
      if (lookahead == '>') ADVANCE(538);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(52);
      if (lookahead == 'D') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == 'F') ADVANCE(64);
      if (lookahead == 'G') ADVANCE(109);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'J') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(34);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(47);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead == 'W') ADVANCE(65);
      if (lookahead == 'Z') ADVANCE(550);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'g') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'j') ADVANCE(214);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == '|') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(264)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 262:
      if (eof) ADVANCE(268);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'A') ADVANCE(384);
      if (lookahead == 'D') ADVANCE(377);
      if (lookahead == 'F') ADVANCE(353);
      if (lookahead == 'G') ADVANCE(419);
      if (lookahead == 'J') ADVANCE(407);
      if (lookahead == 'S') ADVANCE(378);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'f') ADVANCE(442);
      if (lookahead == 'g') ADVANCE(509);
      if (lookahead == 'j') ADVANCE(496);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(267)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 263:
      if (eof) ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      if (lookahead == '!') ADVANCE(557);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(337);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == '/') ADVANCE(535);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == '<') ADVANCE(540);
      if (lookahead == '=') ADVANCE(533);
      if (lookahead == '>') ADVANCE(538);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '@') ADVANCE(546);
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'C') ADVANCE(94);
      if (lookahead == 'D') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == 'F') ADVANCE(16);
      if (lookahead == 'G') ADVANCE(109);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'J') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(34);
      if (lookahead == 'M') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(549);
      if (lookahead == 'W') ADVANCE(65);
      if (lookahead == 'Z') ADVANCE(550);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'g') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'j') ADVANCE(214);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == '|') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 264:
      if (eof) ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(264)
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(352);
      if (lookahead == '/') ADVANCE(535);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == '<') ADVANCE(540);
      if (lookahead == '=') ADVANCE(533);
      if (lookahead == '>') ADVANCE(538);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(52);
      if (lookahead == 'D') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == 'F') ADVANCE(64);
      if (lookahead == 'G') ADVANCE(109);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'J') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(34);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(47);
      if (lookahead == 'T') ADVANCE(548);
      if (lookahead == 'W') ADVANCE(65);
      if (lookahead == 'Z') ADVANCE(550);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'g') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'j') ADVANCE(214);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == '|') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 265:
      if (eof) ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(265)
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '/') ADVANCE(535);
      if (lookahead == '<') ADVANCE(540);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(538);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(383);
      if (lookahead == 'D') ADVANCE(377);
      if (lookahead == 'F') ADVANCE(353);
      if (lookahead == 'G') ADVANCE(419);
      if (lookahead == 'J') ADVANCE(407);
      if (lookahead == 'O') ADVANCE(414);
      if (lookahead == 'S') ADVANCE(378);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'f') ADVANCE(442);
      if (lookahead == 'g') ADVANCE(509);
      if (lookahead == 'j') ADVANCE(496);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == '|') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 266:
      if (eof) ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == '*') ADVANCE(534);
      if (lookahead == '+') ADVANCE(338);
      if (lookahead == ',') ADVANCE(334);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == '/') ADVANCE(535);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == '<') ADVANCE(540);
      if (lookahead == '=') ADVANCE(533);
      if (lookahead == '>') ADVANCE(538);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == 'A') ADVANCE(52);
      if (lookahead == 'D') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == 'F') ADVANCE(17);
      if (lookahead == 'G') ADVANCE(109);
      if (lookahead == 'J') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(95);
      if (lookahead == 'S') ADVANCE(47);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == 'W') ADVANCE(65);
      if (lookahead == 'Z') ADVANCE(550);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'g') ADVANCE(224);
      if (lookahead == 'j') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == '|') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 267:
      if (eof) ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(267)
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '.') ADVANCE(351);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'A') ADVANCE(384);
      if (lookahead == 'D') ADVANCE(377);
      if (lookahead == 'F') ADVANCE(353);
      if (lookahead == 'G') ADVANCE(419);
      if (lookahead == 'J') ADVANCE(407);
      if (lookahead == 'S') ADVANCE(378);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'f') ADVANCE(442);
      if (lookahead == 'g') ADVANCE(509);
      if (lookahead == 'j') ADVANCE(496);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_keyword_window);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(145);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(329);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(345);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(344);
      if (lookahead == '#') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(349);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(348);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(532);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(395);
      if (lookahead == 'I') ADVANCE(396);
      if (lookahead == 'R') ADVANCE(408);
      if (lookahead == 'U') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(394);
      if (lookahead == 'R') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'I') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(397);
      if (lookahead == 'O') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(420);
      if (lookahead == 'G') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(386);
      if (lookahead == 'N') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(363);
      if (lookahead == 'U') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead == 'u') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == 'r') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(530);
      if (lookahead == 'i') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead == 'o') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead == 'g') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(475);
      if (lookahead == 'n') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(452);
      if (lookahead == 'u') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(339);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(539);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(541);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(72);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(345);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(349);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(537);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 261},
  [2] = {.lex_state = 260},
  [3] = {.lex_state = 261},
  [4] = {.lex_state = 259},
  [5] = {.lex_state = 259},
  [6] = {.lex_state = 261},
  [7] = {.lex_state = 261},
  [8] = {.lex_state = 261},
  [9] = {.lex_state = 261},
  [10] = {.lex_state = 259},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 261},
  [13] = {.lex_state = 259},
  [14] = {.lex_state = 259},
  [15] = {.lex_state = 261},
  [16] = {.lex_state = 261},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 261},
  [19] = {.lex_state = 261},
  [20] = {.lex_state = 259},
  [21] = {.lex_state = 261},
  [22] = {.lex_state = 261},
  [23] = {.lex_state = 261},
  [24] = {.lex_state = 259},
  [25] = {.lex_state = 259},
  [26] = {.lex_state = 261},
  [27] = {.lex_state = 261},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 261},
  [30] = {.lex_state = 261},
  [31] = {.lex_state = 261},
  [32] = {.lex_state = 261},
  [33] = {.lex_state = 261},
  [34] = {.lex_state = 259},
  [35] = {.lex_state = 261},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 261},
  [38] = {.lex_state = 261},
  [39] = {.lex_state = 261},
  [40] = {.lex_state = 261},
  [41] = {.lex_state = 261},
  [42] = {.lex_state = 259},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 261},
  [46] = {.lex_state = 261},
  [47] = {.lex_state = 261},
  [48] = {.lex_state = 261},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 261},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 261},
  [65] = {.lex_state = 261},
  [66] = {.lex_state = 262},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 262},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 261},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 261},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 261},
  [125] = {.lex_state = 261},
  [126] = {.lex_state = 261},
  [127] = {.lex_state = 262},
  [128] = {.lex_state = 262},
  [129] = {.lex_state = 262},
  [130] = {.lex_state = 262},
  [131] = {.lex_state = 262},
  [132] = {.lex_state = 261},
  [133] = {.lex_state = 261},
  [134] = {.lex_state = 262},
  [135] = {.lex_state = 262},
  [136] = {.lex_state = 262},
  [137] = {.lex_state = 262},
  [138] = {.lex_state = 262},
  [139] = {.lex_state = 262},
  [140] = {.lex_state = 261},
  [141] = {.lex_state = 261},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 262},
  [145] = {.lex_state = 262},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 261},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 261},
  [150] = {.lex_state = 261},
  [151] = {.lex_state = 261},
  [152] = {.lex_state = 261},
  [153] = {.lex_state = 261},
  [154] = {.lex_state = 261},
  [155] = {.lex_state = 261},
  [156] = {.lex_state = 261},
  [157] = {.lex_state = 261},
  [158] = {.lex_state = 261},
  [159] = {.lex_state = 261},
  [160] = {.lex_state = 261},
  [161] = {.lex_state = 261},
  [162] = {.lex_state = 261},
  [163] = {.lex_state = 261},
  [164] = {.lex_state = 261},
  [165] = {.lex_state = 261},
  [166] = {.lex_state = 261},
  [167] = {.lex_state = 261},
  [168] = {.lex_state = 261},
  [169] = {.lex_state = 261},
  [170] = {.lex_state = 261},
  [171] = {.lex_state = 261},
  [172] = {.lex_state = 261},
  [173] = {.lex_state = 261},
  [174] = {.lex_state = 261},
  [175] = {.lex_state = 261},
  [176] = {.lex_state = 261},
  [177] = {.lex_state = 261},
  [178] = {.lex_state = 261},
  [179] = {.lex_state = 261},
  [180] = {.lex_state = 261},
  [181] = {.lex_state = 261},
  [182] = {.lex_state = 261},
  [183] = {.lex_state = 261},
  [184] = {.lex_state = 261},
  [185] = {.lex_state = 261},
  [186] = {.lex_state = 261},
  [187] = {.lex_state = 261},
  [188] = {.lex_state = 261},
  [189] = {.lex_state = 261},
  [190] = {.lex_state = 261},
  [191] = {.lex_state = 261},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 261},
  [194] = {.lex_state = 261},
  [195] = {.lex_state = 261},
  [196] = {.lex_state = 261},
  [197] = {.lex_state = 261},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 261},
  [202] = {.lex_state = 261},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 261},
  [206] = {.lex_state = 261},
  [207] = {.lex_state = 261},
  [208] = {.lex_state = 261},
  [209] = {.lex_state = 8},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 261},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 261},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 261},
  [222] = {.lex_state = 261},
  [223] = {.lex_state = 261},
  [224] = {.lex_state = 261},
  [225] = {.lex_state = 259},
  [226] = {.lex_state = 259},
  [227] = {.lex_state = 261},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 259},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 261},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 3},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 261},
  [241] = {.lex_state = 261},
  [242] = {.lex_state = 259},
  [243] = {.lex_state = 261},
  [244] = {.lex_state = 261},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 261},
  [247] = {.lex_state = 261},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 261},
  [250] = {.lex_state = 261},
  [251] = {.lex_state = 261},
  [252] = {.lex_state = 261},
  [253] = {.lex_state = 261},
  [254] = {.lex_state = 261},
  [255] = {.lex_state = 261},
  [256] = {.lex_state = 261},
  [257] = {.lex_state = 261},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 261},
  [260] = {.lex_state = 261},
  [261] = {.lex_state = 261},
  [262] = {.lex_state = 261},
  [263] = {.lex_state = 261},
  [264] = {.lex_state = 261},
  [265] = {.lex_state = 261},
  [266] = {.lex_state = 261},
  [267] = {.lex_state = 261},
  [268] = {.lex_state = 261},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 261},
  [281] = {.lex_state = 261},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 261},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 9},
  [292] = {.lex_state = 9},
  [293] = {.lex_state = 9},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 10},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 9},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 261},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 261},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 261},
  [306] = {.lex_state = 261},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 261},
  [316] = {.lex_state = 9},
  [317] = {.lex_state = 261},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 261},
  [325] = {.lex_state = 9},
  [326] = {.lex_state = 261},
  [327] = {.lex_state = 260},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 9},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 260},
  [334] = {.lex_state = 260},
  [335] = {.lex_state = 260},
  [336] = {.lex_state = 9},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 9},
  [339] = {.lex_state = 260},
  [340] = {.lex_state = 9},
  [341] = {.lex_state = 260},
  [342] = {.lex_state = 9},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 9},
  [345] = {.lex_state = 9},
  [346] = {.lex_state = 9},
  [347] = {.lex_state = 9},
  [348] = {.lex_state = 9},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 261},
  [356] = {.lex_state = 261},
  [357] = {.lex_state = 347},
  [358] = {.lex_state = 9},
  [359] = {.lex_state = 343},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 555},
  [366] = {.lex_state = 261},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 261},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 11},
  [373] = {.lex_state = 11},
  [374] = {.lex_state = 11},
  [375] = {.lex_state = 261},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 261},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 261},
  [382] = {.lex_state = 11},
  [383] = {.lex_state = 11},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 11},
  [386] = {.lex_state = 261},
  [387] = {.lex_state = 261},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 260},
  [393] = {.lex_state = 261},
  [394] = {.lex_state = 261},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 11},
  [398] = {.lex_state = 261},
  [399] = {.lex_state = 261},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 343},
  [405] = {.lex_state = 347},
  [406] = {.lex_state = 11},
  [407] = {.lex_state = 261},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 343},
  [411] = {.lex_state = 347},
  [412] = {.lex_state = 9},
  [413] = {.lex_state = 343},
  [414] = {.lex_state = 347},
  [415] = {.lex_state = 343},
  [416] = {.lex_state = 347},
  [417] = {.lex_state = 343},
  [418] = {(TSStateId)(-1)},
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
    [sym_keyword_func] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
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
    [sym_program] = STATE(409),
    [sym_pipeline] = STATE(305),
    [sym_function_definition] = STATE(305),
    [sym_from] = STATE(124),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(280),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_keyword_from] = ACTIONS(7),
    [sym_keyword_func] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym__natural_number,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(2), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_function_call_repeat1,
    STATE(129), 1,
      sym_literal,
    STATE(135), 1,
      sym__call_parameter,
    STATE(138), 1,
      sym__double_quote_string,
    STATE(145), 1,
      sym__integer,
    ACTIONS(15), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(137), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(11), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
    ACTIONS(13), 14,
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
      sym_keyword_func,
      anon_sym_GT,
      anon_sym_LT,
  [77] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      anon_sym_Z,
    STATE(3), 1,
      sym_comment,
    STATE(21), 1,
      sym_timezone,
    STATE(397), 1,
      sym_direction,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(29), 31,
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
      sym_keyword_func,
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
  [135] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      anon_sym_COLON,
    ACTIONS(41), 1,
      anon_sym_DOT,
    STATE(4), 1,
      sym_comment,
    ACTIONS(43), 3,
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
      sym_keyword_func,
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
  [188] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(5), 1,
      sym_comment,
    ACTIONS(51), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(45), 33,
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
      sym_keyword_func,
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
  [241] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    ACTIONS(55), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(53), 33,
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
      sym_keyword_func,
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
  [289] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_comment,
    ACTIONS(43), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(37), 34,
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
      sym_keyword_func,
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
  [337] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 34,
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
      sym_keyword_func,
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
  [385] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      sym__natural_number,
    STATE(9), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 33,
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
      sym_keyword_func,
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
  [435] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(69), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 34,
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
      sym_keyword_func,
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
  [483] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      sym_keyword_count,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(11), 1,
      sym_comment,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(150), 1,
      sym_binary_expression,
    STATE(182), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(322), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(73), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [571] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 34,
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
      sym_keyword_func,
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
  [619] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DOT,
    STATE(13), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 33,
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
      sym_keyword_func,
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
  [669] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(107), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 34,
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
      sym_keyword_func,
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
  [717] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(111), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 33,
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
      sym_keyword_func,
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
  [764] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 33,
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
      sym_keyword_func,
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
  [811] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      sym_keyword_count,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      sym_comment,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(158), 1,
      sym_binary_expression,
    STATE(182), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(332), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(73), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [896] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 33,
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
      sym_keyword_func,
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
  [943] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(123), 33,
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
      sym_keyword_func,
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
  [990] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      anon_sym_DOT,
    STATE(20), 1,
      sym_comment,
    ACTIONS(13), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(11), 32,
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
      sym_keyword_func,
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
  [1039] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(131), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 33,
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
      sym_keyword_func,
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
  [1086] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 33,
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
      sym_keyword_func,
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
  [1133] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(137), 33,
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
      sym_keyword_func,
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
  [1180] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(24), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 32,
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
      sym_keyword_func,
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
  [1229] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      anon_sym_DOT,
    STATE(25), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 32,
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
      sym_keyword_func,
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
  [1278] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_T,
    STATE(26), 1,
      sym_comment,
    ACTIONS(147), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 32,
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
      sym_keyword_func,
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
  [1327] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 33,
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
      sym_keyword_func,
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
  [1374] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      sym_keyword_count,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(28), 1,
      sym_comment,
    STATE(158), 1,
      sym_binary_expression,
    STATE(182), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(332), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(73), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1459] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 33,
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
      sym_keyword_func,
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
  [1506] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(159), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(157), 33,
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
      sym_keyword_func,
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
  [1553] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 33,
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
      sym_keyword_func,
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
  [1600] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 33,
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
      sym_keyword_func,
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
  [1647] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(169), 33,
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
      sym_keyword_func,
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
  [1694] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 33,
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
      sym_keyword_func,
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
  [1741] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(151), 22,
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
      sym_keyword_func,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1799] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      sym_keyword_count,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(36), 1,
      sym_comment,
    STATE(158), 1,
      sym_binary_expression,
    STATE(182), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(332), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(73), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1881] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    STATE(37), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(151), 21,
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
      sym_keyword_func,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1941] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(153), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    STATE(38), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(151), 23,
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
      sym_keyword_func,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_QMARK_QMARK,
  [1997] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(153), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 27,
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
      sym_keyword_func,
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
  [2049] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(153), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 30,
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
      sym_keyword_func,
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
  [2097] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(153), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 28,
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
      sym_keyword_func,
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
  [2147] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(42), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 12,
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
    ACTIONS(191), 17,
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
      sym_keyword_func,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2195] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_DASH,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym__natural_number,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(43), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_function_call_repeat1,
    STATE(198), 1,
      sym_literal,
    STATE(199), 1,
      sym__call_parameter,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(215), 1,
      sym__integer,
    ACTIONS(193), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(204), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(11), 10,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [2265] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym__natural_number,
    ACTIONS(217), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      sym_identifier,
    STATE(44), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_function_call_repeat1,
    STATE(219), 1,
      sym_literal,
    STATE(220), 1,
      sym__call_parameter,
    STATE(229), 1,
      sym__double_quote_string,
    STATE(237), 1,
      sym__integer,
    ACTIONS(207), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(230), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(11), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [2334] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 12,
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
    ACTIONS(191), 17,
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
      sym_keyword_func,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2379] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    ACTIONS(223), 1,
      sym_keyword_or,
    STATE(46), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(221), 17,
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
      sym_keyword_func,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2435] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    ACTIONS(223), 1,
      sym_keyword_or,
    STATE(47), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(225), 17,
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
      sym_keyword_func,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2491] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    ACTIONS(223), 1,
      sym_keyword_or,
    STATE(48), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 17,
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
      sym_keyword_func,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2547] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(49), 1,
      sym_comment,
    STATE(84), 1,
      sym_direction,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(303), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2630] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(50), 1,
      sym_comment,
    STATE(86), 1,
      sym_direction,
    STATE(141), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(197), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2710] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(51), 1,
      sym_comment,
    STATE(82), 1,
      sym_direction,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(331), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2790] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(52), 1,
      sym_comment,
    STATE(82), 1,
      sym_direction,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(331), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2870] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(53), 1,
      sym_comment,
    ACTIONS(107), 3,
      anon_sym_DOT,
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
    ACTIONS(243), 13,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [2912] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(54), 1,
      sym_comment,
    STATE(82), 1,
      sym_direction,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(331), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2992] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(55), 1,
      sym_comment,
    STATE(65), 1,
      sym__expression,
    STATE(85), 1,
      sym_direction,
    STATE(157), 1,
      sym_assignment,
    STATE(197), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3072] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(247), 1,
      sym_keyword_side,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(56), 1,
      sym_comment,
    STATE(65), 1,
      sym__expression,
    STATE(87), 1,
      sym__join_definition,
    STATE(157), 1,
      sym_assignment,
    STATE(190), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3149] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(57), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(314), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3226] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(58), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(149), 1,
      sym_binary_expression,
    STATE(157), 1,
      sym_assignment,
    STATE(321), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3305] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(59), 1,
      sym_comment,
    STATE(82), 1,
      sym_direction,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(331), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3382] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(60), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(318), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3459] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(263), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(61), 1,
      sym_comment,
    STATE(65), 1,
      sym__expression,
    STATE(90), 1,
      sym_field,
    STATE(157), 1,
      sym_assignment,
    STATE(266), 1,
      sym_term,
    STATE(267), 1,
      sym_table_reference,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3538] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(62), 1,
      sym_comment,
    STATE(64), 1,
      sym_binary_expression,
    STATE(65), 1,
      sym__expression,
    STATE(221), 1,
      sym_term,
    STATE(222), 1,
      sym_assignment,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3614] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(63), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(164), 1,
      sym_binary_expression,
    STATE(337), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3690] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 24,
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
      sym_keyword_func,
      anon_sym_RPAREN,
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
  [3728] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    ACTIONS(223), 1,
      sym_keyword_or,
    ACTIONS(273), 1,
      anon_sym_EQ,
    STATE(65), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(271), 12,
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
      sym_keyword_func,
      anon_sym_LBRACK,
  [3782] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym__natural_number,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(66), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_function_call_repeat1,
    STATE(129), 1,
      sym_literal,
    STATE(135), 1,
      sym__call_parameter,
    STATE(138), 1,
      sym__double_quote_string,
    STATE(145), 1,
      sym__integer,
    ACTIONS(15), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(137), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(277), 10,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_func,
  [3846] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(67), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(164), 1,
      sym_binary_expression,
    STATE(337), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3922] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    ACTIONS(285), 1,
      anon_sym_EQ_EQ,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(68), 1,
      sym_comment,
    STATE(156), 1,
      sym_binary_expression,
    STATE(193), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3996] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(69), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(350), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4070] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(64), 1,
      sym_binary_expression,
    STATE(70), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(221), 1,
      sym_term,
    STATE(222), 1,
      sym_assignment,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4146] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(47), 1,
      sym__expression,
    STATE(71), 1,
      sym_comment,
    STATE(155), 1,
      sym_function_call,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(289), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4216] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(72), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(164), 1,
      sym_binary_expression,
    STATE(337), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4292] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(73), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(350), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4366] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(74), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(350), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4440] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(47), 1,
      sym__expression,
    STATE(75), 1,
      sym_comment,
    STATE(155), 1,
      sym_function_call,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(289), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4510] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(47), 1,
      sym__expression,
    STATE(76), 1,
      sym_comment,
    STATE(155), 1,
      sym_function_call,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(289), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4580] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(312), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      sym__natural_number,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(327), 1,
      sym_identifier,
    STATE(129), 1,
      sym_literal,
    STATE(135), 1,
      sym__call_parameter,
    STATE(138), 1,
      sym__double_quote_string,
    STATE(145), 1,
      sym__integer,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(309), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(77), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(137), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(307), 10,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_func,
  [4642] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(78), 1,
      sym_comment,
    STATE(179), 1,
      sym__expression,
    STATE(180), 1,
      sym_binary_expression,
    STATE(352), 1,
      sym_function_call,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(330), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4714] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(79), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(364), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4788] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(80), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(350), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4862] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(81), 1,
      sym_comment,
    STATE(172), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4929] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(82), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(349), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5000] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(83), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(380), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5071] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(84), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(308), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5142] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(65), 1,
      sym__expression,
    STATE(85), 1,
      sym_comment,
    STATE(157), 1,
      sym_assignment,
    STATE(213), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5213] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(86), 1,
      sym_comment,
    STATE(141), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(213), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5284] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(65), 1,
      sym__expression,
    STATE(87), 1,
      sym_comment,
    STATE(157), 1,
      sym_assignment,
    STATE(191), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5355] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(88), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(350), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5426] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(89), 1,
      sym_comment,
    STATE(147), 1,
      sym__expression,
    STATE(157), 1,
      sym_assignment,
    STATE(164), 1,
      sym_binary_expression,
    STATE(337), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5499] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 23,
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
      sym_keyword_func,
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
  [5536] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(25), 1,
      sym__integer,
    STATE(42), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(65), 1,
      sym__expression,
    STATE(91), 1,
      sym_comment,
    STATE(157), 1,
      sym_assignment,
    STATE(253), 1,
      sym_term,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5607] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    ACTIONS(223), 1,
      sym_keyword_or,
    STATE(92), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(338), 11,
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
      sym_keyword_func,
  [5657] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(93), 1,
      sym_comment,
    STATE(169), 1,
      sym_binary_expression,
    STATE(193), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5725] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(94), 1,
      sym_comment,
    STATE(169), 1,
      sym_binary_expression,
    STATE(193), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5793] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_DASH,
    ACTIONS(346), 1,
      anon_sym_f,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym__natural_number,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_AT,
    STATE(95), 1,
      sym_comment,
    STATE(140), 1,
      sym__integer,
    STATE(167), 1,
      sym__double_quote_string,
    STATE(186), 1,
      sym__expression,
    STATE(288), 1,
      sym_range,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5859] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_DASH,
    ACTIONS(346), 1,
      anon_sym_f,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      sym__natural_number,
    STATE(96), 1,
      sym_comment,
    STATE(167), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__integer,
    STATE(186), 1,
      sym__expression,
    STATE(207), 1,
      sym_range,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5925] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(92), 1,
      sym__expression,
    STATE(97), 1,
      sym_comment,
    STATE(260), 1,
      sym__boolean_expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5991] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(98), 1,
      sym_comment,
    STATE(169), 1,
      sym_binary_expression,
    STATE(193), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6056] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(99), 1,
      sym_comment,
    STATE(188), 1,
      sym_binary_expression,
    STATE(194), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6121] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(100), 1,
      sym_comment,
    STATE(187), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6184] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(101), 1,
      sym_comment,
    STATE(175), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6247] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_DASH,
    ACTIONS(346), 1,
      anon_sym_f,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym__natural_number,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_AT,
    STATE(27), 1,
      sym__expression,
    STATE(102), 1,
      sym_comment,
    STATE(167), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__integer,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6310] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_DASH,
    ACTIONS(346), 1,
      anon_sym_f,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym__natural_number,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_AT,
    STATE(103), 1,
      sym_comment,
    STATE(167), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__integer,
    STATE(181), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6373] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_DASH,
    ACTIONS(346), 1,
      anon_sym_f,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym__natural_number,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_AT,
    STATE(104), 1,
      sym_comment,
    STATE(167), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__integer,
    STATE(183), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6436] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(105), 1,
      sym_comment,
    STATE(176), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6499] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(106), 1,
      sym_comment,
    STATE(165), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6562] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(35), 1,
      sym__expression,
    STATE(107), 1,
      sym_comment,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6625] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(108), 1,
      sym_comment,
    STATE(185), 1,
      sym_binary_expression,
    STATE(194), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6690] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(37), 1,
      sym__expression,
    STATE(109), 1,
      sym_comment,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6753] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_DASH,
    ACTIONS(346), 1,
      anon_sym_f,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym__natural_number,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_AT,
    STATE(110), 1,
      sym_comment,
    STATE(167), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__integer,
    STATE(174), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6816] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(27), 1,
      sym__expression,
    STATE(111), 1,
      sym_comment,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6879] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(46), 1,
      sym__expression,
    STATE(112), 1,
      sym_comment,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6942] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(39), 1,
      sym__expression,
    STATE(113), 1,
      sym_comment,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7005] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(40), 1,
      sym__expression,
    STATE(114), 1,
      sym_comment,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7068] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(115), 1,
      sym_comment,
    STATE(180), 1,
      sym_binary_expression,
    STATE(189), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7133] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(48), 1,
      sym__expression,
    STATE(116), 1,
      sym_comment,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7196] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(117), 1,
      sym_comment,
    STATE(163), 1,
      sym_binary_expression,
    STATE(193), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7261] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_DASH,
    ACTIONS(346), 1,
      anon_sym_f,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym__natural_number,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_AT,
    STATE(118), 1,
      sym_comment,
    STATE(167), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__integer,
    STATE(178), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7324] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_DASH,
    ACTIONS(346), 1,
      anon_sym_f,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym__natural_number,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_AT,
    STATE(119), 1,
      sym_comment,
    STATE(167), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__integer,
    STATE(173), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7387] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(120), 1,
      sym_comment,
    STATE(177), 1,
      sym_binary_expression,
    STATE(194), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7452] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(41), 1,
      sym__expression,
    STATE(121), 1,
      sym_comment,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7515] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_DASH,
    ACTIONS(346), 1,
      anon_sym_f,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym__natural_number,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_AT,
    STATE(122), 1,
      sym_comment,
    STATE(167), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__integer,
    STATE(184), 1,
      sym__expression,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7578] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_f,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_AT,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__integer,
    STATE(38), 1,
      sym__expression,
    STATE(123), 1,
      sym_comment,
    STATE(392), 1,
      sym__alias_identifier,
    ACTIONS(71), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(16), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(22), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7641] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(362), 1,
      sym_keyword_filter,
    ACTIONS(364), 1,
      sym_keyword_derive,
    ACTIONS(366), 1,
      sym_keyword_group,
    ACTIONS(368), 1,
      sym_keyword_aggregate,
    ACTIONS(370), 1,
      sym_keyword_sort,
    ACTIONS(372), 1,
      sym_keyword_take,
    ACTIONS(374), 1,
      sym_keyword_join,
    ACTIONS(376), 1,
      sym_keyword_select,
    STATE(124), 1,
      sym_comment,
    STATE(132), 1,
      aux_sym_transforms_repeat1,
    STATE(324), 1,
      sym_transforms,
    ACTIONS(360), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
    STATE(246), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [7693] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym_comment,
    ACTIONS(69), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 18,
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
  [7725] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(126), 1,
      sym_comment,
    ACTIONS(107), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 18,
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
  [7757] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(382), 1,
      anon_sym_COLON,
    STATE(127), 1,
      sym_comment,
    ACTIONS(378), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(380), 13,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_func,
      sym_identifier,
  [7791] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(128), 1,
      sym_comment,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(175), 13,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_func,
      sym_identifier,
  [7822] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(129), 1,
      sym_comment,
    ACTIONS(378), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(380), 13,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_func,
      sym_identifier,
  [7853] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(130), 1,
      sym_comment,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(65), 13,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_func,
      sym_identifier,
  [7884] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym_comment,
    ACTIONS(384), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(386), 13,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_func,
      sym_identifier,
  [7915] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(362), 1,
      sym_keyword_filter,
    ACTIONS(364), 1,
      sym_keyword_derive,
    ACTIONS(366), 1,
      sym_keyword_group,
    ACTIONS(368), 1,
      sym_keyword_aggregate,
    ACTIONS(370), 1,
      sym_keyword_sort,
    ACTIONS(372), 1,
      sym_keyword_take,
    ACTIONS(374), 1,
      sym_keyword_join,
    ACTIONS(376), 1,
      sym_keyword_select,
    STATE(132), 1,
      sym_comment,
    STATE(133), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(388), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
    STATE(246), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [7964] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(392), 1,
      sym_keyword_filter,
    ACTIONS(395), 1,
      sym_keyword_derive,
    ACTIONS(398), 1,
      sym_keyword_group,
    ACTIONS(401), 1,
      sym_keyword_aggregate,
    ACTIONS(404), 1,
      sym_keyword_sort,
    ACTIONS(407), 1,
      sym_keyword_take,
    ACTIONS(410), 1,
      sym_keyword_join,
    ACTIONS(413), 1,
      sym_keyword_select,
    STATE(133), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(390), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
    STATE(246), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [8011] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(134), 1,
      sym_comment,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(107), 13,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_func,
      sym_identifier,
  [8042] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(135), 1,
      sym_comment,
    ACTIONS(416), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(418), 13,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_func,
      sym_identifier,
  [8073] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym_comment,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(171), 13,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_func,
      sym_identifier,
  [8104] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(137), 1,
      sym_comment,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(115), 13,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_func,
      sym_identifier,
  [8135] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_comment,
    ACTIONS(420), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(422), 13,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_func,
      sym_identifier,
  [8166] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(139), 1,
      sym_comment,
    ACTIONS(157), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(159), 13,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_func,
      sym_identifier,
  [8197] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(140), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(113), 13,
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
  [8232] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    ACTIONS(223), 1,
      sym_keyword_or,
    ACTIONS(428), 1,
      anon_sym_EQ,
    STATE(141), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(271), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [8279] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(433), 1,
      anon_sym_DASH,
    ACTIONS(436), 1,
      anon_sym_DQUOTE,
    ACTIONS(439), 1,
      anon_sym_SQUOTE,
    ACTIONS(442), 1,
      sym__natural_number,
    ACTIONS(445), 1,
      anon_sym_DOT,
    ACTIONS(448), 1,
      sym_identifier,
    STATE(198), 1,
      sym_literal,
    STATE(199), 1,
      sym__call_parameter,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(215), 1,
      sym__integer,
    ACTIONS(430), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(142), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(204), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(307), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [8334] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_DASH,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym__natural_number,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      aux_sym_function_call_repeat1,
    STATE(143), 1,
      sym_comment,
    STATE(198), 1,
      sym_literal,
    STATE(199), 1,
      sym__call_parameter,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(215), 1,
      sym__integer,
    ACTIONS(193), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(204), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(277), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [8391] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym_comment,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(69), 13,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_func,
      sym_identifier,
  [8422] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(145), 1,
      sym_comment,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(115), 13,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_func,
      sym_identifier,
  [8453] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(454), 1,
      anon_sym_DASH,
    ACTIONS(457), 1,
      anon_sym_DQUOTE,
    ACTIONS(460), 1,
      anon_sym_SQUOTE,
    ACTIONS(463), 1,
      sym__natural_number,
    ACTIONS(466), 1,
      anon_sym_DOT,
    ACTIONS(469), 1,
      sym_identifier,
    STATE(219), 1,
      sym_literal,
    STATE(220), 1,
      sym__call_parameter,
    STATE(229), 1,
      sym__double_quote_string,
    STATE(237), 1,
      sym__integer,
    ACTIONS(451), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(146), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(230), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(305), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8505] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    ACTIONS(223), 1,
      sym_keyword_or,
    ACTIONS(472), 1,
      anon_sym_EQ,
    STATE(147), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(271), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8551] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym__natural_number,
    ACTIONS(217), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      sym_identifier,
    STATE(146), 1,
      aux_sym_function_call_repeat1,
    STATE(148), 1,
      sym_comment,
    STATE(219), 1,
      sym_literal,
    STATE(220), 1,
      sym__call_parameter,
    STATE(229), 1,
      sym__double_quote_string,
    STATE(237), 1,
      sym__integer,
    ACTIONS(207), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(230), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(275), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8605] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(149), 1,
      sym_comment,
    STATE(301), 1,
      aux_sym_derives_repeat1,
    ACTIONS(135), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 14,
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
  [8636] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_comment,
    STATE(310), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(135), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 12,
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
  [8671] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(478), 1,
      anon_sym_COLON,
    ACTIONS(480), 1,
      anon_sym_DOT,
    STATE(151), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(45), 14,
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
  [8704] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(482), 1,
      anon_sym_COLON,
    ACTIONS(484), 1,
      anon_sym_DOT,
    STATE(152), 1,
      sym_comment,
    ACTIONS(43), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(37), 14,
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
  [8737] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(153), 1,
      sym_comment,
    STATE(294), 1,
      aux_sym_derives_repeat1,
    ACTIONS(111), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 14,
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
  [8768] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(154), 1,
      sym_comment,
    ACTIONS(486), 17,
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
      sym_keyword_func,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8794] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(155), 1,
      sym_comment,
    ACTIONS(488), 17,
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
      sym_keyword_func,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8820] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym_comment,
    STATE(309), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 12,
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
  [8854] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(157), 1,
      sym_comment,
    ACTIONS(271), 17,
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
      sym_keyword_func,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8880] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(135), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 12,
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
  [8910] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(496), 1,
      anon_sym_DOT,
    STATE(159), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 14,
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
  [8940] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(498), 17,
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
      sym_keyword_func,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8966] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(161), 1,
      sym_comment,
    ACTIONS(500), 17,
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
      sym_keyword_func,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8992] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(162), 1,
      sym_comment,
    ACTIONS(111), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 14,
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
  [9020] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(502), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
    ACTIONS(133), 12,
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
  [9050] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 14,
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
  [9078] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    ACTIONS(223), 1,
      sym_keyword_or,
    STATE(165), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(504), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9119] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      anon_sym_DOT,
    STATE(166), 1,
      sym_comment,
    ACTIONS(13), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(11), 13,
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
  [9148] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_DOT,
    STATE(167), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 13,
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
  [9177] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 13,
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
  [9204] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(510), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(133), 12,
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
  [9233] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(170), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 13,
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
  [9262] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(512), 1,
      anon_sym_T,
    STATE(171), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 13,
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
  [9291] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    ACTIONS(223), 1,
      sym_keyword_or,
    STATE(172), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(514), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9332] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(516), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(151), 11,
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
  [9360] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      anon_sym_PIPE,
    STATE(174), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(516), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(518), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(151), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [9392] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    STATE(175), 1,
      sym_comment,
    ACTIONS(151), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9430] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    ACTIONS(223), 1,
      sym_keyword_or,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9470] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 12,
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
  [9498] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(178), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(516), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(518), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(151), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [9528] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(526), 1,
      sym_keyword_and,
    ACTIONS(528), 1,
      sym_keyword_or,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9568] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(180), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
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
  [9594] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      anon_sym_PIPE,
    ACTIONS(532), 1,
      sym_keyword_and,
    ACTIONS(538), 1,
      anon_sym_QMARK_QMARK,
    STATE(181), 1,
      sym_comment,
    ACTIONS(151), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(516), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(518), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(536), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(534), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9632] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    ACTIONS(223), 1,
      sym_keyword_or,
    ACTIONS(472), 1,
      anon_sym_EQ,
    STATE(182), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9672] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      anon_sym_PIPE,
    STATE(183), 1,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(518), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(536), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(534), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9706] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      anon_sym_PIPE,
    ACTIONS(538), 1,
      anon_sym_QMARK_QMARK,
    STATE(184), 1,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(518), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(536), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(534), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9742] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 12,
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
  [9770] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      anon_sym_PIPE,
    ACTIONS(532), 1,
      sym_keyword_and,
    ACTIONS(538), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(542), 1,
      sym_keyword_or,
    ACTIONS(544), 1,
      anon_sym_DOT_DOT,
    STATE(186), 1,
      sym_comment,
    ACTIONS(516), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(518), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(536), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(534), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9810] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    STATE(187), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9846] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 12,
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
  [9874] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(526), 1,
      sym_keyword_and,
    ACTIONS(528), 1,
      sym_keyword_or,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9914] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(552), 1,
      anon_sym_LBRACK,
    STATE(190), 1,
      sym_comment,
    STATE(244), 1,
      sym_conditions,
    STATE(265), 1,
      sym__self_join,
    ACTIONS(550), 11,
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
      sym_keyword_func,
  [9943] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(552), 1,
      anon_sym_LBRACK,
    STATE(191), 1,
      sym_comment,
    STATE(256), 1,
      sym_conditions,
    STATE(265), 1,
      sym__self_join,
    ACTIONS(554), 11,
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
      sym_keyword_func,
  [9972] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(556), 1,
      anon_sym_COLON,
    STATE(192), 1,
      sym_comment,
    ACTIONS(378), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(380), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [9999] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(189), 1,
      sym_keyword_and,
    ACTIONS(223), 1,
      sym_keyword_or,
    STATE(193), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [10036] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(187), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(526), 1,
      sym_keyword_and,
    ACTIONS(528), 1,
      sym_keyword_or,
    STATE(194), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [10073] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(195), 1,
      sym_comment,
    ACTIONS(558), 13,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10095] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(196), 1,
      sym_comment,
    ACTIONS(560), 13,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10117] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(197), 1,
      sym_comment,
    ACTIONS(562), 13,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10139] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(198), 1,
      sym_comment,
    ACTIONS(378), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(380), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [10163] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(199), 1,
      sym_comment,
    ACTIONS(416), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(418), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [10187] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(564), 1,
      anon_sym_COLON,
    STATE(200), 1,
      sym_comment,
    ACTIONS(380), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(378), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [10213] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(201), 1,
      sym_comment,
    ACTIONS(566), 13,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10235] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(202), 1,
      sym_comment,
    ACTIONS(568), 13,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10257] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(203), 1,
      sym_comment,
    ACTIONS(420), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(422), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [10281] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(204), 1,
      sym_comment,
    ACTIONS(113), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(115), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [10305] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(205), 1,
      sym_comment,
    ACTIONS(570), 13,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10327] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(206), 1,
      sym_comment,
    ACTIONS(572), 13,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10349] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(207), 1,
      sym_comment,
    ACTIONS(574), 13,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10371] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(208), 1,
      sym_comment,
    ACTIONS(576), 13,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10393] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(209), 1,
      sym_comment,
    ACTIONS(61), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(65), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [10417] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(210), 1,
      sym_comment,
    ACTIONS(157), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(159), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [10441] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(211), 1,
      sym_comment,
    ACTIONS(169), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(171), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [10465] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(212), 1,
      sym_comment,
    ACTIONS(384), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(386), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [10489] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(213), 1,
      sym_comment,
    ACTIONS(578), 13,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10511] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(214), 1,
      sym_comment,
    ACTIONS(105), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(107), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [10535] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(215), 1,
      sym_comment,
    ACTIONS(113), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(115), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [10559] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(216), 1,
      sym_comment,
    ACTIONS(67), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(69), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [10583] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(217), 1,
      sym_comment,
    ACTIONS(173), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(175), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [10607] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(218), 1,
      sym_comment,
    ACTIONS(580), 13,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10629] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym_comment,
    ACTIONS(380), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(378), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [10652] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(220), 1,
      sym_comment,
    ACTIONS(418), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(416), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [10675] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(221), 1,
      sym_comment,
    ACTIONS(582), 12,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10696] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(222), 1,
      sym_comment,
    ACTIONS(271), 12,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10717] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym_comment,
    ACTIONS(584), 12,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10738] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(224), 1,
      sym_comment,
    ACTIONS(586), 12,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10759] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym__natural_number,
    ACTIONS(25), 1,
      anon_sym_DOT,
    STATE(131), 1,
      sym_literal,
    STATE(138), 1,
      sym__double_quote_string,
    STATE(145), 1,
      sym__integer,
    STATE(225), 1,
      sym_comment,
    ACTIONS(588), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(137), 2,
      sym__literal_string,
      sym__decimal_number,
  [10798] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_DASH,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym__natural_number,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(212), 1,
      sym_literal,
    STATE(215), 1,
      sym__integer,
    STATE(226), 1,
      sym_comment,
    ACTIONS(590), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(204), 2,
      sym__literal_string,
      sym__decimal_number,
  [10837] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(227), 1,
      sym_comment,
    ACTIONS(592), 12,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [10858] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(228), 1,
      sym_comment,
    ACTIONS(386), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(384), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [10881] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(229), 1,
      sym_comment,
    ACTIONS(422), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(420), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [10904] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(230), 1,
      sym_comment,
    ACTIONS(115), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(113), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [10927] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(231), 1,
      sym_comment,
    ACTIONS(65), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(61), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [10950] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(596), 1,
      anon_sym_DASH,
    ACTIONS(598), 1,
      anon_sym_DQUOTE,
    ACTIONS(600), 1,
      anon_sym_SQUOTE,
    ACTIONS(602), 1,
      sym__natural_number,
    ACTIONS(604), 1,
      anon_sym_DOT,
    STATE(232), 1,
      sym_comment,
    STATE(298), 1,
      sym__integer,
    STATE(329), 1,
      sym__double_quote_string,
    STATE(346), 1,
      sym_literal,
    ACTIONS(594), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(336), 2,
      sym__literal_string,
      sym__decimal_number,
  [10989] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym_comment,
    ACTIONS(159), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(157), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [11012] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(234), 1,
      sym_comment,
    ACTIONS(606), 12,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [11033] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(235), 1,
      sym_comment,
    ACTIONS(171), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(169), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [11056] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(236), 1,
      sym_comment,
    ACTIONS(107), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(105), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [11079] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(237), 1,
      sym_comment,
    ACTIONS(115), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(113), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [11102] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(238), 1,
      sym_comment,
    ACTIONS(69), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(67), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [11125] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(239), 1,
      sym_comment,
    ACTIONS(175), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(173), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [11148] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(240), 1,
      sym_comment,
    ACTIONS(608), 12,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [11169] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(241), 1,
      sym_comment,
    ACTIONS(610), 12,
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
      sym_keyword_func,
      anon_sym_RPAREN,
  [11190] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      sym__natural_number,
    ACTIONS(217), 1,
      anon_sym_DOT,
    STATE(228), 1,
      sym_literal,
    STATE(229), 1,
      sym__double_quote_string,
    STATE(237), 1,
      sym__integer,
    STATE(242), 1,
      sym_comment,
    ACTIONS(612), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(230), 2,
      sym__literal_string,
      sym__decimal_number,
  [11229] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(243), 1,
      sym_comment,
    ACTIONS(614), 11,
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
      sym_keyword_func,
  [11249] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(244), 1,
      sym_comment,
    ACTIONS(554), 11,
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
      sym_keyword_func,
  [11269] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(245), 1,
      sym_comment,
    ACTIONS(616), 4,
      sym_keyword_true,
      sym_keyword_false,
      anon_sym_f,
      sym_identifier,
    ACTIONS(618), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [11291] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(246), 1,
      sym_comment,
    ACTIONS(620), 11,
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
      sym_keyword_func,
  [11311] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(247), 1,
      sym_comment,
    ACTIONS(622), 11,
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
      sym_keyword_func,
  [11331] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(248), 1,
      sym_comment,
    ACTIONS(616), 4,
      sym_keyword_true,
      sym_keyword_false,
      anon_sym_f,
      sym_identifier,
    ACTIONS(618), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [11353] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(249), 1,
      sym_comment,
    ACTIONS(624), 11,
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
      sym_keyword_func,
  [11373] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(250), 1,
      sym_comment,
    ACTIONS(626), 11,
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
      sym_keyword_func,
  [11393] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(251), 1,
      sym_comment,
    ACTIONS(628), 11,
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
      sym_keyword_func,
  [11413] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(252), 1,
      sym_comment,
    ACTIONS(630), 11,
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
      sym_keyword_func,
  [11433] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym_comment,
    ACTIONS(632), 11,
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
      sym_keyword_func,
  [11453] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(254), 1,
      sym_comment,
    ACTIONS(634), 11,
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
      sym_keyword_func,
  [11473] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(255), 1,
      sym_comment,
    ACTIONS(636), 11,
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
      sym_keyword_func,
  [11493] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(256), 1,
      sym_comment,
    ACTIONS(638), 11,
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
      sym_keyword_func,
  [11513] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(257), 1,
      sym_comment,
    ACTIONS(640), 11,
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
      sym_keyword_func,
  [11533] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(258), 1,
      sym_comment,
    ACTIONS(642), 4,
      sym_keyword_true,
      sym_keyword_false,
      anon_sym_f,
      sym_identifier,
    ACTIONS(644), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [11555] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(259), 1,
      sym_comment,
    ACTIONS(646), 11,
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
      sym_keyword_func,
  [11575] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(260), 1,
      sym_comment,
    ACTIONS(648), 11,
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
      sym_keyword_func,
  [11595] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(261), 1,
      sym_comment,
    ACTIONS(650), 11,
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
      sym_keyword_func,
  [11615] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(262), 1,
      sym_comment,
    ACTIONS(652), 11,
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
      sym_keyword_func,
  [11635] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(263), 1,
      sym_comment,
    ACTIONS(654), 11,
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
      sym_keyword_func,
  [11655] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(264), 1,
      sym_comment,
    ACTIONS(656), 11,
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
      sym_keyword_func,
  [11675] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(265), 1,
      sym_comment,
    ACTIONS(658), 11,
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
      sym_keyword_func,
  [11695] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(266), 1,
      sym_comment,
    ACTIONS(660), 11,
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
      sym_keyword_func,
  [11715] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(267), 1,
      sym_comment,
    ACTIONS(662), 11,
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
      sym_keyword_func,
  [11735] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(268), 1,
      sym_comment,
    ACTIONS(664), 11,
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
      sym_keyword_func,
  [11755] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      sym_keyword_aggregate,
    ACTIONS(372), 1,
      sym_keyword_take,
    ACTIONS(666), 1,
      sym_keyword_sort,
    ACTIONS(668), 1,
      sym_keyword_window,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_comment,
    STATE(272), 1,
      aux_sym_group_repeat2,
    STATE(285), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [11786] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      sym_keyword_aggregate,
    ACTIONS(372), 1,
      sym_keyword_take,
    ACTIONS(666), 1,
      sym_keyword_sort,
    ACTIONS(668), 1,
      sym_keyword_window,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      sym_comment,
    STATE(272), 1,
      aux_sym_group_repeat2,
    STATE(285), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [11817] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      sym_keyword_aggregate,
    ACTIONS(372), 1,
      sym_keyword_take,
    ACTIONS(666), 1,
      sym_keyword_sort,
    ACTIONS(668), 1,
      sym_keyword_window,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    STATE(271), 1,
      sym_comment,
    STATE(272), 1,
      aux_sym_group_repeat2,
    STATE(285), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [11848] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      sym_keyword_aggregate,
    ACTIONS(679), 1,
      sym_keyword_sort,
    ACTIONS(682), 1,
      sym_keyword_take,
    ACTIONS(685), 1,
      sym_keyword_window,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    STATE(272), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(285), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [11877] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      sym_keyword_aggregate,
    ACTIONS(372), 1,
      sym_keyword_take,
    ACTIONS(666), 1,
      sym_keyword_sort,
    ACTIONS(668), 1,
      sym_keyword_window,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      aux_sym_group_repeat2,
    STATE(273), 1,
      sym_comment,
    STATE(285), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [11908] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      sym_keyword_aggregate,
    ACTIONS(372), 1,
      sym_keyword_take,
    ACTIONS(666), 1,
      sym_keyword_sort,
    ACTIONS(668), 1,
      sym_keyword_window,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      aux_sym_group_repeat2,
    STATE(274), 1,
      sym_comment,
    STATE(285), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [11939] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      sym_keyword_aggregate,
    ACTIONS(372), 1,
      sym_keyword_take,
    ACTIONS(666), 1,
      sym_keyword_sort,
    ACTIONS(668), 1,
      sym_keyword_window,
    STATE(269), 1,
      aux_sym_group_repeat2,
    STATE(275), 1,
      sym_comment,
    STATE(285), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [11967] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      sym_keyword_aggregate,
    ACTIONS(372), 1,
      sym_keyword_take,
    ACTIONS(666), 1,
      sym_keyword_sort,
    ACTIONS(668), 1,
      sym_keyword_window,
    STATE(271), 1,
      aux_sym_group_repeat2,
    STATE(276), 1,
      sym_comment,
    STATE(285), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [11995] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      sym_keyword_aggregate,
    ACTIONS(372), 1,
      sym_keyword_take,
    ACTIONS(666), 1,
      sym_keyword_sort,
    ACTIONS(668), 1,
      sym_keyword_window,
    STATE(274), 1,
      aux_sym_group_repeat2,
    STATE(277), 1,
      sym_comment,
    STATE(285), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [12023] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      sym_keyword_aggregate,
    ACTIONS(372), 1,
      sym_keyword_take,
    ACTIONS(666), 1,
      sym_keyword_sort,
    ACTIONS(668), 1,
      sym_keyword_window,
    STATE(270), 1,
      aux_sym_group_repeat2,
    STATE(278), 1,
      sym_comment,
    STATE(285), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [12051] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      sym_keyword_aggregate,
    ACTIONS(372), 1,
      sym_keyword_take,
    ACTIONS(666), 1,
      sym_keyword_sort,
    ACTIONS(668), 1,
      sym_keyword_window,
    STATE(273), 1,
      aux_sym_group_repeat2,
    STATE(279), 1,
      sym_comment,
    STATE(285), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [12079] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(9), 1,
      sym_keyword_func,
    ACTIONS(694), 1,
      ts_builtin_sym_end,
    STATE(124), 1,
      sym_from,
    STATE(280), 1,
      sym_comment,
    STATE(281), 1,
      aux_sym_program_repeat1,
    STATE(305), 2,
      sym_pipeline,
      sym_function_definition,
  [12105] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
    ACTIONS(698), 1,
      sym_keyword_from,
    ACTIONS(701), 1,
      sym_keyword_func,
    STATE(124), 1,
      sym_from,
    STATE(281), 2,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(305), 2,
      sym_pipeline,
      sym_function_definition,
  [12129] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(282), 1,
      sym_comment,
    STATE(283), 1,
      aux_sym_window_definitions_repeat1,
    STATE(290), 1,
      sym__window_definition,
    STATE(363), 1,
      sym_window_definitions,
    ACTIONS(704), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [12150] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(283), 1,
      sym_comment,
    STATE(284), 1,
      aux_sym_window_definitions_repeat1,
    STATE(290), 1,
      sym__window_definition,
    ACTIONS(704), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [12171] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    STATE(290), 1,
      sym__window_definition,
    STATE(284), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(708), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [12190] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(285), 1,
      sym_comment,
    ACTIONS(713), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [12204] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(286), 1,
      sym_comment,
    ACTIONS(715), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [12218] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(287), 1,
      sym_comment,
    ACTIONS(717), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [12231] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(288), 1,
      sym_comment,
    ACTIONS(719), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [12244] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(721), 1,
      aux_sym__date_token1,
    ACTIONS(723), 1,
      aux_sym__time_token1,
    STATE(23), 1,
      sym__time,
    STATE(171), 1,
      sym__date,
    STATE(289), 1,
      sym_comment,
  [12263] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(290), 1,
      sym_comment,
    ACTIONS(725), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [12276] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(721), 1,
      aux_sym__date_token1,
    ACTIONS(727), 1,
      aux_sym__time_token1,
    STATE(23), 1,
      sym__time,
    STATE(26), 1,
      sym__date,
    STATE(291), 1,
      sym_comment,
  [12295] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(729), 1,
      anon_sym_DASH_GT,
    ACTIONS(731), 1,
      sym_identifier,
    STATE(347), 1,
      sym_parameter,
    STATE(292), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [12312] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(734), 1,
      anon_sym_DASH_GT,
    ACTIONS(736), 1,
      sym_identifier,
    STATE(292), 1,
      aux_sym_function_definition_repeat1,
    STATE(293), 1,
      sym_comment,
    STATE(347), 1,
      sym_parameter,
  [12331] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_RBRACK,
    STATE(294), 1,
      sym_comment,
    STATE(312), 1,
      aux_sym_derives_repeat1,
  [12347] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(742), 1,
      sym__natural_number,
    STATE(295), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [12361] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(744), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      anon_sym_RBRACK,
    STATE(296), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [12375] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(297), 1,
      sym_comment,
    ACTIONS(67), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [12387] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(749), 1,
      anon_sym_DOT,
    STATE(298), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [12401] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      sym_comment,
    STATE(313), 1,
      aux_sym_sorts_repeat1,
  [12417] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(350), 1,
      sym__natural_number,
    ACTIONS(753), 1,
      anon_sym_DASH,
    STATE(12), 1,
      sym__integer,
    STATE(300), 1,
      sym_comment,
  [12433] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      sym_comment,
    STATE(312), 1,
      aux_sym_derives_repeat1,
  [12449] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(757), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym__integer,
    STATE(302), 1,
      sym_comment,
  [12465] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(759), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      anon_sym_RBRACK,
    STATE(299), 1,
      aux_sym_sorts_repeat1,
    STATE(303), 1,
      sym_comment,
  [12481] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(765), 1,
      anon_sym_COLON,
    STATE(304), 1,
      sym_comment,
    ACTIONS(763), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [12495] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(305), 1,
      sym_comment,
    ACTIONS(767), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
  [12507] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(757), 1,
      anon_sym_DASH,
    STATE(7), 1,
      sym__integer,
    STATE(306), 1,
      sym_comment,
  [12523] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    ACTIONS(769), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_group_repeat1,
    STATE(307), 1,
      sym_comment,
  [12539] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      sym_comment,
    STATE(319), 1,
      aux_sym_sorts_repeat1,
  [12555] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    ACTIONS(771), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      sym_comment,
    STATE(311), 1,
      aux_sym_conditions_repeat1,
  [12571] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    STATE(310), 1,
      sym_comment,
    STATE(320), 1,
      aux_sym_aggregate_repeat1,
  [12587] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    STATE(311), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [12601] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(778), 1,
      anon_sym_COMMA,
    ACTIONS(781), 1,
      anon_sym_RBRACK,
    STATE(312), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [12615] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    ACTIONS(786), 1,
      anon_sym_RBRACK,
    STATE(313), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [12629] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(790), 1,
      anon_sym_RBRACK,
    STATE(314), 1,
      sym_comment,
    STATE(323), 1,
      aux_sym_group_repeat1,
  [12645] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(350), 1,
      sym__natural_number,
    ACTIONS(753), 1,
      anon_sym_DASH,
    STATE(7), 1,
      sym__integer,
    STATE(315), 1,
      sym_comment,
  [12661] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(316), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [12673] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(350), 1,
      sym__natural_number,
    ACTIONS(753), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym__integer,
    STATE(317), 1,
      sym_comment,
  [12689] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(794), 1,
      anon_sym_RBRACK,
    STATE(307), 1,
      aux_sym_group_repeat1,
    STATE(318), 1,
      sym_comment,
  [12705] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    STATE(313), 1,
      aux_sym_sorts_repeat1,
    STATE(319), 1,
      sym_comment,
  [12721] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    STATE(320), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [12735] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_RBRACK,
    STATE(301), 1,
      aux_sym_derives_repeat1,
    STATE(321), 1,
      sym_comment,
  [12751] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    STATE(310), 1,
      aux_sym_aggregate_repeat1,
    STATE(322), 1,
      sym_comment,
  [12767] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    STATE(296), 1,
      aux_sym_group_repeat1,
    STATE(323), 1,
      sym_comment,
  [12783] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(324), 1,
      sym_comment,
    ACTIONS(807), 3,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
  [12795] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(736), 1,
      sym_identifier,
    STATE(293), 1,
      aux_sym_function_definition_repeat1,
    STATE(325), 1,
      sym_comment,
    STATE(347), 1,
      sym_parameter,
  [12811] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(757), 1,
      anon_sym_DASH,
    STATE(12), 1,
      sym__integer,
    STATE(326), 1,
      sym_comment,
  [12827] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      sym__natural_number,
    ACTIONS(811), 1,
      anon_sym_DOT,
    STATE(327), 1,
      sym_comment,
  [12840] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_keyword_derive,
    STATE(328), 1,
      sym_comment,
    STATE(367), 1,
      sym_derives,
  [12853] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(329), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [12864] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(330), 1,
      sym_comment,
  [12877] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(331), 1,
      sym_comment,
    ACTIONS(786), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12888] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(332), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12899] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      sym__natural_number,
    ACTIONS(817), 1,
      anon_sym_DOT,
    STATE(333), 1,
      sym_comment,
  [12912] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(819), 1,
      sym__natural_number,
    ACTIONS(821), 1,
      anon_sym_DOT,
    STATE(334), 1,
      sym_comment,
  [12925] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(823), 1,
      sym__natural_number,
    ACTIONS(825), 1,
      anon_sym_DOT,
    STATE(335), 1,
      sym_comment,
  [12938] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(336), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [12949] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(337), 1,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12960] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(827), 1,
      aux_sym__time_token1,
    STATE(3), 1,
      sym__time,
    STATE(338), 1,
      sym_comment,
  [12973] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      anon_sym_DOT,
    ACTIONS(829), 1,
      sym__natural_number,
    STATE(339), 1,
      sym_comment,
  [12986] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(340), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [12997] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(831), 1,
      sym__natural_number,
    ACTIONS(833), 1,
      anon_sym_DOT,
    STATE(341), 1,
      sym_comment,
  [13010] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(342), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [13021] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym__double_quote_string,
    STATE(343), 1,
      sym_comment,
  [13034] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(344), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [13045] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(835), 1,
      aux_sym__time_token1,
    STATE(3), 1,
      sym__time,
    STATE(345), 1,
      sym_comment,
  [13058] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(346), 1,
      sym_comment,
    ACTIONS(837), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [13069] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(347), 1,
      sym_comment,
    ACTIONS(839), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [13080] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(348), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [13091] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(349), 1,
      sym_comment,
    ACTIONS(841), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13102] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(350), 1,
      sym_comment,
    ACTIONS(747), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13113] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(790), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym_comment,
  [13123] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      sym_comment,
  [13133] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
    STATE(353), 1,
      sym_comment,
  [13143] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(845), 1,
      anon_sym_SQUOTE,
    STATE(354), 1,
      sym_comment,
  [13153] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(847), 1,
      anon_sym_DASH,
    STATE(355), 1,
      sym_comment,
  [13163] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(849), 1,
      sym__natural_number,
    STATE(356), 1,
      sym_comment,
  [13173] = 3,
    ACTIONS(851), 1,
      aux_sym__literal_string_token1,
    ACTIONS(853), 1,
      anon_sym_POUND,
    STATE(357), 1,
      sym_comment,
  [13183] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(855), 1,
      sym_identifier,
    STATE(358), 1,
      sym_comment,
  [13193] = 3,
    ACTIONS(853), 1,
      anon_sym_POUND,
    ACTIONS(857), 1,
      aux_sym__double_quote_string_token1,
    STATE(359), 1,
      sym_comment,
  [13203] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
    STATE(360), 1,
      sym_comment,
  [13213] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(794), 1,
      anon_sym_RBRACK,
    STATE(361), 1,
      sym_comment,
  [13223] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(861), 1,
      anon_sym_COLON,
    STATE(362), 1,
      sym_comment,
  [13233] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    STATE(363), 1,
      sym_comment,
  [13243] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
    STATE(364), 1,
      sym_comment,
  [13253] = 3,
    ACTIONS(853), 1,
      anon_sym_POUND,
    ACTIONS(867), 1,
      aux_sym_comment_token1,
    STATE(365), 1,
      sym_comment,
  [13263] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(869), 1,
      anon_sym_DASH,
    STATE(366), 1,
      sym_comment,
  [13273] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      sym_comment,
  [13283] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(829), 1,
      sym__natural_number,
    STATE(368), 1,
      sym_comment,
  [13293] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(873), 1,
      anon_sym_LPAREN,
    STATE(369), 1,
      sym_comment,
  [13303] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(875), 1,
      anon_sym_COLON,
    STATE(370), 1,
      sym_comment,
  [13313] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(877), 1,
      anon_sym_LPAREN,
    STATE(371), 1,
      sym_comment,
  [13323] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      aux_sym__date_token2,
    STATE(372), 1,
      sym_comment,
  [13333] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(881), 1,
      aux_sym__date_token2,
    STATE(373), 1,
      sym_comment,
  [13343] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(883), 1,
      aux_sym__date_token2,
    STATE(374), 1,
      sym_comment,
  [13353] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(885), 1,
      sym__natural_number,
    STATE(375), 1,
      sym_comment,
  [13363] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(887), 1,
      anon_sym_LBRACK,
    STATE(376), 1,
      sym_comment,
  [13373] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(889), 1,
      sym__natural_number,
    STATE(377), 1,
      sym_comment,
  [13383] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(891), 1,
      anon_sym_DQUOTE,
    STATE(378), 1,
      sym_comment,
  [13393] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      anon_sym_SQUOTE,
    STATE(379), 1,
      sym_comment,
  [13403] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      sym_comment,
  [13413] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      sym__natural_number,
    STATE(381), 1,
      sym_comment,
  [13423] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(897), 1,
      aux_sym__date_token2,
    STATE(382), 1,
      sym_comment,
  [13433] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(899), 1,
      aux_sym__date_token2,
    STATE(383), 1,
      sym_comment,
  [13443] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(901), 1,
      anon_sym_DQUOTE,
    STATE(384), 1,
      sym_comment,
  [13453] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(618), 1,
      aux_sym__date_token2,
    STATE(385), 1,
      sym_comment,
  [13463] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(903), 1,
      sym__natural_number,
    STATE(386), 1,
      sym_comment,
  [13473] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(742), 1,
      sym__natural_number,
    STATE(387), 1,
      sym_comment,
  [13483] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(905), 1,
      anon_sym_DQUOTE,
    STATE(388), 1,
      sym_comment,
  [13493] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(907), 1,
      anon_sym_SQUOTE,
    STATE(389), 1,
      sym_comment,
  [13503] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      anon_sym_LPAREN,
    STATE(390), 1,
      sym_comment,
  [13513] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
    STATE(391), 1,
      sym_comment,
  [13523] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(911), 1,
      anon_sym_DOT,
    STATE(392), 1,
      sym_comment,
  [13533] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(913), 1,
      sym__natural_number,
    STATE(393), 1,
      sym_comment,
  [13543] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(915), 1,
      sym__natural_number,
    STATE(394), 1,
      sym_comment,
  [13553] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(917), 1,
      anon_sym_DQUOTE,
    STATE(395), 1,
      sym_comment,
  [13563] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(919), 1,
      anon_sym_SQUOTE,
    STATE(396), 1,
      sym_comment,
  [13573] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(921), 1,
      aux_sym__date_token2,
    STATE(397), 1,
      sym_comment,
  [13583] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      sym__natural_number,
    STATE(398), 1,
      sym_comment,
  [13593] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      sym__natural_number,
    STATE(399), 1,
      sym_comment,
  [13603] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(927), 1,
      anon_sym_DQUOTE,
    STATE(400), 1,
      sym_comment,
  [13613] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(929), 1,
      anon_sym_SQUOTE,
    STATE(401), 1,
      sym_comment,
  [13623] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(761), 1,
      anon_sym_RBRACK,
    STATE(402), 1,
      sym_comment,
  [13633] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
    STATE(403), 1,
      sym_comment,
  [13643] = 3,
    ACTIONS(853), 1,
      anon_sym_POUND,
    ACTIONS(933), 1,
      aux_sym__double_quote_string_token1,
    STATE(404), 1,
      sym_comment,
  [13653] = 3,
    ACTIONS(853), 1,
      anon_sym_POUND,
    ACTIONS(935), 1,
      aux_sym__literal_string_token1,
    STATE(405), 1,
      sym_comment,
  [13663] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(937), 1,
      aux_sym__date_token2,
    STATE(406), 1,
      sym_comment,
  [13673] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      sym__natural_number,
    STATE(407), 1,
      sym_comment,
  [13683] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(803), 1,
      anon_sym_RBRACK,
    STATE(408), 1,
      sym_comment,
  [13693] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(939), 1,
      ts_builtin_sym_end,
    STATE(409), 1,
      sym_comment,
  [13703] = 3,
    ACTIONS(853), 1,
      anon_sym_POUND,
    ACTIONS(941), 1,
      aux_sym__double_quote_string_token1,
    STATE(410), 1,
      sym_comment,
  [13713] = 3,
    ACTIONS(853), 1,
      anon_sym_POUND,
    ACTIONS(943), 1,
      aux_sym__literal_string_token1,
    STATE(411), 1,
      sym_comment,
  [13723] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(945), 1,
      sym_identifier,
    STATE(412), 1,
      sym_comment,
  [13733] = 3,
    ACTIONS(853), 1,
      anon_sym_POUND,
    ACTIONS(947), 1,
      aux_sym__double_quote_string_token1,
    STATE(413), 1,
      sym_comment,
  [13743] = 3,
    ACTIONS(853), 1,
      anon_sym_POUND,
    ACTIONS(949), 1,
      aux_sym__literal_string_token1,
    STATE(414), 1,
      sym_comment,
  [13753] = 3,
    ACTIONS(853), 1,
      anon_sym_POUND,
    ACTIONS(951), 1,
      aux_sym__double_quote_string_token1,
    STATE(415), 1,
      sym_comment,
  [13763] = 3,
    ACTIONS(853), 1,
      anon_sym_POUND,
    ACTIONS(953), 1,
      aux_sym__literal_string_token1,
    STATE(416), 1,
      sym_comment,
  [13773] = 3,
    ACTIONS(853), 1,
      anon_sym_POUND,
    ACTIONS(955), 1,
      aux_sym__double_quote_string_token1,
    STATE(417), 1,
      sym_comment,
  [13783] = 1,
    ACTIONS(957), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 135,
  [SMALL_STATE(5)] = 188,
  [SMALL_STATE(6)] = 241,
  [SMALL_STATE(7)] = 289,
  [SMALL_STATE(8)] = 337,
  [SMALL_STATE(9)] = 385,
  [SMALL_STATE(10)] = 435,
  [SMALL_STATE(11)] = 483,
  [SMALL_STATE(12)] = 571,
  [SMALL_STATE(13)] = 619,
  [SMALL_STATE(14)] = 669,
  [SMALL_STATE(15)] = 717,
  [SMALL_STATE(16)] = 764,
  [SMALL_STATE(17)] = 811,
  [SMALL_STATE(18)] = 896,
  [SMALL_STATE(19)] = 943,
  [SMALL_STATE(20)] = 990,
  [SMALL_STATE(21)] = 1039,
  [SMALL_STATE(22)] = 1086,
  [SMALL_STATE(23)] = 1133,
  [SMALL_STATE(24)] = 1180,
  [SMALL_STATE(25)] = 1229,
  [SMALL_STATE(26)] = 1278,
  [SMALL_STATE(27)] = 1327,
  [SMALL_STATE(28)] = 1374,
  [SMALL_STATE(29)] = 1459,
  [SMALL_STATE(30)] = 1506,
  [SMALL_STATE(31)] = 1553,
  [SMALL_STATE(32)] = 1600,
  [SMALL_STATE(33)] = 1647,
  [SMALL_STATE(34)] = 1694,
  [SMALL_STATE(35)] = 1741,
  [SMALL_STATE(36)] = 1799,
  [SMALL_STATE(37)] = 1881,
  [SMALL_STATE(38)] = 1941,
  [SMALL_STATE(39)] = 1997,
  [SMALL_STATE(40)] = 2049,
  [SMALL_STATE(41)] = 2097,
  [SMALL_STATE(42)] = 2147,
  [SMALL_STATE(43)] = 2195,
  [SMALL_STATE(44)] = 2265,
  [SMALL_STATE(45)] = 2334,
  [SMALL_STATE(46)] = 2379,
  [SMALL_STATE(47)] = 2435,
  [SMALL_STATE(48)] = 2491,
  [SMALL_STATE(49)] = 2547,
  [SMALL_STATE(50)] = 2630,
  [SMALL_STATE(51)] = 2710,
  [SMALL_STATE(52)] = 2790,
  [SMALL_STATE(53)] = 2870,
  [SMALL_STATE(54)] = 2912,
  [SMALL_STATE(55)] = 2992,
  [SMALL_STATE(56)] = 3072,
  [SMALL_STATE(57)] = 3149,
  [SMALL_STATE(58)] = 3226,
  [SMALL_STATE(59)] = 3305,
  [SMALL_STATE(60)] = 3382,
  [SMALL_STATE(61)] = 3459,
  [SMALL_STATE(62)] = 3538,
  [SMALL_STATE(63)] = 3614,
  [SMALL_STATE(64)] = 3690,
  [SMALL_STATE(65)] = 3728,
  [SMALL_STATE(66)] = 3782,
  [SMALL_STATE(67)] = 3846,
  [SMALL_STATE(68)] = 3922,
  [SMALL_STATE(69)] = 3996,
  [SMALL_STATE(70)] = 4070,
  [SMALL_STATE(71)] = 4146,
  [SMALL_STATE(72)] = 4216,
  [SMALL_STATE(73)] = 4292,
  [SMALL_STATE(74)] = 4366,
  [SMALL_STATE(75)] = 4440,
  [SMALL_STATE(76)] = 4510,
  [SMALL_STATE(77)] = 4580,
  [SMALL_STATE(78)] = 4642,
  [SMALL_STATE(79)] = 4714,
  [SMALL_STATE(80)] = 4788,
  [SMALL_STATE(81)] = 4862,
  [SMALL_STATE(82)] = 4929,
  [SMALL_STATE(83)] = 5000,
  [SMALL_STATE(84)] = 5071,
  [SMALL_STATE(85)] = 5142,
  [SMALL_STATE(86)] = 5213,
  [SMALL_STATE(87)] = 5284,
  [SMALL_STATE(88)] = 5355,
  [SMALL_STATE(89)] = 5426,
  [SMALL_STATE(90)] = 5499,
  [SMALL_STATE(91)] = 5536,
  [SMALL_STATE(92)] = 5607,
  [SMALL_STATE(93)] = 5657,
  [SMALL_STATE(94)] = 5725,
  [SMALL_STATE(95)] = 5793,
  [SMALL_STATE(96)] = 5859,
  [SMALL_STATE(97)] = 5925,
  [SMALL_STATE(98)] = 5991,
  [SMALL_STATE(99)] = 6056,
  [SMALL_STATE(100)] = 6121,
  [SMALL_STATE(101)] = 6184,
  [SMALL_STATE(102)] = 6247,
  [SMALL_STATE(103)] = 6310,
  [SMALL_STATE(104)] = 6373,
  [SMALL_STATE(105)] = 6436,
  [SMALL_STATE(106)] = 6499,
  [SMALL_STATE(107)] = 6562,
  [SMALL_STATE(108)] = 6625,
  [SMALL_STATE(109)] = 6690,
  [SMALL_STATE(110)] = 6753,
  [SMALL_STATE(111)] = 6816,
  [SMALL_STATE(112)] = 6879,
  [SMALL_STATE(113)] = 6942,
  [SMALL_STATE(114)] = 7005,
  [SMALL_STATE(115)] = 7068,
  [SMALL_STATE(116)] = 7133,
  [SMALL_STATE(117)] = 7196,
  [SMALL_STATE(118)] = 7261,
  [SMALL_STATE(119)] = 7324,
  [SMALL_STATE(120)] = 7387,
  [SMALL_STATE(121)] = 7452,
  [SMALL_STATE(122)] = 7515,
  [SMALL_STATE(123)] = 7578,
  [SMALL_STATE(124)] = 7641,
  [SMALL_STATE(125)] = 7693,
  [SMALL_STATE(126)] = 7725,
  [SMALL_STATE(127)] = 7757,
  [SMALL_STATE(128)] = 7791,
  [SMALL_STATE(129)] = 7822,
  [SMALL_STATE(130)] = 7853,
  [SMALL_STATE(131)] = 7884,
  [SMALL_STATE(132)] = 7915,
  [SMALL_STATE(133)] = 7964,
  [SMALL_STATE(134)] = 8011,
  [SMALL_STATE(135)] = 8042,
  [SMALL_STATE(136)] = 8073,
  [SMALL_STATE(137)] = 8104,
  [SMALL_STATE(138)] = 8135,
  [SMALL_STATE(139)] = 8166,
  [SMALL_STATE(140)] = 8197,
  [SMALL_STATE(141)] = 8232,
  [SMALL_STATE(142)] = 8279,
  [SMALL_STATE(143)] = 8334,
  [SMALL_STATE(144)] = 8391,
  [SMALL_STATE(145)] = 8422,
  [SMALL_STATE(146)] = 8453,
  [SMALL_STATE(147)] = 8505,
  [SMALL_STATE(148)] = 8551,
  [SMALL_STATE(149)] = 8605,
  [SMALL_STATE(150)] = 8636,
  [SMALL_STATE(151)] = 8671,
  [SMALL_STATE(152)] = 8704,
  [SMALL_STATE(153)] = 8737,
  [SMALL_STATE(154)] = 8768,
  [SMALL_STATE(155)] = 8794,
  [SMALL_STATE(156)] = 8820,
  [SMALL_STATE(157)] = 8854,
  [SMALL_STATE(158)] = 8880,
  [SMALL_STATE(159)] = 8910,
  [SMALL_STATE(160)] = 8940,
  [SMALL_STATE(161)] = 8966,
  [SMALL_STATE(162)] = 8992,
  [SMALL_STATE(163)] = 9020,
  [SMALL_STATE(164)] = 9050,
  [SMALL_STATE(165)] = 9078,
  [SMALL_STATE(166)] = 9119,
  [SMALL_STATE(167)] = 9148,
  [SMALL_STATE(168)] = 9177,
  [SMALL_STATE(169)] = 9204,
  [SMALL_STATE(170)] = 9233,
  [SMALL_STATE(171)] = 9262,
  [SMALL_STATE(172)] = 9291,
  [SMALL_STATE(173)] = 9332,
  [SMALL_STATE(174)] = 9360,
  [SMALL_STATE(175)] = 9392,
  [SMALL_STATE(176)] = 9430,
  [SMALL_STATE(177)] = 9470,
  [SMALL_STATE(178)] = 9498,
  [SMALL_STATE(179)] = 9528,
  [SMALL_STATE(180)] = 9568,
  [SMALL_STATE(181)] = 9594,
  [SMALL_STATE(182)] = 9632,
  [SMALL_STATE(183)] = 9672,
  [SMALL_STATE(184)] = 9706,
  [SMALL_STATE(185)] = 9742,
  [SMALL_STATE(186)] = 9770,
  [SMALL_STATE(187)] = 9810,
  [SMALL_STATE(188)] = 9846,
  [SMALL_STATE(189)] = 9874,
  [SMALL_STATE(190)] = 9914,
  [SMALL_STATE(191)] = 9943,
  [SMALL_STATE(192)] = 9972,
  [SMALL_STATE(193)] = 9999,
  [SMALL_STATE(194)] = 10036,
  [SMALL_STATE(195)] = 10073,
  [SMALL_STATE(196)] = 10095,
  [SMALL_STATE(197)] = 10117,
  [SMALL_STATE(198)] = 10139,
  [SMALL_STATE(199)] = 10163,
  [SMALL_STATE(200)] = 10187,
  [SMALL_STATE(201)] = 10213,
  [SMALL_STATE(202)] = 10235,
  [SMALL_STATE(203)] = 10257,
  [SMALL_STATE(204)] = 10281,
  [SMALL_STATE(205)] = 10305,
  [SMALL_STATE(206)] = 10327,
  [SMALL_STATE(207)] = 10349,
  [SMALL_STATE(208)] = 10371,
  [SMALL_STATE(209)] = 10393,
  [SMALL_STATE(210)] = 10417,
  [SMALL_STATE(211)] = 10441,
  [SMALL_STATE(212)] = 10465,
  [SMALL_STATE(213)] = 10489,
  [SMALL_STATE(214)] = 10511,
  [SMALL_STATE(215)] = 10535,
  [SMALL_STATE(216)] = 10559,
  [SMALL_STATE(217)] = 10583,
  [SMALL_STATE(218)] = 10607,
  [SMALL_STATE(219)] = 10629,
  [SMALL_STATE(220)] = 10652,
  [SMALL_STATE(221)] = 10675,
  [SMALL_STATE(222)] = 10696,
  [SMALL_STATE(223)] = 10717,
  [SMALL_STATE(224)] = 10738,
  [SMALL_STATE(225)] = 10759,
  [SMALL_STATE(226)] = 10798,
  [SMALL_STATE(227)] = 10837,
  [SMALL_STATE(228)] = 10858,
  [SMALL_STATE(229)] = 10881,
  [SMALL_STATE(230)] = 10904,
  [SMALL_STATE(231)] = 10927,
  [SMALL_STATE(232)] = 10950,
  [SMALL_STATE(233)] = 10989,
  [SMALL_STATE(234)] = 11012,
  [SMALL_STATE(235)] = 11033,
  [SMALL_STATE(236)] = 11056,
  [SMALL_STATE(237)] = 11079,
  [SMALL_STATE(238)] = 11102,
  [SMALL_STATE(239)] = 11125,
  [SMALL_STATE(240)] = 11148,
  [SMALL_STATE(241)] = 11169,
  [SMALL_STATE(242)] = 11190,
  [SMALL_STATE(243)] = 11229,
  [SMALL_STATE(244)] = 11249,
  [SMALL_STATE(245)] = 11269,
  [SMALL_STATE(246)] = 11291,
  [SMALL_STATE(247)] = 11311,
  [SMALL_STATE(248)] = 11331,
  [SMALL_STATE(249)] = 11353,
  [SMALL_STATE(250)] = 11373,
  [SMALL_STATE(251)] = 11393,
  [SMALL_STATE(252)] = 11413,
  [SMALL_STATE(253)] = 11433,
  [SMALL_STATE(254)] = 11453,
  [SMALL_STATE(255)] = 11473,
  [SMALL_STATE(256)] = 11493,
  [SMALL_STATE(257)] = 11513,
  [SMALL_STATE(258)] = 11533,
  [SMALL_STATE(259)] = 11555,
  [SMALL_STATE(260)] = 11575,
  [SMALL_STATE(261)] = 11595,
  [SMALL_STATE(262)] = 11615,
  [SMALL_STATE(263)] = 11635,
  [SMALL_STATE(264)] = 11655,
  [SMALL_STATE(265)] = 11675,
  [SMALL_STATE(266)] = 11695,
  [SMALL_STATE(267)] = 11715,
  [SMALL_STATE(268)] = 11735,
  [SMALL_STATE(269)] = 11755,
  [SMALL_STATE(270)] = 11786,
  [SMALL_STATE(271)] = 11817,
  [SMALL_STATE(272)] = 11848,
  [SMALL_STATE(273)] = 11877,
  [SMALL_STATE(274)] = 11908,
  [SMALL_STATE(275)] = 11939,
  [SMALL_STATE(276)] = 11967,
  [SMALL_STATE(277)] = 11995,
  [SMALL_STATE(278)] = 12023,
  [SMALL_STATE(279)] = 12051,
  [SMALL_STATE(280)] = 12079,
  [SMALL_STATE(281)] = 12105,
  [SMALL_STATE(282)] = 12129,
  [SMALL_STATE(283)] = 12150,
  [SMALL_STATE(284)] = 12171,
  [SMALL_STATE(285)] = 12190,
  [SMALL_STATE(286)] = 12204,
  [SMALL_STATE(287)] = 12218,
  [SMALL_STATE(288)] = 12231,
  [SMALL_STATE(289)] = 12244,
  [SMALL_STATE(290)] = 12263,
  [SMALL_STATE(291)] = 12276,
  [SMALL_STATE(292)] = 12295,
  [SMALL_STATE(293)] = 12312,
  [SMALL_STATE(294)] = 12331,
  [SMALL_STATE(295)] = 12347,
  [SMALL_STATE(296)] = 12361,
  [SMALL_STATE(297)] = 12375,
  [SMALL_STATE(298)] = 12387,
  [SMALL_STATE(299)] = 12401,
  [SMALL_STATE(300)] = 12417,
  [SMALL_STATE(301)] = 12433,
  [SMALL_STATE(302)] = 12449,
  [SMALL_STATE(303)] = 12465,
  [SMALL_STATE(304)] = 12481,
  [SMALL_STATE(305)] = 12495,
  [SMALL_STATE(306)] = 12507,
  [SMALL_STATE(307)] = 12523,
  [SMALL_STATE(308)] = 12539,
  [SMALL_STATE(309)] = 12555,
  [SMALL_STATE(310)] = 12571,
  [SMALL_STATE(311)] = 12587,
  [SMALL_STATE(312)] = 12601,
  [SMALL_STATE(313)] = 12615,
  [SMALL_STATE(314)] = 12629,
  [SMALL_STATE(315)] = 12645,
  [SMALL_STATE(316)] = 12661,
  [SMALL_STATE(317)] = 12673,
  [SMALL_STATE(318)] = 12689,
  [SMALL_STATE(319)] = 12705,
  [SMALL_STATE(320)] = 12721,
  [SMALL_STATE(321)] = 12735,
  [SMALL_STATE(322)] = 12751,
  [SMALL_STATE(323)] = 12767,
  [SMALL_STATE(324)] = 12783,
  [SMALL_STATE(325)] = 12795,
  [SMALL_STATE(326)] = 12811,
  [SMALL_STATE(327)] = 12827,
  [SMALL_STATE(328)] = 12840,
  [SMALL_STATE(329)] = 12853,
  [SMALL_STATE(330)] = 12864,
  [SMALL_STATE(331)] = 12877,
  [SMALL_STATE(332)] = 12888,
  [SMALL_STATE(333)] = 12899,
  [SMALL_STATE(334)] = 12912,
  [SMALL_STATE(335)] = 12925,
  [SMALL_STATE(336)] = 12938,
  [SMALL_STATE(337)] = 12949,
  [SMALL_STATE(338)] = 12960,
  [SMALL_STATE(339)] = 12973,
  [SMALL_STATE(340)] = 12986,
  [SMALL_STATE(341)] = 12997,
  [SMALL_STATE(342)] = 13010,
  [SMALL_STATE(343)] = 13021,
  [SMALL_STATE(344)] = 13034,
  [SMALL_STATE(345)] = 13045,
  [SMALL_STATE(346)] = 13058,
  [SMALL_STATE(347)] = 13069,
  [SMALL_STATE(348)] = 13080,
  [SMALL_STATE(349)] = 13091,
  [SMALL_STATE(350)] = 13102,
  [SMALL_STATE(351)] = 13113,
  [SMALL_STATE(352)] = 13123,
  [SMALL_STATE(353)] = 13133,
  [SMALL_STATE(354)] = 13143,
  [SMALL_STATE(355)] = 13153,
  [SMALL_STATE(356)] = 13163,
  [SMALL_STATE(357)] = 13173,
  [SMALL_STATE(358)] = 13183,
  [SMALL_STATE(359)] = 13193,
  [SMALL_STATE(360)] = 13203,
  [SMALL_STATE(361)] = 13213,
  [SMALL_STATE(362)] = 13223,
  [SMALL_STATE(363)] = 13233,
  [SMALL_STATE(364)] = 13243,
  [SMALL_STATE(365)] = 13253,
  [SMALL_STATE(366)] = 13263,
  [SMALL_STATE(367)] = 13273,
  [SMALL_STATE(368)] = 13283,
  [SMALL_STATE(369)] = 13293,
  [SMALL_STATE(370)] = 13303,
  [SMALL_STATE(371)] = 13313,
  [SMALL_STATE(372)] = 13323,
  [SMALL_STATE(373)] = 13333,
  [SMALL_STATE(374)] = 13343,
  [SMALL_STATE(375)] = 13353,
  [SMALL_STATE(376)] = 13363,
  [SMALL_STATE(377)] = 13373,
  [SMALL_STATE(378)] = 13383,
  [SMALL_STATE(379)] = 13393,
  [SMALL_STATE(380)] = 13403,
  [SMALL_STATE(381)] = 13413,
  [SMALL_STATE(382)] = 13423,
  [SMALL_STATE(383)] = 13433,
  [SMALL_STATE(384)] = 13443,
  [SMALL_STATE(385)] = 13453,
  [SMALL_STATE(386)] = 13463,
  [SMALL_STATE(387)] = 13473,
  [SMALL_STATE(388)] = 13483,
  [SMALL_STATE(389)] = 13493,
  [SMALL_STATE(390)] = 13503,
  [SMALL_STATE(391)] = 13513,
  [SMALL_STATE(392)] = 13523,
  [SMALL_STATE(393)] = 13533,
  [SMALL_STATE(394)] = 13543,
  [SMALL_STATE(395)] = 13553,
  [SMALL_STATE(396)] = 13563,
  [SMALL_STATE(397)] = 13573,
  [SMALL_STATE(398)] = 13583,
  [SMALL_STATE(399)] = 13593,
  [SMALL_STATE(400)] = 13603,
  [SMALL_STATE(401)] = 13613,
  [SMALL_STATE(402)] = 13623,
  [SMALL_STATE(403)] = 13633,
  [SMALL_STATE(404)] = 13643,
  [SMALL_STATE(405)] = 13653,
  [SMALL_STATE(406)] = 13663,
  [SMALL_STATE(407)] = 13673,
  [SMALL_STATE(408)] = 13683,
  [SMALL_STATE(409)] = 13693,
  [SMALL_STATE(410)] = 13703,
  [SMALL_STATE(411)] = 13713,
  [SMALL_STATE(412)] = 13723,
  [SMALL_STATE(413)] = 13733,
  [SMALL_STATE(414)] = 13743,
  [SMALL_STATE(415)] = 13753,
  [SMALL_STATE(416)] = 13763,
  [SMALL_STATE(417)] = 13773,
  [SMALL_STATE(418)] = 13783,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 10),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 10),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 11),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 16),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(137),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(341),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(410),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(405),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(134),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(375),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(127),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 21),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 21),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(97),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(62),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(79),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(376),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(55),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(96),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(56),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(61),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 12),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 12),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 22),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(204),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(333),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(417),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(416),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(214),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(398),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(192),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(230),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(334),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(415),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(414),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(236),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(393),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(200),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 19),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 18),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 20),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 14),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_definition, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 15),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(376),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(50),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(96),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(282),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(91),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(412),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(362),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(304),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(88),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(98),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(89),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(59),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(36),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 13),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [939] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
