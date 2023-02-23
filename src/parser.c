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
#define STATE_COUNT 310
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 17

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
  anon_sym_f = 42,
  anon_sym_DQUOTE = 43,
  aux_sym__double_quote_string_token1 = 44,
  anon_sym_SQUOTE = 45,
  aux_sym__literal_string_token1 = 46,
  sym__natural_number = 47,
  anon_sym_DOT = 48,
  sym_identifier = 49,
  anon_sym_DOT_DOT = 50,
  anon_sym_EQ = 51,
  anon_sym_STAR = 52,
  anon_sym_SLASH = 53,
  anon_sym_PIPE = 54,
  anon_sym_BANG_EQ = 55,
  anon_sym_GT = 56,
  anon_sym_GT_EQ = 57,
  anon_sym_LT = 58,
  anon_sym_LT_EQ = 59,
  anon_sym_QMARK_QMARK = 60,
  aux_sym__date_token1 = 61,
  aux_sym__date_token2 = 62,
  anon_sym_AT = 63,
  aux_sym__time_token1 = 64,
  anon_sym_T = 65,
  anon_sym_Z = 66,
  anon_sym_POUND = 67,
  aux_sym_comment_token1 = 68,
  sym_bang = 69,
  sym_program = 70,
  sym_pipeline = 71,
  sym_transforms = 72,
  sym_from = 73,
  sym_derives = 74,
  sym_filter = 75,
  sym__boolean_expression = 76,
  sym_aggregate = 77,
  sym_aggregate_operation = 78,
  sym__aggregate_count = 79,
  sym_sorts = 80,
  sym_direction = 81,
  sym_takes = 82,
  sym_window = 83,
  sym_window_definitions = 84,
  sym__window_definition = 85,
  sym_group = 86,
  sym_joins = 87,
  sym__join_definition = 88,
  sym_conditions = 89,
  sym__self_join = 90,
  sym_select = 91,
  sym_table_reference = 92,
  sym_term = 93,
  sym__expression = 94,
  sym_literal = 95,
  sym_f_string = 96,
  sym__double_quote_string = 97,
  sym__literal_string = 98,
  sym__integer = 99,
  sym__decimal_number = 100,
  sym_field = 101,
  sym__alias_identifier = 102,
  sym_range = 103,
  sym_assignment = 104,
  sym_binary_expression = 105,
  sym__date = 106,
  sym_date = 107,
  sym__time = 108,
  sym_time = 109,
  sym_timestamp = 110,
  sym_timezone = 111,
  sym_comment = 112,
  aux_sym_program_repeat1 = 113,
  aux_sym_transforms_repeat1 = 114,
  aux_sym_derives_repeat1 = 115,
  aux_sym_aggregate_repeat1 = 116,
  aux_sym_sorts_repeat1 = 117,
  aux_sym_window_definitions_repeat1 = 118,
  aux_sym_group_repeat1 = 119,
  aux_sym_group_repeat2 = 120,
  aux_sym_conditions_repeat1 = 121,
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
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 4},
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
    {field_left, 1},
    {field_operator, 2},
    {field_right, 3},
  [23] =
    {field_alias, 0},
    {field_operation, 3},
    {field_operator, 1},
  [26] =
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
  [16] = {
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
      if (eof) ADVANCE(247);
      if (lookahead == '!') ADVANCE(421);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ')') ADVANCE(296);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(300);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(301);
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
      if (lookahead == '[') ADVANCE(294);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'j') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '|') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(244)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == '+') ADVANCE(300);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'F') ADVANCE(316);
      if (lookahead == 'T') ADVANCE(342);
      if (lookahead == '[') ADVANCE(294);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(352);
      if (lookahead == 'C') ADVANCE(340);
      if (lookahead == 'F') ADVANCE(316);
      if (lookahead == 'M') ADVANCE(317);
      if (lookahead == 'S') ADVANCE(345);
      if (lookahead == 'T') ADVANCE(342);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(356);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(354);
      if (lookahead == 'F') ADVANCE(316);
      if (lookahead == 'S') ADVANCE(349);
      if (lookahead == 'T') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'F') ADVANCE(316);
      if (lookahead == 'S') ADVANCE(334);
      if (lookahead == 'T') ADVANCE(342);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(239)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(401);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(302);
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
      if (lookahead == 'D') ADVANCE(287);
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
      if (lookahead == 'E') ADVANCE(281);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(254);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(258);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(260);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(263);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(252);
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
      if (lookahead == 'G') ADVANCE(275);
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
      if (lookahead == 'G') ADVANCE(291);
      END_STATE();
    case 47:
      if (lookahead == 'G') ADVANCE(293);
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
      if (lookahead == 'H') ADVANCE(262);
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
      if (lookahead == 'L') ADVANCE(286);
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
      if (lookahead == 'M') ADVANCE(277);
      END_STATE();
    case 73:
      if (lookahead == 'M') ADVANCE(248);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(289);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(265);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(256);
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
      if (lookahead == 'P') ADVANCE(251);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(288);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(283);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(249);
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
      if (lookahead == 'S') ADVANCE(292);
      END_STATE();
    case 102:
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 103:
      if (lookahead == 'S') ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(284);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(253);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(271);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(285);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(257);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(279);
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
      if (lookahead == 'V') ADVANCE(273);
      END_STATE();
    case 118:
      if (lookahead == 'V') ADVANCE(31);
      END_STATE();
    case 119:
      if (lookahead == 'W') ADVANCE(255);
      END_STATE();
    case 120:
      if (lookahead == 'X') ADVANCE(91);
      END_STATE();
    case 121:
      if (lookahead == 'X') ADVANCE(267);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == 'w') ADVANCE(172);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 155:
      if (lookahead == 'f') ADVANCE(217);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(152);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(293);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 164:
      if (lookahead == 'h') ADVANCE(262);
      END_STATE();
    case 165:
      if (lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 177:
      if (lookahead == 'k') ADVANCE(140);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(214);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 230:
      if (lookahead == 'v') ADVANCE(273);
      END_STATE();
    case 231:
      if (lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 232:
      if (lookahead == 'w') ADVANCE(255);
      END_STATE();
    case 233:
      if (lookahead == 'x') ADVANCE(204);
      END_STATE();
    case 234:
      if (lookahead == 'x') ADVANCE(267);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(352);
      if (lookahead == 'C') ADVANCE(340);
      if (lookahead == 'F') ADVANCE(316);
      if (lookahead == 'M') ADVANCE(317);
      if (lookahead == 'S') ADVANCE(345);
      if (lookahead == 'T') ADVANCE(342);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(356);
      if (lookahead == 's') ADVANCE(384);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == '+') ADVANCE(300);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'F') ADVANCE(316);
      if (lookahead == 'T') ADVANCE(342);
      if (lookahead == '[') ADVANCE(294);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'F') ADVANCE(316);
      if (lookahead == 'S') ADVANCE(334);
      if (lookahead == 'T') ADVANCE(342);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 238:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '@') ADVANCE(410);
      if (lookahead == 'A') ADVANCE(354);
      if (lookahead == 'F') ADVANCE(316);
      if (lookahead == 'S') ADVANCE(349);
      if (lookahead == 'T') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(239)
      if (lookahead == '#') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 242:
      if (eof) ADVANCE(247);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ')') ADVANCE(296);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(300);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(301);
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
      if (lookahead == '[') ADVANCE(294);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'j') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '|') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(245)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 243:
      if (eof) ADVANCE(247);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ')') ADVANCE(296);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(300);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(301);
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
      if (lookahead == '[') ADVANCE(294);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'j') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '|') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(246)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 244:
      if (eof) ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(244)
      if (lookahead == '!') ADVANCE(421);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ')') ADVANCE(296);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(300);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(301);
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
      if (lookahead == '[') ADVANCE(294);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'j') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '|') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 245:
      if (eof) ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(245)
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ')') ADVANCE(296);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(300);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(301);
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
      if (lookahead == '[') ADVANCE(294);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'j') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '|') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 246:
      if (eof) ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(246)
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '#') ADVANCE(415);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == ')') ADVANCE(296);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == '+') ADVANCE(300);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '/') ADVANCE(399);
      if (lookahead == ':') ADVANCE(301);
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
      if (lookahead == '[') ADVANCE(294);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'j') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '|') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(134);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(308);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead == '#') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(396);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(355);
      if (lookahead == 'I') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(341);
      if (lookahead == 'G') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(321);
      if (lookahead == 'U') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
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
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(282);
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
      if (lookahead == 'g') ADVANCE(276);
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
      if (lookahead == 'm') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(266);
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
      if (lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(395);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(270);
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
      if (lookahead == 'v') ADVANCE(274);
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
      if (lookahead == 'x') ADVANCE(268);
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
      if (lookahead == '=') ADVANCE(302);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
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
          lookahead != '"') ADVANCE(308);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(312);
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
  [1] = {.lex_state = 242},
  [2] = {.lex_state = 242},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 243},
  [5] = {.lex_state = 243},
  [6] = {.lex_state = 242},
  [7] = {.lex_state = 242},
  [8] = {.lex_state = 242},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 243},
  [11] = {.lex_state = 242},
  [12] = {.lex_state = 243},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 242},
  [15] = {.lex_state = 243},
  [16] = {.lex_state = 242},
  [17] = {.lex_state = 242},
  [18] = {.lex_state = 242},
  [19] = {.lex_state = 242},
  [20] = {.lex_state = 242},
  [21] = {.lex_state = 243},
  [22] = {.lex_state = 243},
  [23] = {.lex_state = 242},
  [24] = {.lex_state = 242},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 243},
  [27] = {.lex_state = 242},
  [28] = {.lex_state = 242},
  [29] = {.lex_state = 243},
  [30] = {.lex_state = 242},
  [31] = {.lex_state = 242},
  [32] = {.lex_state = 242},
  [33] = {.lex_state = 242},
  [34] = {.lex_state = 242},
  [35] = {.lex_state = 242},
  [36] = {.lex_state = 242},
  [37] = {.lex_state = 242},
  [38] = {.lex_state = 242},
  [39] = {.lex_state = 242},
  [40] = {.lex_state = 242},
  [41] = {.lex_state = 243},
  [42] = {.lex_state = 242},
  [43] = {.lex_state = 242},
  [44] = {.lex_state = 242},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 242},
  [47] = {.lex_state = 242},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 242},
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
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 242},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 242},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 242},
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
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 242},
  [114] = {.lex_state = 242},
  [115] = {.lex_state = 242},
  [116] = {.lex_state = 242},
  [117] = {.lex_state = 242},
  [118] = {.lex_state = 242},
  [119] = {.lex_state = 242},
  [120] = {.lex_state = 242},
  [121] = {.lex_state = 242},
  [122] = {.lex_state = 242},
  [123] = {.lex_state = 242},
  [124] = {.lex_state = 242},
  [125] = {.lex_state = 242},
  [126] = {.lex_state = 242},
  [127] = {.lex_state = 242},
  [128] = {.lex_state = 242},
  [129] = {.lex_state = 242},
  [130] = {.lex_state = 242},
  [131] = {.lex_state = 242},
  [132] = {.lex_state = 242},
  [133] = {.lex_state = 242},
  [134] = {.lex_state = 242},
  [135] = {.lex_state = 242},
  [136] = {.lex_state = 242},
  [137] = {.lex_state = 242},
  [138] = {.lex_state = 242},
  [139] = {.lex_state = 242},
  [140] = {.lex_state = 242},
  [141] = {.lex_state = 242},
  [142] = {.lex_state = 242},
  [143] = {.lex_state = 242},
  [144] = {.lex_state = 242},
  [145] = {.lex_state = 242},
  [146] = {.lex_state = 242},
  [147] = {.lex_state = 242},
  [148] = {.lex_state = 242},
  [149] = {.lex_state = 242},
  [150] = {.lex_state = 242},
  [151] = {.lex_state = 242},
  [152] = {.lex_state = 242},
  [153] = {.lex_state = 242},
  [154] = {.lex_state = 242},
  [155] = {.lex_state = 242},
  [156] = {.lex_state = 242},
  [157] = {.lex_state = 242},
  [158] = {.lex_state = 242},
  [159] = {.lex_state = 242},
  [160] = {.lex_state = 242},
  [161] = {.lex_state = 242},
  [162] = {.lex_state = 242},
  [163] = {.lex_state = 242},
  [164] = {.lex_state = 242},
  [165] = {.lex_state = 242},
  [166] = {.lex_state = 242},
  [167] = {.lex_state = 242},
  [168] = {.lex_state = 242},
  [169] = {.lex_state = 242},
  [170] = {.lex_state = 242},
  [171] = {.lex_state = 242},
  [172] = {.lex_state = 242},
  [173] = {.lex_state = 242},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 242},
  [176] = {.lex_state = 242},
  [177] = {.lex_state = 242},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 242},
  [181] = {.lex_state = 242},
  [182] = {.lex_state = 242},
  [183] = {.lex_state = 242},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 242},
  [186] = {.lex_state = 242},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 242},
  [191] = {.lex_state = 242},
  [192] = {.lex_state = 242},
  [193] = {.lex_state = 242},
  [194] = {.lex_state = 242},
  [195] = {.lex_state = 242},
  [196] = {.lex_state = 242},
  [197] = {.lex_state = 242},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 242},
  [200] = {.lex_state = 242},
  [201] = {.lex_state = 242},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 242},
  [204] = {.lex_state = 242},
  [205] = {.lex_state = 242},
  [206] = {.lex_state = 242},
  [207] = {.lex_state = 242},
  [208] = {.lex_state = 242},
  [209] = {.lex_state = 242},
  [210] = {.lex_state = 242},
  [211] = {.lex_state = 242},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 242},
  [221] = {.lex_state = 242},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 242},
  [227] = {.lex_state = 243},
  [228] = {.lex_state = 243},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 242},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 242},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 242},
  [246] = {.lex_state = 242},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 242},
  [253] = {.lex_state = 242},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 242},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 243},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 243},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 242},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 242},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 242},
  [292] = {.lex_state = 310},
  [293] = {.lex_state = 306},
  [294] = {.lex_state = 419},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 242},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 242},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 306},
  [309] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(305),
    [sym_pipeline] = STATE(255),
    [sym_from] = STATE(115),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(220),
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
    STATE(31), 1,
      sym_timezone,
    STATE(279), 1,
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
  [57] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_keyword_count,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(3), 1,
      sym_comment,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(123), 1,
      sym_binary_expression,
    STATE(144), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(235), 3,
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
    ACTIONS(19), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [145] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(4), 1,
      sym_comment,
    ACTIONS(51), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(45), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [197] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      anon_sym_COLON,
    ACTIONS(57), 1,
      anon_sym_DOT,
    STATE(5), 1,
      sym_comment,
    ACTIONS(59), 3,
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
  [249] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
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
  [296] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_comment,
    ACTIONS(63), 3,
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
  [343] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      sym__natural_number,
    STATE(8), 1,
      sym_comment,
    ACTIONS(69), 3,
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
  [392] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_keyword_count,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym_comment,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(124), 1,
      sym_binary_expression,
    STATE(144), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(254), 3,
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
    ACTIONS(19), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [477] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [524] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(79), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [571] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_DOT,
    STATE(12), 1,
      sym_comment,
    ACTIONS(79), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [620] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_keyword_count,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      sym_comment,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(124), 1,
      sym_binary_expression,
    STATE(144), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(254), 3,
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
    ACTIONS(19), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [705] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
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
  [752] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [799] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
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
  [845] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
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
  [891] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(69), 3,
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
  [937] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
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
  [983] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
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
  [1029] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_DOT,
    STATE(21), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1077] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(22), 1,
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
  [1125] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(119), 3,
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
  [1171] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
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
  [1217] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_keyword_count,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym_comment,
    STATE(26), 1,
      sym__integer,
    STATE(124), 1,
      sym_binary_expression,
    STATE(144), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(254), 3,
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
    ACTIONS(19), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1299] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1347] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1393] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(133), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1439] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1485] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1531] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(143), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1577] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(147), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1623] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      anon_sym_T,
    STATE(33), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1671] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(159), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(157), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1717] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_EQ,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1774] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_EQ,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(173), 1,
      sym_keyword_and,
    STATE(36), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 20,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1833] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      anon_sym_EQ,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    STATE(37), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(147), 22,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1888] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(149), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(147), 27,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1937] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(149), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(147), 29,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [1984] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    STATE(40), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(149), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(147), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2035] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(41), 1,
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
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2082] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(42), 1,
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
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2126] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(179), 1,
      sym_keyword_or,
    ACTIONS(181), 1,
      anon_sym_EQ,
    STATE(43), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
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
  [2184] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(179), 1,
      sym_keyword_or,
    STATE(44), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(183), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2239] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_PLUS,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(45), 1,
      sym_comment,
    STATE(69), 1,
      sym_direction,
    STATE(138), 1,
      sym_assignment,
    STATE(229), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2322] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(179), 1,
      sym_keyword_or,
    STATE(46), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(193), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2377] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(179), 1,
      sym_keyword_or,
    STATE(47), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(195), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [2432] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_PLUS,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(48), 1,
      sym_comment,
    STATE(72), 1,
      sym_direction,
    STATE(138), 1,
      sym_assignment,
    STATE(258), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2512] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_PLUS,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(49), 1,
      sym_comment,
    STATE(75), 1,
      sym_direction,
    STATE(138), 1,
      sym_assignment,
    STATE(162), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2592] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_PLUS,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(50), 1,
      sym_comment,
    STATE(72), 1,
      sym_direction,
    STATE(138), 1,
      sym_assignment,
    STATE(258), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2672] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_PLUS,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(51), 1,
      sym_comment,
    STATE(72), 1,
      sym_direction,
    STATE(138), 1,
      sym_assignment,
    STATE(258), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2752] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(52), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(233), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2829] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(53), 1,
      sym_comment,
    STATE(86), 1,
      sym_field,
    STATE(138), 1,
      sym_assignment,
    STATE(204), 1,
      sym_table_reference,
    STATE(209), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2908] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      sym_keyword_side,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(54), 1,
      sym_comment,
    STATE(79), 1,
      sym__join_definition,
    STATE(138), 1,
      sym_assignment,
    STATE(160), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2985] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(191), 1,
      anon_sym_PLUS,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(55), 1,
      sym_comment,
    STATE(72), 1,
      sym_direction,
    STATE(138), 1,
      sym_assignment,
    STATE(258), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3062] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(56), 1,
      sym_comment,
    STATE(120), 1,
      sym_binary_expression,
    STATE(138), 1,
      sym_assignment,
    STATE(242), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3141] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(57), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(249), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3218] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(223), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [3259] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(59), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(260), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3333] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(60), 1,
      sym_comment,
    STATE(125), 1,
      sym_binary_expression,
    STATE(138), 1,
      sym_assignment,
    STATE(263), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3409] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(61), 1,
      sym_comment,
    STATE(125), 1,
      sym_binary_expression,
    STATE(138), 1,
      sym_assignment,
    STATE(263), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3485] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(62), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(273), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3559] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(63), 1,
      sym_comment,
    STATE(73), 1,
      sym_binary_expression,
    STATE(175), 1,
      sym_term,
    STATE(176), 1,
      sym_assignment,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3635] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    ACTIONS(241), 1,
      anon_sym_EQ_EQ,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(64), 1,
      sym_comment,
    STATE(128), 1,
      sym_binary_expression,
    STATE(158), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3709] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(65), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(260), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3783] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(66), 1,
      sym_comment,
    STATE(125), 1,
      sym_binary_expression,
    STATE(138), 1,
      sym_assignment,
    STATE(263), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3859] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(67), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(260), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3933] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(68), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(260), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4007] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(69), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(238), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4078] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(70), 1,
      sym_comment,
    STATE(125), 1,
      sym_binary_expression,
    STATE(138), 1,
      sym_assignment,
    STATE(263), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4151] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(71), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(205), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4222] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(72), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(256), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4293] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(73), 1,
      sym_comment,
    ACTIONS(119), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 23,
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
  [4330] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(74), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(285), 1,
      sym__alias_identifier,
    STATE(297), 1,
      sym_term,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4401] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(75), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(170), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4472] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(76), 1,
      sym_comment,
    STATE(135), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(17), 2,
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
  [4539] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(46), 1,
      sym__expression,
    STATE(77), 1,
      sym_comment,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(253), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(17), 2,
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
  [4606] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(78), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(260), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4677] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym__integer,
    STATE(41), 1,
      sym__double_quote_string,
    STATE(42), 1,
      sym_f_string,
    STATE(43), 1,
      sym__expression,
    STATE(79), 1,
      sym_comment,
    STATE(138), 1,
      sym_assignment,
    STATE(159), 1,
      sym_term,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4748] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(80), 1,
      sym_comment,
    STATE(141), 1,
      sym_binary_expression,
    STATE(148), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(257), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4817] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(81), 1,
      sym_comment,
    STATE(134), 1,
      sym_binary_expression,
    STATE(158), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4885] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(82), 1,
      sym_comment,
    STATE(90), 1,
      sym__expression,
    STATE(183), 1,
      sym__boolean_expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [4951] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_f,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__natural_number,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    STATE(83), 1,
      sym_comment,
    STATE(129), 1,
      sym__double_quote_string,
    STATE(133), 1,
      sym__integer,
    STATE(150), 1,
      sym__expression,
    STATE(171), 1,
      sym_range,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [5017] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_f,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      sym__natural_number,
    STATE(84), 1,
      sym_comment,
    STATE(116), 1,
      sym__integer,
    STATE(129), 1,
      sym__double_quote_string,
    STATE(150), 1,
      sym__expression,
    STATE(225), 1,
      sym_range,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [5083] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(85), 1,
      sym_comment,
    STATE(134), 1,
      sym_binary_expression,
    STATE(158), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5151] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(86), 1,
      sym_comment,
    ACTIONS(119), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 22,
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
  [5187] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(87), 1,
      sym_comment,
    STATE(136), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [5250] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(88), 1,
      sym_comment,
    STATE(143), 1,
      sym_binary_expression,
    STATE(157), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5315] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(44), 1,
      sym__expression,
    STATE(89), 1,
      sym_comment,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [5378] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(179), 1,
      sym_keyword_or,
    STATE(90), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(279), 10,
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
  [5427] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_f,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      sym__natural_number,
    STATE(91), 1,
      sym_comment,
    STATE(129), 1,
      sym__double_quote_string,
    STATE(133), 1,
      sym__integer,
    STATE(151), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [5490] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_f,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      sym__natural_number,
    STATE(92), 1,
      sym_comment,
    STATE(129), 1,
      sym__double_quote_string,
    STATE(133), 1,
      sym__integer,
    STATE(152), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [5553] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(93), 1,
      sym_comment,
    STATE(134), 1,
      sym_binary_expression,
    STATE(158), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5618] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(94), 1,
      sym_comment,
    STATE(155), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [5681] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(95), 1,
      sym_comment,
    STATE(142), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [5744] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(96), 1,
      sym_comment,
    STATE(141), 1,
      sym_binary_expression,
    STATE(147), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5809] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_f,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      sym__natural_number,
    STATE(97), 1,
      sym_comment,
    STATE(129), 1,
      sym__double_quote_string,
    STATE(133), 1,
      sym__integer,
    STATE(146), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [5872] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(37), 1,
      sym__expression,
    STATE(98), 1,
      sym_comment,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [5935] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(38), 1,
      sym__expression,
    STATE(99), 1,
      sym_comment,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [5998] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_f,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      sym__natural_number,
    STATE(100), 1,
      sym_comment,
    STATE(129), 1,
      sym__double_quote_string,
    STATE(133), 1,
      sym__integer,
    STATE(153), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [6061] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(39), 1,
      sym__expression,
    STATE(101), 1,
      sym_comment,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [6124] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(102), 1,
      sym_comment,
    STATE(154), 1,
      sym_binary_expression,
    STATE(157), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6189] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(40), 1,
      sym__expression,
    STATE(103), 1,
      sym_comment,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [6252] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(32), 1,
      sym__expression,
    STATE(104), 1,
      sym_comment,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [6315] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(36), 1,
      sym__expression,
    STATE(105), 1,
      sym_comment,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [6378] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(35), 1,
      sym__expression,
    STATE(106), 1,
      sym_comment,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [6441] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(47), 1,
      sym__expression,
    STATE(107), 1,
      sym_comment,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [6504] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_f,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      sym__natural_number,
    STATE(32), 1,
      sym__expression,
    STATE(108), 1,
      sym_comment,
    STATE(129), 1,
      sym__double_quote_string,
    STATE(133), 1,
      sym__integer,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [6567] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_f,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      sym__natural_number,
    STATE(109), 1,
      sym_comment,
    STATE(129), 1,
      sym__double_quote_string,
    STATE(133), 1,
      sym__integer,
    STATE(149), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [6630] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(110), 1,
      sym_comment,
    STATE(140), 1,
      sym_binary_expression,
    STATE(157), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(23), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6695] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      anon_sym_f,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      sym__natural_number,
    STATE(111), 1,
      sym_comment,
    STATE(129), 1,
      sym__double_quote_string,
    STATE(133), 1,
      sym__integer,
    STATE(145), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [6758] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_f,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__integer,
    STATE(112), 1,
      sym_comment,
    STATE(156), 1,
      sym__expression,
    STATE(285), 1,
      sym__alias_identifier,
    ACTIONS(17), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(17), 2,
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
  [6821] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(113), 1,
      sym_comment,
    ACTIONS(75), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 18,
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
  [6853] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(114), 1,
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
  [6885] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym_keyword_filter,
    ACTIONS(285), 1,
      sym_keyword_derive,
    ACTIONS(287), 1,
      sym_keyword_group,
    ACTIONS(289), 1,
      sym_keyword_aggregate,
    ACTIONS(291), 1,
      sym_keyword_sort,
    ACTIONS(293), 1,
      sym_keyword_take,
    ACTIONS(295), 1,
      sym_keyword_join,
    ACTIONS(297), 1,
      sym_keyword_select,
    STATE(115), 1,
      sym_comment,
    STATE(118), 1,
      aux_sym_transforms_repeat1,
    STATE(267), 1,
      sym_transforms,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(194), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [6936] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      anon_sym_DOT,
    STATE(116), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(299), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(97), 13,
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
  [6971] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      sym_keyword_filter,
    ACTIONS(308), 1,
      sym_keyword_derive,
    ACTIONS(311), 1,
      sym_keyword_group,
    ACTIONS(314), 1,
      sym_keyword_aggregate,
    ACTIONS(317), 1,
      sym_keyword_sort,
    ACTIONS(320), 1,
      sym_keyword_take,
    ACTIONS(323), 1,
      sym_keyword_join,
    ACTIONS(326), 1,
      sym_keyword_select,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(117), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(194), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [7017] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      sym_keyword_filter,
    ACTIONS(285), 1,
      sym_keyword_derive,
    ACTIONS(287), 1,
      sym_keyword_group,
    ACTIONS(289), 1,
      sym_keyword_aggregate,
    ACTIONS(291), 1,
      sym_keyword_sort,
    ACTIONS(293), 1,
      sym_keyword_take,
    ACTIONS(295), 1,
      sym_keyword_join,
    ACTIONS(297), 1,
      sym_keyword_select,
    STATE(117), 1,
      aux_sym_transforms_repeat1,
    STATE(118), 1,
      sym_comment,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(194), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [7065] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(333), 1,
      anon_sym_DOT,
    STATE(119), 1,
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
  [7098] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(120), 1,
      sym_comment,
    STATE(247), 1,
      aux_sym_derives_repeat1,
    ACTIONS(119), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 14,
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
  [7129] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(121), 1,
      sym_comment,
    STATE(231), 1,
      aux_sym_derives_repeat1,
    ACTIONS(103), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 14,
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
  [7160] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      anon_sym_COLON,
    ACTIONS(337), 1,
      anon_sym_DOT,
    STATE(122), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 14,
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
  [7193] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_comment,
    STATE(239), 1,
      aux_sym_aggregate_repeat1,
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
  [7228] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(124), 1,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [7258] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym_comment,
    ACTIONS(119), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 14,
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
  [7286] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(345), 1,
      anon_sym_DOT,
    STATE(126), 1,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 14,
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
  [7316] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(127), 1,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 14,
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
  [7344] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym_comment,
    STATE(237), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(119), 2,
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
  [7378] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      anon_sym_DOT,
    STATE(129), 1,
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
  [7407] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(130), 1,
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
  [7434] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(353), 1,
      anon_sym_DOT,
    STATE(131), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 13,
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
  [7463] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(355), 1,
      anon_sym_T,
    STATE(132), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 13,
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
  [7492] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      anon_sym_DOT,
    STATE(133), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 13,
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
  [7521] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(134), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(357), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [7550] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(179), 1,
      sym_keyword_or,
    STATE(135), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7591] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(179), 1,
      sym_keyword_or,
    STATE(136), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7632] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(137), 1,
      sym_comment,
    ACTIONS(363), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [7657] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_comment,
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
  [7682] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(139), 1,
      sym_comment,
    ACTIONS(365), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [7707] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      sym_comment,
    ACTIONS(119), 2,
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
  [7735] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 13,
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
  [7761] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(173), 1,
      sym_keyword_and,
    STATE(142), 1,
      sym_comment,
    ACTIONS(147), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7799] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_comment,
    ACTIONS(119), 2,
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
  [7827] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(179), 1,
      sym_keyword_or,
    ACTIONS(181), 1,
      anon_sym_EQ,
    STATE(144), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7867] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    STATE(145), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(379), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(147), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(373), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7901] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(381), 1,
      anon_sym_QMARK_QMARK,
    STATE(146), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(379), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(147), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(373), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7937] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(383), 1,
      sym_keyword_and,
    ACTIONS(385), 1,
      sym_keyword_or,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7977] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(383), 1,
      sym_keyword_and,
    ACTIONS(385), 1,
      sym_keyword_or,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8017] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(149), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8047] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(381), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(393), 1,
      sym_keyword_or,
    ACTIONS(395), 1,
      anon_sym_DOT_DOT,
    STATE(150), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(379), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8087] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(381), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(391), 1,
      sym_keyword_and,
    STATE(151), 1,
      sym_comment,
    ACTIONS(147), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(379), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(373), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8125] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    STATE(152), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(147), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8157] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(153), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 11,
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
  [8185] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      sym_comment,
    ACTIONS(119), 2,
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
  [8213] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    STATE(155), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(147), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8249] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(179), 1,
      sym_keyword_or,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8289] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(383), 1,
      sym_keyword_and,
    ACTIONS(385), 1,
      sym_keyword_or,
    STATE(157), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8326] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(173), 1,
      sym_keyword_and,
    ACTIONS(179), 1,
      sym_keyword_or,
    STATE(158), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(169), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8363] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    STATE(159), 1,
      sym_comment,
    STATE(190), 1,
      sym_conditions,
    STATE(195), 1,
      sym__self_join,
    ACTIONS(401), 10,
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
  [8391] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    STATE(160), 1,
      sym_comment,
    STATE(191), 1,
      sym_conditions,
    STATE(195), 1,
      sym__self_join,
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
  [8419] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(161), 1,
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
  [8440] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(162), 1,
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
  [8461] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
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
  [8482] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_comment,
    ACTIONS(413), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [8503] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(415), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [8524] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(417), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [8545] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(419), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [8566] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    ACTIONS(421), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [8587] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(423), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [8608] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(170), 1,
      sym_comment,
    ACTIONS(425), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [8629] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(171), 1,
      sym_comment,
    ACTIONS(427), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [8650] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(172), 1,
      sym_comment,
    ACTIONS(429), 11,
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
  [8670] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment,
    ACTIONS(431), 11,
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
  [8690] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(174), 1,
      sym_comment,
    ACTIONS(433), 4,
      sym_keyword_true,
      sym_keyword_false,
      anon_sym_f,
      sym_identifier,
    ACTIONS(435), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [8712] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym_comment,
    ACTIONS(437), 11,
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
  [8732] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(176), 1,
      sym_comment,
    ACTIONS(177), 11,
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
  [8752] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(177), 1,
      sym_comment,
    ACTIONS(439), 11,
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
  [8772] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(178), 1,
      sym_comment,
    ACTIONS(441), 4,
      sym_keyword_true,
      sym_keyword_false,
      anon_sym_f,
      sym_identifier,
    ACTIONS(443), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [8794] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(179), 1,
      sym_comment,
    ACTIONS(441), 4,
      sym_keyword_true,
      sym_keyword_false,
      anon_sym_f,
      sym_identifier,
    ACTIONS(443), 7,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [8816] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(180), 1,
      sym_comment,
    ACTIONS(445), 11,
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
  [8836] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(181), 1,
      sym_comment,
    ACTIONS(447), 11,
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
  [8856] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(182), 1,
      sym_comment,
    ACTIONS(449), 11,
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
  [8876] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(183), 1,
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
  [8895] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(453), 1,
      sym_keyword_aggregate,
    ACTIONS(456), 1,
      sym_keyword_sort,
    ACTIONS(459), 1,
      sym_keyword_take,
    ACTIONS(462), 1,
      sym_keyword_window,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(184), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(223), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8924] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(185), 1,
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
  [8943] = 3,
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
  [8962] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_keyword_aggregate,
    ACTIONS(291), 1,
      sym_keyword_sort,
    ACTIONS(293), 1,
      sym_keyword_take,
    ACTIONS(471), 1,
      sym_keyword_window,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_group_repeat2,
    STATE(187), 1,
      sym_comment,
    STATE(223), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [8993] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_keyword_aggregate,
    ACTIONS(291), 1,
      sym_keyword_sort,
    ACTIONS(293), 1,
      sym_keyword_take,
    ACTIONS(471), 1,
      sym_keyword_window,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_group_repeat2,
    STATE(188), 1,
      sym_comment,
    STATE(223), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [9024] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_keyword_aggregate,
    ACTIONS(291), 1,
      sym_keyword_sort,
    ACTIONS(293), 1,
      sym_keyword_take,
    ACTIONS(471), 1,
      sym_keyword_window,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_group_repeat2,
    STATE(189), 1,
      sym_comment,
    STATE(223), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [9055] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(190), 1,
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
  [9074] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(191), 1,
      sym_comment,
    ACTIONS(401), 10,
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
  [9093] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(192), 1,
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
  [9112] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(193), 1,
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
  [9131] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(194), 1,
      sym_comment,
    ACTIONS(485), 10,
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
  [9150] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(195), 1,
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
  [9169] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(196), 1,
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
  [9188] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(197), 1,
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
  [9207] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_keyword_aggregate,
    ACTIONS(291), 1,
      sym_keyword_sort,
    ACTIONS(293), 1,
      sym_keyword_take,
    ACTIONS(471), 1,
      sym_keyword_window,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_group_repeat2,
    STATE(198), 1,
      sym_comment,
    STATE(223), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [9238] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(199), 1,
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
  [9257] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(200), 1,
      sym_comment,
    ACTIONS(497), 10,
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
  [9276] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(201), 1,
      sym_comment,
    ACTIONS(499), 10,
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
  [9295] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_keyword_aggregate,
    ACTIONS(291), 1,
      sym_keyword_sort,
    ACTIONS(293), 1,
      sym_keyword_take,
    ACTIONS(471), 1,
      sym_keyword_window,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_group_repeat2,
    STATE(202), 1,
      sym_comment,
    STATE(223), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [9326] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(203), 1,
      sym_comment,
    ACTIONS(503), 10,
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
  [9345] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(204), 1,
      sym_comment,
    ACTIONS(505), 10,
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
  [9364] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(205), 1,
      sym_comment,
    ACTIONS(507), 10,
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
  [9383] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(206), 1,
      sym_comment,
    ACTIONS(509), 10,
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
  [9402] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(207), 1,
      sym_comment,
    ACTIONS(511), 10,
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
  [9421] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(208), 1,
      sym_comment,
    ACTIONS(513), 10,
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
  [9440] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(209), 1,
      sym_comment,
    ACTIONS(515), 10,
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
  [9459] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(210), 1,
      sym_comment,
    ACTIONS(517), 10,
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
  [9478] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(211), 1,
      sym_comment,
    ACTIONS(519), 10,
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
  [9497] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_keyword_aggregate,
    ACTIONS(291), 1,
      sym_keyword_sort,
    ACTIONS(293), 1,
      sym_keyword_take,
    ACTIONS(471), 1,
      sym_keyword_window,
    STATE(188), 1,
      aux_sym_group_repeat2,
    STATE(212), 1,
      sym_comment,
    STATE(223), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [9525] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_keyword_aggregate,
    ACTIONS(291), 1,
      sym_keyword_sort,
    ACTIONS(293), 1,
      sym_keyword_take,
    ACTIONS(471), 1,
      sym_keyword_window,
    STATE(202), 1,
      aux_sym_group_repeat2,
    STATE(213), 1,
      sym_comment,
    STATE(223), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [9553] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_keyword_aggregate,
    ACTIONS(291), 1,
      sym_keyword_sort,
    ACTIONS(293), 1,
      sym_keyword_take,
    ACTIONS(471), 1,
      sym_keyword_window,
    STATE(187), 1,
      aux_sym_group_repeat2,
    STATE(214), 1,
      sym_comment,
    STATE(223), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [9581] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_keyword_aggregate,
    ACTIONS(291), 1,
      sym_keyword_sort,
    ACTIONS(293), 1,
      sym_keyword_take,
    ACTIONS(471), 1,
      sym_keyword_window,
    STATE(198), 1,
      aux_sym_group_repeat2,
    STATE(215), 1,
      sym_comment,
    STATE(223), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [9609] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      sym_keyword_aggregate,
    ACTIONS(291), 1,
      sym_keyword_sort,
    ACTIONS(293), 1,
      sym_keyword_take,
    ACTIONS(471), 1,
      sym_keyword_window,
    STATE(189), 1,
      aux_sym_group_repeat2,
    STATE(216), 1,
      sym_comment,
    STATE(223), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [9637] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_comment,
    STATE(218), 1,
      aux_sym_window_definitions_repeat1,
    STATE(224), 1,
      sym__window_definition,
    ACTIONS(521), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [9658] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    STATE(224), 1,
      sym__window_definition,
    STATE(218), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(525), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [9677] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(217), 1,
      aux_sym_window_definitions_repeat1,
    STATE(219), 1,
      sym_comment,
    STATE(224), 1,
      sym__window_definition,
    STATE(301), 1,
      sym_window_definitions,
    ACTIONS(521), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [9698] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
    STATE(115), 1,
      sym_from,
    STATE(220), 1,
      sym_comment,
    STATE(221), 1,
      aux_sym_program_repeat1,
    STATE(255), 1,
      sym_pipeline,
  [9720] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
    ACTIONS(534), 1,
      sym_keyword_from,
    STATE(115), 1,
      sym_from,
    STATE(255), 1,
      sym_pipeline,
    STATE(221), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [9740] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(222), 1,
      sym_comment,
    ACTIONS(537), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [9754] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym_comment,
    ACTIONS(539), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [9768] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(224), 1,
      sym_comment,
    ACTIONS(541), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [9781] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(225), 1,
      sym_comment,
    ACTIONS(543), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [9794] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(226), 1,
      sym_comment,
    ACTIONS(545), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [9807] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(547), 1,
      aux_sym__date_token1,
    ACTIONS(549), 1,
      aux_sym__time_token1,
    STATE(16), 1,
      sym__time,
    STATE(132), 1,
      sym__date,
    STATE(227), 1,
      sym_comment,
  [9826] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(547), 1,
      aux_sym__date_token1,
    ACTIONS(551), 1,
      aux_sym__time_token1,
    STATE(16), 1,
      sym__time,
    STATE(33), 1,
      sym__date,
    STATE(228), 1,
      sym_comment,
  [9845] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      sym_comment,
    STATE(232), 1,
      aux_sym_sorts_repeat1,
  [9861] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    STATE(230), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [9875] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
    STATE(231), 1,
      sym_comment,
    STATE(241), 1,
      aux_sym_derives_repeat1,
  [9891] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      sym_comment,
    STATE(244), 1,
      aux_sym_sorts_repeat1,
  [9907] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      sym_comment,
    STATE(240), 1,
      aux_sym_group_repeat1,
  [9923] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      sym__natural_number,
    ACTIONS(572), 1,
      anon_sym_DASH,
    STATE(6), 1,
      sym__integer,
    STATE(234), 1,
      sym_comment,
  [9939] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    STATE(235), 1,
      sym_comment,
    STATE(239), 1,
      aux_sym_aggregate_repeat1,
  [9955] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(574), 1,
      anon_sym_DASH,
    STATE(11), 1,
      sym__integer,
    STATE(236), 1,
      sym_comment,
  [9971] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      sym_comment,
    STATE(250), 1,
      aux_sym_conditions_repeat1,
  [9987] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym_sorts_repeat1,
  [10003] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      sym_comment,
    STATE(251), 1,
      aux_sym_aggregate_repeat1,
  [10019] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_group_repeat1,
    STATE(240), 1,
      sym_comment,
  [10035] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(241), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [10049] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      sym_comment,
    STATE(247), 1,
      aux_sym_derives_repeat1,
  [10065] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(230), 1,
      aux_sym_group_repeat1,
    STATE(243), 1,
      sym_comment,
  [10081] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      anon_sym_RBRACK,
    STATE(244), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [10095] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(574), 1,
      anon_sym_DASH,
    STATE(6), 1,
      sym__integer,
    STATE(245), 1,
      sym_comment,
  [10111] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      sym__natural_number,
    ACTIONS(572), 1,
      anon_sym_DASH,
    STATE(7), 1,
      sym__integer,
    STATE(246), 1,
      sym_comment,
  [10127] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym_derives_repeat1,
    STATE(247), 1,
      sym_comment,
  [10143] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_sorts_repeat1,
    STATE(248), 1,
      sym_comment,
  [10159] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      aux_sym_group_repeat1,
    STATE(249), 1,
      sym_comment,
  [10175] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(250), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [10189] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    ACTIONS(609), 1,
      anon_sym_COMMA,
    STATE(251), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [10203] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      sym__natural_number,
    ACTIONS(574), 1,
      anon_sym_DASH,
    STATE(7), 1,
      sym__integer,
    STATE(252), 1,
      sym_comment,
  [10219] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      sym__natural_number,
    ACTIONS(572), 1,
      anon_sym_DASH,
    STATE(11), 1,
      sym__integer,
    STATE(253), 1,
      sym_comment,
  [10235] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(254), 1,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10246] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(255), 1,
      sym_comment,
    ACTIONS(612), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [10257] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(256), 1,
      sym_comment,
    ACTIONS(614), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10268] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(616), 1,
      aux_sym__time_token1,
    STATE(2), 1,
      sym__time,
    STATE(257), 1,
      sym_comment,
  [10281] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(258), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10292] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(618), 1,
      sym__natural_number,
    ACTIONS(620), 1,
      anon_sym_DOT,
    STATE(259), 1,
      sym_comment,
  [10305] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(260), 1,
      sym_comment,
    ACTIONS(560), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10316] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(620), 1,
      anon_sym_DOT,
    ACTIONS(622), 1,
      sym__natural_number,
    STATE(261), 1,
      sym_comment,
  [10329] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym__double_quote_string,
    STATE(262), 1,
      sym_comment,
  [10342] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(263), 1,
      sym_comment,
    ACTIONS(585), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10353] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(285), 1,
      sym_keyword_derive,
    STATE(264), 1,
      sym_comment,
    STATE(289), 1,
      sym_derives,
  [10366] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(624), 1,
      aux_sym__time_token1,
    STATE(2), 1,
      sym__time,
    STATE(265), 1,
      sym_comment,
  [10379] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym__double_quote_string,
    STATE(266), 1,
      sym_comment,
  [10392] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(267), 1,
      sym_comment,
    ACTIONS(626), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [10403] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
    STATE(268), 1,
      sym_comment,
  [10413] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    STATE(269), 1,
      sym_comment,
  [10423] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(628), 1,
      aux_sym__date_token2,
    STATE(270), 1,
      sym_comment,
  [10433] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(630), 1,
      aux_sym__date_token2,
    STATE(271), 1,
      sym_comment,
  [10443] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(632), 1,
      anon_sym_COLON,
    STATE(272), 1,
      sym_comment,
  [10453] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(634), 1,
      anon_sym_LPAREN,
    STATE(273), 1,
      sym_comment,
  [10463] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(274), 1,
      sym_comment,
  [10473] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(636), 1,
      aux_sym__date_token2,
    STATE(275), 1,
      sym_comment,
  [10483] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(638), 1,
      sym_identifier,
    STATE(276), 1,
      sym_comment,
  [10493] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_DASH,
    STATE(277), 1,
      sym_comment,
  [10503] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    STATE(278), 1,
      sym_comment,
  [10513] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(644), 1,
      aux_sym__date_token2,
    STATE(279), 1,
      sym_comment,
  [10523] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      sym__natural_number,
    STATE(280), 1,
      sym_comment,
  [10533] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(646), 1,
      anon_sym_DQUOTE,
    STATE(281), 1,
      sym_comment,
  [10543] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      aux_sym__date_token2,
    STATE(282), 1,
      sym_comment,
  [10553] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      sym_comment,
  [10563] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(650), 1,
      anon_sym_LBRACK,
    STATE(284), 1,
      sym_comment,
  [10573] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_DOT,
    STATE(285), 1,
      sym_comment,
  [10583] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      anon_sym_LPAREN,
    STATE(286), 1,
      sym_comment,
  [10593] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      aux_sym__date_token2,
    STATE(287), 1,
      sym_comment,
  [10603] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    STATE(288), 1,
      sym_comment,
  [10613] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_comment,
  [10623] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    STATE(290), 1,
      sym_comment,
  [10633] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(660), 1,
      sym__natural_number,
    STATE(291), 1,
      sym_comment,
  [10643] = 3,
    ACTIONS(662), 1,
      aux_sym__literal_string_token1,
    ACTIONS(664), 1,
      anon_sym_POUND,
    STATE(292), 1,
      sym_comment,
  [10653] = 3,
    ACTIONS(664), 1,
      anon_sym_POUND,
    ACTIONS(666), 1,
      aux_sym__double_quote_string_token1,
    STATE(293), 1,
      sym_comment,
  [10663] = 3,
    ACTIONS(664), 1,
      anon_sym_POUND,
    ACTIONS(668), 1,
      aux_sym_comment_token1,
    STATE(294), 1,
      sym_comment,
  [10673] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
    STATE(295), 1,
      sym_comment,
  [10683] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      sym_comment,
  [10693] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      anon_sym_RBRACK,
    STATE(297), 1,
      sym_comment,
  [10703] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(622), 1,
      sym__natural_number,
    STATE(298), 1,
      sym_comment,
  [10713] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_DASH,
    STATE(299), 1,
      sym_comment,
  [10723] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(618), 1,
      sym__natural_number,
    STATE(300), 1,
      sym_comment,
  [10733] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
    STATE(301), 1,
      sym_comment,
  [10743] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      anon_sym_COLON,
    STATE(302), 1,
      sym_comment,
  [10753] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(680), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym_comment,
  [10763] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(682), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      sym_comment,
  [10773] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
    STATE(305), 1,
      sym_comment,
  [10783] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      aux_sym__date_token2,
    STATE(306), 1,
      sym_comment,
  [10793] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(688), 1,
      aux_sym__date_token2,
    STATE(307), 1,
      sym_comment,
  [10803] = 3,
    ACTIONS(664), 1,
      anon_sym_POUND,
    ACTIONS(690), 1,
      aux_sym__double_quote_string_token1,
    STATE(308), 1,
      sym_comment,
  [10813] = 1,
    ACTIONS(692), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 145,
  [SMALL_STATE(5)] = 197,
  [SMALL_STATE(6)] = 249,
  [SMALL_STATE(7)] = 296,
  [SMALL_STATE(8)] = 343,
  [SMALL_STATE(9)] = 392,
  [SMALL_STATE(10)] = 477,
  [SMALL_STATE(11)] = 524,
  [SMALL_STATE(12)] = 571,
  [SMALL_STATE(13)] = 620,
  [SMALL_STATE(14)] = 705,
  [SMALL_STATE(15)] = 752,
  [SMALL_STATE(16)] = 799,
  [SMALL_STATE(17)] = 845,
  [SMALL_STATE(18)] = 891,
  [SMALL_STATE(19)] = 937,
  [SMALL_STATE(20)] = 983,
  [SMALL_STATE(21)] = 1029,
  [SMALL_STATE(22)] = 1077,
  [SMALL_STATE(23)] = 1125,
  [SMALL_STATE(24)] = 1171,
  [SMALL_STATE(25)] = 1217,
  [SMALL_STATE(26)] = 1299,
  [SMALL_STATE(27)] = 1347,
  [SMALL_STATE(28)] = 1393,
  [SMALL_STATE(29)] = 1439,
  [SMALL_STATE(30)] = 1485,
  [SMALL_STATE(31)] = 1531,
  [SMALL_STATE(32)] = 1577,
  [SMALL_STATE(33)] = 1623,
  [SMALL_STATE(34)] = 1671,
  [SMALL_STATE(35)] = 1717,
  [SMALL_STATE(36)] = 1774,
  [SMALL_STATE(37)] = 1833,
  [SMALL_STATE(38)] = 1888,
  [SMALL_STATE(39)] = 1937,
  [SMALL_STATE(40)] = 1984,
  [SMALL_STATE(41)] = 2035,
  [SMALL_STATE(42)] = 2082,
  [SMALL_STATE(43)] = 2126,
  [SMALL_STATE(44)] = 2184,
  [SMALL_STATE(45)] = 2239,
  [SMALL_STATE(46)] = 2322,
  [SMALL_STATE(47)] = 2377,
  [SMALL_STATE(48)] = 2432,
  [SMALL_STATE(49)] = 2512,
  [SMALL_STATE(50)] = 2592,
  [SMALL_STATE(51)] = 2672,
  [SMALL_STATE(52)] = 2752,
  [SMALL_STATE(53)] = 2829,
  [SMALL_STATE(54)] = 2908,
  [SMALL_STATE(55)] = 2985,
  [SMALL_STATE(56)] = 3062,
  [SMALL_STATE(57)] = 3141,
  [SMALL_STATE(58)] = 3218,
  [SMALL_STATE(59)] = 3259,
  [SMALL_STATE(60)] = 3333,
  [SMALL_STATE(61)] = 3409,
  [SMALL_STATE(62)] = 3485,
  [SMALL_STATE(63)] = 3559,
  [SMALL_STATE(64)] = 3635,
  [SMALL_STATE(65)] = 3709,
  [SMALL_STATE(66)] = 3783,
  [SMALL_STATE(67)] = 3859,
  [SMALL_STATE(68)] = 3933,
  [SMALL_STATE(69)] = 4007,
  [SMALL_STATE(70)] = 4078,
  [SMALL_STATE(71)] = 4151,
  [SMALL_STATE(72)] = 4222,
  [SMALL_STATE(73)] = 4293,
  [SMALL_STATE(74)] = 4330,
  [SMALL_STATE(75)] = 4401,
  [SMALL_STATE(76)] = 4472,
  [SMALL_STATE(77)] = 4539,
  [SMALL_STATE(78)] = 4606,
  [SMALL_STATE(79)] = 4677,
  [SMALL_STATE(80)] = 4748,
  [SMALL_STATE(81)] = 4817,
  [SMALL_STATE(82)] = 4885,
  [SMALL_STATE(83)] = 4951,
  [SMALL_STATE(84)] = 5017,
  [SMALL_STATE(85)] = 5083,
  [SMALL_STATE(86)] = 5151,
  [SMALL_STATE(87)] = 5187,
  [SMALL_STATE(88)] = 5250,
  [SMALL_STATE(89)] = 5315,
  [SMALL_STATE(90)] = 5378,
  [SMALL_STATE(91)] = 5427,
  [SMALL_STATE(92)] = 5490,
  [SMALL_STATE(93)] = 5553,
  [SMALL_STATE(94)] = 5618,
  [SMALL_STATE(95)] = 5681,
  [SMALL_STATE(96)] = 5744,
  [SMALL_STATE(97)] = 5809,
  [SMALL_STATE(98)] = 5872,
  [SMALL_STATE(99)] = 5935,
  [SMALL_STATE(100)] = 5998,
  [SMALL_STATE(101)] = 6061,
  [SMALL_STATE(102)] = 6124,
  [SMALL_STATE(103)] = 6189,
  [SMALL_STATE(104)] = 6252,
  [SMALL_STATE(105)] = 6315,
  [SMALL_STATE(106)] = 6378,
  [SMALL_STATE(107)] = 6441,
  [SMALL_STATE(108)] = 6504,
  [SMALL_STATE(109)] = 6567,
  [SMALL_STATE(110)] = 6630,
  [SMALL_STATE(111)] = 6695,
  [SMALL_STATE(112)] = 6758,
  [SMALL_STATE(113)] = 6821,
  [SMALL_STATE(114)] = 6853,
  [SMALL_STATE(115)] = 6885,
  [SMALL_STATE(116)] = 6936,
  [SMALL_STATE(117)] = 6971,
  [SMALL_STATE(118)] = 7017,
  [SMALL_STATE(119)] = 7065,
  [SMALL_STATE(120)] = 7098,
  [SMALL_STATE(121)] = 7129,
  [SMALL_STATE(122)] = 7160,
  [SMALL_STATE(123)] = 7193,
  [SMALL_STATE(124)] = 7228,
  [SMALL_STATE(125)] = 7258,
  [SMALL_STATE(126)] = 7286,
  [SMALL_STATE(127)] = 7316,
  [SMALL_STATE(128)] = 7344,
  [SMALL_STATE(129)] = 7378,
  [SMALL_STATE(130)] = 7407,
  [SMALL_STATE(131)] = 7434,
  [SMALL_STATE(132)] = 7463,
  [SMALL_STATE(133)] = 7492,
  [SMALL_STATE(134)] = 7521,
  [SMALL_STATE(135)] = 7550,
  [SMALL_STATE(136)] = 7591,
  [SMALL_STATE(137)] = 7632,
  [SMALL_STATE(138)] = 7657,
  [SMALL_STATE(139)] = 7682,
  [SMALL_STATE(140)] = 7707,
  [SMALL_STATE(141)] = 7735,
  [SMALL_STATE(142)] = 7761,
  [SMALL_STATE(143)] = 7799,
  [SMALL_STATE(144)] = 7827,
  [SMALL_STATE(145)] = 7867,
  [SMALL_STATE(146)] = 7901,
  [SMALL_STATE(147)] = 7937,
  [SMALL_STATE(148)] = 7977,
  [SMALL_STATE(149)] = 8017,
  [SMALL_STATE(150)] = 8047,
  [SMALL_STATE(151)] = 8087,
  [SMALL_STATE(152)] = 8125,
  [SMALL_STATE(153)] = 8157,
  [SMALL_STATE(154)] = 8185,
  [SMALL_STATE(155)] = 8213,
  [SMALL_STATE(156)] = 8249,
  [SMALL_STATE(157)] = 8289,
  [SMALL_STATE(158)] = 8326,
  [SMALL_STATE(159)] = 8363,
  [SMALL_STATE(160)] = 8391,
  [SMALL_STATE(161)] = 8419,
  [SMALL_STATE(162)] = 8440,
  [SMALL_STATE(163)] = 8461,
  [SMALL_STATE(164)] = 8482,
  [SMALL_STATE(165)] = 8503,
  [SMALL_STATE(166)] = 8524,
  [SMALL_STATE(167)] = 8545,
  [SMALL_STATE(168)] = 8566,
  [SMALL_STATE(169)] = 8587,
  [SMALL_STATE(170)] = 8608,
  [SMALL_STATE(171)] = 8629,
  [SMALL_STATE(172)] = 8650,
  [SMALL_STATE(173)] = 8670,
  [SMALL_STATE(174)] = 8690,
  [SMALL_STATE(175)] = 8712,
  [SMALL_STATE(176)] = 8732,
  [SMALL_STATE(177)] = 8752,
  [SMALL_STATE(178)] = 8772,
  [SMALL_STATE(179)] = 8794,
  [SMALL_STATE(180)] = 8816,
  [SMALL_STATE(181)] = 8836,
  [SMALL_STATE(182)] = 8856,
  [SMALL_STATE(183)] = 8876,
  [SMALL_STATE(184)] = 8895,
  [SMALL_STATE(185)] = 8924,
  [SMALL_STATE(186)] = 8943,
  [SMALL_STATE(187)] = 8962,
  [SMALL_STATE(188)] = 8993,
  [SMALL_STATE(189)] = 9024,
  [SMALL_STATE(190)] = 9055,
  [SMALL_STATE(191)] = 9074,
  [SMALL_STATE(192)] = 9093,
  [SMALL_STATE(193)] = 9112,
  [SMALL_STATE(194)] = 9131,
  [SMALL_STATE(195)] = 9150,
  [SMALL_STATE(196)] = 9169,
  [SMALL_STATE(197)] = 9188,
  [SMALL_STATE(198)] = 9207,
  [SMALL_STATE(199)] = 9238,
  [SMALL_STATE(200)] = 9257,
  [SMALL_STATE(201)] = 9276,
  [SMALL_STATE(202)] = 9295,
  [SMALL_STATE(203)] = 9326,
  [SMALL_STATE(204)] = 9345,
  [SMALL_STATE(205)] = 9364,
  [SMALL_STATE(206)] = 9383,
  [SMALL_STATE(207)] = 9402,
  [SMALL_STATE(208)] = 9421,
  [SMALL_STATE(209)] = 9440,
  [SMALL_STATE(210)] = 9459,
  [SMALL_STATE(211)] = 9478,
  [SMALL_STATE(212)] = 9497,
  [SMALL_STATE(213)] = 9525,
  [SMALL_STATE(214)] = 9553,
  [SMALL_STATE(215)] = 9581,
  [SMALL_STATE(216)] = 9609,
  [SMALL_STATE(217)] = 9637,
  [SMALL_STATE(218)] = 9658,
  [SMALL_STATE(219)] = 9677,
  [SMALL_STATE(220)] = 9698,
  [SMALL_STATE(221)] = 9720,
  [SMALL_STATE(222)] = 9740,
  [SMALL_STATE(223)] = 9754,
  [SMALL_STATE(224)] = 9768,
  [SMALL_STATE(225)] = 9781,
  [SMALL_STATE(226)] = 9794,
  [SMALL_STATE(227)] = 9807,
  [SMALL_STATE(228)] = 9826,
  [SMALL_STATE(229)] = 9845,
  [SMALL_STATE(230)] = 9861,
  [SMALL_STATE(231)] = 9875,
  [SMALL_STATE(232)] = 9891,
  [SMALL_STATE(233)] = 9907,
  [SMALL_STATE(234)] = 9923,
  [SMALL_STATE(235)] = 9939,
  [SMALL_STATE(236)] = 9955,
  [SMALL_STATE(237)] = 9971,
  [SMALL_STATE(238)] = 9987,
  [SMALL_STATE(239)] = 10003,
  [SMALL_STATE(240)] = 10019,
  [SMALL_STATE(241)] = 10035,
  [SMALL_STATE(242)] = 10049,
  [SMALL_STATE(243)] = 10065,
  [SMALL_STATE(244)] = 10081,
  [SMALL_STATE(245)] = 10095,
  [SMALL_STATE(246)] = 10111,
  [SMALL_STATE(247)] = 10127,
  [SMALL_STATE(248)] = 10143,
  [SMALL_STATE(249)] = 10159,
  [SMALL_STATE(250)] = 10175,
  [SMALL_STATE(251)] = 10189,
  [SMALL_STATE(252)] = 10203,
  [SMALL_STATE(253)] = 10219,
  [SMALL_STATE(254)] = 10235,
  [SMALL_STATE(255)] = 10246,
  [SMALL_STATE(256)] = 10257,
  [SMALL_STATE(257)] = 10268,
  [SMALL_STATE(258)] = 10281,
  [SMALL_STATE(259)] = 10292,
  [SMALL_STATE(260)] = 10305,
  [SMALL_STATE(261)] = 10316,
  [SMALL_STATE(262)] = 10329,
  [SMALL_STATE(263)] = 10342,
  [SMALL_STATE(264)] = 10353,
  [SMALL_STATE(265)] = 10366,
  [SMALL_STATE(266)] = 10379,
  [SMALL_STATE(267)] = 10392,
  [SMALL_STATE(268)] = 10403,
  [SMALL_STATE(269)] = 10413,
  [SMALL_STATE(270)] = 10423,
  [SMALL_STATE(271)] = 10433,
  [SMALL_STATE(272)] = 10443,
  [SMALL_STATE(273)] = 10453,
  [SMALL_STATE(274)] = 10463,
  [SMALL_STATE(275)] = 10473,
  [SMALL_STATE(276)] = 10483,
  [SMALL_STATE(277)] = 10493,
  [SMALL_STATE(278)] = 10503,
  [SMALL_STATE(279)] = 10513,
  [SMALL_STATE(280)] = 10523,
  [SMALL_STATE(281)] = 10533,
  [SMALL_STATE(282)] = 10543,
  [SMALL_STATE(283)] = 10553,
  [SMALL_STATE(284)] = 10563,
  [SMALL_STATE(285)] = 10573,
  [SMALL_STATE(286)] = 10583,
  [SMALL_STATE(287)] = 10593,
  [SMALL_STATE(288)] = 10603,
  [SMALL_STATE(289)] = 10613,
  [SMALL_STATE(290)] = 10623,
  [SMALL_STATE(291)] = 10633,
  [SMALL_STATE(292)] = 10643,
  [SMALL_STATE(293)] = 10653,
  [SMALL_STATE(294)] = 10663,
  [SMALL_STATE(295)] = 10673,
  [SMALL_STATE(296)] = 10683,
  [SMALL_STATE(297)] = 10693,
  [SMALL_STATE(298)] = 10703,
  [SMALL_STATE(299)] = 10713,
  [SMALL_STATE(300)] = 10723,
  [SMALL_STATE(301)] = 10733,
  [SMALL_STATE(302)] = 10743,
  [SMALL_STATE(303)] = 10753,
  [SMALL_STATE(304)] = 10763,
  [SMALL_STATE(305)] = 10773,
  [SMALL_STATE(306)] = 10783,
  [SMALL_STATE(307)] = 10793,
  [SMALL_STATE(308)] = 10803,
  [SMALL_STATE(309)] = 10813,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 9),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 9),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 12),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 10),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 16),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(82),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(63),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(62),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(284),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(49),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(83),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(54),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(53),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 14),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 15),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_definition, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(284),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(49),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(83),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(219),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 11),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(302),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(78),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(70),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(55),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(93),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(25),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [684] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
