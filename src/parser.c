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
#define STATE_COUNT 472
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 0
#define TOKEN_COUNT 78
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
  anon_sym_DQUOTE = 47,
  aux_sym__double_quote_string_token1 = 48,
  anon_sym_f_DQUOTE = 49,
  anon_sym_f_DQUOTE_DQUOTE_DQUOTE = 50,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 51,
  anon_sym_s_DQUOTE = 52,
  anon_sym_s_DQUOTE_DQUOTE_DQUOTE = 53,
  anon_sym_SQUOTE = 54,
  aux_sym__literal_string_token1 = 55,
  sym__natural_number = 56,
  anon_sym_DOT = 57,
  sym_identifier = 58,
  anon_sym_DOT_DOT = 59,
  anon_sym_STAR = 60,
  anon_sym_SLASH = 61,
  anon_sym_PIPE = 62,
  anon_sym_BANG_EQ = 63,
  anon_sym_GT = 64,
  anon_sym_GT_EQ = 65,
  anon_sym_LT = 66,
  anon_sym_LT_EQ = 67,
  anon_sym_QMARK_QMARK = 68,
  aux_sym__date_token1 = 69,
  aux_sym__date_token2 = 70,
  anon_sym_AT = 71,
  aux_sym__time_token1 = 72,
  anon_sym_T = 73,
  anon_sym_Z = 74,
  anon_sym_POUND = 75,
  aux_sym_comment_token1 = 76,
  sym_bang = 77,
  sym_program = 78,
  sym_pipeline = 79,
  sym_variable = 80,
  sym_function_definition = 81,
  sym_parameter = 82,
  sym__call_parameter = 83,
  sym_function_call = 84,
  sym_transforms = 85,
  sym_from = 86,
  sym_derives = 87,
  sym_filter = 88,
  sym__boolean_expression = 89,
  sym_aggregate = 90,
  sym_aggregate_operation = 91,
  sym__aggregate_count = 92,
  sym_sorts = 93,
  sym_direction = 94,
  sym_takes = 95,
  sym_window = 96,
  sym_window_definitions = 97,
  sym__window_definition = 98,
  sym_group = 99,
  sym_joins = 100,
  sym__join_definition = 101,
  sym_conditions = 102,
  sym__self_join = 103,
  sym_select = 104,
  sym_table_reference = 105,
  sym_term = 106,
  sym__expression = 107,
  sym_literal = 108,
  sym_f_string = 109,
  sym_s_string = 110,
  sym__double_quote_string = 111,
  sym__double_f_string = 112,
  sym__triple_f_string = 113,
  sym__double_s_string = 114,
  sym__triple_s_string = 115,
  sym__literal_string = 116,
  sym__integer = 117,
  sym__decimal_number = 118,
  sym_field = 119,
  sym__alias_identifier = 120,
  sym_range = 121,
  sym_assignment = 122,
  sym_binary_expression = 123,
  sym__date = 124,
  sym_date = 125,
  sym__time = 126,
  sym_time = 127,
  sym_timestamp = 128,
  sym_timezone = 129,
  sym_comment = 130,
  aux_sym_program_repeat1 = 131,
  aux_sym_function_definition_repeat1 = 132,
  aux_sym_function_call_repeat1 = 133,
  aux_sym_transforms_repeat1 = 134,
  aux_sym_derives_repeat1 = 135,
  aux_sym_aggregate_repeat1 = 136,
  aux_sym_sorts_repeat1 = 137,
  aux_sym_window_definitions_repeat1 = 138,
  aux_sym_group_repeat1 = 139,
  aux_sym_group_repeat2 = 140,
  aux_sym_conditions_repeat1 = 141,
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
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [anon_sym_f_DQUOTE] = "f\"",
  [anon_sym_f_DQUOTE_DQUOTE_DQUOTE] = "f\"\"\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_s_DQUOTE] = "s\"",
  [anon_sym_s_DQUOTE_DQUOTE_DQUOTE] = "s\"\"\"",
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
  [sym_s_string] = "s_string",
  [sym__double_quote_string] = "_double_quote_string",
  [sym__double_f_string] = "_double_f_string",
  [sym__triple_f_string] = "_triple_f_string",
  [sym__double_s_string] = "_double_s_string",
  [sym__triple_s_string] = "_triple_s_string",
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [anon_sym_f_DQUOTE] = anon_sym_f_DQUOTE,
  [anon_sym_f_DQUOTE_DQUOTE_DQUOTE] = anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_s_DQUOTE] = anon_sym_s_DQUOTE,
  [anon_sym_s_DQUOTE_DQUOTE_DQUOTE] = anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
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
  [sym_s_string] = sym_s_string,
  [sym__double_quote_string] = sym__double_quote_string,
  [sym__double_f_string] = sym__double_f_string,
  [sym__triple_f_string] = sym__triple_f_string,
  [sym__double_s_string] = sym__double_s_string,
  [sym__triple_s_string] = sym__triple_s_string,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_f_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
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
  [sym_s_string] = {
    .visible = true,
    .named = true,
  },
  [sym__double_quote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__double_f_string] = {
    .visible = false,
    .named = true,
  },
  [sym__triple_f_string] = {
    .visible = false,
    .named = true,
  },
  [sym__double_s_string] = {
    .visible = false,
    .named = true,
  },
  [sym__triple_s_string] = {
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
      if (eof) ADVANCE(287);
      if (lookahead == '!') ADVANCE(597);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == '@') ADVANCE(586);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead == 'C') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'G') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'J') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(42);
      if (lookahead == 'M') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(589);
      if (lookahead == 'W') ADVANCE(74);
      if (lookahead == 'Z') ADVANCE(590);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'j') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == 'w') ADVANCE(193);
      if (lookahead == '|') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(282)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'O') ADVANCE(450);
      if (lookahead == 'T') ADVANCE(453);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'a') ADVANCE(535);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead == '|') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(269)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(417);
      if (lookahead == 'D') ADVANCE(413);
      if (lookahead == 'F') ADVANCE(386);
      if (lookahead == 'G') ADVANCE(457);
      if (lookahead == 'J') ADVANCE(448);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'O') ADVANCE(450);
      if (lookahead == 'S') ADVANCE(414);
      if (lookahead == 'T') ADVANCE(390);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(481);
      if (lookahead == 'g') ADVANCE(551);
      if (lookahead == 'j') ADVANCE(542);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '|') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(264)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(417);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'O') ADVANCE(450);
      if (lookahead == 'S') ADVANCE(447);
      if (lookahead == 'T') ADVANCE(390);
      if (lookahead == 'W') ADVANCE(426);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'w') ADVANCE(521);
      if (lookahead == '|') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(268)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'T') ADVANCE(453);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(272)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '@') ADVANCE(586);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'T') ADVANCE(453);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(265)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '@') ADVANCE(586);
      if (lookahead == 'A') ADVANCE(474);
      if (lookahead == 'C') ADVANCE(444);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'M') ADVANCE(388);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'S') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(453);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead == 'c') ADVANCE(538);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'm') ADVANCE(483);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '@') ADVANCE(586);
      if (lookahead == 'A') ADVANCE(477);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'S') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(453);
      if (lookahead == 'a') ADVANCE(569);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(267)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '@') ADVANCE(586);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'S') ADVANCE(427);
      if (lookahead == 'T') ADVANCE(453);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(381);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(418);
      if (lookahead == 'D') ADVANCE(413);
      if (lookahead == 'F') ADVANCE(386);
      if (lookahead == 'G') ADVANCE(457);
      if (lookahead == 'J') ADVANCE(448);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'S') ADVANCE(414);
      if (lookahead == 'T') ADVANCE(390);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(481);
      if (lookahead == 'g') ADVANCE(551);
      if (lookahead == 'j') ADVANCE(542);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(418);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'S') ADVANCE(447);
      if (lookahead == 'T') ADVANCE(390);
      if (lookahead == 'W') ADVANCE(426);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'w') ADVANCE(521);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(271)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(210);
      if (lookahead == 'w') ADVANCE(195);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(369);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(372);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(370);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(273)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(274)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(577);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(363);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(355);
      END_STATE();
    case 23:
      if (lookahead == '?') ADVANCE(582);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(108);
      if (lookahead == 'U') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(108);
      if (lookahead == 'U') ADVANCE(94);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'R') ADVANCE(138);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(143);
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(348);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(129);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(130);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(337);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(106);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(75);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(79);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(331);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(300);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(308);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(310);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(292);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(313);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(296);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(117);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(37);
      if (lookahead == 'O') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == 'U') ADVANCE(91);
      if (lookahead == 'W') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(118);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'G') ADVANCE(325);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 60:
      if (lookahead == 'F') ADVANCE(125);
      if (lookahead == 'T') ADVANCE(350);
      END_STATE();
    case 61:
      if (lookahead == 'G') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 62:
      if (lookahead == 'G') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(35);
      if (lookahead == 'V') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'G') ADVANCE(70);
      END_STATE();
    case 64:
      if (lookahead == 'G') ADVANCE(343);
      END_STATE();
    case 65:
      if (lookahead == 'G') ADVANCE(345);
      END_STATE();
    case 66:
      if (lookahead == 'G') ADVANCE(29);
      END_STATE();
    case 67:
      if (lookahead == 'G') ADVANCE(119);
      END_STATE();
    case 68:
      if (lookahead == 'G') ADVANCE(48);
      END_STATE();
    case 69:
      if (lookahead == 'H') ADVANCE(312);
      END_STATE();
    case 70:
      if (lookahead == 'H') ADVANCE(128);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(140);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(63);
      if (lookahead == 'O') ADVANCE(89);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(108);
      if (lookahead == 'U') ADVANCE(87);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(123);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(131);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(96);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 81:
      if (lookahead == 'K') ADVANCE(44);
      END_STATE();
    case 82:
      if (lookahead == 'L') ADVANCE(122);
      END_STATE();
    case 83:
      if (lookahead == 'L') ADVANCE(133);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(336);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(346);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(85);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(121);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'M') ADVANCE(327);
      END_STATE();
    case 92:
      if (lookahead == 'M') ADVANCE(288);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(341);
      END_STATE();
    case 94:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(315);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(304);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(127);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(65);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(57);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(89);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(141);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(137);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(92);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(135);
      END_STATE();
    case 110:
      if (lookahead == 'O') ADVANCE(77);
      END_STATE();
    case 111:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 112:
      if (lookahead == 'P') ADVANCE(294);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(339);
      END_STATE();
    case 114:
      if (lookahead == 'R') ADVANCE(333);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(290);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 117:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 118:
      if (lookahead == 'R') ADVANCE(126);
      END_STATE();
    case 119:
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 120:
      if (lookahead == 'R') ADVANCE(109);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(344);
      END_STATE();
    case 122:
      if (lookahead == 'S') ADVANCE(46);
      END_STATE();
    case 123:
      if (lookahead == 'S') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 'T') ADVANCE(350);
      END_STATE();
    case 125:
      if (lookahead == 'T') ADVANCE(334);
      END_STATE();
    case 126:
      if (lookahead == 'T') ADVANCE(298);
      END_STATE();
    case 127:
      if (lookahead == 'T') ADVANCE(321);
      END_STATE();
    case 128:
      if (lookahead == 'T') ADVANCE(335);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(306);
      END_STATE();
    case 130:
      if (lookahead == 'T') ADVANCE(329);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 132:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 133:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 134:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 135:
      if (lookahead == 'U') ADVANCE(112);
      END_STATE();
    case 136:
      if (lookahead == 'U') ADVANCE(88);
      END_STATE();
    case 137:
      if (lookahead == 'U') ADVANCE(100);
      END_STATE();
    case 138:
      if (lookahead == 'U') ADVANCE(45);
      END_STATE();
    case 139:
      if (lookahead == 'V') ADVANCE(323);
      END_STATE();
    case 140:
      if (lookahead == 'V') ADVANCE(47);
      END_STATE();
    case 141:
      if (lookahead == 'W') ADVANCE(302);
      END_STATE();
    case 142:
      if (lookahead == 'X') ADVANCE(111);
      END_STATE();
    case 143:
      if (lookahead == 'X') ADVANCE(317);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 151:
      if (lookahead == 'c') ADVANCE(348);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 153:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 154:
      if (lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(337);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 158:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 159:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 160:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 161:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'g') ADVANCE(325);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 179:
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 180:
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 181:
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'v') ADVANCE(175);
      END_STATE();
    case 182:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 183:
      if (lookahead == 'g') ADVANCE(343);
      END_STATE();
    case 184:
      if (lookahead == 'g') ADVANCE(345);
      END_STATE();
    case 185:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 186:
      if (lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 187:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 188:
      if (lookahead == 'h') ADVANCE(312);
      END_STATE();
    case 189:
      if (lookahead == 'h') ADVANCE(246);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 200:
      if (lookahead == 'k') ADVANCE(164);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'w') ADVANCE(240);
      END_STATE();
    case 209:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(327);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(231);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 258:
      if (lookahead == 'v') ADVANCE(323);
      END_STATE();
    case 259:
      if (lookahead == 'v') ADVANCE(167);
      END_STATE();
    case 260:
      if (lookahead == 'w') ADVANCE(302);
      END_STATE();
    case 261:
      if (lookahead == 'x') ADVANCE(230);
      END_STATE();
    case 262:
      if (lookahead == 'x') ADVANCE(317);
      END_STATE();
    case 263:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(263)
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '@') ADVANCE(586);
      if (lookahead == 'A') ADVANCE(474);
      if (lookahead == 'C') ADVANCE(444);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'M') ADVANCE(388);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'S') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(453);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead == 'c') ADVANCE(538);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'm') ADVANCE(483);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead == 't') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 264:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(264)
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(417);
      if (lookahead == 'D') ADVANCE(413);
      if (lookahead == 'F') ADVANCE(386);
      if (lookahead == 'G') ADVANCE(457);
      if (lookahead == 'J') ADVANCE(448);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'O') ADVANCE(450);
      if (lookahead == 'S') ADVANCE(414);
      if (lookahead == 'T') ADVANCE(390);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(481);
      if (lookahead == 'g') ADVANCE(551);
      if (lookahead == 'j') ADVANCE(542);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '|') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 265:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(265)
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '@') ADVANCE(586);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'T') ADVANCE(453);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == 't') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 266:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '@') ADVANCE(586);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'S') ADVANCE(427);
      if (lookahead == 'T') ADVANCE(453);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(381);
      if (lookahead == 't') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 267:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(267)
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '@') ADVANCE(586);
      if (lookahead == 'A') ADVANCE(477);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'S') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(453);
      if (lookahead == 'a') ADVANCE(569);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(383);
      if (lookahead == 't') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 268:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(268)
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(417);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'O') ADVANCE(450);
      if (lookahead == 'S') ADVANCE(447);
      if (lookahead == 'T') ADVANCE(390);
      if (lookahead == 'W') ADVANCE(426);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'w') ADVANCE(521);
      if (lookahead == '|') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 269:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(269)
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'O') ADVANCE(450);
      if (lookahead == 'T') ADVANCE(453);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'a') ADVANCE(535);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead == '|') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 270:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(418);
      if (lookahead == 'D') ADVANCE(413);
      if (lookahead == 'F') ADVANCE(386);
      if (lookahead == 'G') ADVANCE(457);
      if (lookahead == 'J') ADVANCE(448);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'S') ADVANCE(414);
      if (lookahead == 'T') ADVANCE(390);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(481);
      if (lookahead == 'g') ADVANCE(551);
      if (lookahead == 'j') ADVANCE(542);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 271:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(271)
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(418);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'S') ADVANCE(447);
      if (lookahead == 'T') ADVANCE(390);
      if (lookahead == 'W') ADVANCE(426);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'w') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 272:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(272)
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == 'F') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'T') ADVANCE(453);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 't') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 273:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(273)
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 274:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(274)
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 275:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (lookahead == '#') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 276:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      END_STATE();
    case 277:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 278:
      if (eof) ADVANCE(287);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == 'F') ADVANCE(25);
      if (lookahead == 'G') ADVANCE(120);
      if (lookahead == 'J') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(59);
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(74);
      if (lookahead == 'Z') ADVANCE(590);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == 'j') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == 'w') ADVANCE(193);
      if (lookahead == '|') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(285)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 279:
      if (eof) ADVANCE(287);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(417);
      if (lookahead == 'D') ADVANCE(413);
      if (lookahead == 'F') ADVANCE(385);
      if (lookahead == 'G') ADVANCE(457);
      if (lookahead == 'J') ADVANCE(448);
      if (lookahead == 'L') ADVANCE(412);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'O') ADVANCE(450);
      if (lookahead == 'S') ADVANCE(414);
      if (lookahead == 'T') ADVANCE(390);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(480);
      if (lookahead == 'g') ADVANCE(551);
      if (lookahead == 'j') ADVANCE(542);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '|') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(283)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 280:
      if (eof) ADVANCE(287);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == 'F') ADVANCE(73);
      if (lookahead == 'G') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'J') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(42);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(588);
      if (lookahead == 'W') ADVANCE(74);
      if (lookahead == 'Z') ADVANCE(590);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'j') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'w') ADVANCE(193);
      if (lookahead == '|') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(284)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 281:
      if (eof) ADVANCE(287);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(418);
      if (lookahead == 'D') ADVANCE(413);
      if (lookahead == 'F') ADVANCE(385);
      if (lookahead == 'G') ADVANCE(457);
      if (lookahead == 'J') ADVANCE(448);
      if (lookahead == 'L') ADVANCE(412);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'S') ADVANCE(414);
      if (lookahead == 'T') ADVANCE(390);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(480);
      if (lookahead == 'g') ADVANCE(551);
      if (lookahead == 'j') ADVANCE(542);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(286)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 282:
      if (eof) ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(282)
      if (lookahead == '!') ADVANCE(597);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(361);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == '@') ADVANCE(586);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead == 'C') ADVANCE(107);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'G') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'J') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(42);
      if (lookahead == 'M') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(589);
      if (lookahead == 'W') ADVANCE(74);
      if (lookahead == 'Z') ADVANCE(590);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'j') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == 'w') ADVANCE(193);
      if (lookahead == '|') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 283:
      if (eof) ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(283)
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(417);
      if (lookahead == 'D') ADVANCE(413);
      if (lookahead == 'F') ADVANCE(385);
      if (lookahead == 'G') ADVANCE(457);
      if (lookahead == 'J') ADVANCE(448);
      if (lookahead == 'L') ADVANCE(412);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'O') ADVANCE(450);
      if (lookahead == 'S') ADVANCE(414);
      if (lookahead == 'T') ADVANCE(390);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(480);
      if (lookahead == 'g') ADVANCE(551);
      if (lookahead == 'j') ADVANCE(542);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '|') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 284:
      if (eof) ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(284)
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(379);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == 'F') ADVANCE(73);
      if (lookahead == 'G') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'J') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(42);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(588);
      if (lookahead == 'W') ADVANCE(74);
      if (lookahead == 'Z') ADVANCE(590);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'j') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'r') ADVANCE(191);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'w') ADVANCE(193);
      if (lookahead == '|') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 285:
      if (eof) ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(285)
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(353);
      if (lookahead == ')') ADVANCE(354);
      if (lookahead == '*') ADVANCE(574);
      if (lookahead == '+') ADVANCE(362);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '/') ADVANCE(575);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == '<') ADVANCE(580);
      if (lookahead == '=') ADVANCE(352);
      if (lookahead == '>') ADVANCE(578);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'D') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == 'F') ADVANCE(25);
      if (lookahead == 'G') ADVANCE(120);
      if (lookahead == 'J') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(59);
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(74);
      if (lookahead == 'Z') ADVANCE(590);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == ']') ADVANCE(359);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead == 'j') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == 'w') ADVANCE(193);
      if (lookahead == '|') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 286:
      if (eof) ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(286)
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '#') ADVANCE(591);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '-') ADVANCE(360);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == ':') ADVANCE(356);
      if (lookahead == 'A') ADVANCE(418);
      if (lookahead == 'D') ADVANCE(413);
      if (lookahead == 'F') ADVANCE(385);
      if (lookahead == 'G') ADVANCE(457);
      if (lookahead == 'J') ADVANCE(448);
      if (lookahead == 'L') ADVANCE(412);
      if (lookahead == 'N') ADVANCE(472);
      if (lookahead == 'S') ADVANCE(414);
      if (lookahead == 'T') ADVANCE(390);
      if (lookahead == '[') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(480);
      if (lookahead == 'g') ADVANCE(551);
      if (lookahead == 'j') ADVANCE(542);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_keyword_window);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(158);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(57);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(363);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(355);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(367);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(366);
      if (lookahead == '#') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(376);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead == '#') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(573);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == 'i') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead == 'u') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == 'u') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(429);
      if (lookahead == 'I') ADVANCE(432);
      if (lookahead == 'R') ADVANCE(445);
      if (lookahead == 'U') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(429);
      if (lookahead == 'I') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(479);
      if (lookahead == 'I') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(428);
      if (lookahead == 'R') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(452);
      if (lookahead == 'G') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(433);
      if (lookahead == 'O') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(421);
      if (lookahead == 'N') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(397);
      if (lookahead == 'U') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead == 'i') ADVANCE(526);
      if (lookahead == 'r') ADVANCE(539);
      if (lookahead == 'u') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead == 'i') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(522);
      if (lookahead == 'r') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'g') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == 'o') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(516);
      if (lookahead == 'n') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(579);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(581);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(81);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'R') ADVANCE(138);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(596);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(367);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(376);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(596);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(596);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(577);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 279},
  [7] = {.lex_state = 280},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 278},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 278},
  [12] = {.lex_state = 280},
  [13] = {.lex_state = 278},
  [14] = {.lex_state = 280},
  [15] = {.lex_state = 280},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 280},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 278},
  [21] = {.lex_state = 278},
  [22] = {.lex_state = 280},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 280},
  [29] = {.lex_state = 280},
  [30] = {.lex_state = 280},
  [31] = {.lex_state = 278},
  [32] = {.lex_state = 280},
  [33] = {.lex_state = 280},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 280},
  [36] = {.lex_state = 280},
  [37] = {.lex_state = 278},
  [38] = {.lex_state = 280},
  [39] = {.lex_state = 280},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 280},
  [46] = {.lex_state = 280},
  [47] = {.lex_state = 280},
  [48] = {.lex_state = 280},
  [49] = {.lex_state = 278},
  [50] = {.lex_state = 280},
  [51] = {.lex_state = 280},
  [52] = {.lex_state = 280},
  [53] = {.lex_state = 280},
  [54] = {.lex_state = 280},
  [55] = {.lex_state = 280},
  [56] = {.lex_state = 278},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 280},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 280},
  [62] = {.lex_state = 280},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 280},
  [65] = {.lex_state = 280},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 280},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
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
  [93] = {.lex_state = 278},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
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
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 280},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 280},
  [129] = {.lex_state = 280},
  [130] = {.lex_state = 280},
  [131] = {.lex_state = 280},
  [132] = {.lex_state = 281},
  [133] = {.lex_state = 281},
  [134] = {.lex_state = 280},
  [135] = {.lex_state = 280},
  [136] = {.lex_state = 280},
  [137] = {.lex_state = 280},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 280},
  [141] = {.lex_state = 281},
  [142] = {.lex_state = 281},
  [143] = {.lex_state = 281},
  [144] = {.lex_state = 281},
  [145] = {.lex_state = 281},
  [146] = {.lex_state = 281},
  [147] = {.lex_state = 281},
  [148] = {.lex_state = 281},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 281},
  [151] = {.lex_state = 281},
  [152] = {.lex_state = 281},
  [153] = {.lex_state = 281},
  [154] = {.lex_state = 281},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 280},
  [160] = {.lex_state = 280},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 280},
  [163] = {.lex_state = 280},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 280},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 280},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 280},
  [186] = {.lex_state = 280},
  [187] = {.lex_state = 280},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 280},
  [191] = {.lex_state = 280},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 280},
  [194] = {.lex_state = 280},
  [195] = {.lex_state = 280},
  [196] = {.lex_state = 280},
  [197] = {.lex_state = 280},
  [198] = {.lex_state = 280},
  [199] = {.lex_state = 280},
  [200] = {.lex_state = 280},
  [201] = {.lex_state = 280},
  [202] = {.lex_state = 280},
  [203] = {.lex_state = 280},
  [204] = {.lex_state = 280},
  [205] = {.lex_state = 280},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 280},
  [209] = {.lex_state = 280},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 280},
  [212] = {.lex_state = 280},
  [213] = {.lex_state = 280},
  [214] = {.lex_state = 280},
  [215] = {.lex_state = 280},
  [216] = {.lex_state = 280},
  [217] = {.lex_state = 280},
  [218] = {.lex_state = 280},
  [219] = {.lex_state = 280},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 280},
  [222] = {.lex_state = 280},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 280},
  [226] = {.lex_state = 280},
  [227] = {.lex_state = 280},
  [228] = {.lex_state = 280},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 280},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 280},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 278},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 278},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 278},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 278},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 278},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 17},
  [323] = {.lex_state = 17},
  [324] = {.lex_state = 280},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 17},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 17},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 17},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 6},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 17},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 6},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 6},
  [354] = {.lex_state = 17},
  [355] = {.lex_state = 17},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 17},
  [359] = {.lex_state = 18},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 6},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 17},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 6},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 6},
  [369] = {.lex_state = 6},
  [370] = {.lex_state = 17},
  [371] = {.lex_state = 6},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 17},
  [374] = {.lex_state = 17},
  [375] = {.lex_state = 17},
  [376] = {.lex_state = 17},
  [377] = {.lex_state = 6},
  [378] = {.lex_state = 6},
  [379] = {.lex_state = 17},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 6},
  [383] = {.lex_state = 17},
  [384] = {.lex_state = 17},
  [385] = {.lex_state = 17},
  [386] = {.lex_state = 595},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 6},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 19},
  [398] = {.lex_state = 19},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 17},
  [403] = {.lex_state = 6},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 280},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 280},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 6},
  [410] = {.lex_state = 19},
  [411] = {.lex_state = 6},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 6},
  [416] = {.lex_state = 19},
  [417] = {.lex_state = 19},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 6},
  [421] = {.lex_state = 6},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 19},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 6},
  [428] = {.lex_state = 6},
  [429] = {.lex_state = 6},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 6},
  [435] = {.lex_state = 6},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 19},
  [439] = {.lex_state = 6},
  [440] = {.lex_state = 6},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 19},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 365},
  [446] = {.lex_state = 374},
  [447] = {.lex_state = 6},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 6},
  [450] = {.lex_state = 374},
  [451] = {.lex_state = 365},
  [452] = {.lex_state = 365},
  [453] = {.lex_state = 365},
  [454] = {.lex_state = 365},
  [455] = {.lex_state = 365},
  [456] = {.lex_state = 365},
  [457] = {.lex_state = 374},
  [458] = {.lex_state = 6},
  [459] = {.lex_state = 17},
  [460] = {.lex_state = 365},
  [461] = {.lex_state = 374},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 365},
  [464] = {.lex_state = 374},
  [465] = {.lex_state = 365},
  [466] = {.lex_state = 374},
  [467] = {.lex_state = 365},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 17},
  [471] = {(TSStateId)(-1)},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_f_DQUOTE] = ACTIONS(1),
    [anon_sym_f_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_s_DQUOTE] = ACTIONS(1),
    [anon_sym_s_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
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
    [sym_program] = STATE(469),
    [sym_pipeline] = STATE(328),
    [sym_variable] = STATE(328),
    [sym_function_definition] = STATE(328),
    [sym_from] = STATE(149),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(314),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_keyword_from] = ACTIONS(7),
    [sym_keyword_func] = ACTIONS(9),
    [sym_keyword_let] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_keyword_count,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(2), 1,
      sym_comment,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(186), 1,
      sym_binary_expression,
    STATE(211), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(348), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(15), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(33), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [107] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_keyword_count,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_comment,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(193), 1,
      sym_binary_expression,
    STATE(211), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(381), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(15), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(33), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [211] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_keyword_count,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(193), 1,
      sym_binary_expression,
    STATE(211), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(381), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(15), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(33), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [315] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_keyword_count,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(5), 1,
      sym_comment,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(193), 1,
      sym_binary_expression,
    STATE(211), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(381), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(15), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(33), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [416] = 17,
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
    STATE(133), 1,
      aux_sym_function_call_repeat1,
    STATE(145), 1,
      sym__integer,
    STATE(151), 1,
      sym__call_parameter,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym__double_quote_string,
    STATE(144), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(55), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(51), 11,
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
    ACTIONS(53), 15,
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
  [495] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      anon_sym_Z,
    STATE(7), 1,
      sym_comment,
    STATE(55), 1,
      sym_timezone,
    STATE(424), 1,
      sym_direction,
    ACTIONS(73), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
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
  [554] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      sym__natural_number,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(8), 1,
      sym_comment,
    STATE(139), 1,
      aux_sym_function_call_repeat1,
    STATE(167), 1,
      sym__integer,
    STATE(174), 1,
      sym__double_quote_string,
    STATE(177), 1,
      sym__call_parameter,
    STATE(178), 1,
      sym_literal,
    STATE(169), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(77), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(51), 11,
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
    ACTIONS(53), 12,
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
  [630] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_comment,
    ACTIONS(93), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [684] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_PLUS,
    STATE(10), 1,
      sym_comment,
    STATE(31), 1,
      sym__integer,
    STATE(89), 1,
      sym_direction,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(332), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [786] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(11), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [840] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(117), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(115), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [889] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      anon_sym_DOT,
    STATE(13), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [940] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(93), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [989] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1038] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_PLUS,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_comment,
    STATE(31), 1,
      sym__integer,
    STATE(80), 1,
      sym_direction,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(380), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1137] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_PLUS,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_comment,
    STATE(31), 1,
      sym__integer,
    STATE(83), 1,
      sym_direction,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(230), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1236] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym__natural_number,
    STATE(18), 1,
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
  [1287] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_PLUS,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_comment,
    STATE(31), 1,
      sym__integer,
    STATE(81), 1,
      sym_direction,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(163), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(230), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1386] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1435] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1484] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(143), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1533] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_PLUS,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_comment,
    STATE(31), 1,
      sym__integer,
    STATE(80), 1,
      sym_direction,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(380), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1632] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_PLUS,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_comment,
    STATE(31), 1,
      sym__integer,
    STATE(90), 1,
      sym_direction,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(230), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1731] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_PLUS,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_comment,
    STATE(31), 1,
      sym__integer,
    STATE(80), 1,
      sym_direction,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(380), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1830] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_comment,
    STATE(31), 1,
      sym__integer,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(187), 1,
      sym_binary_expression,
    STATE(189), 1,
      sym_assignment,
    STATE(347), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1928] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_comment,
    STATE(31), 1,
      sym__integer,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(135), 1,
      sym_field,
    STATE(140), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(265), 1,
      sym_term,
    STATE(266), 1,
      sym_table_reference,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2026] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
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
  [2074] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(159), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2122] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2170] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(31), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2220] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2268] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2316] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(34), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(339), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2412] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(35), 1,
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
  [2460] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(191), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(189), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2508] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2558] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(195), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2606] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(201), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2654] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      sym_keyword_side,
    STATE(31), 1,
      sym__integer,
    STATE(40), 1,
      sym_comment,
    STATE(86), 1,
      sym__join_definition,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(206), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2750] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      anon_sym_PLUS,
    STATE(31), 1,
      sym__integer,
    STATE(41), 1,
      sym_comment,
    STATE(80), 1,
      sym_direction,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(380), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2846] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(203), 1,
      sym_keyword_side,
    STATE(31), 1,
      sym__integer,
    STATE(42), 1,
      sym_comment,
    STATE(85), 1,
      sym__join_definition,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(206), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2942] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(43), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym__expression,
    STATE(135), 1,
      sym_field,
    STATE(189), 1,
      sym_assignment,
    STATE(265), 1,
      sym_term,
    STATE(266), 1,
      sym_table_reference,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3040] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(44), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(360), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3136] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(209), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [3184] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(213), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [3232] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      anon_sym_T,
    STATE(47), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(217), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [3282] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(225), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(223), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [3330] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [3380] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(50), 1,
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
  [3428] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [3476] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_comment,
    ACTIONS(235), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(233), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [3524] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(53), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [3572] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_comment,
    ACTIONS(243), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(241), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [3620] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(55), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(245), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [3668] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(56), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(249), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [3716] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(57), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(194), 1,
      sym_binary_expression,
    STATE(367), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3811] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(58), 1,
      sym_comment,
    STATE(128), 1,
      sym__expression,
    STATE(188), 1,
      sym_function_call,
    STATE(447), 1,
      sym__alias_identifier,
    ACTIONS(257), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3900] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    STATE(59), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(235), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(233), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [3953] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(60), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(365), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4046] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(235), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(233), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [4095] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(235), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(233), 29,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [4146] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(63), 1,
      sym_comment,
    STATE(128), 1,
      sym__expression,
    STATE(188), 1,
      sym_function_call,
    STATE(447), 1,
      sym__alias_identifier,
    ACTIONS(257), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4235] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_EQ,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    STATE(64), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(233), 22,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [4296] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_EQ,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    STATE(65), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(233), 23,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [4355] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(66), 1,
      sym_comment,
    STATE(128), 1,
      sym__expression,
    STATE(188), 1,
      sym_function_call,
    STATE(447), 1,
      sym__alias_identifier,
    ACTIONS(257), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4444] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_EQ,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(233), 24,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [4501] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(68), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(194), 1,
      sym_binary_expression,
    STATE(367), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4596] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(69), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(136), 1,
      sym_binary_expression,
    STATE(170), 1,
      sym__expression,
    STATE(256), 1,
      sym_term,
    STATE(279), 1,
      sym_assignment,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4691] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    ACTIONS(291), 1,
      anon_sym_EQ_EQ,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(70), 1,
      sym_comment,
    STATE(197), 1,
      sym_binary_expression,
    STATE(250), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4784] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(71), 1,
      sym_comment,
    STATE(128), 1,
      sym__expression,
    STATE(188), 1,
      sym_function_call,
    STATE(447), 1,
      sym__alias_identifier,
    ACTIONS(257), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4873] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(72), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(400), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4966] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(73), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(194), 1,
      sym_binary_expression,
    STATE(367), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5061] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(74), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym__expression,
    STATE(136), 1,
      sym_binary_expression,
    STATE(256), 1,
      sym_term,
    STATE(279), 1,
      sym_assignment,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5156] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(75), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(365), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5249] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(76), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(136), 1,
      sym_binary_expression,
    STATE(140), 1,
      sym__expression,
    STATE(256), 1,
      sym_term,
    STATE(279), 1,
      sym_assignment,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5344] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(77), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(365), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5437] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(78), 1,
      sym_comment,
    STATE(214), 1,
      sym_binary_expression,
    STATE(228), 1,
      sym__expression,
    STATE(419), 1,
      sym_function_call,
    STATE(447), 1,
      sym__alias_identifier,
    ACTIONS(303), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5528] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(79), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(365), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5621] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(80), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(372), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5711] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(81), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(163), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(233), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5801] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(82), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(365), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5891] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(83), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(233), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5981] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__integer,
    STATE(84), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(194), 1,
      sym_binary_expression,
    STATE(367), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6073] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(85), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(207), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6163] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(86), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(207), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6253] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(87), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(448), 1,
      sym_term,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6343] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(88), 1,
      sym_comment,
    STATE(201), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6429] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(89), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(170), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(356), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6519] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(90), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(233), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6609] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(91), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(282), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6699] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(92), 1,
      sym_comment,
    STATE(93), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym__expression,
    STATE(189), 1,
      sym_assignment,
    STATE(282), 1,
      sym_term,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(124), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6789] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      anon_sym_DOT,
    STATE(93), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 12,
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
    ACTIONS(309), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [6838] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(94), 1,
      sym_comment,
    STATE(205), 1,
      sym_binary_expression,
    STATE(250), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6925] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym_comment,
    STATE(205), 1,
      sym_binary_expression,
    STATE(250), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7012] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(96), 1,
      sym_comment,
    STATE(162), 1,
      sym__integer,
    STATE(199), 1,
      sym__double_quote_string,
    STATE(217), 1,
      sym__expression,
    STATE(329), 1,
      sym_range,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7097] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(97), 1,
      sym_comment,
    STATE(137), 1,
      sym__expression,
    STATE(283), 1,
      sym__boolean_expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7182] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      anon_sym_DASH,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      sym__natural_number,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      sym_identifier,
    STATE(98), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_function_call_repeat1,
    STATE(234), 1,
      sym__double_quote_string,
    STATE(241), 1,
      sym__integer,
    STATE(252), 1,
      sym__call_parameter,
    STATE(254), 1,
      sym_literal,
    STATE(242), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(327), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(53), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 10,
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
  [7253] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(341), 1,
      sym__natural_number,
    STATE(99), 1,
      sym_comment,
    STATE(199), 1,
      sym__double_quote_string,
    STATE(203), 1,
      sym__integer,
    STATE(217), 1,
      sym__expression,
    STATE(245), 1,
      sym_range,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7338] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(62), 1,
      sym__expression,
    STATE(100), 1,
      sym_comment,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7420] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(67), 1,
      sym__expression,
    STATE(101), 1,
      sym_comment,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7502] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(102), 1,
      sym_comment,
    STATE(199), 1,
      sym__double_quote_string,
    STATE(203), 1,
      sym__integer,
    STATE(226), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7584] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(103), 1,
      sym_comment,
    STATE(212), 1,
      sym__expression,
    STATE(214), 1,
      sym_binary_expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7668] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(104), 1,
      sym_comment,
    STATE(227), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7750] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(105), 1,
      sym_comment,
    STATE(209), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7832] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(106), 1,
      sym_comment,
    STATE(199), 1,
      sym__double_quote_string,
    STATE(203), 1,
      sym__integer,
    STATE(219), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7914] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym_comment,
    STATE(216), 1,
      sym_binary_expression,
    STATE(246), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7998] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(108), 1,
      sym_comment,
    STATE(130), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8080] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(109), 1,
      sym_comment,
    STATE(199), 1,
      sym__double_quote_string,
    STATE(203), 1,
      sym__integer,
    STATE(208), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8162] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(110), 1,
      sym_comment,
    STATE(200), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8244] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(111), 1,
      sym_comment,
    STATE(199), 1,
      sym__double_quote_string,
    STATE(203), 1,
      sym__integer,
    STATE(218), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8326] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(112), 1,
      sym_comment,
    STATE(215), 1,
      sym_binary_expression,
    STATE(246), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8410] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(113), 1,
      sym_comment,
    STATE(199), 1,
      sym__double_quote_string,
    STATE(203), 1,
      sym__integer,
    STATE(225), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8492] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(61), 1,
      sym__expression,
    STATE(114), 1,
      sym_comment,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8574] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(59), 1,
      sym__expression,
    STATE(115), 1,
      sym_comment,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8656] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(52), 1,
      sym__expression,
    STATE(116), 1,
      sym_comment,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8738] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(64), 1,
      sym__expression,
    STATE(117), 1,
      sym_comment,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8820] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(118), 1,
      sym_comment,
    STATE(129), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8902] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(65), 1,
      sym__expression,
    STATE(119), 1,
      sym_comment,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8984] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(120), 1,
      sym_comment,
    STATE(205), 1,
      sym_binary_expression,
    STATE(250), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9068] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(345), 1,
      anon_sym_DASH,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      sym__natural_number,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      sym_identifier,
    STATE(121), 1,
      sym_comment,
    STATE(161), 1,
      aux_sym_function_call_repeat1,
    STATE(261), 1,
      sym__integer,
    STATE(300), 1,
      sym__call_parameter,
    STATE(301), 1,
      sym_literal,
    STATE(302), 1,
      sym__double_quote_string,
    STATE(287), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(343), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(53), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 13,
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
  [9138] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(122), 1,
      sym_comment,
    STATE(213), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9220] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(123), 1,
      sym_comment,
    STATE(250), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(182), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9304] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(124), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 12,
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
    ACTIONS(309), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [9350] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(52), 1,
      sym__expression,
    STATE(125), 1,
      sym_comment,
    STATE(199), 1,
      sym__double_quote_string,
    STATE(203), 1,
      sym__integer,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9432] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(126), 1,
      sym_comment,
    STATE(199), 1,
      sym__double_quote_string,
    STATE(203), 1,
      sym__integer,
    STATE(221), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9514] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(127), 1,
      sym_comment,
    STATE(222), 1,
      sym_binary_expression,
    STATE(246), 1,
      sym__expression,
    STATE(447), 1,
      sym__alias_identifier,
    STATE(29), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(30), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(50), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(13), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9598] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(359), 1,
      sym_keyword_or,
    STATE(128), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(357), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [9655] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(359), 1,
      sym_keyword_or,
    STATE(129), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(361), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [9712] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(359), 1,
      sym_keyword_or,
    STATE(130), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(363), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [9769] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 13,
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
    ACTIONS(365), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [9812] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      anon_sym_DASH,
    ACTIONS(377), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(383), 1,
      sym__natural_number,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(389), 1,
      sym_identifier,
    STATE(145), 1,
      sym__integer,
    STATE(151), 1,
      sym__call_parameter,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym__double_quote_string,
    ACTIONS(367), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(132), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(144), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(371), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(369), 11,
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
  [9876] = 17,
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
    STATE(132), 1,
      aux_sym_function_call_repeat1,
    STATE(133), 1,
      sym_comment,
    STATE(145), 1,
      sym__integer,
    STATE(151), 1,
      sym__call_parameter,
    STATE(152), 1,
      sym_literal,
    STATE(153), 1,
      sym__double_quote_string,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(144), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(55), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(394), 11,
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
  [9942] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(359), 1,
      sym_keyword_or,
    ACTIONS(398), 1,
      anon_sym_EQ,
    STATE(134), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(396), 13,
      ts_builtin_sym_end,
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
  [9997] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(135), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 25,
      ts_builtin_sym_end,
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
  [10036] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 25,
      ts_builtin_sym_end,
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
  [10075] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(359), 1,
      sym_keyword_or,
    STATE(137), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(400), 13,
      ts_builtin_sym_end,
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
  [10127] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(405), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(411), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 1,
      sym__natural_number,
    ACTIONS(417), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(167), 1,
      sym__integer,
    STATE(174), 1,
      sym__double_quote_string,
    STATE(177), 1,
      sym__call_parameter,
    STATE(178), 1,
      sym_literal,
    ACTIONS(367), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(138), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(169), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(402), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(369), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [10188] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      sym__natural_number,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(138), 1,
      aux_sym_function_call_repeat1,
    STATE(139), 1,
      sym_comment,
    STATE(167), 1,
      sym__integer,
    STATE(174), 1,
      sym__double_quote_string,
    STATE(177), 1,
      sym__call_parameter,
    STATE(178), 1,
      sym_literal,
    ACTIONS(392), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(169), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(77), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(394), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [10251] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(359), 1,
      sym_keyword_or,
    ACTIONS(423), 1,
      anon_sym_EQ,
    STATE(140), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(396), 10,
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
  [10303] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(429), 1,
      anon_sym_COLON,
    STATE(141), 1,
      sym_comment,
    ACTIONS(425), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(427), 15,
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
  [10339] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(142), 1,
      sym_comment,
    ACTIONS(135), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(137), 15,
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
  [10372] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(143), 1,
      sym_comment,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(243), 15,
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
  [10405] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(144), 1,
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
  [10438] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(145), 1,
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
  [10471] = 4,
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
    ACTIONS(141), 15,
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
  [10504] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(147), 1,
      sym_comment,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(251), 15,
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
  [10537] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(148), 1,
      sym_comment,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(131), 15,
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
  [10570] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(433), 1,
      sym_keyword_filter,
    ACTIONS(435), 1,
      sym_keyword_derive,
    ACTIONS(437), 1,
      sym_keyword_group,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(441), 1,
      sym_keyword_sort,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(445), 1,
      sym_keyword_join,
    ACTIONS(447), 1,
      sym_keyword_select,
    STATE(149), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_transforms_repeat1,
    STATE(321), 1,
      sym_transforms,
    ACTIONS(431), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(278), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10623] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_comment,
    ACTIONS(449), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(451), 15,
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
  [10656] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(151), 1,
      sym_comment,
    ACTIONS(453), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(455), 15,
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
  [10689] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(152), 1,
      sym_comment,
    ACTIONS(425), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(427), 15,
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
  [10722] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(153), 1,
      sym_comment,
    ACTIONS(457), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(459), 15,
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
  [10755] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(154), 1,
      sym_comment,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(201), 15,
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
  [10788] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(463), 1,
      sym_keyword_filter,
    ACTIONS(466), 1,
      sym_keyword_derive,
    ACTIONS(469), 1,
      sym_keyword_group,
    ACTIONS(472), 1,
      sym_keyword_aggregate,
    ACTIONS(475), 1,
      sym_keyword_sort,
    ACTIONS(478), 1,
      sym_keyword_take,
    ACTIONS(481), 1,
      sym_keyword_join,
    ACTIONS(484), 1,
      sym_keyword_select,
    STATE(155), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(461), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(278), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10836] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(433), 1,
      sym_keyword_filter,
    ACTIONS(435), 1,
      sym_keyword_derive,
    ACTIONS(437), 1,
      sym_keyword_group,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(441), 1,
      sym_keyword_sort,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(445), 1,
      sym_keyword_join,
    ACTIONS(447), 1,
      sym_keyword_select,
    STATE(155), 1,
      aux_sym_transforms_repeat1,
    STATE(156), 1,
      sym_comment,
    ACTIONS(487), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(278), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10886] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      anon_sym_DASH,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      sym__natural_number,
    ACTIONS(337), 1,
      anon_sym_DOT,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_function_call_repeat1,
    STATE(234), 1,
      sym__double_quote_string,
    STATE(241), 1,
      sym__integer,
    STATE(252), 1,
      sym__call_parameter,
    STATE(254), 1,
      sym_literal,
    STATE(242), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(327), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(394), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [10944] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(492), 1,
      anon_sym_DASH,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      anon_sym_SQUOTE,
    ACTIONS(501), 1,
      sym__natural_number,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(507), 1,
      sym_identifier,
    STATE(234), 1,
      sym__double_quote_string,
    STATE(241), 1,
      sym__integer,
    STATE(252), 1,
      sym__call_parameter,
    STATE(254), 1,
      sym_literal,
    STATE(158), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(242), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(489), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(369), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [11000] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 18,
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
  [11032] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 18,
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
  [11064] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(345), 1,
      anon_sym_DASH,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      sym__natural_number,
    ACTIONS(353), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      sym_identifier,
    STATE(161), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym_function_call_repeat1,
    STATE(261), 1,
      sym__integer,
    STATE(300), 1,
      sym__call_parameter,
    STATE(301), 1,
      sym_literal,
    STATE(302), 1,
      sym__double_quote_string,
    STATE(287), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(343), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(392), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11119] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(162), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(510), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(167), 13,
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
  [11154] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(359), 1,
      sym_keyword_or,
    ACTIONS(514), 1,
      anon_sym_EQ,
    STATE(163), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(396), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [11201] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_COLON,
    STATE(164), 1,
      sym_comment,
    ACTIONS(425), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(427), 12,
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
  [11234] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(521), 1,
      anon_sym_DASH,
    ACTIONS(524), 1,
      anon_sym_DQUOTE,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(530), 1,
      sym__natural_number,
    ACTIONS(533), 1,
      anon_sym_DOT,
    ACTIONS(536), 1,
      sym_identifier,
    STATE(261), 1,
      sym__integer,
    STATE(300), 1,
      sym__call_parameter,
    STATE(301), 1,
      sym_literal,
    STATE(302), 1,
      sym__double_quote_string,
    STATE(165), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(287), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(518), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(367), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11287] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(449), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(451), 12,
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
  [11317] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
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
  [11347] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    ACTIONS(139), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(141), 12,
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
  [11377] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
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
  [11407] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(359), 1,
      sym_keyword_or,
    ACTIONS(539), 1,
      anon_sym_EQ,
    STATE(170), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(396), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11453] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(171), 1,
      sym_comment,
    ACTIONS(249), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(251), 12,
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
  [11483] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(172), 1,
      sym_comment,
    ACTIONS(241), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(243), 12,
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
  [11513] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment,
    ACTIONS(135), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(137), 12,
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
  [11543] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(174), 1,
      sym_comment,
    ACTIONS(457), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(459), 12,
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
  [11573] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym_comment,
    ACTIONS(129), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(131), 12,
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
  [11603] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    ACTIONS(433), 1,
      sym_keyword_filter,
    ACTIONS(437), 1,
      sym_keyword_group,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(541), 1,
      sym_keyword_derive,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_join,
    ACTIONS(547), 1,
      sym_keyword_select,
    STATE(176), 1,
      sym_comment,
    STATE(192), 1,
      aux_sym_transforms_repeat1,
    STATE(321), 1,
      sym_transforms,
    STATE(278), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11653] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(177), 1,
      sym_comment,
    ACTIONS(453), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(455), 12,
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
  [11683] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(178), 1,
      sym_comment,
    ACTIONS(425), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(427), 12,
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
  [11713] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(179), 1,
      sym_comment,
    ACTIONS(199), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(201), 12,
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
  [11743] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(180), 1,
      sym_comment,
    ACTIONS(549), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [11770] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(181), 1,
      sym_comment,
    ACTIONS(551), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [11797] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(182), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(553), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    ACTIONS(177), 12,
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
  [11828] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    ACTIONS(463), 1,
      sym_keyword_filter,
    ACTIONS(469), 1,
      sym_keyword_group,
    ACTIONS(472), 1,
      sym_keyword_aggregate,
    ACTIONS(478), 1,
      sym_keyword_take,
    ACTIONS(555), 1,
      sym_keyword_derive,
    ACTIONS(558), 1,
      sym_keyword_sort,
    ACTIONS(561), 1,
      sym_keyword_join,
    ACTIONS(564), 1,
      sym_keyword_select,
    STATE(183), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(278), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11873] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(184), 1,
      sym_comment,
    ACTIONS(567), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [11900] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(569), 1,
      anon_sym_COLON,
    ACTIONS(571), 1,
      anon_sym_DOT,
    STATE(185), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 14,
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
  [11933] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym_comment,
    STATE(357), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(179), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 12,
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
  [11968] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(187), 1,
      sym_comment,
    STATE(341), 1,
      aux_sym_derives_repeat1,
    ACTIONS(179), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 14,
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
  [11999] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(188), 1,
      sym_comment,
    ACTIONS(577), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [12026] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(189), 1,
      sym_comment,
    ACTIONS(396), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [12053] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(579), 1,
      anon_sym_COLON,
    ACTIONS(581), 1,
      anon_sym_DOT,
    STATE(190), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 14,
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
  [12086] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(191), 1,
      sym_comment,
    STATE(337), 1,
      aux_sym_derives_repeat1,
    ACTIONS(231), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 14,
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
  [12117] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(433), 1,
      sym_keyword_filter,
    ACTIONS(437), 1,
      sym_keyword_group,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    ACTIONS(541), 1,
      sym_keyword_derive,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_join,
    ACTIONS(547), 1,
      sym_keyword_select,
    STATE(183), 1,
      aux_sym_transforms_repeat1,
    STATE(192), 1,
      sym_comment,
    STATE(278), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [12164] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(193), 1,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(179), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 12,
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
  [12194] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(194), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 14,
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
  [12222] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(585), 1,
      anon_sym_DOT,
    STATE(195), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 14,
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
  [12252] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(196), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 14,
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
  [12280] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    STATE(197), 1,
      sym_comment,
    STATE(342), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 12,
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
  [12314] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(591), 1,
      anon_sym_T,
    STATE(198), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(217), 13,
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
  [12343] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(593), 1,
      anon_sym_DOT,
    STATE(199), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 13,
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
  [12372] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(359), 1,
      sym_keyword_or,
    STATE(200), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(595), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12413] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(359), 1,
      sym_keyword_or,
    STATE(201), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(597), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12454] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(202), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(249), 13,
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
  [12481] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(203), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 13,
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
  [12510] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(599), 1,
      anon_sym_DOT,
    STATE(204), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 13,
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
  [12539] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(205), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(177), 12,
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
  [12568] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_LBRACK,
    STATE(206), 1,
      sym_comment,
    STATE(274), 1,
      sym_conditions,
    STATE(275), 1,
      sym__self_join,
    ACTIONS(603), 13,
      ts_builtin_sym_end,
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
  [12599] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      anon_sym_LBRACK,
    STATE(207), 1,
      sym_comment,
    STATE(275), 1,
      sym__self_join,
    STATE(291), 1,
      sym_conditions,
    ACTIONS(607), 13,
      ts_builtin_sym_end,
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
  [12630] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(208), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(609), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(233), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [12660] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    STATE(209), 1,
      sym_comment,
    ACTIONS(233), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12698] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(613), 1,
      anon_sym_COLON,
    STATE(210), 1,
      sym_comment,
    ACTIONS(425), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(427), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [12726] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(359), 1,
      sym_keyword_or,
    ACTIONS(539), 1,
      anon_sym_EQ,
    STATE(211), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12766] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(615), 1,
      sym_keyword_and,
    ACTIONS(617), 1,
      sym_keyword_or,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12806] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(359), 1,
      sym_keyword_or,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12846] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(214), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 13,
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
  [12872] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 12,
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
  [12900] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 12,
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
  [12928] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(627), 1,
      sym_keyword_and,
    ACTIONS(629), 1,
      sym_keyword_or,
    ACTIONS(633), 1,
      anon_sym_DOT_DOT,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    ACTIONS(639), 1,
      anon_sym_QMARK_QMARK,
    STATE(217), 1,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(637), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(631), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12968] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    ACTIONS(639), 1,
      anon_sym_QMARK_QMARK,
    STATE(218), 1,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(637), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(233), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(631), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13004] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(627), 1,
      sym_keyword_and,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    ACTIONS(639), 1,
      anon_sym_QMARK_QMARK,
    STATE(219), 1,
      sym_comment,
    ACTIONS(233), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(609), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(637), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(631), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13042] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(220), 1,
      sym_comment,
    ACTIONS(641), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(643), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [13068] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    STATE(221), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(609), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(233), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [13100] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 12,
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
  [13128] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym_comment,
    ACTIONS(647), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(649), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [13154] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(224), 1,
      sym_comment,
    ACTIONS(641), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(643), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [13180] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(225), 1,
      sym_comment,
    ACTIONS(235), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(609), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(233), 11,
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
  [13208] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    STATE(226), 1,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(611), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(637), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(233), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(631), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13242] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    STATE(227), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(233), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13278] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(615), 1,
      sym_keyword_and,
    ACTIONS(617), 1,
      sym_keyword_or,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13318] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(229), 1,
      sym_comment,
    ACTIONS(135), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(137), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13343] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(230), 1,
      sym_comment,
    ACTIONS(653), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13366] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(231), 1,
      sym_comment,
    ACTIONS(655), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13389] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(232), 1,
      sym_comment,
    ACTIONS(129), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(131), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13414] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym_comment,
    ACTIONS(657), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13437] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(234), 1,
      sym_comment,
    ACTIONS(457), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(459), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13462] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(235), 1,
      sym_comment,
    ACTIONS(659), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13485] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(236), 1,
      sym_comment,
    ACTIONS(241), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(243), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13510] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(237), 1,
      sym_comment,
    ACTIONS(661), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13533] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(238), 1,
      sym_comment,
    ACTIONS(663), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13556] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(239), 1,
      sym_comment,
    ACTIONS(199), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(201), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13581] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(240), 1,
      sym_comment,
    ACTIONS(449), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(451), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13606] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(241), 1,
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
  [13631] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(242), 1,
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
  [13656] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(243), 1,
      sym_comment,
    ACTIONS(139), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(141), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13681] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(244), 1,
      sym_comment,
    ACTIONS(249), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(251), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13706] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(245), 1,
      sym_comment,
    ACTIONS(665), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13729] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(615), 1,
      sym_keyword_and,
    ACTIONS(617), 1,
      sym_keyword_or,
    STATE(246), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13766] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(247), 1,
      sym_comment,
    ACTIONS(667), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13789] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(669), 1,
      anon_sym_COLON,
    STATE(248), 1,
      sym_comment,
    ACTIONS(427), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
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
  [13816] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(249), 1,
      sym_comment,
    ACTIONS(671), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13839] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_PIPE,
    ACTIONS(273), 1,
      sym_keyword_and,
    ACTIONS(279), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(359), 1,
      sym_keyword_or,
    STATE(250), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(265), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13876] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(251), 1,
      sym_comment,
    ACTIONS(673), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13899] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(252), 1,
      sym_comment,
    ACTIONS(453), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(455), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13924] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym_comment,
    ACTIONS(675), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13947] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(254), 1,
      sym_comment,
    ACTIONS(425), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(427), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13972] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(255), 1,
      sym_comment,
    ACTIONS(137), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(135), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [13996] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(256), 1,
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
  [14018] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(257), 1,
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
  [14040] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(258), 1,
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
  [14062] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(259), 1,
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
  [14084] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(260), 1,
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
  [14106] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(261), 1,
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
  [14130] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(689), 1,
      anon_sym_DASH,
    ACTIONS(691), 1,
      anon_sym_DQUOTE,
    ACTIONS(693), 1,
      anon_sym_SQUOTE,
    ACTIONS(695), 1,
      sym__natural_number,
    ACTIONS(697), 1,
      anon_sym_DOT,
    STATE(262), 1,
      sym_comment,
    STATE(354), 1,
      sym__integer,
    STATE(370), 1,
      sym__double_quote_string,
    STATE(379), 1,
      sym_literal,
    STATE(373), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(687), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14170] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(263), 1,
      sym_comment,
    ACTIONS(141), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
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
  [14194] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(264), 1,
      sym_comment,
    ACTIONS(251), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(249), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14218] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(265), 1,
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
  [14240] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(266), 1,
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
  [14262] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      anon_sym_DASH,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      sym__natural_number,
    ACTIONS(337), 1,
      anon_sym_DOT,
    STATE(234), 1,
      sym__double_quote_string,
    STATE(240), 1,
      sym_literal,
    STATE(241), 1,
      sym__integer,
    STATE(267), 1,
      sym_comment,
    STATE(242), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(703), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14302] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(268), 1,
      sym_comment,
    ACTIONS(705), 13,
      ts_builtin_sym_end,
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
  [14324] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(269), 1,
      sym_comment,
    ACTIONS(707), 13,
      ts_builtin_sym_end,
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
  [14346] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(270), 1,
      sym_comment,
    ACTIONS(201), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(199), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14370] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      sym__natural_number,
    ACTIONS(87), 1,
      anon_sym_DOT,
    STATE(166), 1,
      sym_literal,
    STATE(167), 1,
      sym__integer,
    STATE(174), 1,
      sym__double_quote_string,
    STATE(271), 1,
      sym_comment,
    STATE(169), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(709), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14410] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(272), 1,
      sym_comment,
    ACTIONS(711), 13,
      ts_builtin_sym_end,
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
  [14432] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(273), 1,
      sym_comment,
    ACTIONS(243), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(241), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14456] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(274), 1,
      sym_comment,
    ACTIONS(607), 13,
      ts_builtin_sym_end,
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
  [14478] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(275), 1,
      sym_comment,
    ACTIONS(713), 13,
      ts_builtin_sym_end,
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
  [14500] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym_comment,
    ACTIONS(131), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(129), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14524] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(345), 1,
      anon_sym_DASH,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      sym__natural_number,
    ACTIONS(353), 1,
      anon_sym_DOT,
    STATE(261), 1,
      sym__integer,
    STATE(277), 1,
      sym_comment,
    STATE(299), 1,
      sym_literal,
    STATE(302), 1,
      sym__double_quote_string,
    STATE(287), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(715), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14564] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(278), 1,
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
  [14586] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(279), 1,
      sym_comment,
    ACTIONS(396), 13,
      ts_builtin_sym_end,
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
  [14608] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(280), 1,
      sym_comment,
    ACTIONS(719), 13,
      ts_builtin_sym_end,
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
  [14630] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(281), 1,
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
  [14652] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(282), 1,
      sym_comment,
    ACTIONS(723), 13,
      ts_builtin_sym_end,
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
  [14674] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(283), 1,
      sym_comment,
    ACTIONS(725), 13,
      ts_builtin_sym_end,
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
  [14696] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(284), 1,
      sym_comment,
    ACTIONS(727), 13,
      ts_builtin_sym_end,
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
  [14718] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(285), 1,
      sym_comment,
    ACTIONS(729), 13,
      ts_builtin_sym_end,
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
  [14740] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(286), 1,
      sym_comment,
    ACTIONS(731), 13,
      ts_builtin_sym_end,
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
  [14762] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(287), 1,
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
  [14786] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(288), 1,
      sym_comment,
    ACTIONS(733), 13,
      ts_builtin_sym_end,
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
  [14808] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(289), 1,
      sym_comment,
    ACTIONS(735), 13,
      ts_builtin_sym_end,
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
  [14830] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(290), 1,
      sym_comment,
    ACTIONS(737), 13,
      ts_builtin_sym_end,
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
  [14852] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(291), 1,
      sym_comment,
    ACTIONS(739), 13,
      ts_builtin_sym_end,
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
  [14874] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(292), 1,
      sym_comment,
    ACTIONS(741), 13,
      ts_builtin_sym_end,
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
  [14896] = 12,
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
    STATE(145), 1,
      sym__integer,
    STATE(150), 1,
      sym_literal,
    STATE(153), 1,
      sym__double_quote_string,
    STATE(293), 1,
      sym_comment,
    STATE(144), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(743), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14936] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(294), 1,
      sym_comment,
    ACTIONS(745), 13,
      ts_builtin_sym_end,
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
  [14958] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(295), 1,
      sym_comment,
    ACTIONS(747), 13,
      ts_builtin_sym_end,
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
  [14980] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(296), 1,
      sym_comment,
    ACTIONS(749), 13,
      ts_builtin_sym_end,
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
  [15002] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(297), 1,
      sym_comment,
    ACTIONS(751), 13,
      ts_builtin_sym_end,
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
  [15024] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(298), 1,
      sym_comment,
    ACTIONS(753), 13,
      ts_builtin_sym_end,
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
  [15046] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(299), 1,
      sym_comment,
    ACTIONS(451), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(449), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [15070] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(300), 1,
      sym_comment,
    ACTIONS(455), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(453), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [15094] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(301), 1,
      sym_comment,
    ACTIONS(427), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
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
  [15118] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(302), 1,
      sym_comment,
    ACTIONS(459), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
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
  [15142] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(755), 1,
      sym_keyword_sort,
    ACTIONS(757), 1,
      sym_keyword_window,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      sym_comment,
    STATE(308), 1,
      aux_sym_group_repeat2,
    STATE(320), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15173] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(755), 1,
      sym_keyword_sort,
    ACTIONS(757), 1,
      sym_keyword_window,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym_comment,
    STATE(308), 1,
      aux_sym_group_repeat2,
    STATE(320), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15204] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(755), 1,
      sym_keyword_sort,
    ACTIONS(757), 1,
      sym_keyword_window,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      sym_comment,
    STATE(308), 1,
      aux_sym_group_repeat2,
    STATE(320), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15235] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(755), 1,
      sym_keyword_sort,
    ACTIONS(757), 1,
      sym_keyword_window,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      sym_comment,
    STATE(308), 1,
      aux_sym_group_repeat2,
    STATE(320), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15266] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(755), 1,
      sym_keyword_sort,
    ACTIONS(757), 1,
      sym_keyword_window,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      sym_comment,
    STATE(308), 1,
      aux_sym_group_repeat2,
    STATE(320), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15297] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(769), 1,
      sym_keyword_aggregate,
    ACTIONS(772), 1,
      sym_keyword_sort,
    ACTIONS(775), 1,
      sym_keyword_take,
    ACTIONS(778), 1,
      sym_keyword_window,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(308), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(320), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15326] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(755), 1,
      sym_keyword_sort,
    ACTIONS(757), 1,
      sym_keyword_window,
    STATE(307), 1,
      aux_sym_group_repeat2,
    STATE(309), 1,
      sym_comment,
    STATE(320), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15354] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(783), 1,
      ts_builtin_sym_end,
    ACTIONS(785), 1,
      sym_keyword_from,
    ACTIONS(788), 1,
      sym_keyword_func,
    ACTIONS(791), 1,
      sym_keyword_let,
    STATE(149), 1,
      sym_from,
    STATE(310), 2,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(328), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15382] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(755), 1,
      sym_keyword_sort,
    ACTIONS(757), 1,
      sym_keyword_window,
    STATE(303), 1,
      aux_sym_group_repeat2,
    STATE(311), 1,
      sym_comment,
    STATE(320), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15410] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(755), 1,
      sym_keyword_sort,
    ACTIONS(757), 1,
      sym_keyword_window,
    STATE(305), 1,
      aux_sym_group_repeat2,
    STATE(312), 1,
      sym_comment,
    STATE(320), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15438] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(755), 1,
      sym_keyword_sort,
    ACTIONS(757), 1,
      sym_keyword_window,
    STATE(306), 1,
      aux_sym_group_repeat2,
    STATE(313), 1,
      sym_comment,
    STATE(320), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15466] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(9), 1,
      sym_keyword_func,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(794), 1,
      ts_builtin_sym_end,
    STATE(149), 1,
      sym_from,
    STATE(310), 1,
      aux_sym_program_repeat1,
    STATE(314), 1,
      sym_comment,
    STATE(328), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15496] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_take,
    ACTIONS(755), 1,
      sym_keyword_sort,
    ACTIONS(757), 1,
      sym_keyword_window,
    STATE(304), 1,
      aux_sym_group_repeat2,
    STATE(315), 1,
      sym_comment,
    STATE(320), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15524] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(316), 1,
      sym_comment,
    STATE(318), 1,
      aux_sym_window_definitions_repeat1,
    STATE(327), 1,
      sym__window_definition,
    STATE(396), 1,
      sym_window_definitions,
    ACTIONS(796), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15545] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
    STATE(327), 1,
      sym__window_definition,
    STATE(317), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(798), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15564] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
    STATE(317), 1,
      aux_sym_window_definitions_repeat1,
    STATE(318), 1,
      sym_comment,
    STATE(327), 1,
      sym__window_definition,
    ACTIONS(796), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15585] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(319), 1,
      sym_comment,
    ACTIONS(805), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [15599] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(320), 1,
      sym_comment,
    ACTIONS(807), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [15613] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(321), 1,
      sym_comment,
    ACTIONS(809), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      anon_sym_RPAREN,
  [15627] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      aux_sym__date_token1,
    ACTIONS(813), 1,
      aux_sym__time_token1,
    STATE(46), 1,
      sym__time,
    STATE(47), 1,
      sym__date,
    STATE(322), 1,
      sym_comment,
  [15646] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      anon_sym_DASH_GT,
    ACTIONS(817), 1,
      sym_identifier,
    STATE(385), 1,
      sym_parameter,
    STATE(323), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [15663] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(324), 1,
      sym_comment,
    ACTIONS(820), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [15676] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(325), 1,
      sym_comment,
    ACTIONS(822), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [15689] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(811), 1,
      aux_sym__date_token1,
    ACTIONS(824), 1,
      aux_sym__time_token1,
    STATE(46), 1,
      sym__time,
    STATE(198), 1,
      sym__date,
    STATE(326), 1,
      sym_comment,
  [15708] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(327), 1,
      sym_comment,
    ACTIONS(826), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [15721] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(328), 1,
      sym_comment,
    ACTIONS(828), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [15734] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(329), 1,
      sym_comment,
    ACTIONS(830), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [15747] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(832), 1,
      anon_sym_DASH_GT,
    ACTIONS(834), 1,
      sym_identifier,
    STATE(323), 1,
      aux_sym_function_definition_repeat1,
    STATE(330), 1,
      sym_comment,
    STATE(385), 1,
      sym_parameter,
  [15766] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      sym_comment,
    STATE(338), 1,
      aux_sym_group_repeat1,
  [15782] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    STATE(332), 1,
      sym_comment,
    STATE(352), 1,
      aux_sym_sorts_repeat1,
  [15798] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(583), 1,
      anon_sym_RBRACK,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(333), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [15812] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(847), 1,
      anon_sym_COLON,
    STATE(334), 1,
      sym_comment,
    ACTIONS(845), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [15826] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(849), 1,
      anon_sym_DASH,
    STATE(14), 1,
      sym__integer,
    STATE(335), 1,
      sym_comment,
  [15842] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(851), 1,
      anon_sym_DASH,
    STATE(14), 1,
      sym__integer,
    STATE(336), 1,
      sym_comment,
  [15858] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(855), 1,
      anon_sym_RBRACK,
    STATE(337), 1,
      sym_comment,
    STATE(340), 1,
      aux_sym_derives_repeat1,
  [15874] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(857), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RBRACK,
    STATE(338), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [15888] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      aux_sym_group_repeat1,
    STATE(339), 1,
      sym_comment,
  [15904] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
    STATE(340), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [15918] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_derives_repeat1,
    STATE(341), 1,
      sym_comment,
  [15934] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    STATE(342), 1,
      sym_comment,
    STATE(362), 1,
      aux_sym_conditions_repeat1,
  [15950] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(875), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
    STATE(343), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [15964] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(834), 1,
      sym_identifier,
    STATE(330), 1,
      aux_sym_function_definition_repeat1,
    STATE(344), 1,
      sym_comment,
    STATE(385), 1,
      sym_parameter,
  [15980] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(851), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym__integer,
    STATE(345), 1,
      sym_comment,
  [15996] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_sorts_repeat1,
    STATE(346), 1,
      sym_comment,
  [16012] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      aux_sym_derives_repeat1,
    STATE(347), 1,
      sym_comment,
  [16028] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_RBRACK,
    STATE(348), 1,
      sym_comment,
    STATE(357), 1,
      aux_sym_aggregate_repeat1,
  [16044] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(849), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym__integer,
    STATE(349), 1,
      sym_comment,
  [16060] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_group_repeat1,
    STATE(350), 1,
      sym_comment,
  [16076] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      sym_keyword_from,
    STATE(176), 1,
      sym_from,
    STATE(351), 1,
      sym_comment,
    STATE(426), 1,
      sym_pipeline,
  [16092] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_sorts_repeat1,
    STATE(352), 1,
      sym_comment,
  [16108] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(849), 1,
      anon_sym_DASH,
    STATE(22), 1,
      sym__integer,
    STATE(353), 1,
      sym_comment,
  [16124] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      anon_sym_DOT,
    STATE(354), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16138] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(355), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [16150] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_sorts_repeat1,
    STATE(356), 1,
      sym_comment,
  [16166] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(894), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_aggregate_repeat1,
    STATE(357), 1,
      sym_comment,
  [16182] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(358), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [16194] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(896), 1,
      sym__natural_number,
    STATE(359), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16208] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(898), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(350), 1,
      aux_sym_group_repeat1,
    STATE(360), 1,
      sym_comment,
  [16224] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym__natural_number,
    ACTIONS(851), 1,
      anon_sym_DASH,
    STATE(22), 1,
      sym__integer,
    STATE(361), 1,
      sym_comment,
  [16240] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_RBRACK,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(362), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [16254] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(905), 1,
      aux_sym__time_token1,
    STATE(7), 1,
      sym__time,
    STATE(363), 1,
      sym_comment,
  [16267] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(907), 1,
      sym_keyword_derive,
    STATE(364), 1,
      sym_comment,
    STATE(468), 1,
      sym_derives,
  [16280] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(365), 1,
      sym_comment,
    ACTIONS(860), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16291] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      sym__natural_number,
    ACTIONS(911), 1,
      anon_sym_DOT,
    STATE(366), 1,
      sym_comment,
  [16304] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(367), 1,
      sym_comment,
    ACTIONS(869), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16315] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(913), 1,
      sym__natural_number,
    ACTIONS(915), 1,
      anon_sym_DOT,
    STATE(368), 1,
      sym_comment,
  [16328] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(917), 1,
      sym__natural_number,
    ACTIONS(919), 1,
      anon_sym_DOT,
    STATE(369), 1,
      sym_comment,
  [16341] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(370), 1,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16352] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(921), 1,
      sym__natural_number,
    ACTIONS(923), 1,
      anon_sym_DOT,
    STATE(371), 1,
      sym_comment,
  [16365] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(372), 1,
      sym_comment,
    ACTIONS(925), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16376] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(373), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16387] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(374), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16398] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(375), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16409] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(376), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16420] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(927), 1,
      sym__natural_number,
    ACTIONS(929), 1,
      anon_sym_DOT,
    STATE(377), 1,
      sym_comment,
  [16433] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(931), 1,
      sym__natural_number,
    ACTIONS(933), 1,
      anon_sym_DOT,
    STATE(378), 1,
      sym_comment,
  [16446] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(379), 1,
      sym_comment,
    ACTIONS(935), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16457] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(380), 1,
      sym_comment,
    ACTIONS(878), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16468] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(381), 1,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16479] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(911), 1,
      anon_sym_DOT,
    ACTIONS(937), 1,
      sym__natural_number,
    STATE(382), 1,
      sym_comment,
  [16492] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(939), 1,
      aux_sym__time_token1,
    STATE(7), 1,
      sym__time,
    STATE(383), 1,
      sym_comment,
  [16505] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(384), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16516] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(385), 1,
      sym_comment,
    ACTIONS(941), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16527] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(945), 1,
      aux_sym_comment_token1,
    STATE(386), 1,
      sym_comment,
  [16537] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(947), 1,
      anon_sym_DQUOTE,
    STATE(387), 1,
      sym_comment,
  [16547] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(949), 1,
      anon_sym_DASH,
    STATE(388), 1,
      sym_comment,
  [16557] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      sym_comment,
  [16567] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    STATE(390), 1,
      sym_comment,
  [16577] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(575), 1,
      anon_sym_RBRACK,
    STATE(391), 1,
      sym_comment,
  [16587] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(951), 1,
      anon_sym_LPAREN,
    STATE(392), 1,
      sym_comment,
  [16597] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(864), 1,
      anon_sym_RBRACK,
    STATE(393), 1,
      sym_comment,
  [16607] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
    STATE(394), 1,
      sym_comment,
  [16617] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(953), 1,
      anon_sym_COLON,
    STATE(395), 1,
      sym_comment,
  [16627] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    STATE(396), 1,
      sym_comment,
  [16637] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(957), 1,
      aux_sym__date_token2,
    STATE(397), 1,
      sym_comment,
  [16647] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(959), 1,
      aux_sym__date_token2,
    STATE(398), 1,
      sym_comment,
  [16657] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(961), 1,
      anon_sym_COLON,
    STATE(399), 1,
      sym_comment,
  [16667] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(963), 1,
      anon_sym_LPAREN,
    STATE(400), 1,
      sym_comment,
  [16677] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(965), 1,
      anon_sym_LPAREN,
    STATE(401), 1,
      sym_comment,
  [16687] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(967), 1,
      sym_identifier,
    STATE(402), 1,
      sym_comment,
  [16697] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(969), 1,
      anon_sym_DASH,
    STATE(403), 1,
      sym_comment,
  [16707] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(971), 1,
      anon_sym_SQUOTE,
    STATE(404), 1,
      sym_comment,
  [16717] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(973), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(405), 1,
      sym_comment,
  [16727] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(975), 1,
      anon_sym_DQUOTE,
    STATE(406), 1,
      sym_comment,
  [16737] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(977), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(407), 1,
      sym_comment,
  [16747] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(979), 1,
      anon_sym_DQUOTE,
    STATE(408), 1,
      sym_comment,
  [16757] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(981), 1,
      sym__natural_number,
    STATE(409), 1,
      sym_comment,
  [16767] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(643), 1,
      aux_sym__date_token2,
    STATE(410), 1,
      sym_comment,
  [16777] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      sym__natural_number,
    STATE(411), 1,
      sym_comment,
  [16787] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(985), 1,
      anon_sym_DQUOTE,
    STATE(412), 1,
      sym_comment,
  [16797] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(987), 1,
      anon_sym_SQUOTE,
    STATE(413), 1,
      sym_comment,
  [16807] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(989), 1,
      anon_sym_DQUOTE,
    STATE(414), 1,
      sym_comment,
  [16817] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym__natural_number,
    STATE(415), 1,
      sym_comment,
  [16827] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(991), 1,
      aux_sym__date_token2,
    STATE(416), 1,
      sym_comment,
  [16837] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(993), 1,
      aux_sym__date_token2,
    STATE(417), 1,
      sym_comment,
  [16847] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(995), 1,
      anon_sym_LPAREN,
    STATE(418), 1,
      sym_comment,
  [16857] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      sym_comment,
  [16867] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(999), 1,
      sym__natural_number,
    STATE(420), 1,
      sym_comment,
  [16877] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(896), 1,
      sym__natural_number,
    STATE(421), 1,
      sym_comment,
  [16887] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      sym_comment,
  [16897] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1003), 1,
      anon_sym_SQUOTE,
    STATE(423), 1,
      sym_comment,
  [16907] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1005), 1,
      aux_sym__date_token2,
    STATE(424), 1,
      sym_comment,
  [16917] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1007), 1,
      anon_sym_LBRACK,
    STATE(425), 1,
      sym_comment,
  [16927] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      sym_comment,
  [16937] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1011), 1,
      sym__natural_number,
    STATE(427), 1,
      sym_comment,
  [16947] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1013), 1,
      sym__natural_number,
    STATE(428), 1,
      sym_comment,
  [16957] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      sym__natural_number,
    STATE(429), 1,
      sym_comment,
  [16967] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1015), 1,
      anon_sym_SQUOTE,
    STATE(430), 1,
      sym_comment,
  [16977] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_EQ,
    STATE(431), 1,
      sym_comment,
  [16987] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
    STATE(432), 1,
      sym_comment,
  [16997] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    STATE(433), 1,
      sym_comment,
  [17007] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1021), 1,
      sym__natural_number,
    STATE(434), 1,
      sym_comment,
  [17017] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1023), 1,
      sym__natural_number,
    STATE(435), 1,
      sym_comment,
  [17027] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1025), 1,
      anon_sym_DQUOTE,
    STATE(436), 1,
      sym_comment,
  [17037] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_SQUOTE,
    STATE(437), 1,
      sym_comment,
  [17047] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1029), 1,
      aux_sym__date_token2,
    STATE(438), 1,
      sym_comment,
  [17057] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1031), 1,
      sym__natural_number,
    STATE(439), 1,
      sym_comment,
  [17067] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1033), 1,
      sym__natural_number,
    STATE(440), 1,
      sym_comment,
  [17077] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1035), 1,
      anon_sym_DQUOTE,
    STATE(441), 1,
      sym_comment,
  [17087] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1037), 1,
      anon_sym_SQUOTE,
    STATE(442), 1,
      sym_comment,
  [17097] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1039), 1,
      aux_sym__date_token2,
    STATE(443), 1,
      sym_comment,
  [17107] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1041), 1,
      anon_sym_DQUOTE,
    STATE(444), 1,
      sym_comment,
  [17117] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1043), 1,
      aux_sym__double_quote_string_token1,
    STATE(445), 1,
      sym_comment,
  [17127] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1045), 1,
      aux_sym__literal_string_token1,
    STATE(446), 1,
      sym_comment,
  [17137] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1047), 1,
      anon_sym_DOT,
    STATE(447), 1,
      sym_comment,
  [17147] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1049), 1,
      anon_sym_RBRACK,
    STATE(448), 1,
      sym_comment,
  [17157] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1051), 1,
      sym__natural_number,
    STATE(449), 1,
      sym_comment,
  [17167] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1053), 1,
      aux_sym__literal_string_token1,
    STATE(450), 1,
      sym_comment,
  [17177] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1055), 1,
      aux_sym__double_quote_string_token1,
    STATE(451), 1,
      sym_comment,
  [17187] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1057), 1,
      aux_sym__double_quote_string_token1,
    STATE(452), 1,
      sym_comment,
  [17197] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1059), 1,
      aux_sym__double_quote_string_token1,
    STATE(453), 1,
      sym_comment,
  [17207] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1061), 1,
      aux_sym__double_quote_string_token1,
    STATE(454), 1,
      sym_comment,
  [17217] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1063), 1,
      aux_sym__double_quote_string_token1,
    STATE(455), 1,
      sym_comment,
  [17227] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1065), 1,
      aux_sym__double_quote_string_token1,
    STATE(456), 1,
      sym_comment,
  [17237] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1067), 1,
      aux_sym__literal_string_token1,
    STATE(457), 1,
      sym_comment,
  [17247] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(937), 1,
      sym__natural_number,
    STATE(458), 1,
      sym_comment,
  [17257] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1069), 1,
      sym_identifier,
    STATE(459), 1,
      sym_comment,
  [17267] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1071), 1,
      aux_sym__double_quote_string_token1,
    STATE(460), 1,
      sym_comment,
  [17277] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1073), 1,
      aux_sym__literal_string_token1,
    STATE(461), 1,
      sym_comment,
  [17287] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
    STATE(462), 1,
      sym_comment,
  [17297] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1077), 1,
      aux_sym__double_quote_string_token1,
    STATE(463), 1,
      sym_comment,
  [17307] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1079), 1,
      aux_sym__literal_string_token1,
    STATE(464), 1,
      sym_comment,
  [17317] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1081), 1,
      aux_sym__double_quote_string_token1,
    STATE(465), 1,
      sym_comment,
  [17327] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1083), 1,
      aux_sym__literal_string_token1,
    STATE(466), 1,
      sym_comment,
  [17337] = 3,
    ACTIONS(943), 1,
      anon_sym_POUND,
    ACTIONS(1085), 1,
      aux_sym__double_quote_string_token1,
    STATE(467), 1,
      sym_comment,
  [17347] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym_comment,
  [17357] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1089), 1,
      ts_builtin_sym_end,
    STATE(469), 1,
      sym_comment,
  [17367] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1091), 1,
      sym_identifier,
    STATE(470), 1,
      sym_comment,
  [17377] = 1,
    ACTIONS(1093), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 107,
  [SMALL_STATE(4)] = 211,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 416,
  [SMALL_STATE(7)] = 495,
  [SMALL_STATE(8)] = 554,
  [SMALL_STATE(9)] = 630,
  [SMALL_STATE(10)] = 684,
  [SMALL_STATE(11)] = 786,
  [SMALL_STATE(12)] = 840,
  [SMALL_STATE(13)] = 889,
  [SMALL_STATE(14)] = 940,
  [SMALL_STATE(15)] = 989,
  [SMALL_STATE(16)] = 1038,
  [SMALL_STATE(17)] = 1137,
  [SMALL_STATE(18)] = 1236,
  [SMALL_STATE(19)] = 1287,
  [SMALL_STATE(20)] = 1386,
  [SMALL_STATE(21)] = 1435,
  [SMALL_STATE(22)] = 1484,
  [SMALL_STATE(23)] = 1533,
  [SMALL_STATE(24)] = 1632,
  [SMALL_STATE(25)] = 1731,
  [SMALL_STATE(26)] = 1830,
  [SMALL_STATE(27)] = 1928,
  [SMALL_STATE(28)] = 2026,
  [SMALL_STATE(29)] = 2074,
  [SMALL_STATE(30)] = 2122,
  [SMALL_STATE(31)] = 2170,
  [SMALL_STATE(32)] = 2220,
  [SMALL_STATE(33)] = 2268,
  [SMALL_STATE(34)] = 2316,
  [SMALL_STATE(35)] = 2412,
  [SMALL_STATE(36)] = 2460,
  [SMALL_STATE(37)] = 2508,
  [SMALL_STATE(38)] = 2558,
  [SMALL_STATE(39)] = 2606,
  [SMALL_STATE(40)] = 2654,
  [SMALL_STATE(41)] = 2750,
  [SMALL_STATE(42)] = 2846,
  [SMALL_STATE(43)] = 2942,
  [SMALL_STATE(44)] = 3040,
  [SMALL_STATE(45)] = 3136,
  [SMALL_STATE(46)] = 3184,
  [SMALL_STATE(47)] = 3232,
  [SMALL_STATE(48)] = 3282,
  [SMALL_STATE(49)] = 3330,
  [SMALL_STATE(50)] = 3380,
  [SMALL_STATE(51)] = 3428,
  [SMALL_STATE(52)] = 3476,
  [SMALL_STATE(53)] = 3524,
  [SMALL_STATE(54)] = 3572,
  [SMALL_STATE(55)] = 3620,
  [SMALL_STATE(56)] = 3668,
  [SMALL_STATE(57)] = 3716,
  [SMALL_STATE(58)] = 3811,
  [SMALL_STATE(59)] = 3900,
  [SMALL_STATE(60)] = 3953,
  [SMALL_STATE(61)] = 4046,
  [SMALL_STATE(62)] = 4095,
  [SMALL_STATE(63)] = 4146,
  [SMALL_STATE(64)] = 4235,
  [SMALL_STATE(65)] = 4296,
  [SMALL_STATE(66)] = 4355,
  [SMALL_STATE(67)] = 4444,
  [SMALL_STATE(68)] = 4501,
  [SMALL_STATE(69)] = 4596,
  [SMALL_STATE(70)] = 4691,
  [SMALL_STATE(71)] = 4784,
  [SMALL_STATE(72)] = 4873,
  [SMALL_STATE(73)] = 4966,
  [SMALL_STATE(74)] = 5061,
  [SMALL_STATE(75)] = 5156,
  [SMALL_STATE(76)] = 5249,
  [SMALL_STATE(77)] = 5344,
  [SMALL_STATE(78)] = 5437,
  [SMALL_STATE(79)] = 5528,
  [SMALL_STATE(80)] = 5621,
  [SMALL_STATE(81)] = 5711,
  [SMALL_STATE(82)] = 5801,
  [SMALL_STATE(83)] = 5891,
  [SMALL_STATE(84)] = 5981,
  [SMALL_STATE(85)] = 6073,
  [SMALL_STATE(86)] = 6163,
  [SMALL_STATE(87)] = 6253,
  [SMALL_STATE(88)] = 6343,
  [SMALL_STATE(89)] = 6429,
  [SMALL_STATE(90)] = 6519,
  [SMALL_STATE(91)] = 6609,
  [SMALL_STATE(92)] = 6699,
  [SMALL_STATE(93)] = 6789,
  [SMALL_STATE(94)] = 6838,
  [SMALL_STATE(95)] = 6925,
  [SMALL_STATE(96)] = 7012,
  [SMALL_STATE(97)] = 7097,
  [SMALL_STATE(98)] = 7182,
  [SMALL_STATE(99)] = 7253,
  [SMALL_STATE(100)] = 7338,
  [SMALL_STATE(101)] = 7420,
  [SMALL_STATE(102)] = 7502,
  [SMALL_STATE(103)] = 7584,
  [SMALL_STATE(104)] = 7668,
  [SMALL_STATE(105)] = 7750,
  [SMALL_STATE(106)] = 7832,
  [SMALL_STATE(107)] = 7914,
  [SMALL_STATE(108)] = 7998,
  [SMALL_STATE(109)] = 8080,
  [SMALL_STATE(110)] = 8162,
  [SMALL_STATE(111)] = 8244,
  [SMALL_STATE(112)] = 8326,
  [SMALL_STATE(113)] = 8410,
  [SMALL_STATE(114)] = 8492,
  [SMALL_STATE(115)] = 8574,
  [SMALL_STATE(116)] = 8656,
  [SMALL_STATE(117)] = 8738,
  [SMALL_STATE(118)] = 8820,
  [SMALL_STATE(119)] = 8902,
  [SMALL_STATE(120)] = 8984,
  [SMALL_STATE(121)] = 9068,
  [SMALL_STATE(122)] = 9138,
  [SMALL_STATE(123)] = 9220,
  [SMALL_STATE(124)] = 9304,
  [SMALL_STATE(125)] = 9350,
  [SMALL_STATE(126)] = 9432,
  [SMALL_STATE(127)] = 9514,
  [SMALL_STATE(128)] = 9598,
  [SMALL_STATE(129)] = 9655,
  [SMALL_STATE(130)] = 9712,
  [SMALL_STATE(131)] = 9769,
  [SMALL_STATE(132)] = 9812,
  [SMALL_STATE(133)] = 9876,
  [SMALL_STATE(134)] = 9942,
  [SMALL_STATE(135)] = 9997,
  [SMALL_STATE(136)] = 10036,
  [SMALL_STATE(137)] = 10075,
  [SMALL_STATE(138)] = 10127,
  [SMALL_STATE(139)] = 10188,
  [SMALL_STATE(140)] = 10251,
  [SMALL_STATE(141)] = 10303,
  [SMALL_STATE(142)] = 10339,
  [SMALL_STATE(143)] = 10372,
  [SMALL_STATE(144)] = 10405,
  [SMALL_STATE(145)] = 10438,
  [SMALL_STATE(146)] = 10471,
  [SMALL_STATE(147)] = 10504,
  [SMALL_STATE(148)] = 10537,
  [SMALL_STATE(149)] = 10570,
  [SMALL_STATE(150)] = 10623,
  [SMALL_STATE(151)] = 10656,
  [SMALL_STATE(152)] = 10689,
  [SMALL_STATE(153)] = 10722,
  [SMALL_STATE(154)] = 10755,
  [SMALL_STATE(155)] = 10788,
  [SMALL_STATE(156)] = 10836,
  [SMALL_STATE(157)] = 10886,
  [SMALL_STATE(158)] = 10944,
  [SMALL_STATE(159)] = 11000,
  [SMALL_STATE(160)] = 11032,
  [SMALL_STATE(161)] = 11064,
  [SMALL_STATE(162)] = 11119,
  [SMALL_STATE(163)] = 11154,
  [SMALL_STATE(164)] = 11201,
  [SMALL_STATE(165)] = 11234,
  [SMALL_STATE(166)] = 11287,
  [SMALL_STATE(167)] = 11317,
  [SMALL_STATE(168)] = 11347,
  [SMALL_STATE(169)] = 11377,
  [SMALL_STATE(170)] = 11407,
  [SMALL_STATE(171)] = 11453,
  [SMALL_STATE(172)] = 11483,
  [SMALL_STATE(173)] = 11513,
  [SMALL_STATE(174)] = 11543,
  [SMALL_STATE(175)] = 11573,
  [SMALL_STATE(176)] = 11603,
  [SMALL_STATE(177)] = 11653,
  [SMALL_STATE(178)] = 11683,
  [SMALL_STATE(179)] = 11713,
  [SMALL_STATE(180)] = 11743,
  [SMALL_STATE(181)] = 11770,
  [SMALL_STATE(182)] = 11797,
  [SMALL_STATE(183)] = 11828,
  [SMALL_STATE(184)] = 11873,
  [SMALL_STATE(185)] = 11900,
  [SMALL_STATE(186)] = 11933,
  [SMALL_STATE(187)] = 11968,
  [SMALL_STATE(188)] = 11999,
  [SMALL_STATE(189)] = 12026,
  [SMALL_STATE(190)] = 12053,
  [SMALL_STATE(191)] = 12086,
  [SMALL_STATE(192)] = 12117,
  [SMALL_STATE(193)] = 12164,
  [SMALL_STATE(194)] = 12194,
  [SMALL_STATE(195)] = 12222,
  [SMALL_STATE(196)] = 12252,
  [SMALL_STATE(197)] = 12280,
  [SMALL_STATE(198)] = 12314,
  [SMALL_STATE(199)] = 12343,
  [SMALL_STATE(200)] = 12372,
  [SMALL_STATE(201)] = 12413,
  [SMALL_STATE(202)] = 12454,
  [SMALL_STATE(203)] = 12481,
  [SMALL_STATE(204)] = 12510,
  [SMALL_STATE(205)] = 12539,
  [SMALL_STATE(206)] = 12568,
  [SMALL_STATE(207)] = 12599,
  [SMALL_STATE(208)] = 12630,
  [SMALL_STATE(209)] = 12660,
  [SMALL_STATE(210)] = 12698,
  [SMALL_STATE(211)] = 12726,
  [SMALL_STATE(212)] = 12766,
  [SMALL_STATE(213)] = 12806,
  [SMALL_STATE(214)] = 12846,
  [SMALL_STATE(215)] = 12872,
  [SMALL_STATE(216)] = 12900,
  [SMALL_STATE(217)] = 12928,
  [SMALL_STATE(218)] = 12968,
  [SMALL_STATE(219)] = 13004,
  [SMALL_STATE(220)] = 13042,
  [SMALL_STATE(221)] = 13068,
  [SMALL_STATE(222)] = 13100,
  [SMALL_STATE(223)] = 13128,
  [SMALL_STATE(224)] = 13154,
  [SMALL_STATE(225)] = 13180,
  [SMALL_STATE(226)] = 13208,
  [SMALL_STATE(227)] = 13242,
  [SMALL_STATE(228)] = 13278,
  [SMALL_STATE(229)] = 13318,
  [SMALL_STATE(230)] = 13343,
  [SMALL_STATE(231)] = 13366,
  [SMALL_STATE(232)] = 13389,
  [SMALL_STATE(233)] = 13414,
  [SMALL_STATE(234)] = 13437,
  [SMALL_STATE(235)] = 13462,
  [SMALL_STATE(236)] = 13485,
  [SMALL_STATE(237)] = 13510,
  [SMALL_STATE(238)] = 13533,
  [SMALL_STATE(239)] = 13556,
  [SMALL_STATE(240)] = 13581,
  [SMALL_STATE(241)] = 13606,
  [SMALL_STATE(242)] = 13631,
  [SMALL_STATE(243)] = 13656,
  [SMALL_STATE(244)] = 13681,
  [SMALL_STATE(245)] = 13706,
  [SMALL_STATE(246)] = 13729,
  [SMALL_STATE(247)] = 13766,
  [SMALL_STATE(248)] = 13789,
  [SMALL_STATE(249)] = 13816,
  [SMALL_STATE(250)] = 13839,
  [SMALL_STATE(251)] = 13876,
  [SMALL_STATE(252)] = 13899,
  [SMALL_STATE(253)] = 13924,
  [SMALL_STATE(254)] = 13947,
  [SMALL_STATE(255)] = 13972,
  [SMALL_STATE(256)] = 13996,
  [SMALL_STATE(257)] = 14018,
  [SMALL_STATE(258)] = 14040,
  [SMALL_STATE(259)] = 14062,
  [SMALL_STATE(260)] = 14084,
  [SMALL_STATE(261)] = 14106,
  [SMALL_STATE(262)] = 14130,
  [SMALL_STATE(263)] = 14170,
  [SMALL_STATE(264)] = 14194,
  [SMALL_STATE(265)] = 14218,
  [SMALL_STATE(266)] = 14240,
  [SMALL_STATE(267)] = 14262,
  [SMALL_STATE(268)] = 14302,
  [SMALL_STATE(269)] = 14324,
  [SMALL_STATE(270)] = 14346,
  [SMALL_STATE(271)] = 14370,
  [SMALL_STATE(272)] = 14410,
  [SMALL_STATE(273)] = 14432,
  [SMALL_STATE(274)] = 14456,
  [SMALL_STATE(275)] = 14478,
  [SMALL_STATE(276)] = 14500,
  [SMALL_STATE(277)] = 14524,
  [SMALL_STATE(278)] = 14564,
  [SMALL_STATE(279)] = 14586,
  [SMALL_STATE(280)] = 14608,
  [SMALL_STATE(281)] = 14630,
  [SMALL_STATE(282)] = 14652,
  [SMALL_STATE(283)] = 14674,
  [SMALL_STATE(284)] = 14696,
  [SMALL_STATE(285)] = 14718,
  [SMALL_STATE(286)] = 14740,
  [SMALL_STATE(287)] = 14762,
  [SMALL_STATE(288)] = 14786,
  [SMALL_STATE(289)] = 14808,
  [SMALL_STATE(290)] = 14830,
  [SMALL_STATE(291)] = 14852,
  [SMALL_STATE(292)] = 14874,
  [SMALL_STATE(293)] = 14896,
  [SMALL_STATE(294)] = 14936,
  [SMALL_STATE(295)] = 14958,
  [SMALL_STATE(296)] = 14980,
  [SMALL_STATE(297)] = 15002,
  [SMALL_STATE(298)] = 15024,
  [SMALL_STATE(299)] = 15046,
  [SMALL_STATE(300)] = 15070,
  [SMALL_STATE(301)] = 15094,
  [SMALL_STATE(302)] = 15118,
  [SMALL_STATE(303)] = 15142,
  [SMALL_STATE(304)] = 15173,
  [SMALL_STATE(305)] = 15204,
  [SMALL_STATE(306)] = 15235,
  [SMALL_STATE(307)] = 15266,
  [SMALL_STATE(308)] = 15297,
  [SMALL_STATE(309)] = 15326,
  [SMALL_STATE(310)] = 15354,
  [SMALL_STATE(311)] = 15382,
  [SMALL_STATE(312)] = 15410,
  [SMALL_STATE(313)] = 15438,
  [SMALL_STATE(314)] = 15466,
  [SMALL_STATE(315)] = 15496,
  [SMALL_STATE(316)] = 15524,
  [SMALL_STATE(317)] = 15545,
  [SMALL_STATE(318)] = 15564,
  [SMALL_STATE(319)] = 15585,
  [SMALL_STATE(320)] = 15599,
  [SMALL_STATE(321)] = 15613,
  [SMALL_STATE(322)] = 15627,
  [SMALL_STATE(323)] = 15646,
  [SMALL_STATE(324)] = 15663,
  [SMALL_STATE(325)] = 15676,
  [SMALL_STATE(326)] = 15689,
  [SMALL_STATE(327)] = 15708,
  [SMALL_STATE(328)] = 15721,
  [SMALL_STATE(329)] = 15734,
  [SMALL_STATE(330)] = 15747,
  [SMALL_STATE(331)] = 15766,
  [SMALL_STATE(332)] = 15782,
  [SMALL_STATE(333)] = 15798,
  [SMALL_STATE(334)] = 15812,
  [SMALL_STATE(335)] = 15826,
  [SMALL_STATE(336)] = 15842,
  [SMALL_STATE(337)] = 15858,
  [SMALL_STATE(338)] = 15874,
  [SMALL_STATE(339)] = 15888,
  [SMALL_STATE(340)] = 15904,
  [SMALL_STATE(341)] = 15918,
  [SMALL_STATE(342)] = 15934,
  [SMALL_STATE(343)] = 15950,
  [SMALL_STATE(344)] = 15964,
  [SMALL_STATE(345)] = 15980,
  [SMALL_STATE(346)] = 15996,
  [SMALL_STATE(347)] = 16012,
  [SMALL_STATE(348)] = 16028,
  [SMALL_STATE(349)] = 16044,
  [SMALL_STATE(350)] = 16060,
  [SMALL_STATE(351)] = 16076,
  [SMALL_STATE(352)] = 16092,
  [SMALL_STATE(353)] = 16108,
  [SMALL_STATE(354)] = 16124,
  [SMALL_STATE(355)] = 16138,
  [SMALL_STATE(356)] = 16150,
  [SMALL_STATE(357)] = 16166,
  [SMALL_STATE(358)] = 16182,
  [SMALL_STATE(359)] = 16194,
  [SMALL_STATE(360)] = 16208,
  [SMALL_STATE(361)] = 16224,
  [SMALL_STATE(362)] = 16240,
  [SMALL_STATE(363)] = 16254,
  [SMALL_STATE(364)] = 16267,
  [SMALL_STATE(365)] = 16280,
  [SMALL_STATE(366)] = 16291,
  [SMALL_STATE(367)] = 16304,
  [SMALL_STATE(368)] = 16315,
  [SMALL_STATE(369)] = 16328,
  [SMALL_STATE(370)] = 16341,
  [SMALL_STATE(371)] = 16352,
  [SMALL_STATE(372)] = 16365,
  [SMALL_STATE(373)] = 16376,
  [SMALL_STATE(374)] = 16387,
  [SMALL_STATE(375)] = 16398,
  [SMALL_STATE(376)] = 16409,
  [SMALL_STATE(377)] = 16420,
  [SMALL_STATE(378)] = 16433,
  [SMALL_STATE(379)] = 16446,
  [SMALL_STATE(380)] = 16457,
  [SMALL_STATE(381)] = 16468,
  [SMALL_STATE(382)] = 16479,
  [SMALL_STATE(383)] = 16492,
  [SMALL_STATE(384)] = 16505,
  [SMALL_STATE(385)] = 16516,
  [SMALL_STATE(386)] = 16527,
  [SMALL_STATE(387)] = 16537,
  [SMALL_STATE(388)] = 16547,
  [SMALL_STATE(389)] = 16557,
  [SMALL_STATE(390)] = 16567,
  [SMALL_STATE(391)] = 16577,
  [SMALL_STATE(392)] = 16587,
  [SMALL_STATE(393)] = 16597,
  [SMALL_STATE(394)] = 16607,
  [SMALL_STATE(395)] = 16617,
  [SMALL_STATE(396)] = 16627,
  [SMALL_STATE(397)] = 16637,
  [SMALL_STATE(398)] = 16647,
  [SMALL_STATE(399)] = 16657,
  [SMALL_STATE(400)] = 16667,
  [SMALL_STATE(401)] = 16677,
  [SMALL_STATE(402)] = 16687,
  [SMALL_STATE(403)] = 16697,
  [SMALL_STATE(404)] = 16707,
  [SMALL_STATE(405)] = 16717,
  [SMALL_STATE(406)] = 16727,
  [SMALL_STATE(407)] = 16737,
  [SMALL_STATE(408)] = 16747,
  [SMALL_STATE(409)] = 16757,
  [SMALL_STATE(410)] = 16767,
  [SMALL_STATE(411)] = 16777,
  [SMALL_STATE(412)] = 16787,
  [SMALL_STATE(413)] = 16797,
  [SMALL_STATE(414)] = 16807,
  [SMALL_STATE(415)] = 16817,
  [SMALL_STATE(416)] = 16827,
  [SMALL_STATE(417)] = 16837,
  [SMALL_STATE(418)] = 16847,
  [SMALL_STATE(419)] = 16857,
  [SMALL_STATE(420)] = 16867,
  [SMALL_STATE(421)] = 16877,
  [SMALL_STATE(422)] = 16887,
  [SMALL_STATE(423)] = 16897,
  [SMALL_STATE(424)] = 16907,
  [SMALL_STATE(425)] = 16917,
  [SMALL_STATE(426)] = 16927,
  [SMALL_STATE(427)] = 16937,
  [SMALL_STATE(428)] = 16947,
  [SMALL_STATE(429)] = 16957,
  [SMALL_STATE(430)] = 16967,
  [SMALL_STATE(431)] = 16977,
  [SMALL_STATE(432)] = 16987,
  [SMALL_STATE(433)] = 16997,
  [SMALL_STATE(434)] = 17007,
  [SMALL_STATE(435)] = 17017,
  [SMALL_STATE(436)] = 17027,
  [SMALL_STATE(437)] = 17037,
  [SMALL_STATE(438)] = 17047,
  [SMALL_STATE(439)] = 17057,
  [SMALL_STATE(440)] = 17067,
  [SMALL_STATE(441)] = 17077,
  [SMALL_STATE(442)] = 17087,
  [SMALL_STATE(443)] = 17097,
  [SMALL_STATE(444)] = 17107,
  [SMALL_STATE(445)] = 17117,
  [SMALL_STATE(446)] = 17127,
  [SMALL_STATE(447)] = 17137,
  [SMALL_STATE(448)] = 17147,
  [SMALL_STATE(449)] = 17157,
  [SMALL_STATE(450)] = 17167,
  [SMALL_STATE(451)] = 17177,
  [SMALL_STATE(452)] = 17187,
  [SMALL_STATE(453)] = 17197,
  [SMALL_STATE(454)] = 17207,
  [SMALL_STATE(455)] = 17217,
  [SMALL_STATE(456)] = 17227,
  [SMALL_STATE(457)] = 17237,
  [SMALL_STATE(458)] = 17247,
  [SMALL_STATE(459)] = 17257,
  [SMALL_STATE(460)] = 17267,
  [SMALL_STATE(461)] = 17277,
  [SMALL_STATE(462)] = 17287,
  [SMALL_STATE(463)] = 17297,
  [SMALL_STATE(464)] = 17307,
  [SMALL_STATE(465)] = 17317,
  [SMALL_STATE(466)] = 17327,
  [SMALL_STATE(467)] = 17337,
  [SMALL_STATE(468)] = 17347,
  [SMALL_STATE(469)] = 17357,
  [SMALL_STATE(470)] = 17367,
  [SMALL_STATE(471)] = 17377,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 10),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 10),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 11),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 16),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(144),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(378),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(456),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(446),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(142),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(409),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(141),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(169),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(369),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(465),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(464),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(173),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(434),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(164),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 22),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 22),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 12),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 12),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(97),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(74),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(72),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(425),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(17),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(99),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(42),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(43),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(242),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(368),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(467),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(466),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(229),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(439),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(210),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 23),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(287),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(371),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(463),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(461),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(255),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(427),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(248),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 19),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 18),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 14),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(76),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(24),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(40),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(27),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 21),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_definition, 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 15),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(425),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(19),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(99),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(316),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(92),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(459),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(470),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(395),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(334),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 20),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(5),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(82),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(84),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(41),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(120),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 13),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1053] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1089] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
