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
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
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
  sym_keyword_func = 33,
  sym_keyword_let = 34,
  anon_sym_EQ = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  anon_sym_DASH_GT = 38,
  anon_sym_COLON = 39,
  anon_sym_LBRACK = 40,
  anon_sym_COMMA = 41,
  anon_sym_RBRACK = 42,
  anon_sym_DASH = 43,
  anon_sym_PLUS = 44,
  anon_sym_EQ_EQ = 45,
  anon_sym_f = 46,
  anon_sym_DQUOTE = 47,
  aux_sym__double_quote_string_token1 = 48,
  anon_sym_SQUOTE = 49,
  aux_sym__literal_string_token1 = 50,
  sym__natural_number = 51,
  anon_sym_DOT = 52,
  sym_identifier = 53,
  anon_sym_DOT_DOT = 54,
  anon_sym_STAR = 55,
  anon_sym_SLASH = 56,
  anon_sym_PIPE = 57,
  anon_sym_BANG_EQ = 58,
  anon_sym_GT = 59,
  anon_sym_GT_EQ = 60,
  anon_sym_LT = 61,
  anon_sym_LT_EQ = 62,
  anon_sym_QMARK_QMARK = 63,
  aux_sym__date_token1 = 64,
  aux_sym__date_token2 = 65,
  anon_sym_AT = 66,
  aux_sym__time_token1 = 67,
  anon_sym_T = 68,
  anon_sym_Z = 69,
  anon_sym_POUND = 70,
  aux_sym_comment_token1 = 71,
  sym_bang = 72,
  sym_program = 73,
  sym_pipeline = 74,
  sym_variable = 75,
  sym_function_definition = 76,
  sym_parameter = 77,
  sym__call_parameter = 78,
  sym_function_call = 79,
  sym_transforms = 80,
  sym_from = 81,
  sym_derives = 82,
  sym_filter = 83,
  sym__boolean_expression = 84,
  sym_aggregate = 85,
  sym_aggregate_operation = 86,
  sym__aggregate_count = 87,
  sym_sorts = 88,
  sym_direction = 89,
  sym_takes = 90,
  sym_window = 91,
  sym_window_definitions = 92,
  sym__window_definition = 93,
  sym_group = 94,
  sym_joins = 95,
  sym__join_definition = 96,
  sym_conditions = 97,
  sym__self_join = 98,
  sym_select = 99,
  sym_table_reference = 100,
  sym_term = 101,
  sym__expression = 102,
  sym_literal = 103,
  sym_f_string = 104,
  sym__double_quote_string = 105,
  sym__literal_string = 106,
  sym__integer = 107,
  sym__decimal_number = 108,
  sym_field = 109,
  sym__alias_identifier = 110,
  sym_range = 111,
  sym_assignment = 112,
  sym_binary_expression = 113,
  sym__date = 114,
  sym_date = 115,
  sym__time = 116,
  sym_time = 117,
  sym_timestamp = 118,
  sym_timezone = 119,
  sym_comment = 120,
  aux_sym_program_repeat1 = 121,
  aux_sym_function_definition_repeat1 = 122,
  aux_sym_function_call_repeat1 = 123,
  aux_sym_transforms_repeat1 = 124,
  aux_sym_derives_repeat1 = 125,
  aux_sym_aggregate_repeat1 = 126,
  aux_sym_sorts_repeat1 = 127,
  aux_sym_window_definitions_repeat1 = 128,
  aux_sym_group_repeat1 = 129,
  aux_sym_group_repeat2 = 130,
  aux_sym_conditions_repeat1 = 131,
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
      if (eof) ADVANCE(276);
      if (lookahead == '!') ADVANCE(573);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == 'G') ADVANCE(112);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'J') ADVANCE(102);
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(565);
      if (lookahead == 'W') ADVANCE(68);
      if (lookahead == 'Z') ADVANCE(566);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(351);
      if (lookahead == 'g') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'j') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(185);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(271)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(413);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == 'f') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(396);
      if (lookahead == 'D') ADVANCE(390);
      if (lookahead == 'F') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(431);
      if (lookahead == 'J') ADVANCE(420);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead == 'S') ADVANCE(391);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == 'f') ADVANCE(457);
      if (lookahead == 'g') ADVANCE(524);
      if (lookahead == 'j') ADVANCE(512);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(396);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead == 'S') ADVANCE(425);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == 'W') ADVANCE(404);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'f') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == 'w') ADVANCE(496);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(458);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(261)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(256)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'A') ADVANCE(450);
      if (lookahead == 'C') ADVANCE(424);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(368);
      if (lookahead == 'S') ADVANCE(442);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(460);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'A') ADVANCE(453);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'S') ADVANCE(447);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(258)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(257)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == 'A') ADVANCE(397);
      if (lookahead == 'D') ADVANCE(390);
      if (lookahead == 'F') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(431);
      if (lookahead == 'J') ADVANCE(420);
      if (lookahead == 'S') ADVANCE(391);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == 'f') ADVANCE(457);
      if (lookahead == 'g') ADVANCE(524);
      if (lookahead == 'j') ADVANCE(512);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(259)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == 'A') ADVANCE(397);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'S') ADVANCE(425);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == 'W') ADVANCE(404);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(458);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == 'w') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(260)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(262)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(264)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(553);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(350);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(342);
      END_STATE();
    case 17:
      if (lookahead == '?') ADVANCE(558);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'R') ADVANCE(100);
      if (lookahead == 'U') ADVANCE(80);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'R') ADVANCE(100);
      if (lookahead == 'U') ADVANCE(86);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(87);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(335);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(63);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(121);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(122);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(326);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(99);
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
      if (lookahead == 'E') ADVANCE(320);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(289);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(297);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(299);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(281);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(302);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(285);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(109);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(79);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(110);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == 'U') ADVANCE(83);
      if (lookahead == 'W') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(79);
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(108);
      if (lookahead == 'G') ADVANCE(314);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(106);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(116);
      END_STATE();
    case 54:
      if (lookahead == 'F') ADVANCE(117);
      if (lookahead == 'T') ADVANCE(337);
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
      if (lookahead == 'G') ADVANCE(332);
      END_STATE();
    case 59:
      if (lookahead == 'G') ADVANCE(334);
      END_STATE();
    case 60:
      if (lookahead == 'G') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == 'G') ADVANCE(111);
      END_STATE();
    case 62:
      if (lookahead == 'G') ADVANCE(42);
      END_STATE();
    case 63:
      if (lookahead == 'H') ADVANCE(301);
      END_STATE();
    case 64:
      if (lookahead == 'H') ADVANCE(120);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(131);
      END_STATE();
    case 66:
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'R') ADVANCE(100);
      if (lookahead == 'U') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(123);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(88);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(90);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(93);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'K') ADVANCE(38);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == 'L') ADVANCE(125);
      END_STATE();
    case 78:
      if (lookahead == 'L') ADVANCE(325);
      END_STATE();
    case 79:
      if (lookahead == 'L') ADVANCE(44);
      END_STATE();
    case 80:
      if (lookahead == 'L') ADVANCE(78);
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 81:
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead == 'W') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'M') ADVANCE(316);
      END_STATE();
    case 84:
      if (lookahead == 'M') ADVANCE(277);
      END_STATE();
    case 85:
      if (lookahead == 'N') ADVANCE(330);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 87:
      if (lookahead == 'N') ADVANCE(304);
      END_STATE();
    case 88:
      if (lookahead == 'N') ADVANCE(293);
      END_STATE();
    case 89:
      if (lookahead == 'N') ADVANCE(30);
      END_STATE();
    case 90:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 91:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 92:
      if (lookahead == 'N') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 97:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 98:
      if (lookahead == 'O') ADVANCE(81);
      END_STATE();
    case 99:
      if (lookahead == 'O') ADVANCE(132);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(84);
      END_STATE();
    case 101:
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(71);
      END_STATE();
    case 103:
      if (lookahead == 'P') ADVANCE(24);
      END_STATE();
    case 104:
      if (lookahead == 'P') ADVANCE(283);
      END_STATE();
    case 105:
      if (lookahead == 'R') ADVANCE(328);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(322);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(279);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(65);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(118);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(101);
      END_STATE();
    case 113:
      if (lookahead == 'S') ADVANCE(333);
      END_STATE();
    case 114:
      if (lookahead == 'S') ADVANCE(40);
      END_STATE();
    case 115:
      if (lookahead == 'S') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(337);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(323);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(287);
      END_STATE();
    case 119:
      if (lookahead == 'T') ADVANCE(310);
      END_STATE();
    case 120:
      if (lookahead == 'T') ADVANCE(324);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(295);
      END_STATE();
    case 122:
      if (lookahead == 'T') ADVANCE(318);
      END_STATE();
    case 123:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 127:
      if (lookahead == 'U') ADVANCE(104);
      END_STATE();
    case 128:
      if (lookahead == 'U') ADVANCE(92);
      END_STATE();
    case 129:
      if (lookahead == 'U') ADVANCE(39);
      END_STATE();
    case 130:
      if (lookahead == 'V') ADVANCE(312);
      END_STATE();
    case 131:
      if (lookahead == 'V') ADVANCE(41);
      END_STATE();
    case 132:
      if (lookahead == 'W') ADVANCE(291);
      END_STATE();
    case 133:
      if (lookahead == 'X') ADVANCE(103);
      END_STATE();
    case 134:
      if (lookahead == 'X') ADVANCE(306);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 145:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(200);
      if (lookahead == 'w') ADVANCE(187);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == 'g') ADVANCE(314);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 171:
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 172:
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 173:
      if (lookahead == 'g') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == 'v') ADVANCE(167);
      END_STATE();
    case 174:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 175:
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 176:
      if (lookahead == 'g') ADVANCE(334);
      END_STATE();
    case 177:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 178:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 179:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 180:
      if (lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 181:
      if (lookahead == 'h') ADVANCE(236);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 185:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(240);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 192:
      if (lookahead == 'k') ADVANCE(155);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == 'w') ADVANCE(230);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 200:
      if (lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 201:
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 247:
      if (lookahead == 'v') ADVANCE(312);
      END_STATE();
    case 248:
      if (lookahead == 'v') ADVANCE(158);
      END_STATE();
    case 249:
      if (lookahead == 'w') ADVANCE(291);
      END_STATE();
    case 250:
      if (lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 251:
      if (lookahead == 'x') ADVANCE(306);
      END_STATE();
    case 252:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(396);
      if (lookahead == 'D') ADVANCE(390);
      if (lookahead == 'F') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(431);
      if (lookahead == 'J') ADVANCE(420);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead == 'S') ADVANCE(391);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == 'f') ADVANCE(457);
      if (lookahead == 'g') ADVANCE(524);
      if (lookahead == 'j') ADVANCE(512);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == '|') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 253:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(253)
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'A') ADVANCE(450);
      if (lookahead == 'C') ADVANCE(424);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'M') ADVANCE(368);
      if (lookahead == 'S') ADVANCE(442);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 'm') ADVANCE(460);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == 't') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 254:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(254)
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(396);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead == 'S') ADVANCE(425);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == 'W') ADVANCE(404);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'f') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == 'w') ADVANCE(496);
      if (lookahead == '|') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 255:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(255)
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(413);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == 'f') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '|') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 256:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(256)
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 't') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 257:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(257)
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == 't') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 258:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(258)
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'A') ADVANCE(453);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'S') ADVANCE(447);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead == 'f') ADVANCE(352);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead == 't') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 259:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(259)
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == 'A') ADVANCE(397);
      if (lookahead == 'D') ADVANCE(390);
      if (lookahead == 'F') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(431);
      if (lookahead == 'J') ADVANCE(420);
      if (lookahead == 'S') ADVANCE(391);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == 'f') ADVANCE(457);
      if (lookahead == 'g') ADVANCE(524);
      if (lookahead == 'j') ADVANCE(512);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 260:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(260)
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == 'A') ADVANCE(397);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'S') ADVANCE(425);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == 'W') ADVANCE(404);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'f') ADVANCE(458);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == 'w') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 261:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(261)
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == 'F') ADVANCE(366);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(458);
      if (lookahead == 't') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 262:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(262)
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 263:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 264:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(264)
      if (lookahead == '#') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      END_STATE();
    case 267:
      if (eof) ADVANCE(276);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(112);
      if (lookahead == 'J') ADVANCE(102);
      if (lookahead == 'L') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(68);
      if (lookahead == 'Z') ADVANCE(566);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'g') ADVANCE(229);
      if (lookahead == 'j') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(185);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(274)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 268:
      if (eof) ADVANCE(276);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(396);
      if (lookahead == 'D') ADVANCE(390);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(431);
      if (lookahead == 'J') ADVANCE(420);
      if (lookahead == 'L') ADVANCE(380);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead == 'S') ADVANCE(391);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == 'f') ADVANCE(456);
      if (lookahead == 'g') ADVANCE(524);
      if (lookahead == 'j') ADVANCE(512);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(273)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 269:
      if (eof) ADVANCE(276);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == 'G') ADVANCE(112);
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'J') ADVANCE(102);
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(564);
      if (lookahead == 'W') ADVANCE(68);
      if (lookahead == 'Z') ADVANCE(566);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(184);
      if (lookahead == 'g') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'j') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'w') ADVANCE(185);
      if (lookahead == '|') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(272)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 270:
      if (eof) ADVANCE(276);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == 'A') ADVANCE(397);
      if (lookahead == 'D') ADVANCE(390);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(431);
      if (lookahead == 'J') ADVANCE(420);
      if (lookahead == 'L') ADVANCE(380);
      if (lookahead == 'S') ADVANCE(391);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == 'f') ADVANCE(456);
      if (lookahead == 'g') ADVANCE(524);
      if (lookahead == 'j') ADVANCE(512);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 271:
      if (eof) ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(271)
      if (lookahead == '!') ADVANCE(573);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '@') ADVANCE(562);
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == 'G') ADVANCE(112);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'J') ADVANCE(102);
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(565);
      if (lookahead == 'W') ADVANCE(68);
      if (lookahead == 'Z') ADVANCE(566);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(351);
      if (lookahead == 'g') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'j') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(185);
      if (lookahead == '|') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 272:
      if (eof) ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(272)
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == 'G') ADVANCE(112);
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'J') ADVANCE(102);
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(564);
      if (lookahead == 'W') ADVANCE(68);
      if (lookahead == 'Z') ADVANCE(566);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(184);
      if (lookahead == 'g') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'j') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'w') ADVANCE(185);
      if (lookahead == '|') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 273:
      if (eof) ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(273)
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(396);
      if (lookahead == 'D') ADVANCE(390);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(431);
      if (lookahead == 'J') ADVANCE(420);
      if (lookahead == 'L') ADVANCE(380);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead == 'S') ADVANCE(391);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == 'f') ADVANCE(456);
      if (lookahead == 'g') ADVANCE(524);
      if (lookahead == 'j') ADVANCE(512);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == '|') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 274:
      if (eof) ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(274)
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead == '*') ADVANCE(550);
      if (lookahead == '+') ADVANCE(349);
      if (lookahead == ',') ADVANCE(345);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(551);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == '<') ADVANCE(556);
      if (lookahead == '=') ADVANCE(339);
      if (lookahead == '>') ADVANCE(554);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'G') ADVANCE(112);
      if (lookahead == 'J') ADVANCE(102);
      if (lookahead == 'L') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(68);
      if (lookahead == 'Z') ADVANCE(566);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'g') ADVANCE(229);
      if (lookahead == 'j') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(185);
      if (lookahead == '|') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 275:
      if (eof) ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == ':') ADVANCE(343);
      if (lookahead == 'A') ADVANCE(397);
      if (lookahead == 'D') ADVANCE(390);
      if (lookahead == 'F') ADVANCE(364);
      if (lookahead == 'G') ADVANCE(431);
      if (lookahead == 'J') ADVANCE(420);
      if (lookahead == 'L') ADVANCE(380);
      if (lookahead == 'S') ADVANCE(391);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead == 'f') ADVANCE(456);
      if (lookahead == 'g') ADVANCE(524);
      if (lookahead == 'j') ADVANCE(512);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_keyword_window);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(149);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(350);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(342);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(356);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(355);
      if (lookahead == '#') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(360);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(359);
      if (lookahead == '#') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(549);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(408);
      if (lookahead == 'I') ADVANCE(409);
      if (lookahead == 'R') ADVANCE(421);
      if (lookahead == 'U') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(408);
      if (lookahead == 'I') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(407);
      if (lookahead == 'R') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(455);
      if (lookahead == 'I') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(410);
      if (lookahead == 'O') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(433);
      if (lookahead == 'G') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(399);
      if (lookahead == 'N') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(375);
      if (lookahead == 'U') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead == 'r') ADVANCE(513);
      if (lookahead == 'u') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'i') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'r') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(502);
      if (lookahead == 'o') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(523);
      if (lookahead == 'g') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(491);
      if (lookahead == 'n') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(557);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(560);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(356);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(360);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(553);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 269},
  [2] = {.lex_state = 268},
  [3] = {.lex_state = 269},
  [4] = {.lex_state = 267},
  [5] = {.lex_state = 267},
  [6] = {.lex_state = 269},
  [7] = {.lex_state = 269},
  [8] = {.lex_state = 267},
  [9] = {.lex_state = 269},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 269},
  [12] = {.lex_state = 267},
  [13] = {.lex_state = 267},
  [14] = {.lex_state = 269},
  [15] = {.lex_state = 269},
  [16] = {.lex_state = 267},
  [17] = {.lex_state = 269},
  [18] = {.lex_state = 269},
  [19] = {.lex_state = 267},
  [20] = {.lex_state = 267},
  [21] = {.lex_state = 269},
  [22] = {.lex_state = 269},
  [23] = {.lex_state = 269},
  [24] = {.lex_state = 269},
  [25] = {.lex_state = 269},
  [26] = {.lex_state = 267},
  [27] = {.lex_state = 269},
  [28] = {.lex_state = 269},
  [29] = {.lex_state = 269},
  [30] = {.lex_state = 269},
  [31] = {.lex_state = 269},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 269},
  [34] = {.lex_state = 269},
  [35] = {.lex_state = 269},
  [36] = {.lex_state = 269},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 269},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 269},
  [41] = {.lex_state = 269},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 267},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 269},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 269},
  [48] = {.lex_state = 269},
  [49] = {.lex_state = 269},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 269},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 270},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 270},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 269},
  [68] = {.lex_state = 269},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 269},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 269},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
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
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 269},
  [109] = {.lex_state = 5},
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
  [136] = {.lex_state = 270},
  [137] = {.lex_state = 269},
  [138] = {.lex_state = 270},
  [139] = {.lex_state = 269},
  [140] = {.lex_state = 270},
  [141] = {.lex_state = 270},
  [142] = {.lex_state = 269},
  [143] = {.lex_state = 270},
  [144] = {.lex_state = 269},
  [145] = {.lex_state = 270},
  [146] = {.lex_state = 270},
  [147] = {.lex_state = 270},
  [148] = {.lex_state = 269},
  [149] = {.lex_state = 270},
  [150] = {.lex_state = 270},
  [151] = {.lex_state = 270},
  [152] = {.lex_state = 270},
  [153] = {.lex_state = 270},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 269},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 269},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 269},
  [160] = {.lex_state = 269},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 269},
  [165] = {.lex_state = 269},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 269},
  [168] = {.lex_state = 269},
  [169] = {.lex_state = 269},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 269},
  [172] = {.lex_state = 269},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 269},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 269},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 269},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 269},
  [184] = {.lex_state = 269},
  [185] = {.lex_state = 269},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 269},
  [189] = {.lex_state = 269},
  [190] = {.lex_state = 269},
  [191] = {.lex_state = 269},
  [192] = {.lex_state = 269},
  [193] = {.lex_state = 269},
  [194] = {.lex_state = 269},
  [195] = {.lex_state = 269},
  [196] = {.lex_state = 269},
  [197] = {.lex_state = 269},
  [198] = {.lex_state = 269},
  [199] = {.lex_state = 269},
  [200] = {.lex_state = 269},
  [201] = {.lex_state = 269},
  [202] = {.lex_state = 269},
  [203] = {.lex_state = 269},
  [204] = {.lex_state = 269},
  [205] = {.lex_state = 269},
  [206] = {.lex_state = 269},
  [207] = {.lex_state = 269},
  [208] = {.lex_state = 269},
  [209] = {.lex_state = 269},
  [210] = {.lex_state = 269},
  [211] = {.lex_state = 269},
  [212] = {.lex_state = 269},
  [213] = {.lex_state = 269},
  [214] = {.lex_state = 269},
  [215] = {.lex_state = 269},
  [216] = {.lex_state = 269},
  [217] = {.lex_state = 269},
  [218] = {.lex_state = 269},
  [219] = {.lex_state = 269},
  [220] = {.lex_state = 269},
  [221] = {.lex_state = 269},
  [222] = {.lex_state = 269},
  [223] = {.lex_state = 269},
  [224] = {.lex_state = 269},
  [225] = {.lex_state = 269},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 269},
  [228] = {.lex_state = 269},
  [229] = {.lex_state = 269},
  [230] = {.lex_state = 269},
  [231] = {.lex_state = 269},
  [232] = {.lex_state = 269},
  [233] = {.lex_state = 269},
  [234] = {.lex_state = 269},
  [235] = {.lex_state = 269},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 269},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 269},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 269},
  [244] = {.lex_state = 269},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 269},
  [247] = {.lex_state = 269},
  [248] = {.lex_state = 269},
  [249] = {.lex_state = 269},
  [250] = {.lex_state = 269},
  [251] = {.lex_state = 269},
  [252] = {.lex_state = 269},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 269},
  [257] = {.lex_state = 269},
  [258] = {.lex_state = 269},
  [259] = {.lex_state = 269},
  [260] = {.lex_state = 269},
  [261] = {.lex_state = 269},
  [262] = {.lex_state = 269},
  [263] = {.lex_state = 269},
  [264] = {.lex_state = 269},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 269},
  [267] = {.lex_state = 269},
  [268] = {.lex_state = 269},
  [269] = {.lex_state = 269},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 269},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 269},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 269},
  [276] = {.lex_state = 269},
  [277] = {.lex_state = 269},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 267},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 267},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 267},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 267},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 267},
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
  [306] = {.lex_state = 269},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 269},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 269},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 269},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 269},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 11},
  [322] = {.lex_state = 269},
  [323] = {.lex_state = 11},
  [324] = {.lex_state = 11},
  [325] = {.lex_state = 11},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 269},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 11},
  [336] = {.lex_state = 269},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 269},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 269},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 11},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 269},
  [347] = {.lex_state = 12},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 269},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 11},
  [355] = {.lex_state = 11},
  [356] = {.lex_state = 11},
  [357] = {.lex_state = 269},
  [358] = {.lex_state = 11},
  [359] = {.lex_state = 11},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 268},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 268},
  [364] = {.lex_state = 268},
  [365] = {.lex_state = 11},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 11},
  [369] = {.lex_state = 11},
  [370] = {.lex_state = 11},
  [371] = {.lex_state = 11},
  [372] = {.lex_state = 11},
  [373] = {.lex_state = 11},
  [374] = {.lex_state = 11},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 268},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 268},
  [379] = {.lex_state = 268},
  [380] = {.lex_state = 268},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 269},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 269},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 571},
  [396] = {.lex_state = 269},
  [397] = {.lex_state = 269},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 269},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 268},
  [404] = {.lex_state = 13},
  [405] = {.lex_state = 13},
  [406] = {.lex_state = 13},
  [407] = {.lex_state = 269},
  [408] = {.lex_state = 269},
  [409] = {.lex_state = 269},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 13},
  [415] = {.lex_state = 269},
  [416] = {.lex_state = 269},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 13},
  [420] = {.lex_state = 13},
  [421] = {.lex_state = 269},
  [422] = {.lex_state = 269},
  [423] = {.lex_state = 269},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 11},
  [427] = {.lex_state = 269},
  [428] = {.lex_state = 269},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 13},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 354},
  [434] = {.lex_state = 358},
  [435] = {.lex_state = 13},
  [436] = {.lex_state = 269},
  [437] = {.lex_state = 358},
  [438] = {.lex_state = 354},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 354},
  [444] = {.lex_state = 358},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 354},
  [448] = {.lex_state = 358},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 354},
  [451] = {.lex_state = 358},
  [452] = {.lex_state = 354},
  [453] = {.lex_state = 358},
  [454] = {.lex_state = 354},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 11},
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
    [sym_program] = STATE(455),
    [sym_pipeline] = STATE(322),
    [sym_variable] = STATE(322),
    [sym_function_definition] = STATE(322),
    [sym_from] = STATE(137),
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
    STATE(59), 1,
      aux_sym_function_call_repeat1,
    STATE(146), 1,
      sym__integer,
    STATE(151), 1,
      sym__double_quote_string,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym__call_parameter,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(150), 2,
      sym__literal_string,
      sym__decimal_number,
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
  [78] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_Z,
    STATE(3), 1,
      sym_comment,
    STATE(21), 1,
      sym_timezone,
    STATE(420), 1,
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
  [137] = 6,
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
  [191] = 6,
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
  [245] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(6), 1,
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
  [294] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [343] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_DOT,
    STATE(8), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [394] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(63), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(61), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [443] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym__natural_number,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(10), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_function_call_repeat1,
    STATE(166), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym_literal,
    STATE(177), 1,
      sym__call_parameter,
    STATE(179), 1,
      sym__integer,
    ACTIONS(65), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(187), 2,
      sym__literal_string,
      sym__decimal_number,
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
  [518] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      sym__natural_number,
    STATE(11), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [569] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(87), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [618] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [667] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(95), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [716] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [764] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [812] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
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
  [860] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(111), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [908] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(19), 1,
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
  [958] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(20), 1,
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
  [1008] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(123), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
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
  [1056] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
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
  [1104] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1152] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
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
  [1200] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_T,
    STATE(25), 1,
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
  [1250] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1300] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1348] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
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
  [1396] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
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
  [1444] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1492] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
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
  [1540] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      sym_keyword_count,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(32), 1,
      sym_comment,
    STATE(183), 1,
      sym_binary_expression,
    STATE(217), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(348), 3,
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
    ACTIONS(159), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1628] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1676] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
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
  [1727] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    STATE(35), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(105), 24,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1784] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
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
  [1833] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      sym_keyword_count,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(37), 1,
      sym_comment,
    STATE(188), 1,
      sym_binary_expression,
    STATE(217), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(375), 3,
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
    ACTIONS(159), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1918] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    STATE(38), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(107), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1971] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      sym_keyword_count,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(39), 1,
      sym_comment,
    STATE(188), 1,
      sym_binary_expression,
    STATE(217), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(375), 3,
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
    ACTIONS(159), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [2056] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    STATE(40), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(105), 23,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2115] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    STATE(41), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
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
  [2176] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      sym_keyword_count,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(42), 1,
      sym_comment,
    STATE(188), 1,
      sym_binary_expression,
    STATE(217), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(375), 3,
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
    ACTIONS(159), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [2258] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(43), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 12,
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
  [2307] = 17,
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
    STATE(154), 1,
      aux_sym_function_call_repeat1,
    STATE(245), 1,
      sym__double_quote_string,
    STATE(254), 1,
      sym_literal,
    STATE(255), 1,
      sym__call_parameter,
    STATE(272), 1,
      sym__integer,
    ACTIONS(209), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(242), 2,
      sym__literal_string,
      sym__decimal_number,
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
  [2377] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 12,
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
  [2423] = 17,
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
    STATE(46), 1,
      sym_comment,
    STATE(161), 1,
      aux_sym_function_call_repeat1,
    STATE(282), 1,
      sym__double_quote_string,
    STATE(290), 1,
      sym__call_parameter,
    STATE(291), 1,
      sym_literal,
    STATE(293), 1,
      sym__integer,
    ACTIONS(223), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(283), 2,
      sym__literal_string,
      sym__decimal_number,
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
  [2492] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(47), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
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
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_func,
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2549] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(48), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
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
  [2606] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(49), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
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
      sym_keyword_func,
      sym_keyword_let,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2663] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
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
    STATE(45), 1,
      sym_f_string,
    STATE(50), 1,
      sym_comment,
    STATE(94), 1,
      sym_direction,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(333), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2746] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 13,
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
    ACTIONS(253), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2789] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
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
    STATE(45), 1,
      sym_f_string,
    STATE(52), 1,
      sym_comment,
    STATE(90), 1,
      sym_direction,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(367), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2869] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(53), 1,
      sym_comment,
    STATE(97), 1,
      sym_direction,
    STATE(108), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(229), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2949] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(54), 1,
      sym_comment,
    STATE(68), 1,
      sym__expression,
    STATE(101), 1,
      sym_direction,
    STATE(172), 1,
      sym_assignment,
    STATE(229), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3029] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
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
    STATE(45), 1,
      sym_f_string,
    STATE(55), 1,
      sym_comment,
    STATE(90), 1,
      sym_direction,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(367), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3109] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(56), 1,
      sym_comment,
    STATE(90), 1,
      sym_direction,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(367), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3189] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(57), 1,
      sym_comment,
    STATE(100), 1,
      sym_direction,
    STATE(155), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(229), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3269] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(58), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(168), 1,
      sym_binary_expression,
    STATE(172), 1,
      sym_assignment,
    STATE(327), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3348] = 17,
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
    STATE(59), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_function_call_repeat1,
    STATE(146), 1,
      sym__integer,
    STATE(151), 1,
      sym__double_quote_string,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym__call_parameter,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(150), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(271), 11,
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
  [3413] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(60), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(334), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3490] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(277), 1,
      sym_keyword_side,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(61), 1,
      sym_comment,
    STATE(68), 1,
      sym__expression,
    STATE(91), 1,
      sym__join_definition,
    STATE(172), 1,
      sym_assignment,
    STATE(198), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3567] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(62), 1,
      sym_comment,
    STATE(68), 1,
      sym__expression,
    STATE(70), 1,
      sym_field,
    STATE(172), 1,
      sym_assignment,
    STATE(246), 1,
      sym_term,
    STATE(248), 1,
      sym_table_reference,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3646] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(63), 1,
      sym_comment,
    STATE(70), 1,
      sym_field,
    STATE(108), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(246), 1,
      sym_term,
    STATE(248), 1,
      sym_table_reference,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3725] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(277), 1,
      sym_keyword_side,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(64), 1,
      sym_comment,
    STATE(99), 1,
      sym__join_definition,
    STATE(108), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(198), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3802] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(288), 1,
      anon_sym_DASH,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      sym__natural_number,
    ACTIONS(300), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(146), 1,
      sym__integer,
    STATE(151), 1,
      sym__double_quote_string,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym__call_parameter,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(285), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(65), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(150), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(283), 11,
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
  [3865] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(66), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(353), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3942] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 25,
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
  [3981] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    ACTIONS(239), 1,
      sym_keyword_or,
    ACTIONS(312), 1,
      anon_sym_EQ,
    STATE(68), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(310), 13,
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
  [4036] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      anon_sym_PLUS,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(69), 1,
      sym_comment,
    STATE(90), 1,
      sym_direction,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(367), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4113] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 25,
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
  [4152] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      sym_identifier,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(49), 1,
      sym__expression,
    STATE(71), 1,
      sym_comment,
    STATE(178), 1,
      sym_function_call,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(314), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4222] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(72), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(320), 13,
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
  [4274] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      sym_identifier,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(49), 1,
      sym__expression,
    STATE(73), 1,
      sym_comment,
    STATE(178), 1,
      sym_function_call,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(314), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4344] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym_identifier,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(49), 1,
      sym__expression,
    STATE(74), 1,
      sym_comment,
    STATE(178), 1,
      sym_function_call,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(314), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4414] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    ACTIONS(330), 1,
      anon_sym_EQ_EQ,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(75), 1,
      sym_comment,
    STATE(189), 1,
      sym_binary_expression,
    STATE(220), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4488] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      sym_identifier,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(76), 1,
      sym_comment,
    STATE(203), 1,
      sym_binary_expression,
    STATE(216), 1,
      sym__expression,
    STATE(391), 1,
      sym_function_call,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(332), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4560] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(77), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(191), 1,
      sym_binary_expression,
    STATE(381), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4636] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(67), 1,
      sym_binary_expression,
    STATE(78), 1,
      sym_comment,
    STATE(108), 1,
      sym__expression,
    STATE(266), 1,
      sym_assignment,
    STATE(267), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4712] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(67), 1,
      sym_binary_expression,
    STATE(68), 1,
      sym__expression,
    STATE(79), 1,
      sym_comment,
    STATE(266), 1,
      sym_assignment,
    STATE(267), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4788] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(80), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(191), 1,
      sym_binary_expression,
    STATE(381), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4864] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(81), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(382), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4938] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      sym_identifier,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(49), 1,
      sym__expression,
    STATE(82), 1,
      sym_comment,
    STATE(178), 1,
      sym_function_call,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(314), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5008] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(67), 1,
      sym_binary_expression,
    STATE(83), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(266), 1,
      sym_assignment,
    STATE(267), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5084] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(84), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(382), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5158] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(85), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(191), 1,
      sym_binary_expression,
    STATE(381), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5234] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(86), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(382), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5308] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(87), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(403), 1,
      sym__alias_identifier,
    STATE(445), 1,
      sym_term,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5382] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(88), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(382), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5456] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(89), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(382), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5527] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(90), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(366), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5598] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(68), 1,
      sym__expression,
    STATE(91), 1,
      sym_comment,
    STATE(172), 1,
      sym_assignment,
    STATE(194), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5669] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(68), 1,
      sym__expression,
    STATE(92), 1,
      sym_comment,
    STATE(172), 1,
      sym_assignment,
    STATE(244), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5740] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(93), 1,
      sym_comment,
    STATE(108), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(244), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5811] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(94), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(331), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5882] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(95), 1,
      sym_comment,
    STATE(196), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5949] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(96), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(403), 1,
      sym__alias_identifier,
    STATE(449), 1,
      sym_term,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6020] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(97), 1,
      sym_comment,
    STATE(108), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(230), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6091] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(98), 1,
      sym_comment,
    STATE(160), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(191), 1,
      sym_binary_expression,
    STATE(381), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6164] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(99), 1,
      sym_comment,
    STATE(108), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(194), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6235] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(100), 1,
      sym_comment,
    STATE(155), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(230), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6306] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(43), 1,
      sym__double_quote_string,
    STATE(45), 1,
      sym_f_string,
    STATE(68), 1,
      sym__expression,
    STATE(101), 1,
      sym_comment,
    STATE(172), 1,
      sym_assignment,
    STATE(230), 1,
      sym_term,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6377] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(102), 1,
      sym_comment,
    STATE(195), 1,
      sym_binary_expression,
    STATE(220), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6445] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      anon_sym_DASH,
    ACTIONS(362), 1,
      anon_sym_f,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      sym__natural_number,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_AT,
    STATE(103), 1,
      sym_comment,
    STATE(201), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(212), 1,
      sym__expression,
    STATE(225), 1,
      sym_range,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6511] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(104), 1,
      sym_comment,
    STATE(195), 1,
      sym_binary_expression,
    STATE(220), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6579] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(72), 1,
      sym__expression,
    STATE(105), 1,
      sym_comment,
    STATE(271), 1,
      sym__boolean_expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6645] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym__natural_number,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(106), 1,
      sym_comment,
    STATE(107), 1,
      aux_sym_function_call_repeat1,
    STATE(166), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym_literal,
    STATE(177), 1,
      sym__call_parameter,
    STATE(179), 1,
      sym__integer,
    ACTIONS(65), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(269), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(187), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(271), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [6707] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(379), 1,
      anon_sym_DASH,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(385), 1,
      anon_sym_SQUOTE,
    ACTIONS(388), 1,
      sym__natural_number,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(166), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym_literal,
    STATE(177), 1,
      sym__call_parameter,
    STATE(179), 1,
      sym__integer,
    ACTIONS(281), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(376), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(107), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(187), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(283), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [6767] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    ACTIONS(239), 1,
      sym_keyword_or,
    ACTIONS(397), 1,
      anon_sym_EQ,
    STATE(108), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(310), 10,
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
  [6819] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      anon_sym_DASH,
    ACTIONS(362), 1,
      anon_sym_f,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      sym__natural_number,
    STATE(109), 1,
      sym_comment,
    STATE(157), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(212), 1,
      sym__expression,
    STATE(318), 1,
      sym_range,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6885] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(38), 1,
      sym__expression,
    STATE(110), 1,
      sym_comment,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6948] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__expression,
    STATE(111), 1,
      sym_comment,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
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
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(35), 1,
      sym__expression,
    STATE(112), 1,
      sym_comment,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7074] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(34), 1,
      sym__expression,
    STATE(113), 1,
      sym_comment,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7137] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(36), 1,
      sym__expression,
    STATE(114), 1,
      sym_comment,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7200] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(115), 1,
      sym_comment,
    STATE(208), 1,
      sym_binary_expression,
    STATE(233), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7265] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      anon_sym_DASH,
    ACTIONS(362), 1,
      anon_sym_f,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      sym__natural_number,
    STATE(116), 1,
      sym_comment,
    STATE(201), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(211), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7328] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(48), 1,
      sym__expression,
    STATE(117), 1,
      sym_comment,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7391] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(118), 1,
      sym_comment,
    STATE(206), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7454] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      anon_sym_DASH,
    ACTIONS(362), 1,
      anon_sym_f,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      sym__natural_number,
    STATE(119), 1,
      sym_comment,
    STATE(201), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7517] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(120), 1,
      sym_comment,
    STATE(171), 1,
      sym_binary_expression,
    STATE(220), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7582] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      anon_sym_DASH,
    ACTIONS(362), 1,
      anon_sym_f,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      sym__natural_number,
    STATE(121), 1,
      sym_comment,
    STATE(201), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(215), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7645] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(17), 1,
      sym__expression,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(122), 1,
      sym_comment,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7708] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(123), 1,
      sym_comment,
    STATE(203), 1,
      sym_binary_expression,
    STATE(205), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7773] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(124), 1,
      sym_comment,
    STATE(213), 1,
      sym_binary_expression,
    STATE(233), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7838] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(40), 1,
      sym__expression,
    STATE(125), 1,
      sym_comment,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7901] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(126), 1,
      sym_comment,
    STATE(195), 1,
      sym_binary_expression,
    STATE(220), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7966] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      anon_sym_DASH,
    ACTIONS(362), 1,
      anon_sym_f,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      sym__natural_number,
    STATE(127), 1,
      sym_comment,
    STATE(201), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(207), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8029] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      anon_sym_DASH,
    ACTIONS(362), 1,
      anon_sym_f,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      sym__natural_number,
    STATE(17), 1,
      sym__expression,
    STATE(128), 1,
      sym_comment,
    STATE(201), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8092] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(129), 1,
      sym_comment,
    STATE(210), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8155] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(130), 1,
      sym_comment,
    STATE(193), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8218] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(131), 1,
      sym_comment,
    STATE(209), 1,
      sym_binary_expression,
    STATE(233), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8283] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      anon_sym_DASH,
    ACTIONS(362), 1,
      anon_sym_f,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      sym__natural_number,
    STATE(132), 1,
      sym_comment,
    STATE(201), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(219), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8346] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(47), 1,
      sym__expression,
    STATE(133), 1,
      sym_comment,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8409] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      anon_sym_DASH,
    ACTIONS(362), 1,
      anon_sym_f,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      sym__natural_number,
    STATE(134), 1,
      sym_comment,
    STATE(201), 1,
      sym__integer,
    STATE(202), 1,
      sym__double_quote_string,
    STATE(214), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8472] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(171), 1,
      anon_sym_f,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      anon_sym_AT,
    STATE(19), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(135), 1,
      sym_comment,
    STATE(218), 1,
      sym__expression,
    STATE(403), 1,
      sym__alias_identifier,
    ACTIONS(157), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 7,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8535] = 5,
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
    ACTIONS(403), 14,
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
      sym_keyword_let,
      sym_identifier,
  [8570] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(409), 1,
      sym_keyword_filter,
    ACTIONS(411), 1,
      sym_keyword_derive,
    ACTIONS(413), 1,
      sym_keyword_group,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(417), 1,
      sym_keyword_sort,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(421), 1,
      sym_keyword_join,
    ACTIONS(423), 1,
      sym_keyword_select,
    STATE(137), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym_transforms_repeat1,
    STATE(315), 1,
      sym_transforms,
    ACTIONS(407), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(264), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [8623] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_comment,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(87), 14,
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
      sym_keyword_let,
      sym_identifier,
  [8655] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(139), 1,
      sym_comment,
    ACTIONS(87), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(85), 18,
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
  [8687] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym_comment,
    ACTIONS(425), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(427), 14,
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
      sym_keyword_let,
      sym_identifier,
  [8719] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(81), 14,
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
      sym_keyword_let,
      sym_identifier,
  [8751] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(409), 1,
      sym_keyword_filter,
    ACTIONS(411), 1,
      sym_keyword_derive,
    ACTIONS(413), 1,
      sym_keyword_group,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(417), 1,
      sym_keyword_sort,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(421), 1,
      sym_keyword_join,
    ACTIONS(423), 1,
      sym_keyword_select,
    STATE(142), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(429), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(264), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [8801] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(143), 1,
      sym_comment,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(151), 14,
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
      sym_keyword_let,
      sym_identifier,
  [8833] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(433), 1,
      sym_keyword_filter,
    ACTIONS(436), 1,
      sym_keyword_derive,
    ACTIONS(439), 1,
      sym_keyword_group,
    ACTIONS(442), 1,
      sym_keyword_aggregate,
    ACTIONS(445), 1,
      sym_keyword_sort,
    ACTIONS(448), 1,
      sym_keyword_take,
    ACTIONS(451), 1,
      sym_keyword_join,
    ACTIONS(454), 1,
      sym_keyword_select,
    STATE(144), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(431), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(264), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [8881] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(145), 1,
      sym_comment,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(127), 14,
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
      sym_keyword_let,
      sym_identifier,
  [8913] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(146), 1,
      sym_comment,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(141), 14,
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
      sym_keyword_let,
      sym_identifier,
  [8945] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(147), 1,
      sym_comment,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(103), 14,
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
      sym_keyword_let,
      sym_identifier,
  [8977] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(148), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 18,
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
  [9009] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(149), 1,
      sym_comment,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(91), 14,
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
      sym_keyword_let,
      sym_identifier,
  [9041] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_comment,
    ACTIONS(139), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(141), 14,
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
      sym_keyword_let,
      sym_identifier,
  [9073] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(151), 1,
      sym_comment,
    ACTIONS(457), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(459), 14,
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
      sym_keyword_let,
      sym_identifier,
  [9105] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(152), 1,
      sym_comment,
    ACTIONS(401), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(403), 14,
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
      sym_keyword_let,
      sym_identifier,
  [9137] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(153), 1,
      sym_comment,
    ACTIONS(461), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(463), 14,
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
      sym_keyword_let,
      sym_identifier,
  [9169] = 17,
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
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_function_call_repeat1,
    STATE(245), 1,
      sym__double_quote_string,
    STATE(254), 1,
      sym_literal,
    STATE(255), 1,
      sym__call_parameter,
    STATE(272), 1,
      sym__integer,
    ACTIONS(209), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(242), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(271), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [9226] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    ACTIONS(239), 1,
      sym_keyword_or,
    ACTIONS(465), 1,
      anon_sym_EQ,
    STATE(155), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(310), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [9273] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(470), 1,
      anon_sym_DASH,
    ACTIONS(473), 1,
      anon_sym_DQUOTE,
    ACTIONS(476), 1,
      anon_sym_SQUOTE,
    ACTIONS(479), 1,
      sym__natural_number,
    ACTIONS(482), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(245), 1,
      sym__double_quote_string,
    STATE(254), 1,
      sym_literal,
    STATE(255), 1,
      sym__call_parameter,
    STATE(272), 1,
      sym__integer,
    ACTIONS(467), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(156), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(242), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(283), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [9328] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(490), 1,
      anon_sym_DOT,
    STATE(157), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(488), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(139), 13,
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
  [9363] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      anon_sym_COLON,
    STATE(158), 1,
      sym_comment,
    ACTIONS(401), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(403), 11,
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
      sym_identifier,
  [9395] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    ACTIONS(409), 1,
      sym_keyword_filter,
    ACTIONS(413), 1,
      sym_keyword_group,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(494), 1,
      sym_keyword_derive,
    ACTIONS(496), 1,
      sym_keyword_sort,
    ACTIONS(498), 1,
      sym_keyword_join,
    ACTIONS(500), 1,
      sym_keyword_select,
    STATE(159), 1,
      sym_comment,
    STATE(169), 1,
      aux_sym_transforms_repeat1,
    STATE(315), 1,
      sym_transforms,
    STATE(264), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [9445] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    ACTIONS(239), 1,
      sym_keyword_or,
    ACTIONS(502), 1,
      anon_sym_EQ,
    STATE(160), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(310), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9491] = 16,
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
    STATE(161), 1,
      sym_comment,
    STATE(162), 1,
      aux_sym_function_call_repeat1,
    STATE(282), 1,
      sym__double_quote_string,
    STATE(290), 1,
      sym__call_parameter,
    STATE(291), 1,
      sym_literal,
    STATE(293), 1,
      sym__integer,
    ACTIONS(223), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(283), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(269), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9545] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      anon_sym_SQUOTE,
    ACTIONS(516), 1,
      sym__natural_number,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(522), 1,
      sym_identifier,
    STATE(282), 1,
      sym__double_quote_string,
    STATE(290), 1,
      sym__call_parameter,
    STATE(291), 1,
      sym_literal,
    STATE(293), 1,
      sym__integer,
    ACTIONS(504), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(162), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(283), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(281), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9597] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(425), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(427), 11,
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
      sym_identifier,
  [9626] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_comment,
    ACTIONS(525), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [9653] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    STATE(350), 1,
      aux_sym_derives_repeat1,
    ACTIONS(155), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 14,
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
  [9684] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(457), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(459), 11,
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
      sym_identifier,
  [9713] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    ACTIONS(433), 1,
      sym_keyword_filter,
    ACTIONS(439), 1,
      sym_keyword_group,
    ACTIONS(442), 1,
      sym_keyword_aggregate,
    ACTIONS(448), 1,
      sym_keyword_take,
    ACTIONS(527), 1,
      sym_keyword_derive,
    ACTIONS(530), 1,
      sym_keyword_sort,
    ACTIONS(533), 1,
      sym_keyword_join,
    ACTIONS(536), 1,
      sym_keyword_select,
    STATE(167), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(264), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [9758] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    STATE(352), 1,
      aux_sym_derives_repeat1,
    ACTIONS(115), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 14,
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
  [9789] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(409), 1,
      sym_keyword_filter,
    ACTIONS(413), 1,
      sym_keyword_group,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(494), 1,
      sym_keyword_derive,
    ACTIONS(496), 1,
      sym_keyword_sort,
    ACTIONS(498), 1,
      sym_keyword_join,
    ACTIONS(500), 1,
      sym_keyword_select,
    STATE(167), 1,
      aux_sym_transforms_repeat1,
    STATE(169), 1,
      sym_comment,
    STATE(264), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [9836] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(170), 1,
      sym_comment,
    ACTIONS(125), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(127), 11,
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
      sym_identifier,
  [9865] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(171), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(539), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    ACTIONS(113), 12,
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
  [9896] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(172), 1,
      sym_comment,
    ACTIONS(310), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [9923] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment,
    ACTIONS(89), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(91), 11,
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
      sym_identifier,
  [9952] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(174), 1,
      sym_comment,
    ACTIONS(541), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [9979] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym_comment,
    ACTIONS(149), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(151), 11,
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
      sym_identifier,
  [10008] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(176), 1,
      sym_comment,
    ACTIONS(401), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(403), 11,
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
      sym_identifier,
  [10037] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(177), 1,
      sym_comment,
    ACTIONS(461), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(463), 11,
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
      sym_identifier,
  [10066] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(178), 1,
      sym_comment,
    ACTIONS(543), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [10093] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(179), 1,
      sym_comment,
    ACTIONS(139), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(141), 11,
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
      sym_identifier,
  [10122] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(180), 1,
      sym_comment,
    ACTIONS(85), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(87), 11,
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
      sym_identifier,
  [10151] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(545), 1,
      anon_sym_COLON,
    ACTIONS(547), 1,
      anon_sym_DOT,
    STATE(181), 1,
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
  [10184] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(182), 1,
      sym_comment,
    ACTIONS(79), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(81), 11,
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
      sym_identifier,
  [10213] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym_comment,
    STATE(332), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(115), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 12,
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
  [10248] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(553), 1,
      anon_sym_COLON,
    ACTIONS(555), 1,
      anon_sym_DOT,
    STATE(184), 1,
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
  [10281] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(185), 1,
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
  [10308] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(186), 1,
      sym_comment,
    ACTIONS(101), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(103), 11,
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
      sym_identifier,
  [10337] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(187), 1,
      sym_comment,
    ACTIONS(139), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(141), 11,
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
      sym_identifier,
  [10366] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(188), 1,
      sym_comment,
    ACTIONS(559), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(115), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 12,
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
  [10396] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      sym_comment,
    STATE(326), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 12,
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
  [10430] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      anon_sym_DOT,
    STATE(190), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 14,
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
  [10460] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(191), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 14,
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
  [10488] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(192), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 14,
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
  [10516] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(193), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(567), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [10557] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      anon_sym_LBRACK,
    STATE(194), 1,
      sym_comment,
    STATE(238), 1,
      sym__self_join,
    STATE(262), 1,
      sym_conditions,
    ACTIONS(569), 13,
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
  [10588] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(195), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(573), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(113), 12,
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
  [10617] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(196), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(575), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [10658] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(197), 1,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 13,
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
  [10685] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_comment,
    STATE(238), 1,
      sym__self_join,
    STATE(258), 1,
      sym_conditions,
    ACTIONS(577), 13,
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
  [10716] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(579), 1,
      anon_sym_T,
    STATE(199), 1,
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
  [10745] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      anon_sym_DOT,
    STATE(200), 1,
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
  [10774] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(490), 1,
      anon_sym_DOT,
    STATE(201), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 13,
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
  [10803] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(583), 1,
      anon_sym_DOT,
    STATE(202), 1,
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
  [10832] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(203), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 13,
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
  [10858] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(204), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(105), 11,
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
  [10886] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(587), 1,
      sym_keyword_and,
    ACTIONS(589), 1,
      sym_keyword_or,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [10926] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    STATE(206), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [10962] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(597), 1,
      anon_sym_PIPE,
    ACTIONS(601), 1,
      anon_sym_QMARK_QMARK,
    STATE(207), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(595), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(599), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(593), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [10998] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 12,
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
  [11026] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 12,
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
  [11054] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    ACTIONS(239), 1,
      sym_keyword_or,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11094] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(597), 1,
      anon_sym_PIPE,
    STATE(211), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(595), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(105), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [11126] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(597), 1,
      anon_sym_PIPE,
    ACTIONS(601), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(609), 1,
      sym_keyword_and,
    ACTIONS(611), 1,
      sym_keyword_or,
    ACTIONS(613), 1,
      anon_sym_DOT_DOT,
    STATE(212), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(595), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(599), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(593), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11166] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 12,
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
  [11194] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(597), 1,
      anon_sym_PIPE,
    ACTIONS(601), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(609), 1,
      sym_keyword_and,
    STATE(214), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(595), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(599), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(593), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11232] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(215), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(595), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(105), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [11262] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(587), 1,
      sym_keyword_and,
    ACTIONS(589), 1,
      sym_keyword_or,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11302] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    ACTIONS(239), 1,
      sym_keyword_or,
    ACTIONS(502), 1,
      anon_sym_EQ,
    STATE(217), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11342] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    STATE(218), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11380] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(597), 1,
      anon_sym_PIPE,
    STATE(219), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(595), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(599), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(593), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11414] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(205), 1,
      sym_keyword_and,
    ACTIONS(239), 1,
      sym_keyword_or,
    STATE(220), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11451] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(221), 1,
      sym_comment,
    ACTIONS(619), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [11474] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(222), 1,
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
  [11497] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(223), 1,
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
  [11520] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(224), 1,
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
  [11543] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(225), 1,
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
  [11566] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(629), 1,
      anon_sym_COLON,
    STATE(226), 1,
      sym_comment,
    ACTIONS(401), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(403), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [11593] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(227), 1,
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
  [11616] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(228), 1,
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
  [11639] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(229), 1,
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
  [11662] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(230), 1,
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
  [11685] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(231), 1,
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
  [11708] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(232), 1,
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
  [11731] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(587), 1,
      sym_keyword_and,
    ACTIONS(589), 1,
      sym_keyword_or,
    STATE(233), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(191), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(197), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [11768] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(234), 1,
      sym_comment,
    ACTIONS(643), 13,
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
  [11790] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(235), 1,
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
  [11812] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(236), 1,
      sym_comment,
    ACTIONS(89), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(91), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [11836] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(237), 1,
      sym_comment,
    ACTIONS(125), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(127), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [11860] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(238), 1,
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
  [11882] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(239), 1,
      sym_comment,
    ACTIONS(149), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(151), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [11906] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(240), 1,
      sym_comment,
    ACTIONS(79), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(81), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [11930] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(241), 1,
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
  [11952] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(242), 1,
      sym_comment,
    ACTIONS(139), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(141), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [11976] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(243), 1,
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
  [11998] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(244), 1,
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
  [12020] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(245), 1,
      sym_comment,
    ACTIONS(457), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(459), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [12044] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(246), 1,
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
  [12066] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(247), 1,
      sym_comment,
    ACTIONS(657), 13,
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
  [12088] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(248), 1,
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
  [12110] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(249), 1,
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
  [12132] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(250), 1,
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
  [12154] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(251), 1,
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
  [12176] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(252), 1,
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
  [12198] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym_comment,
    ACTIONS(425), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(427), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [12222] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(254), 1,
      sym_comment,
    ACTIONS(401), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(403), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [12246] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(255), 1,
      sym_comment,
    ACTIONS(461), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(463), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [12270] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(256), 1,
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
  [12292] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(257), 1,
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
  [12314] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(258), 1,
      sym_comment,
    ACTIONS(569), 13,
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
  [12336] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(259), 1,
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
  [12358] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(260), 1,
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
  [12380] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(261), 1,
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
  [12402] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(262), 1,
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
  [12424] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(263), 1,
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
  [12446] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(264), 1,
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
  [12468] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(265), 1,
      sym_comment,
    ACTIONS(101), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(103), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [12492] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(266), 1,
      sym_comment,
    ACTIONS(310), 13,
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
  [12514] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(267), 1,
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
  [12536] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(268), 1,
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
  [12558] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(269), 1,
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
  [12580] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(691), 1,
      anon_sym_COLON,
    STATE(270), 1,
      sym_comment,
    ACTIONS(403), 3,
      sym_keyword_true,
      sym_keyword_false,
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
  [12606] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(271), 1,
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
  [12628] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(272), 1,
      sym_comment,
    ACTIONS(139), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(141), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [12652] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(273), 1,
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
  [12674] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(274), 1,
      sym_comment,
    ACTIONS(85), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(87), 7,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
  [12698] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(275), 1,
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
  [12720] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym_comment,
    ACTIONS(699), 13,
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
  [12742] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(277), 1,
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
  [12764] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(278), 1,
      sym_comment,
    ACTIONS(127), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(125), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12787] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(279), 1,
      sym_comment,
    ACTIONS(91), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(89), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12810] = 12,
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
    STATE(280), 1,
      sym_comment,
    STATE(281), 1,
      sym_literal,
    STATE(282), 1,
      sym__double_quote_string,
    STATE(293), 1,
      sym__integer,
    ACTIONS(703), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(283), 2,
      sym__literal_string,
      sym__decimal_number,
  [12849] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(281), 1,
      sym_comment,
    ACTIONS(427), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(425), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12872] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(282), 1,
      sym_comment,
    ACTIONS(459), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(457), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12895] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(283), 1,
      sym_comment,
    ACTIONS(141), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(139), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12918] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(284), 1,
      sym_comment,
    ACTIONS(81), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(79), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12941] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(285), 1,
      sym_comment,
    ACTIONS(151), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(149), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [12964] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym__natural_number,
    ACTIONS(75), 1,
      anon_sym_DOT,
    STATE(163), 1,
      sym_literal,
    STATE(166), 1,
      sym__double_quote_string,
    STATE(179), 1,
      sym__integer,
    STATE(286), 1,
      sym_comment,
    ACTIONS(705), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(187), 2,
      sym__literal_string,
      sym__decimal_number,
  [13003] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(287), 1,
      sym_comment,
    ACTIONS(103), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(101), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [13026] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(709), 1,
      anon_sym_DASH,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    ACTIONS(713), 1,
      anon_sym_SQUOTE,
    ACTIONS(715), 1,
      sym__natural_number,
    ACTIONS(717), 1,
      anon_sym_DOT,
    STATE(288), 1,
      sym_comment,
    STATE(356), 1,
      sym__integer,
    STATE(372), 1,
      sym_literal,
    STATE(374), 1,
      sym__double_quote_string,
    ACTIONS(707), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(371), 2,
      sym__literal_string,
      sym__decimal_number,
  [13065] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(289), 1,
      sym_comment,
    ACTIONS(87), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(85), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [13088] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(290), 1,
      sym_comment,
    ACTIONS(463), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(461), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [13111] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(291), 1,
      sym_comment,
    ACTIONS(403), 3,
      sym_keyword_true,
      sym_keyword_false,
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
  [13134] = 12,
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
      sym_literal,
    STATE(146), 1,
      sym__integer,
    STATE(151), 1,
      sym__double_quote_string,
    STATE(292), 1,
      sym_comment,
    ACTIONS(719), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(150), 2,
      sym__literal_string,
      sym__decimal_number,
  [13173] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(293), 1,
      sym_comment,
    ACTIONS(141), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(139), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [13196] = 12,
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
    STATE(245), 1,
      sym__double_quote_string,
    STATE(253), 1,
      sym_literal,
    STATE(272), 1,
      sym__integer,
    STATE(294), 1,
      sym_comment,
    ACTIONS(721), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(242), 2,
      sym__literal_string,
      sym__decimal_number,
  [13235] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(295), 1,
      sym_comment,
    ACTIONS(723), 4,
      sym_keyword_true,
      sym_keyword_false,
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
  [13257] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(296), 1,
      sym_comment,
    ACTIONS(727), 4,
      sym_keyword_true,
      sym_keyword_false,
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
  [13279] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(297), 1,
      sym_comment,
    ACTIONS(723), 4,
      sym_keyword_true,
      sym_keyword_false,
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
  [13301] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym_group_repeat2,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13332] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym_group_repeat2,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13363] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym_group_repeat2,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13394] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym_group_repeat2,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13425] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      sym_comment,
    STATE(303), 1,
      aux_sym_group_repeat2,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13456] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(745), 1,
      sym_keyword_aggregate,
    ACTIONS(748), 1,
      sym_keyword_sort,
    ACTIONS(751), 1,
      sym_keyword_take,
    ACTIONS(754), 1,
      sym_keyword_window,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(303), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13485] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    STATE(299), 1,
      aux_sym_group_repeat2,
    STATE(304), 1,
      sym_comment,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13513] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    STATE(302), 1,
      aux_sym_group_repeat2,
    STATE(305), 1,
      sym_comment,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13541] = 9,
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
    STATE(137), 1,
      sym_from,
    STATE(306), 1,
      sym_comment,
    STATE(310), 1,
      aux_sym_program_repeat1,
    STATE(322), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [13571] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    STATE(301), 1,
      aux_sym_group_repeat2,
    STATE(307), 1,
      sym_comment,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13599] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    STATE(298), 1,
      aux_sym_group_repeat2,
    STATE(308), 1,
      sym_comment,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13627] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      sym_keyword_aggregate,
    ACTIONS(419), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_sort,
    ACTIONS(733), 1,
      sym_keyword_window,
    STATE(300), 1,
      aux_sym_group_repeat2,
    STATE(309), 1,
      sym_comment,
    STATE(314), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [13655] = 8,
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
    STATE(137), 1,
      sym_from,
    STATE(310), 2,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(322), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [13683] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    STATE(311), 1,
      sym_comment,
    STATE(312), 1,
      aux_sym_window_definitions_repeat1,
    STATE(320), 1,
      sym__window_definition,
    ACTIONS(772), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [13704] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(779), 1,
      anon_sym_LPAREN,
    STATE(320), 1,
      sym__window_definition,
    STATE(312), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(776), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [13723] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(311), 1,
      aux_sym_window_definitions_repeat1,
    STATE(313), 1,
      sym_comment,
    STATE(320), 1,
      sym__window_definition,
    STATE(456), 1,
      sym_window_definitions,
    ACTIONS(772), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [13744] = 3,
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
  [13758] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(315), 1,
      sym_comment,
    ACTIONS(783), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      anon_sym_RPAREN,
  [13772] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(316), 1,
      sym_comment,
    ACTIONS(785), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [13786] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(317), 1,
      sym_comment,
    ACTIONS(787), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [13799] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(318), 1,
      sym_comment,
    ACTIONS(789), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [13812] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(319), 1,
      sym_comment,
    ACTIONS(791), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [13825] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(320), 1,
      sym_comment,
    ACTIONS(793), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [13838] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(795), 1,
      anon_sym_DASH_GT,
    ACTIONS(797), 1,
      sym_identifier,
    STATE(373), 1,
      sym_parameter,
    STATE(321), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [13855] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(322), 1,
      sym_comment,
    ACTIONS(800), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [13868] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(802), 1,
      aux_sym__date_token1,
    ACTIONS(804), 1,
      aux_sym__time_token1,
    STATE(18), 1,
      sym__time,
    STATE(199), 1,
      sym__date,
    STATE(323), 1,
      sym_comment,
  [13887] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(802), 1,
      aux_sym__date_token1,
    ACTIONS(806), 1,
      aux_sym__time_token1,
    STATE(18), 1,
      sym__time,
    STATE(25), 1,
      sym__date,
    STATE(324), 1,
      sym_comment,
  [13906] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      anon_sym_DASH_GT,
    ACTIONS(810), 1,
      sym_identifier,
    STATE(321), 1,
      aux_sym_function_definition_repeat1,
    STATE(325), 1,
      sym_comment,
    STATE(373), 1,
      sym_parameter,
  [13925] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    STATE(326), 1,
      sym_comment,
    STATE(337), 1,
      aux_sym_conditions_repeat1,
  [13941] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    ACTIONS(816), 1,
      anon_sym_RBRACK,
    STATE(327), 1,
      sym_comment,
    STATE(352), 1,
      aux_sym_derives_repeat1,
  [13957] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    ACTIONS(821), 1,
      anon_sym_RBRACK,
    STATE(328), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [13971] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(823), 1,
      sym_keyword_from,
    STATE(159), 1,
      sym_from,
    STATE(329), 1,
      sym_comment,
    STATE(393), 1,
      sym_pipeline,
  [13987] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      sym_comment,
    STATE(343), 1,
      aux_sym_sorts_repeat1,
  [14003] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      sym_comment,
    STATE(339), 1,
      aux_sym_sorts_repeat1,
  [14019] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    ACTIONS(827), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      sym_comment,
    STATE(338), 1,
      aux_sym_aggregate_repeat1,
  [14035] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    ACTIONS(831), 1,
      anon_sym_RBRACK,
    STATE(330), 1,
      aux_sym_sorts_repeat1,
    STATE(333), 1,
      sym_comment,
  [14051] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(833), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      sym_comment,
    STATE(349), 1,
      aux_sym_group_repeat1,
  [14067] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(839), 1,
      anon_sym_COLON,
    STATE(335), 1,
      sym_comment,
    ACTIONS(837), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14081] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(841), 1,
      anon_sym_DASH,
    STATE(14), 1,
      sym__integer,
    STATE(336), 1,
      sym_comment,
  [14097] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
    ACTIONS(843), 1,
      anon_sym_COMMA,
    STATE(337), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [14111] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(559), 1,
      anon_sym_RBRACK,
    ACTIONS(846), 1,
      anon_sym_COMMA,
    STATE(338), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [14125] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      sym_comment,
    STATE(343), 1,
      aux_sym_sorts_repeat1,
  [14141] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(399), 1,
      sym__natural_number,
    ACTIONS(851), 1,
      anon_sym_DASH,
    STATE(7), 1,
      sym__integer,
    STATE(340), 1,
      sym_comment,
  [14157] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(856), 1,
      anon_sym_RBRACK,
    STATE(341), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [14171] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(399), 1,
      sym__natural_number,
    ACTIONS(851), 1,
      anon_sym_DASH,
    STATE(14), 1,
      sym__integer,
    STATE(342), 1,
      sym_comment,
  [14187] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    ACTIONS(861), 1,
      anon_sym_RBRACK,
    STATE(343), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [14201] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(344), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [14213] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_group_repeat1,
    STATE(345), 1,
      sym_comment,
  [14229] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(399), 1,
      sym__natural_number,
    ACTIONS(851), 1,
      anon_sym_DASH,
    STATE(6), 1,
      sym__integer,
    STATE(346), 1,
      sym_comment,
  [14245] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(865), 1,
      sym__natural_number,
    STATE(347), 1,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14259] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(332), 1,
      aux_sym_aggregate_repeat1,
    STATE(348), 1,
      sym_comment,
  [14275] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    ACTIONS(867), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_group_repeat1,
    STATE(349), 1,
      sym_comment,
  [14291] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(869), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      aux_sym_derives_repeat1,
    STATE(350), 1,
      sym_comment,
  [14307] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(841), 1,
      anon_sym_DASH,
    STATE(7), 1,
      sym__integer,
    STATE(351), 1,
      sym_comment,
  [14323] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_derives_repeat1,
    STATE(352), 1,
      sym_comment,
  [14339] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(875), 1,
      anon_sym_COMMA,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      aux_sym_group_repeat1,
    STATE(353), 1,
      sym_comment,
  [14355] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(810), 1,
      sym_identifier,
    STATE(325), 1,
      aux_sym_function_definition_repeat1,
    STATE(354), 1,
      sym_comment,
    STATE(373), 1,
      sym_parameter,
  [14371] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(355), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [14383] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      anon_sym_DOT,
    STATE(356), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14397] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      sym__natural_number,
    ACTIONS(841), 1,
      anon_sym_DASH,
    STATE(6), 1,
      sym__integer,
    STATE(357), 1,
      sym_comment,
  [14413] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(358), 1,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14424] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(881), 1,
      aux_sym__time_token1,
    STATE(3), 1,
      sym__time,
    STATE(359), 1,
      sym_comment,
  [14437] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(883), 1,
      sym_keyword_derive,
    STATE(360), 1,
      sym_comment,
    STATE(383), 1,
      sym_derives,
  [14450] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(885), 1,
      sym__natural_number,
    ACTIONS(887), 1,
      anon_sym_DOT,
    STATE(361), 1,
      sym_comment,
  [14463] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(362), 1,
      sym_comment,
  [14476] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(889), 1,
      sym__natural_number,
    ACTIONS(891), 1,
      anon_sym_DOT,
    STATE(363), 1,
      sym_comment,
  [14489] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      sym__natural_number,
    ACTIONS(895), 1,
      anon_sym_DOT,
    STATE(364), 1,
      sym_comment,
  [14502] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(365), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14513] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(366), 1,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14524] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(367), 1,
      sym_comment,
    ACTIONS(861), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14535] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(899), 1,
      aux_sym__time_token1,
    STATE(3), 1,
      sym__time,
    STATE(368), 1,
      sym_comment,
  [14548] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(369), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14559] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(370), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14570] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(371), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14581] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(372), 1,
      sym_comment,
    ACTIONS(901), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14592] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(373), 1,
      sym_comment,
    ACTIONS(903), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14603] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(374), 1,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [14614] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(375), 1,
      sym_comment,
    ACTIONS(559), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14625] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(905), 1,
      sym__natural_number,
    ACTIONS(907), 1,
      anon_sym_DOT,
    STATE(376), 1,
      sym_comment,
  [14638] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym__double_quote_string,
    STATE(377), 1,
      sym_comment,
  [14651] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      sym__natural_number,
    ACTIONS(911), 1,
      anon_sym_DOT,
    STATE(378), 1,
      sym_comment,
  [14664] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_DOT,
    ACTIONS(913), 1,
      sym__natural_number,
    STATE(379), 1,
      sym_comment,
  [14677] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(915), 1,
      sym__natural_number,
    ACTIONS(917), 1,
      anon_sym_DOT,
    STATE(380), 1,
      sym_comment,
  [14690] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(381), 1,
      sym_comment,
    ACTIONS(856), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14701] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(382), 1,
      sym_comment,
    ACTIONS(821), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14712] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      sym_comment,
  [14722] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(921), 1,
      anon_sym_EQ,
    STATE(384), 1,
      sym_comment,
  [14732] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      anon_sym_LBRACK,
    STATE(385), 1,
      sym_comment,
  [14742] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      anon_sym_LPAREN,
    STATE(386), 1,
      sym_comment,
  [14752] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(835), 1,
      anon_sym_RBRACK,
    STATE(387), 1,
      sym_comment,
  [14762] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(877), 1,
      anon_sym_RBRACK,
    STATE(388), 1,
      sym_comment,
  [14772] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      sym__natural_number,
    STATE(389), 1,
      sym_comment,
  [14782] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(390), 1,
      sym_comment,
  [14792] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      sym_comment,
  [14802] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(929), 1,
      anon_sym_DASH,
    STATE(392), 1,
      sym_comment,
  [14812] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      sym_comment,
  [14822] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    STATE(394), 1,
      sym_comment,
  [14832] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(937), 1,
      aux_sym_comment_token1,
    STATE(395), 1,
      sym_comment,
  [14842] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(913), 1,
      sym__natural_number,
    STATE(396), 1,
      sym_comment,
  [14852] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(939), 1,
      sym__natural_number,
    STATE(397), 1,
      sym_comment,
  [14862] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(831), 1,
      anon_sym_RBRACK,
    STATE(398), 1,
      sym_comment,
  [14872] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(941), 1,
      sym__natural_number,
    STATE(399), 1,
      sym_comment,
  [14882] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(943), 1,
      anon_sym_DQUOTE,
    STATE(400), 1,
      sym_comment,
  [14892] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(945), 1,
      anon_sym_SQUOTE,
    STATE(401), 1,
      sym_comment,
  [14902] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(563), 1,
      anon_sym_RBRACK,
    STATE(402), 1,
      sym_comment,
  [14912] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(947), 1,
      anon_sym_DOT,
    STATE(403), 1,
      sym_comment,
  [14922] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(949), 1,
      aux_sym__date_token2,
    STATE(404), 1,
      sym_comment,
  [14932] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(951), 1,
      aux_sym__date_token2,
    STATE(405), 1,
      sym_comment,
  [14942] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(725), 1,
      aux_sym__date_token2,
    STATE(406), 1,
      sym_comment,
  [14952] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      sym__natural_number,
    STATE(407), 1,
      sym_comment,
  [14962] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(953), 1,
      sym__natural_number,
    STATE(408), 1,
      sym_comment,
  [14972] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(865), 1,
      sym__natural_number,
    STATE(409), 1,
      sym_comment,
  [14982] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(955), 1,
      anon_sym_DQUOTE,
    STATE(410), 1,
      sym_comment,
  [14992] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(957), 1,
      anon_sym_SQUOTE,
    STATE(411), 1,
      sym_comment,
  [15002] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(959), 1,
      anon_sym_DQUOTE,
    STATE(412), 1,
      sym_comment,
  [15012] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(961), 1,
      anon_sym_SQUOTE,
    STATE(413), 1,
      sym_comment,
  [15022] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(963), 1,
      aux_sym__date_token2,
    STATE(414), 1,
      sym_comment,
  [15032] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(965), 1,
      sym__natural_number,
    STATE(415), 1,
      sym_comment,
  [15042] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(967), 1,
      sym__natural_number,
    STATE(416), 1,
      sym_comment,
  [15052] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(969), 1,
      anon_sym_DQUOTE,
    STATE(417), 1,
      sym_comment,
  [15062] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(971), 1,
      anon_sym_SQUOTE,
    STATE(418), 1,
      sym_comment,
  [15072] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(973), 1,
      aux_sym__date_token2,
    STATE(419), 1,
      sym_comment,
  [15082] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(975), 1,
      aux_sym__date_token2,
    STATE(420), 1,
      sym_comment,
  [15092] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(977), 1,
      anon_sym_DASH,
    STATE(421), 1,
      sym_comment,
  [15102] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(979), 1,
      sym__natural_number,
    STATE(422), 1,
      sym_comment,
  [15112] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(981), 1,
      sym__natural_number,
    STATE(423), 1,
      sym_comment,
  [15122] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      anon_sym_DQUOTE,
    STATE(424), 1,
      sym_comment,
  [15132] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(985), 1,
      anon_sym_SQUOTE,
    STATE(425), 1,
      sym_comment,
  [15142] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(987), 1,
      sym_identifier,
    STATE(426), 1,
      sym_comment,
  [15152] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(989), 1,
      sym__natural_number,
    STATE(427), 1,
      sym_comment,
  [15162] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(991), 1,
      sym__natural_number,
    STATE(428), 1,
      sym_comment,
  [15172] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(993), 1,
      anon_sym_DQUOTE,
    STATE(429), 1,
      sym_comment,
  [15182] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(995), 1,
      anon_sym_SQUOTE,
    STATE(430), 1,
      sym_comment,
  [15192] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(997), 1,
      aux_sym__date_token2,
    STATE(431), 1,
      sym_comment,
  [15202] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    STATE(432), 1,
      sym_comment,
  [15212] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      aux_sym__double_quote_string_token1,
    STATE(433), 1,
      sym_comment,
  [15222] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(1003), 1,
      aux_sym__literal_string_token1,
    STATE(434), 1,
      sym_comment,
  [15232] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1005), 1,
      aux_sym__date_token2,
    STATE(435), 1,
      sym_comment,
  [15242] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1007), 1,
      sym__natural_number,
    STATE(436), 1,
      sym_comment,
  [15252] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(1009), 1,
      aux_sym__literal_string_token1,
    STATE(437), 1,
      sym_comment,
  [15262] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(1011), 1,
      aux_sym__double_quote_string_token1,
    STATE(438), 1,
      sym_comment,
  [15272] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1013), 1,
      anon_sym_LPAREN,
    STATE(439), 1,
      sym_comment,
  [15282] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(816), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_comment,
  [15292] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
    STATE(441), 1,
      sym_comment,
  [15302] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
    STATE(442), 1,
      sym_comment,
  [15312] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(1019), 1,
      aux_sym__double_quote_string_token1,
    STATE(443), 1,
      sym_comment,
  [15322] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(1021), 1,
      aux_sym__literal_string_token1,
    STATE(444), 1,
      sym_comment,
  [15332] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1023), 1,
      anon_sym_LPAREN,
    STATE(445), 1,
      sym_comment,
  [15342] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1025), 1,
      anon_sym_COLON,
    STATE(446), 1,
      sym_comment,
  [15352] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      aux_sym__double_quote_string_token1,
    STATE(447), 1,
      sym_comment,
  [15362] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(1029), 1,
      aux_sym__literal_string_token1,
    STATE(448), 1,
      sym_comment,
  [15372] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1031), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_comment,
  [15382] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(1033), 1,
      aux_sym__double_quote_string_token1,
    STATE(450), 1,
      sym_comment,
  [15392] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(1035), 1,
      aux_sym__literal_string_token1,
    STATE(451), 1,
      sym_comment,
  [15402] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(1037), 1,
      aux_sym__double_quote_string_token1,
    STATE(452), 1,
      sym_comment,
  [15412] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(1039), 1,
      aux_sym__literal_string_token1,
    STATE(453), 1,
      sym_comment,
  [15422] = 3,
    ACTIONS(935), 1,
      anon_sym_POUND,
    ACTIONS(1041), 1,
      aux_sym__double_quote_string_token1,
    STATE(454), 1,
      sym_comment,
  [15432] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1043), 1,
      ts_builtin_sym_end,
    STATE(455), 1,
      sym_comment,
  [15442] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1045), 1,
      anon_sym_LPAREN,
    STATE(456), 1,
      sym_comment,
  [15452] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1047), 1,
      anon_sym_COLON,
    STATE(457), 1,
      sym_comment,
  [15462] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1049), 1,
      sym_identifier,
    STATE(458), 1,
      sym_comment,
  [15472] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1051), 1,
      sym_identifier,
    STATE(459), 1,
      sym_comment,
  [15482] = 1,
    ACTIONS(1053), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 137,
  [SMALL_STATE(5)] = 191,
  [SMALL_STATE(6)] = 245,
  [SMALL_STATE(7)] = 294,
  [SMALL_STATE(8)] = 343,
  [SMALL_STATE(9)] = 394,
  [SMALL_STATE(10)] = 443,
  [SMALL_STATE(11)] = 518,
  [SMALL_STATE(12)] = 569,
  [SMALL_STATE(13)] = 618,
  [SMALL_STATE(14)] = 667,
  [SMALL_STATE(15)] = 716,
  [SMALL_STATE(16)] = 764,
  [SMALL_STATE(17)] = 812,
  [SMALL_STATE(18)] = 860,
  [SMALL_STATE(19)] = 908,
  [SMALL_STATE(20)] = 958,
  [SMALL_STATE(21)] = 1008,
  [SMALL_STATE(22)] = 1056,
  [SMALL_STATE(23)] = 1104,
  [SMALL_STATE(24)] = 1152,
  [SMALL_STATE(25)] = 1200,
  [SMALL_STATE(26)] = 1250,
  [SMALL_STATE(27)] = 1300,
  [SMALL_STATE(28)] = 1348,
  [SMALL_STATE(29)] = 1396,
  [SMALL_STATE(30)] = 1444,
  [SMALL_STATE(31)] = 1492,
  [SMALL_STATE(32)] = 1540,
  [SMALL_STATE(33)] = 1628,
  [SMALL_STATE(34)] = 1676,
  [SMALL_STATE(35)] = 1727,
  [SMALL_STATE(36)] = 1784,
  [SMALL_STATE(37)] = 1833,
  [SMALL_STATE(38)] = 1918,
  [SMALL_STATE(39)] = 1971,
  [SMALL_STATE(40)] = 2056,
  [SMALL_STATE(41)] = 2115,
  [SMALL_STATE(42)] = 2176,
  [SMALL_STATE(43)] = 2258,
  [SMALL_STATE(44)] = 2307,
  [SMALL_STATE(45)] = 2377,
  [SMALL_STATE(46)] = 2423,
  [SMALL_STATE(47)] = 2492,
  [SMALL_STATE(48)] = 2549,
  [SMALL_STATE(49)] = 2606,
  [SMALL_STATE(50)] = 2663,
  [SMALL_STATE(51)] = 2746,
  [SMALL_STATE(52)] = 2789,
  [SMALL_STATE(53)] = 2869,
  [SMALL_STATE(54)] = 2949,
  [SMALL_STATE(55)] = 3029,
  [SMALL_STATE(56)] = 3109,
  [SMALL_STATE(57)] = 3189,
  [SMALL_STATE(58)] = 3269,
  [SMALL_STATE(59)] = 3348,
  [SMALL_STATE(60)] = 3413,
  [SMALL_STATE(61)] = 3490,
  [SMALL_STATE(62)] = 3567,
  [SMALL_STATE(63)] = 3646,
  [SMALL_STATE(64)] = 3725,
  [SMALL_STATE(65)] = 3802,
  [SMALL_STATE(66)] = 3865,
  [SMALL_STATE(67)] = 3942,
  [SMALL_STATE(68)] = 3981,
  [SMALL_STATE(69)] = 4036,
  [SMALL_STATE(70)] = 4113,
  [SMALL_STATE(71)] = 4152,
  [SMALL_STATE(72)] = 4222,
  [SMALL_STATE(73)] = 4274,
  [SMALL_STATE(74)] = 4344,
  [SMALL_STATE(75)] = 4414,
  [SMALL_STATE(76)] = 4488,
  [SMALL_STATE(77)] = 4560,
  [SMALL_STATE(78)] = 4636,
  [SMALL_STATE(79)] = 4712,
  [SMALL_STATE(80)] = 4788,
  [SMALL_STATE(81)] = 4864,
  [SMALL_STATE(82)] = 4938,
  [SMALL_STATE(83)] = 5008,
  [SMALL_STATE(84)] = 5084,
  [SMALL_STATE(85)] = 5158,
  [SMALL_STATE(86)] = 5234,
  [SMALL_STATE(87)] = 5308,
  [SMALL_STATE(88)] = 5382,
  [SMALL_STATE(89)] = 5456,
  [SMALL_STATE(90)] = 5527,
  [SMALL_STATE(91)] = 5598,
  [SMALL_STATE(92)] = 5669,
  [SMALL_STATE(93)] = 5740,
  [SMALL_STATE(94)] = 5811,
  [SMALL_STATE(95)] = 5882,
  [SMALL_STATE(96)] = 5949,
  [SMALL_STATE(97)] = 6020,
  [SMALL_STATE(98)] = 6091,
  [SMALL_STATE(99)] = 6164,
  [SMALL_STATE(100)] = 6235,
  [SMALL_STATE(101)] = 6306,
  [SMALL_STATE(102)] = 6377,
  [SMALL_STATE(103)] = 6445,
  [SMALL_STATE(104)] = 6511,
  [SMALL_STATE(105)] = 6579,
  [SMALL_STATE(106)] = 6645,
  [SMALL_STATE(107)] = 6707,
  [SMALL_STATE(108)] = 6767,
  [SMALL_STATE(109)] = 6819,
  [SMALL_STATE(110)] = 6885,
  [SMALL_STATE(111)] = 6948,
  [SMALL_STATE(112)] = 7011,
  [SMALL_STATE(113)] = 7074,
  [SMALL_STATE(114)] = 7137,
  [SMALL_STATE(115)] = 7200,
  [SMALL_STATE(116)] = 7265,
  [SMALL_STATE(117)] = 7328,
  [SMALL_STATE(118)] = 7391,
  [SMALL_STATE(119)] = 7454,
  [SMALL_STATE(120)] = 7517,
  [SMALL_STATE(121)] = 7582,
  [SMALL_STATE(122)] = 7645,
  [SMALL_STATE(123)] = 7708,
  [SMALL_STATE(124)] = 7773,
  [SMALL_STATE(125)] = 7838,
  [SMALL_STATE(126)] = 7901,
  [SMALL_STATE(127)] = 7966,
  [SMALL_STATE(128)] = 8029,
  [SMALL_STATE(129)] = 8092,
  [SMALL_STATE(130)] = 8155,
  [SMALL_STATE(131)] = 8218,
  [SMALL_STATE(132)] = 8283,
  [SMALL_STATE(133)] = 8346,
  [SMALL_STATE(134)] = 8409,
  [SMALL_STATE(135)] = 8472,
  [SMALL_STATE(136)] = 8535,
  [SMALL_STATE(137)] = 8570,
  [SMALL_STATE(138)] = 8623,
  [SMALL_STATE(139)] = 8655,
  [SMALL_STATE(140)] = 8687,
  [SMALL_STATE(141)] = 8719,
  [SMALL_STATE(142)] = 8751,
  [SMALL_STATE(143)] = 8801,
  [SMALL_STATE(144)] = 8833,
  [SMALL_STATE(145)] = 8881,
  [SMALL_STATE(146)] = 8913,
  [SMALL_STATE(147)] = 8945,
  [SMALL_STATE(148)] = 8977,
  [SMALL_STATE(149)] = 9009,
  [SMALL_STATE(150)] = 9041,
  [SMALL_STATE(151)] = 9073,
  [SMALL_STATE(152)] = 9105,
  [SMALL_STATE(153)] = 9137,
  [SMALL_STATE(154)] = 9169,
  [SMALL_STATE(155)] = 9226,
  [SMALL_STATE(156)] = 9273,
  [SMALL_STATE(157)] = 9328,
  [SMALL_STATE(158)] = 9363,
  [SMALL_STATE(159)] = 9395,
  [SMALL_STATE(160)] = 9445,
  [SMALL_STATE(161)] = 9491,
  [SMALL_STATE(162)] = 9545,
  [SMALL_STATE(163)] = 9597,
  [SMALL_STATE(164)] = 9626,
  [SMALL_STATE(165)] = 9653,
  [SMALL_STATE(166)] = 9684,
  [SMALL_STATE(167)] = 9713,
  [SMALL_STATE(168)] = 9758,
  [SMALL_STATE(169)] = 9789,
  [SMALL_STATE(170)] = 9836,
  [SMALL_STATE(171)] = 9865,
  [SMALL_STATE(172)] = 9896,
  [SMALL_STATE(173)] = 9923,
  [SMALL_STATE(174)] = 9952,
  [SMALL_STATE(175)] = 9979,
  [SMALL_STATE(176)] = 10008,
  [SMALL_STATE(177)] = 10037,
  [SMALL_STATE(178)] = 10066,
  [SMALL_STATE(179)] = 10093,
  [SMALL_STATE(180)] = 10122,
  [SMALL_STATE(181)] = 10151,
  [SMALL_STATE(182)] = 10184,
  [SMALL_STATE(183)] = 10213,
  [SMALL_STATE(184)] = 10248,
  [SMALL_STATE(185)] = 10281,
  [SMALL_STATE(186)] = 10308,
  [SMALL_STATE(187)] = 10337,
  [SMALL_STATE(188)] = 10366,
  [SMALL_STATE(189)] = 10396,
  [SMALL_STATE(190)] = 10430,
  [SMALL_STATE(191)] = 10460,
  [SMALL_STATE(192)] = 10488,
  [SMALL_STATE(193)] = 10516,
  [SMALL_STATE(194)] = 10557,
  [SMALL_STATE(195)] = 10588,
  [SMALL_STATE(196)] = 10617,
  [SMALL_STATE(197)] = 10658,
  [SMALL_STATE(198)] = 10685,
  [SMALL_STATE(199)] = 10716,
  [SMALL_STATE(200)] = 10745,
  [SMALL_STATE(201)] = 10774,
  [SMALL_STATE(202)] = 10803,
  [SMALL_STATE(203)] = 10832,
  [SMALL_STATE(204)] = 10858,
  [SMALL_STATE(205)] = 10886,
  [SMALL_STATE(206)] = 10926,
  [SMALL_STATE(207)] = 10962,
  [SMALL_STATE(208)] = 10998,
  [SMALL_STATE(209)] = 11026,
  [SMALL_STATE(210)] = 11054,
  [SMALL_STATE(211)] = 11094,
  [SMALL_STATE(212)] = 11126,
  [SMALL_STATE(213)] = 11166,
  [SMALL_STATE(214)] = 11194,
  [SMALL_STATE(215)] = 11232,
  [SMALL_STATE(216)] = 11262,
  [SMALL_STATE(217)] = 11302,
  [SMALL_STATE(218)] = 11342,
  [SMALL_STATE(219)] = 11380,
  [SMALL_STATE(220)] = 11414,
  [SMALL_STATE(221)] = 11451,
  [SMALL_STATE(222)] = 11474,
  [SMALL_STATE(223)] = 11497,
  [SMALL_STATE(224)] = 11520,
  [SMALL_STATE(225)] = 11543,
  [SMALL_STATE(226)] = 11566,
  [SMALL_STATE(227)] = 11593,
  [SMALL_STATE(228)] = 11616,
  [SMALL_STATE(229)] = 11639,
  [SMALL_STATE(230)] = 11662,
  [SMALL_STATE(231)] = 11685,
  [SMALL_STATE(232)] = 11708,
  [SMALL_STATE(233)] = 11731,
  [SMALL_STATE(234)] = 11768,
  [SMALL_STATE(235)] = 11790,
  [SMALL_STATE(236)] = 11812,
  [SMALL_STATE(237)] = 11836,
  [SMALL_STATE(238)] = 11860,
  [SMALL_STATE(239)] = 11882,
  [SMALL_STATE(240)] = 11906,
  [SMALL_STATE(241)] = 11930,
  [SMALL_STATE(242)] = 11952,
  [SMALL_STATE(243)] = 11976,
  [SMALL_STATE(244)] = 11998,
  [SMALL_STATE(245)] = 12020,
  [SMALL_STATE(246)] = 12044,
  [SMALL_STATE(247)] = 12066,
  [SMALL_STATE(248)] = 12088,
  [SMALL_STATE(249)] = 12110,
  [SMALL_STATE(250)] = 12132,
  [SMALL_STATE(251)] = 12154,
  [SMALL_STATE(252)] = 12176,
  [SMALL_STATE(253)] = 12198,
  [SMALL_STATE(254)] = 12222,
  [SMALL_STATE(255)] = 12246,
  [SMALL_STATE(256)] = 12270,
  [SMALL_STATE(257)] = 12292,
  [SMALL_STATE(258)] = 12314,
  [SMALL_STATE(259)] = 12336,
  [SMALL_STATE(260)] = 12358,
  [SMALL_STATE(261)] = 12380,
  [SMALL_STATE(262)] = 12402,
  [SMALL_STATE(263)] = 12424,
  [SMALL_STATE(264)] = 12446,
  [SMALL_STATE(265)] = 12468,
  [SMALL_STATE(266)] = 12492,
  [SMALL_STATE(267)] = 12514,
  [SMALL_STATE(268)] = 12536,
  [SMALL_STATE(269)] = 12558,
  [SMALL_STATE(270)] = 12580,
  [SMALL_STATE(271)] = 12606,
  [SMALL_STATE(272)] = 12628,
  [SMALL_STATE(273)] = 12652,
  [SMALL_STATE(274)] = 12674,
  [SMALL_STATE(275)] = 12698,
  [SMALL_STATE(276)] = 12720,
  [SMALL_STATE(277)] = 12742,
  [SMALL_STATE(278)] = 12764,
  [SMALL_STATE(279)] = 12787,
  [SMALL_STATE(280)] = 12810,
  [SMALL_STATE(281)] = 12849,
  [SMALL_STATE(282)] = 12872,
  [SMALL_STATE(283)] = 12895,
  [SMALL_STATE(284)] = 12918,
  [SMALL_STATE(285)] = 12941,
  [SMALL_STATE(286)] = 12964,
  [SMALL_STATE(287)] = 13003,
  [SMALL_STATE(288)] = 13026,
  [SMALL_STATE(289)] = 13065,
  [SMALL_STATE(290)] = 13088,
  [SMALL_STATE(291)] = 13111,
  [SMALL_STATE(292)] = 13134,
  [SMALL_STATE(293)] = 13173,
  [SMALL_STATE(294)] = 13196,
  [SMALL_STATE(295)] = 13235,
  [SMALL_STATE(296)] = 13257,
  [SMALL_STATE(297)] = 13279,
  [SMALL_STATE(298)] = 13301,
  [SMALL_STATE(299)] = 13332,
  [SMALL_STATE(300)] = 13363,
  [SMALL_STATE(301)] = 13394,
  [SMALL_STATE(302)] = 13425,
  [SMALL_STATE(303)] = 13456,
  [SMALL_STATE(304)] = 13485,
  [SMALL_STATE(305)] = 13513,
  [SMALL_STATE(306)] = 13541,
  [SMALL_STATE(307)] = 13571,
  [SMALL_STATE(308)] = 13599,
  [SMALL_STATE(309)] = 13627,
  [SMALL_STATE(310)] = 13655,
  [SMALL_STATE(311)] = 13683,
  [SMALL_STATE(312)] = 13704,
  [SMALL_STATE(313)] = 13723,
  [SMALL_STATE(314)] = 13744,
  [SMALL_STATE(315)] = 13758,
  [SMALL_STATE(316)] = 13772,
  [SMALL_STATE(317)] = 13786,
  [SMALL_STATE(318)] = 13799,
  [SMALL_STATE(319)] = 13812,
  [SMALL_STATE(320)] = 13825,
  [SMALL_STATE(321)] = 13838,
  [SMALL_STATE(322)] = 13855,
  [SMALL_STATE(323)] = 13868,
  [SMALL_STATE(324)] = 13887,
  [SMALL_STATE(325)] = 13906,
  [SMALL_STATE(326)] = 13925,
  [SMALL_STATE(327)] = 13941,
  [SMALL_STATE(328)] = 13957,
  [SMALL_STATE(329)] = 13971,
  [SMALL_STATE(330)] = 13987,
  [SMALL_STATE(331)] = 14003,
  [SMALL_STATE(332)] = 14019,
  [SMALL_STATE(333)] = 14035,
  [SMALL_STATE(334)] = 14051,
  [SMALL_STATE(335)] = 14067,
  [SMALL_STATE(336)] = 14081,
  [SMALL_STATE(337)] = 14097,
  [SMALL_STATE(338)] = 14111,
  [SMALL_STATE(339)] = 14125,
  [SMALL_STATE(340)] = 14141,
  [SMALL_STATE(341)] = 14157,
  [SMALL_STATE(342)] = 14171,
  [SMALL_STATE(343)] = 14187,
  [SMALL_STATE(344)] = 14201,
  [SMALL_STATE(345)] = 14213,
  [SMALL_STATE(346)] = 14229,
  [SMALL_STATE(347)] = 14245,
  [SMALL_STATE(348)] = 14259,
  [SMALL_STATE(349)] = 14275,
  [SMALL_STATE(350)] = 14291,
  [SMALL_STATE(351)] = 14307,
  [SMALL_STATE(352)] = 14323,
  [SMALL_STATE(353)] = 14339,
  [SMALL_STATE(354)] = 14355,
  [SMALL_STATE(355)] = 14371,
  [SMALL_STATE(356)] = 14383,
  [SMALL_STATE(357)] = 14397,
  [SMALL_STATE(358)] = 14413,
  [SMALL_STATE(359)] = 14424,
  [SMALL_STATE(360)] = 14437,
  [SMALL_STATE(361)] = 14450,
  [SMALL_STATE(362)] = 14463,
  [SMALL_STATE(363)] = 14476,
  [SMALL_STATE(364)] = 14489,
  [SMALL_STATE(365)] = 14502,
  [SMALL_STATE(366)] = 14513,
  [SMALL_STATE(367)] = 14524,
  [SMALL_STATE(368)] = 14535,
  [SMALL_STATE(369)] = 14548,
  [SMALL_STATE(370)] = 14559,
  [SMALL_STATE(371)] = 14570,
  [SMALL_STATE(372)] = 14581,
  [SMALL_STATE(373)] = 14592,
  [SMALL_STATE(374)] = 14603,
  [SMALL_STATE(375)] = 14614,
  [SMALL_STATE(376)] = 14625,
  [SMALL_STATE(377)] = 14638,
  [SMALL_STATE(378)] = 14651,
  [SMALL_STATE(379)] = 14664,
  [SMALL_STATE(380)] = 14677,
  [SMALL_STATE(381)] = 14690,
  [SMALL_STATE(382)] = 14701,
  [SMALL_STATE(383)] = 14712,
  [SMALL_STATE(384)] = 14722,
  [SMALL_STATE(385)] = 14732,
  [SMALL_STATE(386)] = 14742,
  [SMALL_STATE(387)] = 14752,
  [SMALL_STATE(388)] = 14762,
  [SMALL_STATE(389)] = 14772,
  [SMALL_STATE(390)] = 14782,
  [SMALL_STATE(391)] = 14792,
  [SMALL_STATE(392)] = 14802,
  [SMALL_STATE(393)] = 14812,
  [SMALL_STATE(394)] = 14822,
  [SMALL_STATE(395)] = 14832,
  [SMALL_STATE(396)] = 14842,
  [SMALL_STATE(397)] = 14852,
  [SMALL_STATE(398)] = 14862,
  [SMALL_STATE(399)] = 14872,
  [SMALL_STATE(400)] = 14882,
  [SMALL_STATE(401)] = 14892,
  [SMALL_STATE(402)] = 14902,
  [SMALL_STATE(403)] = 14912,
  [SMALL_STATE(404)] = 14922,
  [SMALL_STATE(405)] = 14932,
  [SMALL_STATE(406)] = 14942,
  [SMALL_STATE(407)] = 14952,
  [SMALL_STATE(408)] = 14962,
  [SMALL_STATE(409)] = 14972,
  [SMALL_STATE(410)] = 14982,
  [SMALL_STATE(411)] = 14992,
  [SMALL_STATE(412)] = 15002,
  [SMALL_STATE(413)] = 15012,
  [SMALL_STATE(414)] = 15022,
  [SMALL_STATE(415)] = 15032,
  [SMALL_STATE(416)] = 15042,
  [SMALL_STATE(417)] = 15052,
  [SMALL_STATE(418)] = 15062,
  [SMALL_STATE(419)] = 15072,
  [SMALL_STATE(420)] = 15082,
  [SMALL_STATE(421)] = 15092,
  [SMALL_STATE(422)] = 15102,
  [SMALL_STATE(423)] = 15112,
  [SMALL_STATE(424)] = 15122,
  [SMALL_STATE(425)] = 15132,
  [SMALL_STATE(426)] = 15142,
  [SMALL_STATE(427)] = 15152,
  [SMALL_STATE(428)] = 15162,
  [SMALL_STATE(429)] = 15172,
  [SMALL_STATE(430)] = 15182,
  [SMALL_STATE(431)] = 15192,
  [SMALL_STATE(432)] = 15202,
  [SMALL_STATE(433)] = 15212,
  [SMALL_STATE(434)] = 15222,
  [SMALL_STATE(435)] = 15232,
  [SMALL_STATE(436)] = 15242,
  [SMALL_STATE(437)] = 15252,
  [SMALL_STATE(438)] = 15262,
  [SMALL_STATE(439)] = 15272,
  [SMALL_STATE(440)] = 15282,
  [SMALL_STATE(441)] = 15292,
  [SMALL_STATE(442)] = 15302,
  [SMALL_STATE(443)] = 15312,
  [SMALL_STATE(444)] = 15322,
  [SMALL_STATE(445)] = 15332,
  [SMALL_STATE(446)] = 15342,
  [SMALL_STATE(447)] = 15352,
  [SMALL_STATE(448)] = 15362,
  [SMALL_STATE(449)] = 15372,
  [SMALL_STATE(450)] = 15382,
  [SMALL_STATE(451)] = 15392,
  [SMALL_STATE(452)] = 15402,
  [SMALL_STATE(453)] = 15412,
  [SMALL_STATE(454)] = 15422,
  [SMALL_STATE(455)] = 15432,
  [SMALL_STATE(456)] = 15442,
  [SMALL_STATE(457)] = 15452,
  [SMALL_STATE(458)] = 15462,
  [SMALL_STATE(459)] = 15472,
  [SMALL_STATE(460)] = 15482,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 10),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 10),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 16),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 11),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(150),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(363),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(443),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(434),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(149),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(397),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(136),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(187),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(378),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(452),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(451),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(173),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(422),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(158),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 22),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 22),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(105),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(79),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(87),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(385),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(54),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(103),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(61),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(62),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 12),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 12),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(242),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(376),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(454),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(453),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(236),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(427),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(226),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 23),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(283),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(361),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(450),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(448),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(279),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(415),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(270),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 18),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(78),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(53),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(64),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(63),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 14),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 19),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 21),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 15),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_definition, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(385),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(57),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(103),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(313),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(92),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(459),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(458),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(457),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 20),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(335),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(89),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(126),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(42),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(98),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [858] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(69),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 13),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1043] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
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
