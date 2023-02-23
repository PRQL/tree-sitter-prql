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
#define STATE_COUNT 461
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 133
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 24

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
  sym_keyword_null = 33,
  sym_keyword_func = 34,
  sym_keyword_let = 35,
  anon_sym_EQ = 36,
  anon_sym_LPAREN = 37,
  anon_sym_RPAREN = 38,
  anon_sym_DASH_GT = 39,
  anon_sym_COLON = 40,
  anon_sym_LBRACK = 41,
  anon_sym_COMMA = 42,
  anon_sym_RBRACK = 43,
  anon_sym_DASH = 44,
  anon_sym_PLUS = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_f = 47,
  anon_sym_DQUOTE = 48,
  aux_sym__double_quote_string_token1 = 49,
  anon_sym_SQUOTE = 50,
  aux_sym__literal_string_token1 = 51,
  sym__natural_number = 52,
  anon_sym_DOT = 53,
  sym_identifier = 54,
  anon_sym_DOT_DOT = 55,
  anon_sym_STAR = 56,
  anon_sym_SLASH = 57,
  anon_sym_PIPE = 58,
  anon_sym_BANG_EQ = 59,
  anon_sym_GT = 60,
  anon_sym_GT_EQ = 61,
  anon_sym_LT = 62,
  anon_sym_LT_EQ = 63,
  anon_sym_QMARK_QMARK = 64,
  aux_sym__date_token1 = 65,
  aux_sym__date_token2 = 66,
  anon_sym_AT = 67,
  aux_sym__time_token1 = 68,
  anon_sym_T = 69,
  anon_sym_Z = 70,
  anon_sym_POUND = 71,
  aux_sym_comment_token1 = 72,
  sym_bang = 73,
  sym_program = 74,
  sym_pipeline = 75,
  sym_variable = 76,
  sym_function_definition = 77,
  sym_parameter = 78,
  sym__call_parameter = 79,
  sym_function_call = 80,
  sym_transforms = 81,
  sym_from = 82,
  sym_derives = 83,
  sym_filter = 84,
  sym__boolean_expression = 85,
  sym_aggregate = 86,
  sym_aggregate_operation = 87,
  sym__aggregate_count = 88,
  sym_sorts = 89,
  sym_direction = 90,
  sym_takes = 91,
  sym_window = 92,
  sym_window_definitions = 93,
  sym__window_definition = 94,
  sym_group = 95,
  sym_joins = 96,
  sym__join_definition = 97,
  sym_conditions = 98,
  sym__self_join = 99,
  sym_select = 100,
  sym_table_reference = 101,
  sym_term = 102,
  sym__expression = 103,
  sym_literal = 104,
  sym_f_string = 105,
  sym__double_quote_string = 106,
  sym__literal_string = 107,
  sym__integer = 108,
  sym__decimal_number = 109,
  sym_field = 110,
  sym__alias_identifier = 111,
  sym_range = 112,
  sym_assignment = 113,
  sym_binary_expression = 114,
  sym__date = 115,
  sym_date = 116,
  sym__time = 117,
  sym_time = 118,
  sym_timestamp = 119,
  sym_timezone = 120,
  sym_comment = 121,
  aux_sym_program_repeat1 = 122,
  aux_sym_function_definition_repeat1 = 123,
  aux_sym_function_call_repeat1 = 124,
  aux_sym_transforms_repeat1 = 125,
  aux_sym_derives_repeat1 = 126,
  aux_sym_aggregate_repeat1 = 127,
  aux_sym_sorts_repeat1 = 128,
  aux_sym_window_definitions_repeat1 = 129,
  aux_sym_group_repeat1 = 130,
  aux_sym_group_repeat2 = 131,
  aux_sym_conditions_repeat1 = 132,
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
  [sym_keyword_null] = "keyword_null",
  [sym_keyword_func] = "keyword_func",
  [sym_keyword_let] = "keyword_let",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
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
  [sym_variable] = "variable",
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
  [sym_keyword_null] = sym_keyword_null,
  [sym_keyword_func] = sym_keyword_func,
  [sym_keyword_let] = sym_keyword_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
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
  [sym_variable] = sym_variable,
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
  [sym_keyword_null] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_func] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_let] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [sym_variable] = {
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
  [20] = {.index = 36, .length = 1},
  [21] = {.index = 37, .length = 4},
  [22] = {.index = 41, .length = 1},
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
    {field_name, 1},
  [37] =
    {field_alias, 0},
    {field_operation, 3},
    {field_operation, 4},
    {field_operator, 1},
  [41] =
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
  [23] = {
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
      if (eof) ADVANCE(282);
      if (lookahead == '!') ADVANCE(587);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(356);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(347);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '@') ADVANCE(576);
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'J') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'N') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(579);
      if (lookahead == 'W') ADVANCE(68);
      if (lookahead == 'Z') ADVANCE(580);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 'g') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'j') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(188);
      if (lookahead == '|') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(277)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(423);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'O') ADVANCE(437);
      if (lookahead == 'T') ADVANCE(439);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '|') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(261)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'D') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(373);
      if (lookahead == 'G') ADVANCE(441);
      if (lookahead == 'J') ADVANCE(430);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'O') ADVANCE(437);
      if (lookahead == 'S') ADVANCE(400);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(468);
      if (lookahead == 'g') ADVANCE(537);
      if (lookahead == 'j') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '|') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(258)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'O') ADVANCE(437);
      if (lookahead == 'S') ADVANCE(434);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == 'W') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == 'w') ADVANCE(507);
      if (lookahead == '|') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(260)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'T') ADVANCE(439);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(267)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '@') ADVANCE(576);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'T') ADVANCE(439);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(262)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '@') ADVANCE(576);
      if (lookahead == 'A') ADVANCE(461);
      if (lookahead == 'C') ADVANCE(435);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'M') ADVANCE(376);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(452);
      if (lookahead == 'T') ADVANCE(439);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'a') ADVANCE(556);
      if (lookahead == 'c') ADVANCE(530);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(546);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(259)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '@') ADVANCE(576);
      if (lookahead == 'A') ADVANCE(464);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(457);
      if (lookahead == 'T') ADVANCE(439);
      if (lookahead == 'a') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(552);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(264)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '@') ADVANCE(576);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(414);
      if (lookahead == 'T') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'D') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(373);
      if (lookahead == 'G') ADVANCE(441);
      if (lookahead == 'J') ADVANCE(430);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(400);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(468);
      if (lookahead == 'g') ADVANCE(537);
      if (lookahead == 'j') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(265)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(434);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == 'W') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == 'w') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(268)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(269)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(567);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(358);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(350);
      END_STATE();
    case 17:
      if (lookahead == '?') ADVANCE(572);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == 'U') ADVANCE(88);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(132);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(89);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(343);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(63);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(123);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(124);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(332);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(100);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(326);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(295);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(303);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(305);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(287);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(308);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(291);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(112);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == 'U') ADVANCE(85);
      if (lookahead == 'W') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'G') ADVANCE(320);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(108);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(109);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(118);
      END_STATE();
    case 54:
      if (lookahead == 'F') ADVANCE(119);
      if (lookahead == 'T') ADVANCE(345);
      END_STATE();
    case 55:
      if (lookahead == 'G') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 56:
      if (lookahead == 'G') ADVANCE(61);
      if (lookahead == 'N') ADVANCE(29);
      if (lookahead == 'V') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'G') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 'G') ADVANCE(338);
      END_STATE();
    case 59:
      if (lookahead == 'G') ADVANCE(340);
      END_STATE();
    case 60:
      if (lookahead == 'G') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == 'G') ADVANCE(113);
      END_STATE();
    case 62:
      if (lookahead == 'G') ADVANCE(42);
      END_STATE();
    case 63:
      if (lookahead == 'H') ADVANCE(307);
      END_STATE();
    case 64:
      if (lookahead == 'H') ADVANCE(122);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(134);
      END_STATE();
    case 66:
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(125);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(90);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'K') ADVANCE(38);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(116);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(127);
      END_STATE();
    case 78:
      if (lookahead == 'L') ADVANCE(331);
      END_STATE();
    case 79:
      if (lookahead == 'L') ADVANCE(341);
      END_STATE();
    case 80:
      if (lookahead == 'L') ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 'L') ADVANCE(78);
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 82:
      if (lookahead == 'L') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'W') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 85:
      if (lookahead == 'M') ADVANCE(322);
      END_STATE();
    case 86:
      if (lookahead == 'M') ADVANCE(283);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(336);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(310);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(299);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(30);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(121);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 99:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(135);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(131);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(86);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(129);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(71);
      END_STATE();
    case 105:
      if (lookahead == 'P') ADVANCE(24);
      END_STATE();
    case 106:
      if (lookahead == 'P') ADVANCE(289);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(334);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(328);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(285);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(120);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 115:
      if (lookahead == 'S') ADVANCE(339);
      END_STATE();
    case 116:
      if (lookahead == 'S') ADVANCE(40);
      END_STATE();
    case 117:
      if (lookahead == 'S') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(345);
      END_STATE();
    case 119:
      if (lookahead == 'T') ADVANCE(329);
      END_STATE();
    case 120:
      if (lookahead == 'T') ADVANCE(293);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(316);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(330);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(301);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(324);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 'U') ADVANCE(106);
      END_STATE();
    case 130:
      if (lookahead == 'U') ADVANCE(82);
      END_STATE();
    case 131:
      if (lookahead == 'U') ADVANCE(94);
      END_STATE();
    case 132:
      if (lookahead == 'U') ADVANCE(39);
      END_STATE();
    case 133:
      if (lookahead == 'V') ADVANCE(318);
      END_STATE();
    case 134:
      if (lookahead == 'V') ADVANCE(41);
      END_STATE();
    case 135:
      if (lookahead == 'W') ADVANCE(297);
      END_STATE();
    case 136:
      if (lookahead == 'X') ADVANCE(105);
      END_STATE();
    case 137:
      if (lookahead == 'X') ADVANCE(312);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 146:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 148:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 153:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == 'w') ADVANCE(190);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(320);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 174:
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 175:
      if (lookahead == 'g') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 176:
      if (lookahead == 'g') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'v') ADVANCE(170);
      END_STATE();
    case 177:
      if (lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 178:
      if (lookahead == 'g') ADVANCE(338);
      END_STATE();
    case 179:
      if (lookahead == 'g') ADVANCE(340);
      END_STATE();
    case 180:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 181:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 182:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 183:
      if (lookahead == 'h') ADVANCE(307);
      END_STATE();
    case 184:
      if (lookahead == 'h') ADVANCE(241);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 195:
      if (lookahead == 'k') ADVANCE(158);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == 'w') ADVANCE(235);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 205:
      if (lookahead == 'm') ADVANCE(322);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 251:
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 252:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 253:
      if (lookahead == 'v') ADVANCE(318);
      END_STATE();
    case 254:
      if (lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 255:
      if (lookahead == 'w') ADVANCE(297);
      END_STATE();
    case 256:
      if (lookahead == 'x') ADVANCE(225);
      END_STATE();
    case 257:
      if (lookahead == 'x') ADVANCE(312);
      END_STATE();
    case 258:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(258)
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'D') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(373);
      if (lookahead == 'G') ADVANCE(441);
      if (lookahead == 'J') ADVANCE(430);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'O') ADVANCE(437);
      if (lookahead == 'S') ADVANCE(400);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(468);
      if (lookahead == 'g') ADVANCE(537);
      if (lookahead == 'j') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '|') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 259:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(259)
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '@') ADVANCE(576);
      if (lookahead == 'A') ADVANCE(461);
      if (lookahead == 'C') ADVANCE(435);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'M') ADVANCE(376);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(452);
      if (lookahead == 'T') ADVANCE(439);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'a') ADVANCE(556);
      if (lookahead == 'c') ADVANCE(530);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'm') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(546);
      if (lookahead == 't') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 260:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(260)
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'O') ADVANCE(437);
      if (lookahead == 'S') ADVANCE(434);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == 'W') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == 'w') ADVANCE(507);
      if (lookahead == '|') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 261:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(261)
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(423);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'O') ADVANCE(437);
      if (lookahead == 'T') ADVANCE(439);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead == '|') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 262:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(262)
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '@') ADVANCE(576);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'T') ADVANCE(439);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 't') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 263:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '@') ADVANCE(576);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(414);
      if (lookahead == 'T') ADVANCE(439);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == 't') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 264:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(264)
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '@') ADVANCE(576);
      if (lookahead == 'A') ADVANCE(464);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(457);
      if (lookahead == 'T') ADVANCE(439);
      if (lookahead == 'a') ADVANCE(559);
      if (lookahead == 'f') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(552);
      if (lookahead == 't') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 265:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(265)
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'D') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(373);
      if (lookahead == 'G') ADVANCE(441);
      if (lookahead == 'J') ADVANCE(430);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(400);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(468);
      if (lookahead == 'g') ADVANCE(537);
      if (lookahead == 'j') ADVANCE(525);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 't') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 266:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(434);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == 'W') ADVANCE(412);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == 'w') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 267:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(267)
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'T') ADVANCE(439);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 't') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 268:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(268)
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == ':') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 269:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(269)
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 270:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (lookahead == '#') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 271:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 273:
      if (eof) ADVANCE(282);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(347);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'J') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(68);
      if (lookahead == 'Z') ADVANCE(580);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'g') ADVANCE(234);
      if (lookahead == 'j') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(188);
      if (lookahead == '|') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(280)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 274:
      if (eof) ADVANCE(282);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'D') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(441);
      if (lookahead == 'J') ADVANCE(430);
      if (lookahead == 'L') ADVANCE(388);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'O') ADVANCE(437);
      if (lookahead == 'S') ADVANCE(400);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead == 'g') ADVANCE(537);
      if (lookahead == 'j') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(483);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '|') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(279)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 275:
      if (eof) ADVANCE(282);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(347);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'J') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == 'W') ADVANCE(68);
      if (lookahead == 'Z') ADVANCE(580);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 'g') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'j') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'w') ADVANCE(188);
      if (lookahead == '|') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(278)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 276:
      if (eof) ADVANCE(282);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'D') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(441);
      if (lookahead == 'J') ADVANCE(430);
      if (lookahead == 'L') ADVANCE(388);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(400);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead == 'g') ADVANCE(537);
      if (lookahead == 'j') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(483);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(281)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 277:
      if (eof) ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(277)
      if (lookahead == '!') ADVANCE(587);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(356);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(347);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '@') ADVANCE(576);
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'J') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'N') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(579);
      if (lookahead == 'W') ADVANCE(68);
      if (lookahead == 'Z') ADVANCE(580);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 'g') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'j') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(188);
      if (lookahead == '|') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 278:
      if (eof) ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(278)
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(347);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == 'J') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == 'W') ADVANCE(68);
      if (lookahead == 'Z') ADVANCE(580);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 'g') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'j') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'w') ADVANCE(188);
      if (lookahead == '|') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 279:
      if (eof) ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(279)
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(404);
      if (lookahead == 'D') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(441);
      if (lookahead == 'J') ADVANCE(430);
      if (lookahead == 'L') ADVANCE(388);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'O') ADVANCE(437);
      if (lookahead == 'S') ADVANCE(400);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead == 'g') ADVANCE(537);
      if (lookahead == 'j') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(483);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '|') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 280:
      if (eof) ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(280)
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '+') ADVANCE(357);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == '/') ADVANCE(565);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == '<') ADVANCE(570);
      if (lookahead == '=') ADVANCE(347);
      if (lookahead == '>') ADVANCE(568);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'J') ADVANCE(104);
      if (lookahead == 'L') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(130);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(68);
      if (lookahead == 'Z') ADVANCE(580);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == ']') ADVANCE(354);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'g') ADVANCE(234);
      if (lookahead == 'j') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(188);
      if (lookahead == '|') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 281:
      if (eof) ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(281)
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '#') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == ':') ADVANCE(351);
      if (lookahead == 'A') ADVANCE(405);
      if (lookahead == 'D') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(441);
      if (lookahead == 'J') ADVANCE(430);
      if (lookahead == 'L') ADVANCE(388);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead == 'S') ADVANCE(400);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == '[') ADVANCE(352);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead == 'g') ADVANCE(537);
      if (lookahead == 'j') ADVANCE(525);
      if (lookahead == 'l') ADVANCE(483);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 't') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_keyword_window);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(152);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(358);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(350);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(364);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(363);
      if (lookahead == '#') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(368);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(367);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(563);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(416);
      if (lookahead == 'I') ADVANCE(418);
      if (lookahead == 'R') ADVANCE(431);
      if (lookahead == 'U') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(416);
      if (lookahead == 'I') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'R') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'I') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(419);
      if (lookahead == 'O') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(443);
      if (lookahead == 'G') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(407);
      if (lookahead == 'N') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(383);
      if (lookahead == 'U') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(513);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead == 'u') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == 'i') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == 'r') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(561);
      if (lookahead == 'i') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == 'o') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'g') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(502);
      if (lookahead == 'n') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(569);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(571);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(132);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(586);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(364);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(368);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(586);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(567);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 275},
  [2] = {.lex_state = 274},
  [3] = {.lex_state = 275},
  [4] = {.lex_state = 273},
  [5] = {.lex_state = 273},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 273},
  [8] = {.lex_state = 275},
  [9] = {.lex_state = 275},
  [10] = {.lex_state = 275},
  [11] = {.lex_state = 273},
  [12] = {.lex_state = 275},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 273},
  [15] = {.lex_state = 275},
  [16] = {.lex_state = 275},
  [17] = {.lex_state = 275},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 273},
  [20] = {.lex_state = 275},
  [21] = {.lex_state = 275},
  [22] = {.lex_state = 275},
  [23] = {.lex_state = 275},
  [24] = {.lex_state = 275},
  [25] = {.lex_state = 275},
  [26] = {.lex_state = 273},
  [27] = {.lex_state = 275},
  [28] = {.lex_state = 273},
  [29] = {.lex_state = 275},
  [30] = {.lex_state = 273},
  [31] = {.lex_state = 275},
  [32] = {.lex_state = 275},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 275},
  [35] = {.lex_state = 275},
  [36] = {.lex_state = 275},
  [37] = {.lex_state = 275},
  [38] = {.lex_state = 275},
  [39] = {.lex_state = 275},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 275},
  [42] = {.lex_state = 275},
  [43] = {.lex_state = 273},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 275},
  [47] = {.lex_state = 275},
  [48] = {.lex_state = 275},
  [49] = {.lex_state = 275},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 275},
  [58] = {.lex_state = 276},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 276},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 275},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 275},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 275},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 275},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 275},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 276},
  [137] = {.lex_state = 276},
  [138] = {.lex_state = 276},
  [139] = {.lex_state = 276},
  [140] = {.lex_state = 276},
  [141] = {.lex_state = 276},
  [142] = {.lex_state = 276},
  [143] = {.lex_state = 275},
  [144] = {.lex_state = 276},
  [145] = {.lex_state = 276},
  [146] = {.lex_state = 276},
  [147] = {.lex_state = 276},
  [148] = {.lex_state = 276},
  [149] = {.lex_state = 276},
  [150] = {.lex_state = 275},
  [151] = {.lex_state = 275},
  [152] = {.lex_state = 275},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 275},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 275},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 275},
  [161] = {.lex_state = 275},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 275},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 275},
  [176] = {.lex_state = 275},
  [177] = {.lex_state = 275},
  [178] = {.lex_state = 275},
  [179] = {.lex_state = 275},
  [180] = {.lex_state = 275},
  [181] = {.lex_state = 275},
  [182] = {.lex_state = 275},
  [183] = {.lex_state = 275},
  [184] = {.lex_state = 275},
  [185] = {.lex_state = 275},
  [186] = {.lex_state = 275},
  [187] = {.lex_state = 275},
  [188] = {.lex_state = 275},
  [189] = {.lex_state = 275},
  [190] = {.lex_state = 275},
  [191] = {.lex_state = 275},
  [192] = {.lex_state = 275},
  [193] = {.lex_state = 275},
  [194] = {.lex_state = 275},
  [195] = {.lex_state = 275},
  [196] = {.lex_state = 275},
  [197] = {.lex_state = 275},
  [198] = {.lex_state = 275},
  [199] = {.lex_state = 275},
  [200] = {.lex_state = 275},
  [201] = {.lex_state = 275},
  [202] = {.lex_state = 275},
  [203] = {.lex_state = 275},
  [204] = {.lex_state = 275},
  [205] = {.lex_state = 275},
  [206] = {.lex_state = 275},
  [207] = {.lex_state = 275},
  [208] = {.lex_state = 275},
  [209] = {.lex_state = 275},
  [210] = {.lex_state = 275},
  [211] = {.lex_state = 275},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 275},
  [214] = {.lex_state = 275},
  [215] = {.lex_state = 275},
  [216] = {.lex_state = 275},
  [217] = {.lex_state = 275},
  [218] = {.lex_state = 275},
  [219] = {.lex_state = 275},
  [220] = {.lex_state = 275},
  [221] = {.lex_state = 275},
  [222] = {.lex_state = 275},
  [223] = {.lex_state = 275},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 275},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 275},
  [228] = {.lex_state = 275},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 275},
  [235] = {.lex_state = 275},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 275},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 275},
  [241] = {.lex_state = 275},
  [242] = {.lex_state = 275},
  [243] = {.lex_state = 275},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 275},
  [252] = {.lex_state = 275},
  [253] = {.lex_state = 275},
  [254] = {.lex_state = 275},
  [255] = {.lex_state = 275},
  [256] = {.lex_state = 275},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 275},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 275},
  [262] = {.lex_state = 273},
  [263] = {.lex_state = 275},
  [264] = {.lex_state = 275},
  [265] = {.lex_state = 275},
  [266] = {.lex_state = 275},
  [267] = {.lex_state = 275},
  [268] = {.lex_state = 275},
  [269] = {.lex_state = 275},
  [270] = {.lex_state = 275},
  [271] = {.lex_state = 275},
  [272] = {.lex_state = 275},
  [273] = {.lex_state = 275},
  [274] = {.lex_state = 275},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 275},
  [277] = {.lex_state = 275},
  [278] = {.lex_state = 275},
  [279] = {.lex_state = 275},
  [280] = {.lex_state = 275},
  [281] = {.lex_state = 275},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 275},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 275},
  [286] = {.lex_state = 273},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 275},
  [289] = {.lex_state = 273},
  [290] = {.lex_state = 273},
  [291] = {.lex_state = 275},
  [292] = {.lex_state = 273},
  [293] = {.lex_state = 275},
  [294] = {.lex_state = 4},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 275},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 275},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 275},
  [317] = {.lex_state = 275},
  [318] = {.lex_state = 275},
  [319] = {.lex_state = 11},
  [320] = {.lex_state = 11},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 11},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 11},
  [325] = {.lex_state = 275},
  [326] = {.lex_state = 275},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 275},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 275},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 11},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 275},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 275},
  [347] = {.lex_state = 275},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 11},
  [350] = {.lex_state = 275},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 12},
  [353] = {.lex_state = 11},
  [354] = {.lex_state = 11},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 11},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 274},
  [361] = {.lex_state = 274},
  [362] = {.lex_state = 274},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 11},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 274},
  [367] = {.lex_state = 11},
  [368] = {.lex_state = 11},
  [369] = {.lex_state = 274},
  [370] = {.lex_state = 11},
  [371] = {.lex_state = 11},
  [372] = {.lex_state = 274},
  [373] = {.lex_state = 11},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 11},
  [376] = {.lex_state = 11},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 274},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 11},
  [382] = {.lex_state = 11},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 275},
  [385] = {.lex_state = 13},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 275},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 275},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 13},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 13},
  [397] = {.lex_state = 275},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 275},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 13},
  [403] = {.lex_state = 275},
  [404] = {.lex_state = 13},
  [405] = {.lex_state = 13},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 274},
  [408] = {.lex_state = 275},
  [409] = {.lex_state = 275},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 275},
  [414] = {.lex_state = 13},
  [415] = {.lex_state = 275},
  [416] = {.lex_state = 275},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 275},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 13},
  [423] = {.lex_state = 275},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 275},
  [428] = {.lex_state = 275},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 362},
  [434] = {.lex_state = 366},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 366},
  [437] = {.lex_state = 362},
  [438] = {.lex_state = 585},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 275},
  [441] = {.lex_state = 11},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 362},
  [445] = {.lex_state = 366},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 362},
  [449] = {.lex_state = 366},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 362},
  [452] = {.lex_state = 366},
  [453] = {.lex_state = 362},
  [454] = {.lex_state = 366},
  [455] = {.lex_state = 362},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 11},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 11},
  [460] = {(TSStateId)(-1)},
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
    [sym_keyword_null] = ACTIONS(1),
    [sym_keyword_func] = ACTIONS(1),
    [sym_keyword_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
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
    [sym_program] = STATE(456),
    [sym_pipeline] = STATE(317),
    [sym_variable] = STATE(317),
    [sym_function_definition] = STATE(317),
    [sym_from] = STATE(143),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(306),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_keyword_from] = ACTIONS(7),
    [sym_keyword_func] = ACTIONS(9),
    [sym_keyword_let] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym__natural_number,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(2), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_function_call_repeat1,
    STATE(140), 1,
      sym__integer,
    STATE(142), 1,
      sym__double_quote_string,
    STATE(144), 1,
      sym_literal,
    STATE(145), 1,
      sym__call_parameter,
    STATE(149), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(13), 11,
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
    ACTIONS(15), 15,
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
      sym_keyword_let,
      anon_sym_GT,
      anon_sym_LT,
  [79] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_Z,
    STATE(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_timezone,
    STATE(396), 1,
      sym_direction,
    ACTIONS(35), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 32,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [138] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_DOT,
    STATE(4), 1,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(39), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [192] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_COLON,
    ACTIONS(53), 1,
      anon_sym_DOT,
    STATE(5), 1,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [246] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      sym__natural_number,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(6), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_function_call_repeat1,
    STATE(162), 1,
      sym__double_quote_string,
    STATE(164), 1,
      sym__call_parameter,
    STATE(170), 1,
      sym__integer,
    STATE(172), 1,
      sym_literal,
    STATE(163), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(55), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(13), 11,
      anon_sym_RPAREN,
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
    ACTIONS(15), 12,
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
      anon_sym_GT,
      anon_sym_LT,
  [322] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_comment,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 35,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [371] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(39), 35,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [420] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      sym__natural_number,
    STATE(9), 1,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [471] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 35,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [520] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 35,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [569] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 35,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [618] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(13), 1,
      sym_comment,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(175), 1,
      sym_binary_expression,
    STATE(209), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(351), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(93), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [707] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(14), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [758] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(121), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [807] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(127), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [855] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_comment,
    ACTIONS(131), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [903] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_comment,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(189), 1,
      sym_binary_expression,
    STATE(209), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(374), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(93), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [989] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(135), 1,
      anon_sym_DOT,
    STATE(19), 1,
      sym_comment,
    ACTIONS(15), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(13), 33,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
    STATE(20), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(137), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1087] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(143), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1135] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(147), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1183] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1231] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1279] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(159), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(157), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1327] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(26), 1,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1377] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1425] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(171), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1473] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_T,
    STATE(29), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(175), 33,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1523] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(181), 1,
      anon_sym_DOT,
    STATE(30), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 33,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1573] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1621] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1669] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(33), 1,
      sym_comment,
    STATE(189), 1,
      sym_binary_expression,
    STATE(209), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(374), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(93), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1755] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1803] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 34,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1851] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    STATE(36), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(127), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 28,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1904] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(127), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 31,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
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
  [1953] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(127), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 29,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [2004] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    STATE(39), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(125), 22,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2065] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      sym_keyword_count,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(40), 1,
      sym_comment,
    STATE(189), 1,
      sym_binary_expression,
    STATE(209), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(374), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
    ACTIONS(93), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [2148] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(125), 24,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_QMARK_QMARK,
  [2205] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    STATE(42), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(125), 23,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2264] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(181), 1,
      anon_sym_DOT,
    STATE(43), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 12,
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
    ACTIONS(207), 18,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2313] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      anon_sym_DASH,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym__natural_number,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(44), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_function_call_repeat1,
    STATE(226), 1,
      sym_literal,
    STATE(231), 1,
      sym__integer,
    STATE(232), 1,
      sym__double_quote_string,
    STATE(239), 1,
      sym__call_parameter,
    STATE(233), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(209), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(15), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(13), 10,
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
  [2384] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      anon_sym_DASH,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(231), 1,
      sym__natural_number,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(45), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_function_call_repeat1,
    STATE(249), 1,
      sym_literal,
    STATE(250), 1,
      sym__call_parameter,
    STATE(282), 1,
      sym__double_quote_string,
    STATE(294), 1,
      sym__integer,
    STATE(287), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(223), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(15), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(13), 13,
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
  [2454] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 12,
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
    ACTIONS(207), 18,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2500] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(47), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(237), 18,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2557] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(48), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(241), 18,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2614] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(49), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(243), 18,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2671] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(50), 1,
      sym_comment,
    STATE(100), 1,
      sym_direction,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(330), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2755] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(51), 1,
      sym_comment,
    STATE(70), 1,
      sym__expression,
    STATE(88), 1,
      sym_direction,
    STATE(184), 1,
      sym_assignment,
    STATE(243), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2836] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(52), 1,
      sym_comment,
    STATE(89), 1,
      sym_direction,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(377), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2917] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(53), 1,
      sym_comment,
    STATE(94), 1,
      sym_direction,
    STATE(109), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(243), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2998] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(54), 1,
      sym_comment,
    STATE(89), 1,
      sym_direction,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(377), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3079] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(55), 1,
      sym_comment,
    STATE(92), 1,
      sym_direction,
    STATE(160), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(243), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3160] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(56), 1,
      sym_comment,
    STATE(89), 1,
      sym_direction,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(377), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3241] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym_comment,
    ACTIONS(71), 3,
      anon_sym_DOT,
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
    ACTIONS(261), 14,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [3284] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym__natural_number,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(58), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_function_call_repeat1,
    STATE(140), 1,
      sym__integer,
    STATE(142), 1,
      sym__double_quote_string,
    STATE(144), 1,
      sym_literal,
    STATE(145), 1,
      sym__call_parameter,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(149), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(265), 11,
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
      sym_keyword_let,
  [3350] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(267), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(59), 1,
      sym_comment,
    STATE(68), 1,
      sym_field,
    STATE(109), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(264), 1,
      sym_table_reference,
    STATE(278), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3430] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(269), 1,
      sym_keyword_side,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(60), 1,
      sym_comment,
    STATE(93), 1,
      sym__join_definition,
    STATE(109), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(197), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3508] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(284), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      sym__natural_number,
    ACTIONS(290), 1,
      anon_sym_DOT,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(140), 1,
      sym__integer,
    STATE(142), 1,
      sym__double_quote_string,
    STATE(144), 1,
      sym_literal,
    STATE(145), 1,
      sym__call_parameter,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(61), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(149), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(275), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(273), 11,
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
      sym_keyword_let,
  [3572] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(269), 1,
      sym_keyword_side,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(62), 1,
      sym_comment,
    STATE(70), 1,
      sym__expression,
    STATE(90), 1,
      sym__join_definition,
    STATE(184), 1,
      sym_assignment,
    STATE(197), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3650] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(63), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(337), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3728] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(64), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(355), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3806] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(65), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(183), 1,
      sym_binary_expression,
    STATE(184), 1,
      sym_assignment,
    STATE(328), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3886] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(267), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(66), 1,
      sym_comment,
    STATE(68), 1,
      sym_field,
    STATE(70), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(264), 1,
      sym_table_reference,
    STATE(278), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3966] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(67), 1,
      sym_comment,
    STATE(89), 1,
      sym_direction,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(377), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4044] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 25,
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
      sym_keyword_let,
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
  [4083] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(69), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(192), 1,
      sym_binary_expression,
    STATE(365), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4160] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(239), 1,
      sym_keyword_or,
    ACTIONS(316), 1,
      anon_sym_EQ,
    STATE(70), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(314), 13,
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
      sym_keyword_let,
      anon_sym_LBRACK,
  [4215] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    ACTIONS(322), 1,
      anon_sym_EQ_EQ,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(71), 1,
      sym_comment,
    STATE(191), 1,
      sym_binary_expression,
    STATE(222), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4290] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(72), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(359), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4365] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(70), 1,
      sym__expression,
    STATE(73), 1,
      sym_comment,
    STATE(82), 1,
      sym_binary_expression,
    STATE(261), 1,
      sym_assignment,
    STATE(266), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4442] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(74), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(447), 1,
      sym_term,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4517] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(75), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(192), 1,
      sym_binary_expression,
    STATE(365), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4594] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(76), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(359), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4669] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(77), 1,
      sym_comment,
    STATE(82), 1,
      sym_binary_expression,
    STATE(161), 1,
      sym__expression,
    STATE(261), 1,
      sym_assignment,
    STATE(266), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4746] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(47), 1,
      sym__expression,
    STATE(78), 1,
      sym_comment,
    STATE(182), 1,
      sym_function_call,
    STATE(407), 1,
      sym__alias_identifier,
    ACTIONS(334), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4817] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(47), 1,
      sym__expression,
    STATE(79), 1,
      sym_comment,
    STATE(182), 1,
      sym_function_call,
    STATE(407), 1,
      sym__alias_identifier,
    ACTIONS(334), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4888] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(80), 1,
      sym_comment,
    STATE(206), 1,
      sym_binary_expression,
    STATE(215), 1,
      sym__expression,
    STATE(383), 1,
      sym_function_call,
    STATE(407), 1,
      sym__alias_identifier,
    ACTIONS(342), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4961] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      sym_identifier,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(47), 1,
      sym__expression,
    STATE(81), 1,
      sym_comment,
    STATE(182), 1,
      sym_function_call,
    STATE(407), 1,
      sym__alias_identifier,
    ACTIONS(334), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5032] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(82), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 25,
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
      sym_keyword_let,
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
  [5071] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(83), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(192), 1,
      sym_binary_expression,
    STATE(365), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5148] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(84), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(359), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5223] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      sym_identifier,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(47), 1,
      sym__expression,
    STATE(85), 1,
      sym_comment,
    STATE(182), 1,
      sym_function_call,
    STATE(407), 1,
      sym__alias_identifier,
    ACTIONS(334), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5294] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(82), 1,
      sym_binary_expression,
    STATE(86), 1,
      sym_comment,
    STATE(109), 1,
      sym__expression,
    STATE(261), 1,
      sym_assignment,
    STATE(266), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5371] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(87), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(359), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5446] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(70), 1,
      sym__expression,
    STATE(88), 1,
      sym_comment,
    STATE(184), 1,
      sym_assignment,
    STATE(240), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5518] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(89), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(379), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5590] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(70), 1,
      sym__expression,
    STATE(90), 1,
      sym_comment,
    STATE(184), 1,
      sym_assignment,
    STATE(196), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5662] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(91), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(458), 1,
      sym_term,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5734] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(92), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(240), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5806] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(93), 1,
      sym_comment,
    STATE(109), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(196), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5878] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(94), 1,
      sym_comment,
    STATE(109), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(240), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5950] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(95), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(192), 1,
      sym_binary_expression,
    STATE(365), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6024] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(96), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(354), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [6076] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(97), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(359), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6148] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(98), 1,
      sym_comment,
    STATE(109), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(285), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6220] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(99), 1,
      sym_comment,
    STATE(194), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6288] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(100), 1,
      sym_comment,
    STATE(161), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(333), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6360] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(46), 1,
      sym_f_string,
    STATE(70), 1,
      sym__expression,
    STATE(101), 1,
      sym_comment,
    STATE(184), 1,
      sym_assignment,
    STATE(285), 1,
      sym_term,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6432] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(361), 1,
      anon_sym_DASH,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      anon_sym_SQUOTE,
    ACTIONS(370), 1,
      sym__natural_number,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      sym_identifier,
    STATE(162), 1,
      sym__double_quote_string,
    STATE(164), 1,
      sym__call_parameter,
    STATE(170), 1,
      sym__integer,
    STATE(172), 1,
      sym_literal,
    ACTIONS(271), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(102), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(163), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(358), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(273), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [6493] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(103), 1,
      sym_comment,
    STATE(199), 1,
      sym_binary_expression,
    STATE(222), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6562] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(104), 1,
      sym_comment,
    STATE(199), 1,
      sym_binary_expression,
    STATE(222), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6631] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      sym__natural_number,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(102), 1,
      aux_sym_function_call_repeat1,
    STATE(105), 1,
      sym_comment,
    STATE(162), 1,
      sym__double_quote_string,
    STATE(164), 1,
      sym__call_parameter,
    STATE(170), 1,
      sym__integer,
    STATE(172), 1,
      sym_literal,
    ACTIONS(263), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(163), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(55), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(265), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [6694] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(96), 1,
      sym__expression,
    STATE(106), 1,
      sym_comment,
    STATE(267), 1,
      sym__boolean_expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6761] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_DASH,
    ACTIONS(387), 1,
      anon_sym_f,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__natural_number,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_AT,
    STATE(107), 1,
      sym_comment,
    STATE(158), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(217), 1,
      sym__expression,
    STATE(323), 1,
      sym_range,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6828] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_DASH,
    ACTIONS(387), 1,
      anon_sym_f,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_AT,
    ACTIONS(397), 1,
      sym__natural_number,
    STATE(108), 1,
      sym_comment,
    STATE(193), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(217), 1,
      sym__expression,
    STATE(241), 1,
      sym_range,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6895] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(239), 1,
      sym_keyword_or,
    ACTIONS(399), 1,
      anon_sym_EQ,
    STATE(109), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(314), 10,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [6947] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_DASH,
    ACTIONS(387), 1,
      anon_sym_f,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__natural_number,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_AT,
    STATE(110), 1,
      sym_comment,
    STATE(193), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(216), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7011] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(111), 1,
      sym_comment,
    STATE(207), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7075] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(112), 1,
      sym_comment,
    STATE(214), 1,
      sym_binary_expression,
    STATE(223), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7141] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_DASH,
    ACTIONS(387), 1,
      anon_sym_f,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__natural_number,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_AT,
    STATE(113), 1,
      sym_comment,
    STATE(193), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(203), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7205] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(39), 1,
      sym__expression,
    STATE(114), 1,
      sym_comment,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7269] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym__expression,
    STATE(115), 1,
      sym_comment,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7333] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(116), 1,
      sym_comment,
    STATE(205), 1,
      sym_binary_expression,
    STATE(223), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7399] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_DASH,
    ACTIONS(387), 1,
      anon_sym_f,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__natural_number,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_AT,
    STATE(117), 1,
      sym_comment,
    STATE(193), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(219), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7463] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_DASH,
    ACTIONS(387), 1,
      anon_sym_f,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__natural_number,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_AT,
    STATE(118), 1,
      sym_comment,
    STATE(193), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(218), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7527] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(16), 1,
      sym__expression,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(119), 1,
      sym_comment,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7591] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(120), 1,
      sym_comment,
    STATE(177), 1,
      sym_binary_expression,
    STATE(222), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7657] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(121), 1,
      sym_comment,
    STATE(199), 1,
      sym_binary_expression,
    STATE(222), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7723] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(48), 1,
      sym__expression,
    STATE(122), 1,
      sym_comment,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7787] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(123), 1,
      sym_comment,
    STATE(206), 1,
      sym_binary_expression,
    STATE(220), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7853] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(124), 1,
      sym_comment,
    STATE(204), 1,
      sym_binary_expression,
    STATE(223), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7919] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_DASH,
    ACTIONS(387), 1,
      anon_sym_f,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__natural_number,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_AT,
    STATE(16), 1,
      sym__expression,
    STATE(125), 1,
      sym_comment,
    STATE(193), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7983] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_DASH,
    ACTIONS(387), 1,
      anon_sym_f,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__natural_number,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_AT,
    STATE(126), 1,
      sym_comment,
    STATE(193), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(210), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8047] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(36), 1,
      sym__expression,
    STATE(127), 1,
      sym_comment,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8111] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(128), 1,
      sym_comment,
    STATE(213), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8175] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(129), 1,
      sym_comment,
    STATE(208), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8239] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(130), 1,
      sym_comment,
    STATE(195), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8303] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(41), 1,
      sym__expression,
    STATE(131), 1,
      sym_comment,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8367] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(38), 1,
      sym__expression,
    STATE(132), 1,
      sym_comment,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8431] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(49), 1,
      sym__expression,
    STATE(133), 1,
      sym_comment,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8495] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_f,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(30), 1,
      sym__double_quote_string,
    STATE(37), 1,
      sym__expression,
    STATE(134), 1,
      sym_comment,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8559] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_DASH,
    ACTIONS(387), 1,
      anon_sym_f,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      sym__natural_number,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_AT,
    STATE(135), 1,
      sym_comment,
    STATE(193), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(211), 1,
      sym__expression,
    STATE(407), 1,
      sym__alias_identifier,
    STATE(34), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8623] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(405), 1,
      anon_sym_COLON,
    STATE(136), 1,
      sym_comment,
    ACTIONS(401), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(403), 15,
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
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_identifier,
  [8659] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(137), 1,
      sym_comment,
    ACTIONS(83), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(85), 15,
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
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_identifier,
  [8692] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_comment,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(75), 15,
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
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_identifier,
  [8725] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(139), 1,
      sym_comment,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(173), 15,
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
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_identifier,
  [8758] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym_comment,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(163), 15,
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
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_identifier,
  [8791] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(185), 15,
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
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_identifier,
  [8824] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(142), 1,
      sym_comment,
    ACTIONS(407), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(409), 15,
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
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_identifier,
  [8857] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(413), 1,
      sym_keyword_filter,
    ACTIONS(415), 1,
      sym_keyword_derive,
    ACTIONS(417), 1,
      sym_keyword_group,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(421), 1,
      sym_keyword_sort,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(425), 1,
      sym_keyword_join,
    ACTIONS(427), 1,
      sym_keyword_select,
    STATE(143), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym_transforms_repeat1,
    STATE(316), 1,
      sym_transforms,
    ACTIONS(411), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(256), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [8910] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym_comment,
    ACTIONS(401), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(403), 15,
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
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_identifier,
  [8943] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(145), 1,
      sym_comment,
    ACTIONS(429), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(431), 15,
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
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_identifier,
  [8976] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(146), 1,
      sym_comment,
    ACTIONS(433), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(435), 15,
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
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_identifier,
  [9009] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(147), 1,
      sym_comment,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(169), 15,
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
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_identifier,
  [9042] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(148), 1,
      sym_comment,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(71), 15,
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
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_identifier,
  [9075] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(149), 1,
      sym_comment,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(163), 15,
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
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_identifier,
  [9108] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 18,
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
  [9140] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(413), 1,
      sym_keyword_filter,
    ACTIONS(415), 1,
      sym_keyword_derive,
    ACTIONS(417), 1,
      sym_keyword_group,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(421), 1,
      sym_keyword_sort,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(425), 1,
      sym_keyword_join,
    ACTIONS(427), 1,
      sym_keyword_select,
    STATE(151), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(437), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(256), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [9190] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(152), 1,
      sym_comment,
    ACTIONS(71), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 18,
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
  [9222] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 1,
      anon_sym_DASH,
    ACTIONS(445), 1,
      anon_sym_DQUOTE,
    ACTIONS(448), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      sym__natural_number,
    ACTIONS(454), 1,
      anon_sym_DOT,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(226), 1,
      sym_literal,
    STATE(231), 1,
      sym__integer,
    STATE(232), 1,
      sym__double_quote_string,
    STATE(239), 1,
      sym__call_parameter,
    STATE(153), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(233), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(439), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(273), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [9278] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(462), 1,
      sym_keyword_filter,
    ACTIONS(465), 1,
      sym_keyword_derive,
    ACTIONS(468), 1,
      sym_keyword_group,
    ACTIONS(471), 1,
      sym_keyword_aggregate,
    ACTIONS(474), 1,
      sym_keyword_sort,
    ACTIONS(477), 1,
      sym_keyword_take,
    ACTIONS(480), 1,
      sym_keyword_join,
    ACTIONS(483), 1,
      sym_keyword_select,
    STATE(154), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(460), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(256), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [9326] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      anon_sym_DASH,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym__natural_number,
    ACTIONS(219), 1,
      anon_sym_DOT,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_function_call_repeat1,
    STATE(155), 1,
      sym_comment,
    STATE(226), 1,
      sym_literal,
    STATE(231), 1,
      sym__integer,
    STATE(232), 1,
      sym__double_quote_string,
    STATE(239), 1,
      sym__call_parameter,
    STATE(233), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(209), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(265), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [9384] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(489), 1,
      anon_sym_DASH,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      sym__natural_number,
    ACTIONS(501), 1,
      anon_sym_DOT,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(249), 1,
      sym_literal,
    STATE(250), 1,
      sym__call_parameter,
    STATE(282), 1,
      sym__double_quote_string,
    STATE(294), 1,
      sym__integer,
    STATE(156), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(287), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(486), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(271), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9437] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      anon_sym_DASH,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(231), 1,
      sym__natural_number,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      sym_identifier,
    STATE(156), 1,
      aux_sym_function_call_repeat1,
    STATE(157), 1,
      sym_comment,
    STATE(249), 1,
      sym_literal,
    STATE(250), 1,
      sym__call_parameter,
    STATE(282), 1,
      sym__double_quote_string,
    STATE(294), 1,
      sym__integer,
    STATE(287), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(223), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(263), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9492] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_DOT,
    STATE(158), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(507), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(161), 13,
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
  [9527] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(511), 1,
      anon_sym_COLON,
    STATE(159), 1,
      sym_comment,
    ACTIONS(401), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(403), 12,
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
      sym_keyword_null,
      sym_identifier,
  [9560] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(239), 1,
      sym_keyword_or,
    ACTIONS(513), 1,
      anon_sym_EQ,
    STATE(160), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(314), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [9607] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(239), 1,
      sym_keyword_or,
    ACTIONS(515), 1,
      anon_sym_EQ,
    STATE(161), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(314), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9653] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(162), 1,
      sym_comment,
    ACTIONS(407), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(409), 12,
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
      sym_keyword_null,
      sym_identifier,
  [9683] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(161), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(163), 12,
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
      sym_keyword_null,
      sym_identifier,
  [9713] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_comment,
    ACTIONS(429), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(431), 12,
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
      sym_keyword_null,
      sym_identifier,
  [9743] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(167), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(169), 12,
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
      sym_keyword_null,
      sym_identifier,
  [9773] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(73), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(75), 12,
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
      sym_keyword_null,
      sym_identifier,
  [9803] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      sym_keyword_filter,
    ACTIONS(417), 1,
      sym_keyword_group,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(517), 1,
      sym_keyword_derive,
    ACTIONS(519), 1,
      sym_keyword_sort,
    ACTIONS(521), 1,
      sym_keyword_join,
    ACTIONS(523), 1,
      sym_keyword_select,
    STATE(167), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_transforms_repeat1,
    STATE(316), 1,
      sym_transforms,
    STATE(256), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [9853] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    ACTIONS(69), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(71), 12,
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
      sym_keyword_null,
      sym_identifier,
  [9883] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(171), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(173), 12,
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
      sym_keyword_null,
      sym_identifier,
  [9913] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(170), 1,
      sym_comment,
    ACTIONS(161), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(163), 12,
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
      sym_keyword_null,
      sym_identifier,
  [9943] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(171), 1,
      sym_comment,
    ACTIONS(83), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(85), 12,
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
      sym_keyword_null,
      sym_identifier,
  [9973] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(172), 1,
      sym_comment,
    ACTIONS(401), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(403), 12,
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
      sym_keyword_null,
      sym_identifier,
  [10003] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment,
    ACTIONS(183), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(185), 12,
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
      sym_keyword_null,
      sym_identifier,
  [10033] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(174), 1,
      sym_comment,
    ACTIONS(433), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(435), 12,
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
      sym_keyword_null,
      sym_identifier,
  [10063] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      sym_comment,
    STATE(332), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 12,
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
  [10098] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(529), 1,
      anon_sym_COLON,
    ACTIONS(531), 1,
      anon_sym_DOT,
    STATE(176), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 14,
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
  [10131] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(177), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(533), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    ACTIONS(149), 12,
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
  [10162] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      anon_sym_COLON,
    ACTIONS(537), 1,
      anon_sym_DOT,
    STATE(178), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(39), 14,
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
  [10195] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(179), 1,
      sym_comment,
    ACTIONS(539), 18,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10222] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(462), 1,
      sym_keyword_filter,
    ACTIONS(468), 1,
      sym_keyword_group,
    ACTIONS(471), 1,
      sym_keyword_aggregate,
    ACTIONS(477), 1,
      sym_keyword_take,
    ACTIONS(541), 1,
      sym_keyword_derive,
    ACTIONS(544), 1,
      sym_keyword_sort,
    ACTIONS(547), 1,
      sym_keyword_join,
    ACTIONS(550), 1,
      sym_keyword_select,
    STATE(180), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(256), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10267] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(413), 1,
      sym_keyword_filter,
    ACTIONS(417), 1,
      sym_keyword_group,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    ACTIONS(517), 1,
      sym_keyword_derive,
    ACTIONS(519), 1,
      sym_keyword_sort,
    ACTIONS(521), 1,
      sym_keyword_join,
    ACTIONS(523), 1,
      sym_keyword_select,
    STATE(180), 1,
      aux_sym_transforms_repeat1,
    STATE(181), 1,
      sym_comment,
    STATE(256), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10314] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(182), 1,
      sym_comment,
    ACTIONS(553), 18,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10341] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(183), 1,
      sym_comment,
    STATE(338), 1,
      aux_sym_derives_repeat1,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 14,
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
  [10372] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(184), 1,
      sym_comment,
    ACTIONS(314), 18,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10399] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(185), 1,
      sym_comment,
    STATE(334), 1,
      aux_sym_derives_repeat1,
    ACTIONS(189), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 14,
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
  [10430] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(186), 1,
      sym_comment,
    ACTIONS(555), 18,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10457] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(187), 1,
      sym_comment,
    ACTIONS(557), 18,
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
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10484] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(559), 1,
      anon_sym_DOT,
    STATE(188), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 14,
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
  [10514] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(189), 1,
      sym_comment,
    ACTIONS(561), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 12,
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
  [10544] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(190), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 14,
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
  [10572] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      sym_comment,
    STATE(336), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 12,
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
  [10606] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(192), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 14,
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
  [10634] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_DOT,
    STATE(193), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 13,
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
  [10663] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(194), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(567), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [10704] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(195), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(569), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [10745] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      anon_sym_LBRACK,
    STATE(196), 1,
      sym_comment,
    STATE(252), 1,
      sym_conditions,
    STATE(277), 1,
      sym__self_join,
    ACTIONS(571), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [10776] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      anon_sym_LBRACK,
    STATE(197), 1,
      sym_comment,
    STATE(255), 1,
      sym_conditions,
    STATE(277), 1,
      sym__self_join,
    ACTIONS(575), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [10807] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(198), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(171), 13,
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
  [10834] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(199), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(577), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(149), 12,
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
  [10863] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(579), 1,
      anon_sym_T,
    STATE(200), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(175), 13,
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
  [10892] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      anon_sym_DOT,
    STATE(201), 1,
      sym_comment,
    ACTIONS(15), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(13), 13,
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
  [10921] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(583), 1,
      anon_sym_DOT,
    STATE(202), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 13,
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
  [10950] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    STATE(203), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(587), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(125), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [10982] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 12,
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
  [11010] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 12,
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
  [11038] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(206), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 13,
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
  [11064] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    STATE(207), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11100] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    STATE(208), 1,
      sym_comment,
    ACTIONS(125), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11138] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(239), 1,
      sym_keyword_or,
    ACTIONS(515), 1,
      anon_sym_EQ,
    STATE(209), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11178] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    ACTIONS(599), 1,
      anon_sym_QMARK_QMARK,
    STATE(210), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(587), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(597), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(595), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11214] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    ACTIONS(599), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(601), 1,
      sym_keyword_and,
    STATE(211), 1,
      sym_comment,
    ACTIONS(125), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(587), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(597), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(595), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11252] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(603), 1,
      anon_sym_COLON,
    STATE(212), 1,
      sym_comment,
    ACTIONS(401), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(403), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [11280] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(239), 1,
      sym_keyword_or,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11320] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 12,
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
  [11348] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(609), 1,
      sym_keyword_and,
    ACTIONS(611), 1,
      sym_keyword_or,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11388] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(216), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(125), 11,
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
  [11416] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    ACTIONS(599), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(601), 1,
      sym_keyword_and,
    ACTIONS(615), 1,
      sym_keyword_or,
    ACTIONS(617), 1,
      anon_sym_DOT_DOT,
    STATE(217), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(587), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(597), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(595), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11456] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(218), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(587), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(125), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [11486] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      anon_sym_PIPE,
    STATE(219), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(587), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(597), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(595), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11520] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(609), 1,
      sym_keyword_and,
    ACTIONS(611), 1,
      sym_keyword_or,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11560] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(221), 1,
      sym_comment,
    ACTIONS(621), 14,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [11583] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      sym_keyword_and,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(222), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11620] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(609), 1,
      sym_keyword_and,
    ACTIONS(611), 1,
      sym_keyword_or,
    STATE(223), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(195), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(203), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11657] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(224), 1,
      sym_comment,
    ACTIONS(433), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(435), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [11682] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(225), 1,
      sym_comment,
    ACTIONS(623), 14,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [11705] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(226), 1,
      sym_comment,
    ACTIONS(401), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(403), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [11730] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(227), 1,
      sym_comment,
    ACTIONS(625), 14,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [11753] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(228), 1,
      sym_comment,
    ACTIONS(627), 14,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [11776] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(229), 1,
      sym_comment,
    ACTIONS(171), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(173), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [11801] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(230), 1,
      sym_comment,
    ACTIONS(83), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(85), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [11826] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(231), 1,
      sym_comment,
    ACTIONS(161), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(163), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [11851] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(232), 1,
      sym_comment,
    ACTIONS(407), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(409), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [11876] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym_comment,
    ACTIONS(161), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(163), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [11901] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(234), 1,
      sym_comment,
    ACTIONS(629), 14,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [11924] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(235), 1,
      sym_comment,
    ACTIONS(631), 14,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [11947] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(236), 1,
      sym_comment,
    ACTIONS(73), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(75), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [11972] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(237), 1,
      sym_comment,
    ACTIONS(633), 14,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [11995] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(238), 1,
      sym_comment,
    ACTIONS(69), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(71), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [12020] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(239), 1,
      sym_comment,
    ACTIONS(429), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(431), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [12045] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(240), 1,
      sym_comment,
    ACTIONS(635), 14,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12068] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(241), 1,
      sym_comment,
    ACTIONS(637), 14,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12091] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(242), 1,
      sym_comment,
    ACTIONS(639), 14,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12114] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(243), 1,
      sym_comment,
    ACTIONS(641), 14,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12137] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(244), 1,
      sym_comment,
    ACTIONS(167), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(169), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [12162] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(643), 1,
      anon_sym_COLON,
    STATE(245), 1,
      sym_comment,
    ACTIONS(403), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(401), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12189] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(246), 1,
      sym_comment,
    ACTIONS(183), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(185), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [12214] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(247), 1,
      sym_comment,
    ACTIONS(169), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(167), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12238] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(248), 1,
      sym_comment,
    ACTIONS(435), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(433), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12262] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(249), 1,
      sym_comment,
    ACTIONS(403), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(401), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12286] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(250), 1,
      sym_comment,
    ACTIONS(431), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(429), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12310] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(251), 1,
      sym_comment,
    ACTIONS(645), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12332] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(252), 1,
      sym_comment,
    ACTIONS(647), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12354] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym_comment,
    ACTIONS(649), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12376] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(254), 1,
      sym_comment,
    ACTIONS(651), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12398] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(255), 1,
      sym_comment,
    ACTIONS(571), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12420] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(256), 1,
      sym_comment,
    ACTIONS(653), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12442] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(257), 1,
      sym_comment,
    ACTIONS(75), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(73), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12466] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(258), 1,
      sym_comment,
    ACTIONS(655), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12488] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(259), 1,
      sym_comment,
    ACTIONS(185), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(183), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12512] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(260), 1,
      sym_comment,
    ACTIONS(71), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(69), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12536] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(261), 1,
      sym_comment,
    ACTIONS(314), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12558] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      sym__natural_number,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(140), 1,
      sym__integer,
    STATE(142), 1,
      sym__double_quote_string,
    STATE(146), 1,
      sym_literal,
    STATE(262), 1,
      sym_comment,
    STATE(149), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(657), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [12598] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(263), 1,
      sym_comment,
    ACTIONS(659), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12620] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(264), 1,
      sym_comment,
    ACTIONS(661), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12642] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(265), 1,
      sym_comment,
    ACTIONS(663), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12664] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(266), 1,
      sym_comment,
    ACTIONS(665), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12686] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(267), 1,
      sym_comment,
    ACTIONS(667), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12708] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(268), 1,
      sym_comment,
    ACTIONS(669), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12730] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(269), 1,
      sym_comment,
    ACTIONS(671), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12752] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(270), 1,
      sym_comment,
    ACTIONS(673), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12774] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(271), 1,
      sym_comment,
    ACTIONS(675), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12796] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(272), 1,
      sym_comment,
    ACTIONS(677), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12818] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(273), 1,
      sym_comment,
    ACTIONS(679), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12840] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(274), 1,
      sym_comment,
    ACTIONS(681), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12862] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(275), 1,
      sym_comment,
    ACTIONS(173), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(171), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12886] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym_comment,
    ACTIONS(683), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12908] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(277), 1,
      sym_comment,
    ACTIONS(685), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12930] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(278), 1,
      sym_comment,
    ACTIONS(687), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12952] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(279), 1,
      sym_comment,
    ACTIONS(689), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12974] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(280), 1,
      sym_comment,
    ACTIONS(691), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [12996] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(281), 1,
      sym_comment,
    ACTIONS(693), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [13018] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(282), 1,
      sym_comment,
    ACTIONS(409), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(407), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [13042] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(283), 1,
      sym_comment,
    ACTIONS(695), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [13064] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(284), 1,
      sym_comment,
    ACTIONS(85), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(83), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [13088] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(285), 1,
      sym_comment,
    ACTIONS(697), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [13110] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      anon_sym_DASH,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(231), 1,
      sym__natural_number,
    ACTIONS(233), 1,
      anon_sym_DOT,
    STATE(248), 1,
      sym_literal,
    STATE(282), 1,
      sym__double_quote_string,
    STATE(286), 1,
      sym_comment,
    STATE(294), 1,
      sym__integer,
    STATE(287), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(699), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [13150] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(287), 1,
      sym_comment,
    ACTIONS(163), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(161), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [13174] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(288), 1,
      sym_comment,
    ACTIONS(701), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [13196] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(705), 1,
      anon_sym_DASH,
    ACTIONS(707), 1,
      anon_sym_DQUOTE,
    ACTIONS(709), 1,
      anon_sym_SQUOTE,
    ACTIONS(711), 1,
      sym__natural_number,
    ACTIONS(713), 1,
      anon_sym_DOT,
    STATE(289), 1,
      sym_comment,
    STATE(354), 1,
      sym__integer,
    STATE(375), 1,
      sym__double_quote_string,
    STATE(376), 1,
      sym_literal,
    STATE(373), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(703), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [13236] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      sym__natural_number,
    ACTIONS(65), 1,
      anon_sym_DOT,
    STATE(162), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__integer,
    STATE(174), 1,
      sym_literal,
    STATE(290), 1,
      sym_comment,
    STATE(163), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(715), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [13276] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(291), 1,
      sym_comment,
    ACTIONS(717), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [13298] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      anon_sym_DASH,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    ACTIONS(217), 1,
      sym__natural_number,
    ACTIONS(219), 1,
      anon_sym_DOT,
    STATE(224), 1,
      sym_literal,
    STATE(231), 1,
      sym__integer,
    STATE(232), 1,
      sym__double_quote_string,
    STATE(292), 1,
      sym_comment,
    STATE(233), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(719), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [13338] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(293), 1,
      sym_comment,
    ACTIONS(721), 13,
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
      sym_keyword_let,
      anon_sym_RPAREN,
  [13360] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(294), 1,
      sym_comment,
    ACTIONS(163), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(161), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [13384] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(295), 1,
      sym_comment,
    ACTIONS(723), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f,
      sym_identifier,
    ACTIONS(725), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [13407] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(296), 1,
      sym_comment,
    ACTIONS(727), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f,
      sym_identifier,
    ACTIONS(729), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [13430] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(297), 1,
      sym_comment,
    ACTIONS(727), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f,
      sym_identifier,
    ACTIONS(729), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [13453] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      sym_comment,
    STATE(300), 1,
      aux_sym_group_repeat2,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13484] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym_comment,
    STATE(300), 1,
      aux_sym_group_repeat2,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13515] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(739), 1,
      sym_keyword_aggregate,
    ACTIONS(742), 1,
      sym_keyword_sort,
    ACTIONS(745), 1,
      sym_keyword_take,
    ACTIONS(748), 1,
      sym_keyword_window,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(300), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13544] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_group_repeat2,
    STATE(301), 1,
      sym_comment,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13575] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_group_repeat2,
    STATE(302), 1,
      sym_comment,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13606] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      aux_sym_group_repeat2,
    STATE(303), 1,
      sym_comment,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13637] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    STATE(303), 1,
      aux_sym_group_repeat2,
    STATE(304), 1,
      sym_comment,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13665] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    STATE(301), 1,
      aux_sym_group_repeat2,
    STATE(305), 1,
      sym_comment,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13693] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(9), 1,
      sym_keyword_func,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(759), 1,
      ts_builtin_sym_end,
    STATE(143), 1,
      sym_from,
    STATE(306), 1,
      sym_comment,
    STATE(309), 1,
      aux_sym_program_repeat1,
    STATE(317), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [13723] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    STATE(298), 1,
      aux_sym_group_repeat2,
    STATE(307), 1,
      sym_comment,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13751] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    STATE(299), 1,
      aux_sym_group_repeat2,
    STATE(308), 1,
      sym_comment,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13779] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(761), 1,
      ts_builtin_sym_end,
    ACTIONS(763), 1,
      sym_keyword_from,
    ACTIONS(766), 1,
      sym_keyword_func,
    ACTIONS(769), 1,
      sym_keyword_let,
    STATE(143), 1,
      sym_from,
    STATE(309), 2,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(317), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [13807] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      sym_keyword_aggregate,
    ACTIONS(423), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    STATE(302), 1,
      aux_sym_group_repeat2,
    STATE(310), 1,
      sym_comment,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13835] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(311), 1,
      sym_comment,
    STATE(313), 1,
      aux_sym_window_definitions_repeat1,
    STATE(321), 1,
      sym__window_definition,
    STATE(426), 1,
      sym_window_definitions,
    ACTIONS(772), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [13856] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym__window_definition,
    STATE(312), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(774), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [13875] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(779), 1,
      anon_sym_LPAREN,
    STATE(312), 1,
      aux_sym_window_definitions_repeat1,
    STATE(313), 1,
      sym_comment,
    STATE(321), 1,
      sym__window_definition,
    ACTIONS(772), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [13896] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(314), 1,
      sym_comment,
    ACTIONS(781), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [13910] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(315), 1,
      sym_comment,
    ACTIONS(783), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [13924] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(316), 1,
      sym_comment,
    ACTIONS(785), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      anon_sym_RPAREN,
  [13938] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(317), 1,
      sym_comment,
    ACTIONS(787), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [13951] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(318), 1,
      sym_comment,
    ACTIONS(789), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [13964] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(791), 1,
      anon_sym_DASH_GT,
    ACTIONS(793), 1,
      sym_identifier,
    STATE(381), 1,
      sym_parameter,
    STATE(319), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [13981] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(796), 1,
      anon_sym_DASH_GT,
    ACTIONS(798), 1,
      sym_identifier,
    STATE(319), 1,
      aux_sym_function_definition_repeat1,
    STATE(320), 1,
      sym_comment,
    STATE(381), 1,
      sym_parameter,
  [14000] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(321), 1,
      sym_comment,
    ACTIONS(800), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [14013] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(802), 1,
      aux_sym__date_token1,
    ACTIONS(804), 1,
      aux_sym__time_token1,
    STATE(24), 1,
      sym__time,
    STATE(200), 1,
      sym__date,
    STATE(322), 1,
      sym_comment,
  [14032] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(323), 1,
      sym_comment,
    ACTIONS(806), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [14045] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(802), 1,
      aux_sym__date_token1,
    ACTIONS(808), 1,
      aux_sym__time_token1,
    STATE(24), 1,
      sym__time,
    STATE(29), 1,
      sym__date,
    STATE(324), 1,
      sym_comment,
  [14064] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(325), 1,
      sym_comment,
    ACTIONS(810), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [14077] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(812), 1,
      sym_keyword_from,
    STATE(167), 1,
      sym_from,
    STATE(326), 1,
      sym_comment,
    STATE(392), 1,
      sym_pipeline,
  [14093] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      sym_comment,
    STATE(356), 1,
      aux_sym_group_repeat1,
  [14109] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_RBRACK,
    STATE(328), 1,
      sym_comment,
    STATE(338), 1,
      aux_sym_derives_repeat1,
  [14125] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(820), 1,
      anon_sym_DASH,
    STATE(10), 1,
      sym__integer,
    STATE(329), 1,
      sym_comment,
  [14141] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    ACTIONS(824), 1,
      anon_sym_RBRACK,
    STATE(330), 1,
      sym_comment,
    STATE(335), 1,
      aux_sym_sorts_repeat1,
  [14157] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      sym__natural_number,
    ACTIONS(826), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym__integer,
    STATE(331), 1,
      sym_comment,
  [14173] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      sym_comment,
    STATE(345), 1,
      aux_sym_aggregate_repeat1,
  [14189] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      sym_comment,
    STATE(343), 1,
      aux_sym_sorts_repeat1,
  [14205] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    ACTIONS(834), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      sym_comment,
    STATE(341), 1,
      aux_sym_derives_repeat1,
  [14221] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    ACTIONS(830), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      sym_comment,
    STATE(339), 1,
      aux_sym_sorts_repeat1,
  [14237] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    STATE(336), 1,
      sym_comment,
    STATE(348), 1,
      aux_sym_conditions_repeat1,
  [14253] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    STATE(327), 1,
      aux_sym_group_repeat1,
    STATE(337), 1,
      sym_comment,
  [14269] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      sym_comment,
    STATE(341), 1,
      aux_sym_derives_repeat1,
  [14285] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    STATE(339), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [14299] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      sym_comment,
    STATE(356), 1,
      aux_sym_group_repeat1,
  [14315] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    ACTIONS(854), 1,
      anon_sym_RBRACK,
    STATE(341), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [14329] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      anon_sym_COLON,
    STATE(342), 1,
      sym_comment,
    ACTIONS(856), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14343] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    ACTIONS(860), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_sorts_repeat1,
    STATE(343), 1,
      sym_comment,
  [14359] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      sym__natural_number,
    ACTIONS(826), 1,
      anon_sym_DASH,
    STATE(12), 1,
      sym__integer,
    STATE(344), 1,
      sym_comment,
  [14375] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      anon_sym_RBRACK,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    STATE(345), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [14389] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(820), 1,
      anon_sym_DASH,
    STATE(12), 1,
      sym__integer,
    STATE(346), 1,
      sym_comment,
  [14405] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      sym__natural_number,
    ACTIONS(826), 1,
      anon_sym_DASH,
    STATE(10), 1,
      sym__integer,
    STATE(347), 1,
      sym_comment,
  [14421] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(577), 1,
      anon_sym_RBRACK,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    STATE(348), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [14435] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(349), 1,
      sym_comment,
    ACTIONS(69), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [14447] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(820), 1,
      anon_sym_DASH,
    STATE(8), 1,
      sym__integer,
    STATE(350), 1,
      sym_comment,
  [14463] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
    STATE(332), 1,
      aux_sym_aggregate_repeat1,
    STATE(351), 1,
      sym_comment,
  [14479] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(868), 1,
      sym__natural_number,
    STATE(352), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14493] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(353), 1,
      sym_comment,
    ACTIONS(83), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [14505] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(870), 1,
      anon_sym_DOT,
    STATE(354), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14519] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(874), 1,
      anon_sym_RBRACK,
    STATE(340), 1,
      aux_sym_group_repeat1,
    STATE(355), 1,
      sym_comment,
  [14535] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(879), 1,
      anon_sym_RBRACK,
    STATE(356), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [14549] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_identifier,
    STATE(320), 1,
      aux_sym_function_definition_repeat1,
    STATE(357), 1,
      sym_comment,
    STATE(381), 1,
      sym_parameter,
  [14565] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(358), 1,
      sym_comment,
  [14578] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(359), 1,
      sym_comment,
    ACTIONS(879), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14589] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(881), 1,
      sym__natural_number,
    ACTIONS(883), 1,
      anon_sym_DOT,
    STATE(360), 1,
      sym_comment,
  [14602] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(885), 1,
      sym__natural_number,
    ACTIONS(887), 1,
      anon_sym_DOT,
    STATE(361), 1,
      sym_comment,
  [14615] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(889), 1,
      sym__natural_number,
    ACTIONS(891), 1,
      anon_sym_DOT,
    STATE(362), 1,
      sym_comment,
  [14628] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(363), 1,
      sym_comment,
  [14641] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(364), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14652] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(365), 1,
      sym_comment,
    ACTIONS(854), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14663] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      sym__natural_number,
    ACTIONS(895), 1,
      anon_sym_DOT,
    STATE(366), 1,
      sym_comment,
  [14676] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(367), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14687] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(368), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14698] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(897), 1,
      sym__natural_number,
    ACTIONS(899), 1,
      anon_sym_DOT,
    STATE(369), 1,
      sym_comment,
  [14711] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(370), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14722] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(901), 1,
      aux_sym__time_token1,
    STATE(3), 1,
      sym__time,
    STATE(371), 1,
      sym_comment,
  [14735] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(903), 1,
      sym__natural_number,
    ACTIONS(905), 1,
      anon_sym_DOT,
    STATE(372), 1,
      sym_comment,
  [14748] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(373), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14759] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(374), 1,
      sym_comment,
    ACTIONS(561), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14770] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(375), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14781] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(376), 1,
      sym_comment,
    ACTIONS(907), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14792] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(377), 1,
      sym_comment,
    ACTIONS(847), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14803] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(899), 1,
      anon_sym_DOT,
    ACTIONS(909), 1,
      sym__natural_number,
    STATE(378), 1,
      sym_comment,
  [14816] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(379), 1,
      sym_comment,
    ACTIONS(911), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14827] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(913), 1,
      sym_keyword_derive,
    STATE(380), 1,
      sym_comment,
    STATE(412), 1,
      sym_derives,
  [14840] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(381), 1,
      sym_comment,
    ACTIONS(915), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14851] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(917), 1,
      aux_sym__time_token1,
    STATE(3), 1,
      sym__time,
    STATE(382), 1,
      sym_comment,
  [14864] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      sym_comment,
  [14874] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(921), 1,
      sym__natural_number,
    STATE(384), 1,
      sym_comment,
  [14884] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      aux_sym__date_token2,
    STATE(385), 1,
      sym_comment,
  [14894] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(386), 1,
      sym_comment,
  [14904] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      anon_sym_SQUOTE,
    STATE(387), 1,
      sym_comment,
  [14914] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(927), 1,
      anon_sym_DASH,
    STATE(388), 1,
      sym_comment,
  [14924] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(818), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      sym_comment,
  [14934] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      sym__natural_number,
    STATE(390), 1,
      sym_comment,
  [14944] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(929), 1,
      anon_sym_LPAREN,
    STATE(391), 1,
      sym_comment,
  [14954] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      sym_comment,
  [14964] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(729), 1,
      aux_sym__date_token2,
    STATE(393), 1,
      sym_comment,
  [14974] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      sym_comment,
  [14984] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(933), 1,
      anon_sym_LBRACK,
    STATE(395), 1,
      sym_comment,
  [14994] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(935), 1,
      aux_sym__date_token2,
    STATE(396), 1,
      sym_comment,
  [15004] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(937), 1,
      sym__natural_number,
    STATE(397), 1,
      sym_comment,
  [15014] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    STATE(398), 1,
      sym_comment,
  [15024] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(941), 1,
      sym__natural_number,
    STATE(399), 1,
      sym_comment,
  [15034] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(943), 1,
      anon_sym_DQUOTE,
    STATE(400), 1,
      sym_comment,
  [15044] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(945), 1,
      anon_sym_SQUOTE,
    STATE(401), 1,
      sym_comment,
  [15054] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(947), 1,
      aux_sym__date_token2,
    STATE(402), 1,
      sym_comment,
  [15064] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      sym__natural_number,
    STATE(403), 1,
      sym_comment,
  [15074] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(949), 1,
      aux_sym__date_token2,
    STATE(404), 1,
      sym_comment,
  [15084] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(951), 1,
      aux_sym__date_token2,
    STATE(405), 1,
      sym_comment,
  [15094] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
    STATE(406), 1,
      sym_comment,
  [15104] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(953), 1,
      anon_sym_DOT,
    STATE(407), 1,
      sym_comment,
  [15114] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(955), 1,
      sym__natural_number,
    STATE(408), 1,
      sym_comment,
  [15124] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(868), 1,
      sym__natural_number,
    STATE(409), 1,
      sym_comment,
  [15134] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(957), 1,
      anon_sym_DQUOTE,
    STATE(410), 1,
      sym_comment,
  [15144] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(959), 1,
      anon_sym_SQUOTE,
    STATE(411), 1,
      sym_comment,
  [15154] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    STATE(412), 1,
      sym_comment,
  [15164] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(963), 1,
      anon_sym_DASH,
    STATE(413), 1,
      sym_comment,
  [15174] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(965), 1,
      aux_sym__date_token2,
    STATE(414), 1,
      sym_comment,
  [15184] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(967), 1,
      sym__natural_number,
    STATE(415), 1,
      sym_comment,
  [15194] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(969), 1,
      sym__natural_number,
    STATE(416), 1,
      sym_comment,
  [15204] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(971), 1,
      anon_sym_DQUOTE,
    STATE(417), 1,
      sym_comment,
  [15214] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(973), 1,
      anon_sym_SQUOTE,
    STATE(418), 1,
      sym_comment,
  [15224] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(975), 1,
      sym__natural_number,
    STATE(419), 1,
      sym_comment,
  [15234] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(420), 1,
      sym_comment,
  [15244] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(979), 1,
      anon_sym_COLON,
    STATE(421), 1,
      sym_comment,
  [15254] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(981), 1,
      aux_sym__date_token2,
    STATE(422), 1,
      sym_comment,
  [15264] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      sym__natural_number,
    STATE(423), 1,
      sym_comment,
  [15274] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(985), 1,
      anon_sym_DQUOTE,
    STATE(424), 1,
      sym_comment,
  [15284] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(987), 1,
      anon_sym_SQUOTE,
    STATE(425), 1,
      sym_comment,
  [15294] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(989), 1,
      anon_sym_LPAREN,
    STATE(426), 1,
      sym_comment,
  [15304] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(991), 1,
      sym__natural_number,
    STATE(427), 1,
      sym_comment,
  [15314] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(993), 1,
      sym__natural_number,
    STATE(428), 1,
      sym_comment,
  [15324] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(995), 1,
      anon_sym_DQUOTE,
    STATE(429), 1,
      sym_comment,
  [15334] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(997), 1,
      anon_sym_SQUOTE,
    STATE(430), 1,
      sym_comment,
  [15344] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(999), 1,
      anon_sym_EQ,
    STATE(431), 1,
      sym_comment,
  [15354] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    STATE(432), 1,
      sym_comment,
  [15364] = 3,
    ACTIONS(1003), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    STATE(433), 1,
      sym_comment,
  [15374] = 3,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    ACTIONS(1007), 1,
      aux_sym__literal_string_token1,
    STATE(434), 1,
      sym_comment,
  [15384] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(874), 1,
      anon_sym_RBRACK,
    STATE(435), 1,
      sym_comment,
  [15394] = 3,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    ACTIONS(1009), 1,
      aux_sym__literal_string_token1,
    STATE(436), 1,
      sym_comment,
  [15404] = 3,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    ACTIONS(1011), 1,
      aux_sym__double_quote_string_token1,
    STATE(437), 1,
      sym_comment,
  [15414] = 3,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    ACTIONS(1013), 1,
      aux_sym_comment_token1,
    STATE(438), 1,
      sym_comment,
  [15424] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1015), 1,
      anon_sym_COLON,
    STATE(439), 1,
      sym_comment,
  [15434] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(897), 1,
      sym__natural_number,
    STATE(440), 1,
      sym_comment,
  [15444] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      sym_identifier,
    STATE(441), 1,
      sym_comment,
  [15454] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
    STATE(442), 1,
      sym_comment,
  [15464] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      anon_sym_RBRACK,
    STATE(443), 1,
      sym_comment,
  [15474] = 3,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    ACTIONS(1021), 1,
      aux_sym__double_quote_string_token1,
    STATE(444), 1,
      sym_comment,
  [15484] = 3,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    ACTIONS(1023), 1,
      aux_sym__literal_string_token1,
    STATE(445), 1,
      sym_comment,
  [15494] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1025), 1,
      anon_sym_LPAREN,
    STATE(446), 1,
      sym_comment,
  [15504] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    STATE(447), 1,
      sym_comment,
  [15514] = 3,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    ACTIONS(1029), 1,
      aux_sym__double_quote_string_token1,
    STATE(448), 1,
      sym_comment,
  [15524] = 3,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    ACTIONS(1031), 1,
      aux_sym__literal_string_token1,
    STATE(449), 1,
      sym_comment,
  [15534] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1033), 1,
      anon_sym_LPAREN,
    STATE(450), 1,
      sym_comment,
  [15544] = 3,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    ACTIONS(1035), 1,
      aux_sym__double_quote_string_token1,
    STATE(451), 1,
      sym_comment,
  [15554] = 3,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    ACTIONS(1037), 1,
      aux_sym__literal_string_token1,
    STATE(452), 1,
      sym_comment,
  [15564] = 3,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    ACTIONS(1039), 1,
      aux_sym__double_quote_string_token1,
    STATE(453), 1,
      sym_comment,
  [15574] = 3,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    ACTIONS(1041), 1,
      aux_sym__literal_string_token1,
    STATE(454), 1,
      sym_comment,
  [15584] = 3,
    ACTIONS(1005), 1,
      anon_sym_POUND,
    ACTIONS(1043), 1,
      aux_sym__double_quote_string_token1,
    STATE(455), 1,
      sym_comment,
  [15594] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1045), 1,
      ts_builtin_sym_end,
    STATE(456), 1,
      sym_comment,
  [15604] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1047), 1,
      sym_identifier,
    STATE(457), 1,
      sym_comment,
  [15614] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1049), 1,
      anon_sym_RBRACK,
    STATE(458), 1,
      sym_comment,
  [15624] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1051), 1,
      sym_identifier,
    STATE(459), 1,
      sym_comment,
  [15634] = 1,
    ACTIONS(1053), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 138,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 246,
  [SMALL_STATE(7)] = 322,
  [SMALL_STATE(8)] = 371,
  [SMALL_STATE(9)] = 420,
  [SMALL_STATE(10)] = 471,
  [SMALL_STATE(11)] = 520,
  [SMALL_STATE(12)] = 569,
  [SMALL_STATE(13)] = 618,
  [SMALL_STATE(14)] = 707,
  [SMALL_STATE(15)] = 758,
  [SMALL_STATE(16)] = 807,
  [SMALL_STATE(17)] = 855,
  [SMALL_STATE(18)] = 903,
  [SMALL_STATE(19)] = 989,
  [SMALL_STATE(20)] = 1039,
  [SMALL_STATE(21)] = 1087,
  [SMALL_STATE(22)] = 1135,
  [SMALL_STATE(23)] = 1183,
  [SMALL_STATE(24)] = 1231,
  [SMALL_STATE(25)] = 1279,
  [SMALL_STATE(26)] = 1327,
  [SMALL_STATE(27)] = 1377,
  [SMALL_STATE(28)] = 1425,
  [SMALL_STATE(29)] = 1473,
  [SMALL_STATE(30)] = 1523,
  [SMALL_STATE(31)] = 1573,
  [SMALL_STATE(32)] = 1621,
  [SMALL_STATE(33)] = 1669,
  [SMALL_STATE(34)] = 1755,
  [SMALL_STATE(35)] = 1803,
  [SMALL_STATE(36)] = 1851,
  [SMALL_STATE(37)] = 1904,
  [SMALL_STATE(38)] = 1953,
  [SMALL_STATE(39)] = 2004,
  [SMALL_STATE(40)] = 2065,
  [SMALL_STATE(41)] = 2148,
  [SMALL_STATE(42)] = 2205,
  [SMALL_STATE(43)] = 2264,
  [SMALL_STATE(44)] = 2313,
  [SMALL_STATE(45)] = 2384,
  [SMALL_STATE(46)] = 2454,
  [SMALL_STATE(47)] = 2500,
  [SMALL_STATE(48)] = 2557,
  [SMALL_STATE(49)] = 2614,
  [SMALL_STATE(50)] = 2671,
  [SMALL_STATE(51)] = 2755,
  [SMALL_STATE(52)] = 2836,
  [SMALL_STATE(53)] = 2917,
  [SMALL_STATE(54)] = 2998,
  [SMALL_STATE(55)] = 3079,
  [SMALL_STATE(56)] = 3160,
  [SMALL_STATE(57)] = 3241,
  [SMALL_STATE(58)] = 3284,
  [SMALL_STATE(59)] = 3350,
  [SMALL_STATE(60)] = 3430,
  [SMALL_STATE(61)] = 3508,
  [SMALL_STATE(62)] = 3572,
  [SMALL_STATE(63)] = 3650,
  [SMALL_STATE(64)] = 3728,
  [SMALL_STATE(65)] = 3806,
  [SMALL_STATE(66)] = 3886,
  [SMALL_STATE(67)] = 3966,
  [SMALL_STATE(68)] = 4044,
  [SMALL_STATE(69)] = 4083,
  [SMALL_STATE(70)] = 4160,
  [SMALL_STATE(71)] = 4215,
  [SMALL_STATE(72)] = 4290,
  [SMALL_STATE(73)] = 4365,
  [SMALL_STATE(74)] = 4442,
  [SMALL_STATE(75)] = 4517,
  [SMALL_STATE(76)] = 4594,
  [SMALL_STATE(77)] = 4669,
  [SMALL_STATE(78)] = 4746,
  [SMALL_STATE(79)] = 4817,
  [SMALL_STATE(80)] = 4888,
  [SMALL_STATE(81)] = 4961,
  [SMALL_STATE(82)] = 5032,
  [SMALL_STATE(83)] = 5071,
  [SMALL_STATE(84)] = 5148,
  [SMALL_STATE(85)] = 5223,
  [SMALL_STATE(86)] = 5294,
  [SMALL_STATE(87)] = 5371,
  [SMALL_STATE(88)] = 5446,
  [SMALL_STATE(89)] = 5518,
  [SMALL_STATE(90)] = 5590,
  [SMALL_STATE(91)] = 5662,
  [SMALL_STATE(92)] = 5734,
  [SMALL_STATE(93)] = 5806,
  [SMALL_STATE(94)] = 5878,
  [SMALL_STATE(95)] = 5950,
  [SMALL_STATE(96)] = 6024,
  [SMALL_STATE(97)] = 6076,
  [SMALL_STATE(98)] = 6148,
  [SMALL_STATE(99)] = 6220,
  [SMALL_STATE(100)] = 6288,
  [SMALL_STATE(101)] = 6360,
  [SMALL_STATE(102)] = 6432,
  [SMALL_STATE(103)] = 6493,
  [SMALL_STATE(104)] = 6562,
  [SMALL_STATE(105)] = 6631,
  [SMALL_STATE(106)] = 6694,
  [SMALL_STATE(107)] = 6761,
  [SMALL_STATE(108)] = 6828,
  [SMALL_STATE(109)] = 6895,
  [SMALL_STATE(110)] = 6947,
  [SMALL_STATE(111)] = 7011,
  [SMALL_STATE(112)] = 7075,
  [SMALL_STATE(113)] = 7141,
  [SMALL_STATE(114)] = 7205,
  [SMALL_STATE(115)] = 7269,
  [SMALL_STATE(116)] = 7333,
  [SMALL_STATE(117)] = 7399,
  [SMALL_STATE(118)] = 7463,
  [SMALL_STATE(119)] = 7527,
  [SMALL_STATE(120)] = 7591,
  [SMALL_STATE(121)] = 7657,
  [SMALL_STATE(122)] = 7723,
  [SMALL_STATE(123)] = 7787,
  [SMALL_STATE(124)] = 7853,
  [SMALL_STATE(125)] = 7919,
  [SMALL_STATE(126)] = 7983,
  [SMALL_STATE(127)] = 8047,
  [SMALL_STATE(128)] = 8111,
  [SMALL_STATE(129)] = 8175,
  [SMALL_STATE(130)] = 8239,
  [SMALL_STATE(131)] = 8303,
  [SMALL_STATE(132)] = 8367,
  [SMALL_STATE(133)] = 8431,
  [SMALL_STATE(134)] = 8495,
  [SMALL_STATE(135)] = 8559,
  [SMALL_STATE(136)] = 8623,
  [SMALL_STATE(137)] = 8659,
  [SMALL_STATE(138)] = 8692,
  [SMALL_STATE(139)] = 8725,
  [SMALL_STATE(140)] = 8758,
  [SMALL_STATE(141)] = 8791,
  [SMALL_STATE(142)] = 8824,
  [SMALL_STATE(143)] = 8857,
  [SMALL_STATE(144)] = 8910,
  [SMALL_STATE(145)] = 8943,
  [SMALL_STATE(146)] = 8976,
  [SMALL_STATE(147)] = 9009,
  [SMALL_STATE(148)] = 9042,
  [SMALL_STATE(149)] = 9075,
  [SMALL_STATE(150)] = 9108,
  [SMALL_STATE(151)] = 9140,
  [SMALL_STATE(152)] = 9190,
  [SMALL_STATE(153)] = 9222,
  [SMALL_STATE(154)] = 9278,
  [SMALL_STATE(155)] = 9326,
  [SMALL_STATE(156)] = 9384,
  [SMALL_STATE(157)] = 9437,
  [SMALL_STATE(158)] = 9492,
  [SMALL_STATE(159)] = 9527,
  [SMALL_STATE(160)] = 9560,
  [SMALL_STATE(161)] = 9607,
  [SMALL_STATE(162)] = 9653,
  [SMALL_STATE(163)] = 9683,
  [SMALL_STATE(164)] = 9713,
  [SMALL_STATE(165)] = 9743,
  [SMALL_STATE(166)] = 9773,
  [SMALL_STATE(167)] = 9803,
  [SMALL_STATE(168)] = 9853,
  [SMALL_STATE(169)] = 9883,
  [SMALL_STATE(170)] = 9913,
  [SMALL_STATE(171)] = 9943,
  [SMALL_STATE(172)] = 9973,
  [SMALL_STATE(173)] = 10003,
  [SMALL_STATE(174)] = 10033,
  [SMALL_STATE(175)] = 10063,
  [SMALL_STATE(176)] = 10098,
  [SMALL_STATE(177)] = 10131,
  [SMALL_STATE(178)] = 10162,
  [SMALL_STATE(179)] = 10195,
  [SMALL_STATE(180)] = 10222,
  [SMALL_STATE(181)] = 10267,
  [SMALL_STATE(182)] = 10314,
  [SMALL_STATE(183)] = 10341,
  [SMALL_STATE(184)] = 10372,
  [SMALL_STATE(185)] = 10399,
  [SMALL_STATE(186)] = 10430,
  [SMALL_STATE(187)] = 10457,
  [SMALL_STATE(188)] = 10484,
  [SMALL_STATE(189)] = 10514,
  [SMALL_STATE(190)] = 10544,
  [SMALL_STATE(191)] = 10572,
  [SMALL_STATE(192)] = 10606,
  [SMALL_STATE(193)] = 10634,
  [SMALL_STATE(194)] = 10663,
  [SMALL_STATE(195)] = 10704,
  [SMALL_STATE(196)] = 10745,
  [SMALL_STATE(197)] = 10776,
  [SMALL_STATE(198)] = 10807,
  [SMALL_STATE(199)] = 10834,
  [SMALL_STATE(200)] = 10863,
  [SMALL_STATE(201)] = 10892,
  [SMALL_STATE(202)] = 10921,
  [SMALL_STATE(203)] = 10950,
  [SMALL_STATE(204)] = 10982,
  [SMALL_STATE(205)] = 11010,
  [SMALL_STATE(206)] = 11038,
  [SMALL_STATE(207)] = 11064,
  [SMALL_STATE(208)] = 11100,
  [SMALL_STATE(209)] = 11138,
  [SMALL_STATE(210)] = 11178,
  [SMALL_STATE(211)] = 11214,
  [SMALL_STATE(212)] = 11252,
  [SMALL_STATE(213)] = 11280,
  [SMALL_STATE(214)] = 11320,
  [SMALL_STATE(215)] = 11348,
  [SMALL_STATE(216)] = 11388,
  [SMALL_STATE(217)] = 11416,
  [SMALL_STATE(218)] = 11456,
  [SMALL_STATE(219)] = 11486,
  [SMALL_STATE(220)] = 11520,
  [SMALL_STATE(221)] = 11560,
  [SMALL_STATE(222)] = 11583,
  [SMALL_STATE(223)] = 11620,
  [SMALL_STATE(224)] = 11657,
  [SMALL_STATE(225)] = 11682,
  [SMALL_STATE(226)] = 11705,
  [SMALL_STATE(227)] = 11730,
  [SMALL_STATE(228)] = 11753,
  [SMALL_STATE(229)] = 11776,
  [SMALL_STATE(230)] = 11801,
  [SMALL_STATE(231)] = 11826,
  [SMALL_STATE(232)] = 11851,
  [SMALL_STATE(233)] = 11876,
  [SMALL_STATE(234)] = 11901,
  [SMALL_STATE(235)] = 11924,
  [SMALL_STATE(236)] = 11947,
  [SMALL_STATE(237)] = 11972,
  [SMALL_STATE(238)] = 11995,
  [SMALL_STATE(239)] = 12020,
  [SMALL_STATE(240)] = 12045,
  [SMALL_STATE(241)] = 12068,
  [SMALL_STATE(242)] = 12091,
  [SMALL_STATE(243)] = 12114,
  [SMALL_STATE(244)] = 12137,
  [SMALL_STATE(245)] = 12162,
  [SMALL_STATE(246)] = 12189,
  [SMALL_STATE(247)] = 12214,
  [SMALL_STATE(248)] = 12238,
  [SMALL_STATE(249)] = 12262,
  [SMALL_STATE(250)] = 12286,
  [SMALL_STATE(251)] = 12310,
  [SMALL_STATE(252)] = 12332,
  [SMALL_STATE(253)] = 12354,
  [SMALL_STATE(254)] = 12376,
  [SMALL_STATE(255)] = 12398,
  [SMALL_STATE(256)] = 12420,
  [SMALL_STATE(257)] = 12442,
  [SMALL_STATE(258)] = 12466,
  [SMALL_STATE(259)] = 12488,
  [SMALL_STATE(260)] = 12512,
  [SMALL_STATE(261)] = 12536,
  [SMALL_STATE(262)] = 12558,
  [SMALL_STATE(263)] = 12598,
  [SMALL_STATE(264)] = 12620,
  [SMALL_STATE(265)] = 12642,
  [SMALL_STATE(266)] = 12664,
  [SMALL_STATE(267)] = 12686,
  [SMALL_STATE(268)] = 12708,
  [SMALL_STATE(269)] = 12730,
  [SMALL_STATE(270)] = 12752,
  [SMALL_STATE(271)] = 12774,
  [SMALL_STATE(272)] = 12796,
  [SMALL_STATE(273)] = 12818,
  [SMALL_STATE(274)] = 12840,
  [SMALL_STATE(275)] = 12862,
  [SMALL_STATE(276)] = 12886,
  [SMALL_STATE(277)] = 12908,
  [SMALL_STATE(278)] = 12930,
  [SMALL_STATE(279)] = 12952,
  [SMALL_STATE(280)] = 12974,
  [SMALL_STATE(281)] = 12996,
  [SMALL_STATE(282)] = 13018,
  [SMALL_STATE(283)] = 13042,
  [SMALL_STATE(284)] = 13064,
  [SMALL_STATE(285)] = 13088,
  [SMALL_STATE(286)] = 13110,
  [SMALL_STATE(287)] = 13150,
  [SMALL_STATE(288)] = 13174,
  [SMALL_STATE(289)] = 13196,
  [SMALL_STATE(290)] = 13236,
  [SMALL_STATE(291)] = 13276,
  [SMALL_STATE(292)] = 13298,
  [SMALL_STATE(293)] = 13338,
  [SMALL_STATE(294)] = 13360,
  [SMALL_STATE(295)] = 13384,
  [SMALL_STATE(296)] = 13407,
  [SMALL_STATE(297)] = 13430,
  [SMALL_STATE(298)] = 13453,
  [SMALL_STATE(299)] = 13484,
  [SMALL_STATE(300)] = 13515,
  [SMALL_STATE(301)] = 13544,
  [SMALL_STATE(302)] = 13575,
  [SMALL_STATE(303)] = 13606,
  [SMALL_STATE(304)] = 13637,
  [SMALL_STATE(305)] = 13665,
  [SMALL_STATE(306)] = 13693,
  [SMALL_STATE(307)] = 13723,
  [SMALL_STATE(308)] = 13751,
  [SMALL_STATE(309)] = 13779,
  [SMALL_STATE(310)] = 13807,
  [SMALL_STATE(311)] = 13835,
  [SMALL_STATE(312)] = 13856,
  [SMALL_STATE(313)] = 13875,
  [SMALL_STATE(314)] = 13896,
  [SMALL_STATE(315)] = 13910,
  [SMALL_STATE(316)] = 13924,
  [SMALL_STATE(317)] = 13938,
  [SMALL_STATE(318)] = 13951,
  [SMALL_STATE(319)] = 13964,
  [SMALL_STATE(320)] = 13981,
  [SMALL_STATE(321)] = 14000,
  [SMALL_STATE(322)] = 14013,
  [SMALL_STATE(323)] = 14032,
  [SMALL_STATE(324)] = 14045,
  [SMALL_STATE(325)] = 14064,
  [SMALL_STATE(326)] = 14077,
  [SMALL_STATE(327)] = 14093,
  [SMALL_STATE(328)] = 14109,
  [SMALL_STATE(329)] = 14125,
  [SMALL_STATE(330)] = 14141,
  [SMALL_STATE(331)] = 14157,
  [SMALL_STATE(332)] = 14173,
  [SMALL_STATE(333)] = 14189,
  [SMALL_STATE(334)] = 14205,
  [SMALL_STATE(335)] = 14221,
  [SMALL_STATE(336)] = 14237,
  [SMALL_STATE(337)] = 14253,
  [SMALL_STATE(338)] = 14269,
  [SMALL_STATE(339)] = 14285,
  [SMALL_STATE(340)] = 14299,
  [SMALL_STATE(341)] = 14315,
  [SMALL_STATE(342)] = 14329,
  [SMALL_STATE(343)] = 14343,
  [SMALL_STATE(344)] = 14359,
  [SMALL_STATE(345)] = 14375,
  [SMALL_STATE(346)] = 14389,
  [SMALL_STATE(347)] = 14405,
  [SMALL_STATE(348)] = 14421,
  [SMALL_STATE(349)] = 14435,
  [SMALL_STATE(350)] = 14447,
  [SMALL_STATE(351)] = 14463,
  [SMALL_STATE(352)] = 14479,
  [SMALL_STATE(353)] = 14493,
  [SMALL_STATE(354)] = 14505,
  [SMALL_STATE(355)] = 14519,
  [SMALL_STATE(356)] = 14535,
  [SMALL_STATE(357)] = 14549,
  [SMALL_STATE(358)] = 14565,
  [SMALL_STATE(359)] = 14578,
  [SMALL_STATE(360)] = 14589,
  [SMALL_STATE(361)] = 14602,
  [SMALL_STATE(362)] = 14615,
  [SMALL_STATE(363)] = 14628,
  [SMALL_STATE(364)] = 14641,
  [SMALL_STATE(365)] = 14652,
  [SMALL_STATE(366)] = 14663,
  [SMALL_STATE(367)] = 14676,
  [SMALL_STATE(368)] = 14687,
  [SMALL_STATE(369)] = 14698,
  [SMALL_STATE(370)] = 14711,
  [SMALL_STATE(371)] = 14722,
  [SMALL_STATE(372)] = 14735,
  [SMALL_STATE(373)] = 14748,
  [SMALL_STATE(374)] = 14759,
  [SMALL_STATE(375)] = 14770,
  [SMALL_STATE(376)] = 14781,
  [SMALL_STATE(377)] = 14792,
  [SMALL_STATE(378)] = 14803,
  [SMALL_STATE(379)] = 14816,
  [SMALL_STATE(380)] = 14827,
  [SMALL_STATE(381)] = 14840,
  [SMALL_STATE(382)] = 14851,
  [SMALL_STATE(383)] = 14864,
  [SMALL_STATE(384)] = 14874,
  [SMALL_STATE(385)] = 14884,
  [SMALL_STATE(386)] = 14894,
  [SMALL_STATE(387)] = 14904,
  [SMALL_STATE(388)] = 14914,
  [SMALL_STATE(389)] = 14924,
  [SMALL_STATE(390)] = 14934,
  [SMALL_STATE(391)] = 14944,
  [SMALL_STATE(392)] = 14954,
  [SMALL_STATE(393)] = 14964,
  [SMALL_STATE(394)] = 14974,
  [SMALL_STATE(395)] = 14984,
  [SMALL_STATE(396)] = 14994,
  [SMALL_STATE(397)] = 15004,
  [SMALL_STATE(398)] = 15014,
  [SMALL_STATE(399)] = 15024,
  [SMALL_STATE(400)] = 15034,
  [SMALL_STATE(401)] = 15044,
  [SMALL_STATE(402)] = 15054,
  [SMALL_STATE(403)] = 15064,
  [SMALL_STATE(404)] = 15074,
  [SMALL_STATE(405)] = 15084,
  [SMALL_STATE(406)] = 15094,
  [SMALL_STATE(407)] = 15104,
  [SMALL_STATE(408)] = 15114,
  [SMALL_STATE(409)] = 15124,
  [SMALL_STATE(410)] = 15134,
  [SMALL_STATE(411)] = 15144,
  [SMALL_STATE(412)] = 15154,
  [SMALL_STATE(413)] = 15164,
  [SMALL_STATE(414)] = 15174,
  [SMALL_STATE(415)] = 15184,
  [SMALL_STATE(416)] = 15194,
  [SMALL_STATE(417)] = 15204,
  [SMALL_STATE(418)] = 15214,
  [SMALL_STATE(419)] = 15224,
  [SMALL_STATE(420)] = 15234,
  [SMALL_STATE(421)] = 15244,
  [SMALL_STATE(422)] = 15254,
  [SMALL_STATE(423)] = 15264,
  [SMALL_STATE(424)] = 15274,
  [SMALL_STATE(425)] = 15284,
  [SMALL_STATE(426)] = 15294,
  [SMALL_STATE(427)] = 15304,
  [SMALL_STATE(428)] = 15314,
  [SMALL_STATE(429)] = 15324,
  [SMALL_STATE(430)] = 15334,
  [SMALL_STATE(431)] = 15344,
  [SMALL_STATE(432)] = 15354,
  [SMALL_STATE(433)] = 15364,
  [SMALL_STATE(434)] = 15374,
  [SMALL_STATE(435)] = 15384,
  [SMALL_STATE(436)] = 15394,
  [SMALL_STATE(437)] = 15404,
  [SMALL_STATE(438)] = 15414,
  [SMALL_STATE(439)] = 15424,
  [SMALL_STATE(440)] = 15434,
  [SMALL_STATE(441)] = 15444,
  [SMALL_STATE(442)] = 15454,
  [SMALL_STATE(443)] = 15464,
  [SMALL_STATE(444)] = 15474,
  [SMALL_STATE(445)] = 15484,
  [SMALL_STATE(446)] = 15494,
  [SMALL_STATE(447)] = 15504,
  [SMALL_STATE(448)] = 15514,
  [SMALL_STATE(449)] = 15524,
  [SMALL_STATE(450)] = 15534,
  [SMALL_STATE(451)] = 15544,
  [SMALL_STATE(452)] = 15554,
  [SMALL_STATE(453)] = 15564,
  [SMALL_STATE(454)] = 15574,
  [SMALL_STATE(455)] = 15584,
  [SMALL_STATE(456)] = 15594,
  [SMALL_STATE(457)] = 15604,
  [SMALL_STATE(458)] = 15614,
  [SMALL_STATE(459)] = 15624,
  [SMALL_STATE(460)] = 15634,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 10),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 10),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 11),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 16),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(149),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(366),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(444),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(434),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(148),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(397),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(136),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(163),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(360),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(453),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(452),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(168),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(384),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(159),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 12),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 12),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 22),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 22),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(233),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(372),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(455),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(454),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(238),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(427),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(212),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(106),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(73),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(74),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(395),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(51),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(108),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(62),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(66),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(287),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(362),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(451),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(449),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(260),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(415),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(245),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 23),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 14),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 21),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(86),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(53),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(60),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(59),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 19),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 18),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 15),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_definition, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(395),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(55),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(108),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(311),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(101),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(441),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(459),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(421),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 20),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(342),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(67),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(95),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(40),
  [865] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(121),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(97),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 13),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1045] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
