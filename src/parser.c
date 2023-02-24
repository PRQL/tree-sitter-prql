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
#define STATE_COUNT 482
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 26

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
  sym_keyword_prql = 36,
  sym_keyword_version = 37,
  sym_keyword_target = 38,
  anon_sym_COLON = 39,
  anon_sym_sql_DOTansi = 40,
  anon_sym_sql_DOTbigquery = 41,
  anon_sym_sql_DOTclickhouse = 42,
  anon_sym_sql_DOTgeneric = 43,
  anon_sym_sql_DOThive = 44,
  anon_sym_sql_DOTmssql = 45,
  anon_sym_sql_DOTmysql = 46,
  anon_sym_sql_DOTpostgres = 47,
  anon_sym_sql_DOTsqlite = 48,
  anon_sym_sql_DOTsnowflake = 49,
  anon_sym_sql_DOTduckdb = 50,
  anon_sym_EQ = 51,
  anon_sym_LPAREN = 52,
  anon_sym_RPAREN = 53,
  anon_sym_DASH_GT = 54,
  anon_sym_LBRACK = 55,
  anon_sym_COMMA = 56,
  anon_sym_RBRACK = 57,
  anon_sym_DASH = 58,
  anon_sym_PLUS = 59,
  anon_sym_EQ_EQ = 60,
  anon_sym_DQUOTE = 61,
  aux_sym__double_quote_string_token1 = 62,
  anon_sym_f_DQUOTE = 63,
  anon_sym_f_DQUOTE_DQUOTE_DQUOTE = 64,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 65,
  anon_sym_s_DQUOTE = 66,
  anon_sym_s_DQUOTE_DQUOTE_DQUOTE = 67,
  anon_sym_SQUOTE = 68,
  aux_sym__literal_string_token1 = 69,
  sym__natural_number = 70,
  anon_sym_DOT = 71,
  sym_identifier = 72,
  anon_sym_DOT_DOT = 73,
  anon_sym_STAR = 74,
  anon_sym_SLASH = 75,
  anon_sym_PIPE = 76,
  anon_sym_BANG_EQ = 77,
  anon_sym_GT = 78,
  anon_sym_GT_EQ = 79,
  anon_sym_LT = 80,
  anon_sym_LT_EQ = 81,
  anon_sym_QMARK_QMARK = 82,
  aux_sym__date_token1 = 83,
  aux_sym__date_token2 = 84,
  anon_sym_AT = 85,
  aux_sym__time_token1 = 86,
  anon_sym_T = 87,
  anon_sym_Z = 88,
  anon_sym_POUND = 89,
  aux_sym_comment_token1 = 90,
  sym_bang = 91,
  sym_program = 92,
  sym_prql = 93,
  sym_target = 94,
  sym_pipeline = 95,
  sym_variable = 96,
  sym_function_definition = 97,
  sym_parameter = 98,
  sym__call_parameter = 99,
  sym_function_call = 100,
  sym_transforms = 101,
  sym_from = 102,
  sym_derives = 103,
  sym_filter = 104,
  sym__boolean_expression = 105,
  sym_aggregate = 106,
  sym_aggregate_operation = 107,
  sym__aggregate_count = 108,
  sym_sorts = 109,
  sym_direction = 110,
  sym_takes = 111,
  sym_window = 112,
  sym_window_definitions = 113,
  sym__window_definition = 114,
  sym_group = 115,
  sym_joins = 116,
  sym__join_definition = 117,
  sym_conditions = 118,
  sym__self_join = 119,
  sym_select = 120,
  sym_table_reference = 121,
  sym_term = 122,
  sym__expression = 123,
  sym_literal = 124,
  sym_f_string = 125,
  sym_s_string = 126,
  sym__double_quote_string = 127,
  sym__double_f_string = 128,
  sym__triple_f_string = 129,
  sym__double_s_string = 130,
  sym__triple_s_string = 131,
  sym__literal_string = 132,
  sym__integer = 133,
  sym__decimal_number = 134,
  sym_field = 135,
  sym__alias_identifier = 136,
  sym_range = 137,
  sym_assignment = 138,
  sym_binary_expression = 139,
  sym__date = 140,
  sym_date = 141,
  sym__time = 142,
  sym_time = 143,
  sym_timestamp = 144,
  sym_timezone = 145,
  sym_comment = 146,
  aux_sym_program_repeat1 = 147,
  aux_sym_function_definition_repeat1 = 148,
  aux_sym_function_call_repeat1 = 149,
  aux_sym_transforms_repeat1 = 150,
  aux_sym_derives_repeat1 = 151,
  aux_sym_aggregate_repeat1 = 152,
  aux_sym_sorts_repeat1 = 153,
  aux_sym_window_definitions_repeat1 = 154,
  aux_sym_group_repeat1 = 155,
  aux_sym_group_repeat2 = 156,
  aux_sym_conditions_repeat1 = 157,
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
  [sym_keyword_prql] = "keyword_prql",
  [sym_keyword_version] = "keyword_version",
  [sym_keyword_target] = "keyword_target",
  [anon_sym_COLON] = ":",
  [anon_sym_sql_DOTansi] = "sql.ansi",
  [anon_sym_sql_DOTbigquery] = "sql.bigquery",
  [anon_sym_sql_DOTclickhouse] = "sql.clickhouse",
  [anon_sym_sql_DOTgeneric] = "sql.generic",
  [anon_sym_sql_DOThive] = "sql.hive",
  [anon_sym_sql_DOTmssql] = "sql.mssql",
  [anon_sym_sql_DOTmysql] = "sql.mysql",
  [anon_sym_sql_DOTpostgres] = "sql.postgres",
  [anon_sym_sql_DOTsqlite] = "sql.sqlite",
  [anon_sym_sql_DOTsnowflake] = "sql.snowflake",
  [anon_sym_sql_DOTduckdb] = "sql.duckdb",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
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
  [sym_prql] = "prql",
  [sym_target] = "target",
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
  [sym_keyword_prql] = sym_keyword_prql,
  [sym_keyword_version] = sym_keyword_version,
  [sym_keyword_target] = sym_keyword_target,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_sql_DOTansi] = anon_sym_sql_DOTansi,
  [anon_sym_sql_DOTbigquery] = anon_sym_sql_DOTbigquery,
  [anon_sym_sql_DOTclickhouse] = anon_sym_sql_DOTclickhouse,
  [anon_sym_sql_DOTgeneric] = anon_sym_sql_DOTgeneric,
  [anon_sym_sql_DOThive] = anon_sym_sql_DOThive,
  [anon_sym_sql_DOTmssql] = anon_sym_sql_DOTmssql,
  [anon_sym_sql_DOTmysql] = anon_sym_sql_DOTmysql,
  [anon_sym_sql_DOTpostgres] = anon_sym_sql_DOTpostgres,
  [anon_sym_sql_DOTsqlite] = anon_sym_sql_DOTsqlite,
  [anon_sym_sql_DOTsnowflake] = anon_sym_sql_DOTsnowflake,
  [anon_sym_sql_DOTduckdb] = anon_sym_sql_DOTduckdb,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
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
  [sym_prql] = sym_prql,
  [sym_target] = sym_target,
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
  [sym_keyword_prql] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_version] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_target] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTansi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTbigquery] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTclickhouse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTgeneric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOThive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTmssql] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTmysql] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTpostgres] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTsqlite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTsnowflake] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_DOTduckdb] = {
    .visible = true,
    .named = false,
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
  [sym_prql] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
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
  field_target = 12,
  field_till = 13,
  field_value = 14,
  field_version = 15,
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
  [field_target] = "target",
  [field_till] = "till",
  [field_value] = "value",
  [field_version] = "version",
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
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 4},
  [14] = {.index = 21, .length = 1},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 2},
  [17] = {.index = 25, .length = 1},
  [18] = {.index = 26, .length = 3},
  [19] = {.index = 29, .length = 3},
  [20] = {.index = 32, .length = 3},
  [21] = {.index = 35, .length = 3},
  [22] = {.index = 38, .length = 1},
  [23] = {.index = 39, .length = 4},
  [24] = {.index = 43, .length = 1},
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
    {field_version, 3},
  [16] =
    {field_target, 3},
  [17] =
    {field_alias, 0},
    {field_operation, 2},
    {field_operation, 3},
    {field_operator, 1},
  [21] =
    {field_value, 0, .inherited = true},
  [22] =
    {field_default, 2},
  [23] =
    {field_logic, 4},
    {field_name, 1},
  [25] =
    {field_predicate, 1},
  [26] =
    {field_from, 0},
    {field_operator, 1},
    {field_till, 2},
  [29] =
    {field_left, 1},
    {field_operator, 2},
    {field_right, 3},
  [32] =
    {field_alias, 0},
    {field_operator, 1},
    {field_operator, 3},
  [35] =
    {field_alias, 0},
    {field_operation, 3},
    {field_operator, 1},
  [38] =
    {field_name, 1},
  [39] =
    {field_alias, 0},
    {field_operation, 3},
    {field_operation, 4},
    {field_operator, 1},
  [43] =
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
  [11] = {
    [3] = sym_literal,
  },
  [25] = {
    [2] = sym_literal,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__double_quote_string, 3,
    sym__double_quote_string,
    sym_identifier,
    sym_literal,
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
      if (eof) ADVANCE(375);
      if (lookahead == '!') ADVANCE(699);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(463);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(455);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '@') ADVANCE(688);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'C') ADVANCE(115);
      if (lookahead == 'D') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == 'F') ADVANCE(25);
      if (lookahead == 'G') ADVANCE(132);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'J') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(43);
      if (lookahead == 'M') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(150);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == 'P') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(690);
      if (lookahead == 'V') ADVANCE(57);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == 'Z') ADVANCE(692);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'j') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'v') ADVANCE(200);
      if (lookahead == 'w') ADVANCE(230);
      if (lookahead == '|') ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(370)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 'A') ADVANCE(543);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'O') ADVANCE(552);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == 't') ADVANCE(649);
      if (lookahead == '|') ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(357)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 'A') ADVANCE(519);
      if (lookahead == 'D') ADVANCE(515);
      if (lookahead == 'F') ADVANCE(488);
      if (lookahead == 'G') ADVANCE(559);
      if (lookahead == 'J') ADVANCE(550);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'O') ADVANCE(552);
      if (lookahead == 'S') ADVANCE(516);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead == 'f') ADVANCE(583);
      if (lookahead == 'g') ADVANCE(653);
      if (lookahead == 'j') ADVANCE(644);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == '|') ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(353)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 'A') ADVANCE(519);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'O') ADVANCE(552);
      if (lookahead == 'S') ADVANCE(549);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == 'W') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == 's') ADVANCE(643);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == 'w') ADVANCE(623);
      if (lookahead == '|') ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(356)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 't') ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(360)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '@') ADVANCE(688);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead == 't') ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(352)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '@') ADVANCE(688);
      if (lookahead == 'A') ADVANCE(576);
      if (lookahead == 'C') ADVANCE(546);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'M') ADVANCE(490);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'S') ADVANCE(562);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'c') ADVANCE(640);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(585);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(484);
      if (lookahead == 't') ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(351)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '@') ADVANCE(688);
      if (lookahead == 'A') ADVANCE(579);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'S') ADVANCE(571);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == 'a') ADVANCE(671);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(485);
      if (lookahead == 't') ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(355)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '@') ADVANCE(688);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'S') ADVANCE(529);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(354)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == 'A') ADVANCE(520);
      if (lookahead == 'D') ADVANCE(515);
      if (lookahead == 'F') ADVANCE(488);
      if (lookahead == 'G') ADVANCE(559);
      if (lookahead == 'J') ADVANCE(550);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'S') ADVANCE(516);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead == 'f') ADVANCE(583);
      if (lookahead == 'g') ADVANCE(653);
      if (lookahead == 'j') ADVANCE(644);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(358)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == 'A') ADVANCE(520);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'S') ADVANCE(549);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == 'W') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(643);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == 'w') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(359)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(470);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(285);
      if (lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(473);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 'q') ADVANCE(250);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(264);
      if (lookahead == 'w') ADVANCE(231);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(471);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(474);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(472);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(361)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(362)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(363)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(162);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(679);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(465);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(458);
      END_STATE();
    case 24:
      if (lookahead == '?') ADVANCE(684);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'I') ADVANCE(89);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'U') ADVANCE(94);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'I') ADVANCE(89);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'U') ADVANCE(101);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(152);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(146);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(436);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(142);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(144);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(425);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(114);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(79);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(84);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(419);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(388);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(396);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(398);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(380);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(401);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(384);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'I') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == 'U') ADVANCE(98);
      if (lookahead == 'W') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'G') ADVANCE(413);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(143);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(125);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 63:
      if (lookahead == 'F') ADVANCE(138);
      if (lookahead == 'T') ADVANCE(438);
      END_STATE();
    case 64:
      if (lookahead == 'G') ADVANCE(70);
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 65:
      if (lookahead == 'G') ADVANCE(70);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead == 'V') ADVANCE(58);
      END_STATE();
    case 66:
      if (lookahead == 'G') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'G') ADVANCE(431);
      END_STATE();
    case 68:
      if (lookahead == 'G') ADVANCE(433);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(29);
      END_STATE();
    case 70:
      if (lookahead == 'G') ADVANCE(131);
      END_STATE();
    case 71:
      if (lookahead == 'G') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'G') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'H') ADVANCE(400);
      END_STATE();
    case 74:
      if (lookahead == 'H') ADVANCE(141);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(154);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(66);
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(89);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'U') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(136);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(145);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(118);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'K') ADVANCE(45);
      END_STATE();
    case 87:
      if (lookahead == 'K') ADVANCE(45);
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(135);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(147);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(424);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(434);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(440);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(51);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(91);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(97);
      if (lookahead == 'W') ADVANCE(133);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(83);
      END_STATE();
    case 98:
      if (lookahead == 'M') ADVANCE(415);
      END_STATE();
    case 99:
      if (lookahead == 'M') ADVANCE(376);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(429);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(403);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(392);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(441);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(67);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(140);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(96);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(155);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(151);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 117:
      if (lookahead == 'O') ADVANCE(149);
      END_STATE();
    case 118:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 119:
      if (lookahead == 'O') ADVANCE(82);
      END_STATE();
    case 120:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 121:
      if (lookahead == 'P') ADVANCE(382);
      END_STATE();
    case 122:
      if (lookahead == 'Q') ADVANCE(92);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(427);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(122);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(421);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(378);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(134);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(139);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(117);
      END_STATE();
    case 133:
      if (lookahead == 'S') ADVANCE(432);
      END_STATE();
    case 134:
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 135:
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 136:
      if (lookahead == 'S') ADVANCE(148);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(438);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(422);
      END_STATE();
    case 139:
      if (lookahead == 'T') ADVANCE(386);
      END_STATE();
    case 140:
      if (lookahead == 'T') ADVANCE(409);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(423);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(394);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(442);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(417);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 149:
      if (lookahead == 'U') ADVANCE(121);
      END_STATE();
    case 150:
      if (lookahead == 'U') ADVANCE(95);
      END_STATE();
    case 151:
      if (lookahead == 'U') ADVANCE(108);
      END_STATE();
    case 152:
      if (lookahead == 'U') ADVANCE(46);
      END_STATE();
    case 153:
      if (lookahead == 'V') ADVANCE(411);
      END_STATE();
    case 154:
      if (lookahead == 'V') ADVANCE(48);
      END_STATE();
    case 155:
      if (lookahead == 'W') ADVANCE(390);
      END_STATE();
    case 156:
      if (lookahead == 'X') ADVANCE(120);
      END_STATE();
    case 157:
      if (lookahead == 'X') ADVANCE(405);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(285);
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'b') ADVANCE(236);
      if (lookahead == 'c') ADVANCE(258);
      if (lookahead == 'd') ADVANCE(339);
      if (lookahead == 'g') ADVANCE(203);
      if (lookahead == 'h') ADVANCE(240);
      if (lookahead == 'm') ADVANCE(314);
      if (lookahead == 'p') ADVANCE(288);
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 167:
      if (lookahead == 'b') ADVANCE(454);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(223);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(326);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(425);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 183:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(306);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == 'g') ADVANCE(413);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 210:
      if (lookahead == 'f') ADVANCE(323);
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 211:
      if (lookahead == 'f') ADVANCE(257);
      END_STATE();
    case 212:
      if (lookahead == 'g') ADVANCE(219);
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 213:
      if (lookahead == 'g') ADVANCE(219);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'v') ADVANCE(202);
      END_STATE();
    case 214:
      if (lookahead == 'g') ADVANCE(224);
      END_STATE();
    case 215:
      if (lookahead == 'g') ADVANCE(431);
      END_STATE();
    case 216:
      if (lookahead == 'g') ADVANCE(433);
      END_STATE();
    case 217:
      if (lookahead == 'g') ADVANCE(294);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(163);
      END_STATE();
    case 219:
      if (lookahead == 'g') ADVANCE(307);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(204);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(309);
      END_STATE();
    case 222:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 223:
      if (lookahead == 'h') ADVANCE(400);
      END_STATE();
    case 224:
      if (lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 225:
      if (lookahead == 'h') ADVANCE(289);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(285);
      if (lookahead == 'u') ADVANCE(259);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 243:
      if (lookahead == 'k') ADVANCE(225);
      END_STATE();
    case 244:
      if (lookahead == 'k') ADVANCE(185);
      END_STATE();
    case 245:
      if (lookahead == 'k') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 246:
      if (lookahead == 'k') ADVANCE(176);
      END_STATE();
    case 247:
      if (lookahead == 'k') ADVANCE(193);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 257:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 259:
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == 'w') ADVANCE(311);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 264:
      if (lookahead == 'm') ADVANCE(415);
      END_STATE();
    case 265:
      if (lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 'q') ADVANCE(262);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 292:
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 293:
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 294:
      if (lookahead == 'q') ADVANCE(342);
      END_STATE();
    case 295:
      if (lookahead == 'q') ADVANCE(253);
      END_STATE();
    case 296:
      if (lookahead == 'q') ADVANCE(254);
      END_STATE();
    case 297:
      if (lookahead == 'q') ADVANCE(255);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 311:
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 312:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 313:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 314:
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == 'y') ADVANCE(321);
      END_STATE();
    case 315:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 316:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 317:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 318:
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 319:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 320:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 336:
      if (lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 337:
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 338:
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 339:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 340:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 341:
      if (lookahead == 'u') ADVANCE(319);
      END_STATE();
    case 342:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 343:
      if (lookahead == 'v') ADVANCE(411);
      END_STATE();
    case 344:
      if (lookahead == 'v') ADVANCE(188);
      END_STATE();
    case 345:
      if (lookahead == 'v') ADVANCE(190);
      END_STATE();
    case 346:
      if (lookahead == 'w') ADVANCE(390);
      END_STATE();
    case 347:
      if (lookahead == 'w') ADVANCE(211);
      END_STATE();
    case 348:
      if (lookahead == 'x') ADVANCE(292);
      END_STATE();
    case 349:
      if (lookahead == 'x') ADVANCE(405);
      END_STATE();
    case 350:
      if (lookahead == 'y') ADVANCE(445);
      END_STATE();
    case 351:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(351)
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '@') ADVANCE(688);
      if (lookahead == 'A') ADVANCE(576);
      if (lookahead == 'C') ADVANCE(546);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'M') ADVANCE(490);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'S') ADVANCE(562);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'c') ADVANCE(640);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(585);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(484);
      if (lookahead == 't') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 352:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(352)
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '@') ADVANCE(688);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead == 't') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 353:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(353)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 'A') ADVANCE(519);
      if (lookahead == 'D') ADVANCE(515);
      if (lookahead == 'F') ADVANCE(488);
      if (lookahead == 'G') ADVANCE(559);
      if (lookahead == 'J') ADVANCE(550);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'O') ADVANCE(552);
      if (lookahead == 'S') ADVANCE(516);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead == 'f') ADVANCE(583);
      if (lookahead == 'g') ADVANCE(653);
      if (lookahead == 'j') ADVANCE(644);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == '|') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 354:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(354)
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '@') ADVANCE(688);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'S') ADVANCE(529);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 355:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(355)
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '@') ADVANCE(688);
      if (lookahead == 'A') ADVANCE(579);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'S') ADVANCE(571);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == 'a') ADVANCE(671);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(485);
      if (lookahead == 't') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 356:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(356)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 'A') ADVANCE(519);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'O') ADVANCE(552);
      if (lookahead == 'S') ADVANCE(549);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == 'W') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == 's') ADVANCE(643);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == 'w') ADVANCE(623);
      if (lookahead == '|') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 357:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(357)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 'A') ADVANCE(543);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'O') ADVANCE(552);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == 't') ADVANCE(649);
      if (lookahead == '|') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 358:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(358)
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == 'A') ADVANCE(520);
      if (lookahead == 'D') ADVANCE(515);
      if (lookahead == 'F') ADVANCE(488);
      if (lookahead == 'G') ADVANCE(559);
      if (lookahead == 'J') ADVANCE(550);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'S') ADVANCE(516);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead == 'f') ADVANCE(583);
      if (lookahead == 'g') ADVANCE(653);
      if (lookahead == 'j') ADVANCE(644);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 't') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 359:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(359)
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == 'A') ADVANCE(520);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'S') ADVANCE(549);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == 'W') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(643);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == 'w') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 360:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(360)
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == 'F') ADVANCE(489);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'T') ADVANCE(555);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 't') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 361:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(361)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == ':') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 362:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(362)
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 363:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(363)
      if (lookahead == '#') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      END_STATE();
    case 364:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      END_STATE();
    case 365:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      END_STATE();
    case 366:
      if (eof) ADVANCE(375);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(455);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'D') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'G') ADVANCE(132);
      if (lookahead == 'J') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(62);
      if (lookahead == 'N') ADVANCE(150);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == 'R') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == 'V') ADVANCE(57);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == 'Z') ADVANCE(692);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'j') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'v') ADVANCE(200);
      if (lookahead == 'w') ADVANCE(230);
      if (lookahead == '|') ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(373)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 367:
      if (eof) ADVANCE(375);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 'A') ADVANCE(519);
      if (lookahead == 'D') ADVANCE(515);
      if (lookahead == 'F') ADVANCE(487);
      if (lookahead == 'G') ADVANCE(559);
      if (lookahead == 'J') ADVANCE(550);
      if (lookahead == 'L') ADVANCE(514);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'O') ADVANCE(552);
      if (lookahead == 'S') ADVANCE(516);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead == 'f') ADVANCE(582);
      if (lookahead == 'g') ADVANCE(653);
      if (lookahead == 'j') ADVANCE(644);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == '|') ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(371)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 368:
      if (eof) ADVANCE(375);
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(455);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'D') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead == 'G') ADVANCE(132);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'J') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == 'R') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(691);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == 'Z') ADVANCE(692);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == 'j') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(230);
      if (lookahead == '|') ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(372)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 369:
      if (eof) ADVANCE(375);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == 'A') ADVANCE(520);
      if (lookahead == 'D') ADVANCE(515);
      if (lookahead == 'F') ADVANCE(487);
      if (lookahead == 'G') ADVANCE(559);
      if (lookahead == 'J') ADVANCE(550);
      if (lookahead == 'L') ADVANCE(514);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'S') ADVANCE(516);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead == 'f') ADVANCE(582);
      if (lookahead == 'g') ADVANCE(653);
      if (lookahead == 'j') ADVANCE(644);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(374)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 370:
      if (eof) ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(370)
      if (lookahead == '!') ADVANCE(699);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(463);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(455);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '@') ADVANCE(688);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'C') ADVANCE(115);
      if (lookahead == 'D') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == 'F') ADVANCE(25);
      if (lookahead == 'G') ADVANCE(132);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'J') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(43);
      if (lookahead == 'M') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(150);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == 'P') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(690);
      if (lookahead == 'V') ADVANCE(57);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == 'Z') ADVANCE(692);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'j') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'v') ADVANCE(200);
      if (lookahead == 'w') ADVANCE(230);
      if (lookahead == '|') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 371:
      if (eof) ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(371)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 'A') ADVANCE(519);
      if (lookahead == 'D') ADVANCE(515);
      if (lookahead == 'F') ADVANCE(487);
      if (lookahead == 'G') ADVANCE(559);
      if (lookahead == 'J') ADVANCE(550);
      if (lookahead == 'L') ADVANCE(514);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'O') ADVANCE(552);
      if (lookahead == 'S') ADVANCE(516);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead == 'f') ADVANCE(582);
      if (lookahead == 'g') ADVANCE(653);
      if (lookahead == 'j') ADVANCE(644);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 't') ADVANCE(587);
      if (lookahead == '|') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 372:
      if (eof) ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(372)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(455);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'D') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead == 'G') ADVANCE(132);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'J') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == 'R') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(691);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == 'Z') ADVANCE(692);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == 'j') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(230);
      if (lookahead == '|') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 373:
      if (eof) ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(373)
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '*') ADVANCE(676);
      if (lookahead == '+') ADVANCE(464);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == '/') ADVANCE(677);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == '<') ADVANCE(682);
      if (lookahead == '=') ADVANCE(455);
      if (lookahead == '>') ADVANCE(680);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'D') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(156);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'G') ADVANCE(132);
      if (lookahead == 'J') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(62);
      if (lookahead == 'N') ADVANCE(150);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == 'R') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == 'V') ADVANCE(57);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == 'Z') ADVANCE(692);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == ']') ADVANCE(461);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'j') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == 'v') ADVANCE(200);
      if (lookahead == 'w') ADVANCE(230);
      if (lookahead == '|') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 374:
      if (eof) ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(374)
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(693);
      if (lookahead == '\'') ADVANCE(475);
      if (lookahead == '-') ADVANCE(462);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == ':') ADVANCE(443);
      if (lookahead == 'A') ADVANCE(520);
      if (lookahead == 'D') ADVANCE(515);
      if (lookahead == 'F') ADVANCE(487);
      if (lookahead == 'G') ADVANCE(559);
      if (lookahead == 'J') ADVANCE(550);
      if (lookahead == 'L') ADVANCE(514);
      if (lookahead == 'N') ADVANCE(574);
      if (lookahead == 'S') ADVANCE(516);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == '[') ADVANCE(459);
      if (lookahead == 'a') ADVANCE(616);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead == 'f') ADVANCE(582);
      if (lookahead == 'g') ADVANCE(653);
      if (lookahead == 'j') ADVANCE(644);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead == 'n') ADVANCE(666);
      if (lookahead == 's') ADVANCE(611);
      if (lookahead == 't') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_keyword_window);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(179);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(465);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(458);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(469);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(468);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(469);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(696);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(478);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(477);
      if (lookahead == '#') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(675);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(470);
      if (lookahead == 'a') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(473);
      if (lookahead == 'i') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(473);
      if (lookahead == 't') ADVANCE(594);
      if (lookahead == 'u') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(473);
      if (lookahead == 'u') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(531);
      if (lookahead == 'I') ADVANCE(534);
      if (lookahead == 'R') ADVANCE(547);
      if (lookahead == 'U') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(531);
      if (lookahead == 'I') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(581);
      if (lookahead == 'I') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(530);
      if (lookahead == 'R') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(554);
      if (lookahead == 'G') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(535);
      if (lookahead == 'O') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(523);
      if (lookahead == 'N') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(499);
      if (lookahead == 'U') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'r') ADVANCE(641);
      if (lookahead == 'u') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'i') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(673);
      if (lookahead == 'i') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(624);
      if (lookahead == 'r') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == 'g') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == 'o') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(618);
      if (lookahead == 'n') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(674);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(681);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(686);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(152);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(698);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(469);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(478);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(679);
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
  [6] = {.lex_state = 367},
  [7] = {.lex_state = 368},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 366},
  [10] = {.lex_state = 366},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 368},
  [13] = {.lex_state = 368},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 368},
  [17] = {.lex_state = 366},
  [18] = {.lex_state = 368},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 366},
  [23] = {.lex_state = 368},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 366},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 366},
  [33] = {.lex_state = 368},
  [34] = {.lex_state = 368},
  [35] = {.lex_state = 368},
  [36] = {.lex_state = 368},
  [37] = {.lex_state = 366},
  [38] = {.lex_state = 368},
  [39] = {.lex_state = 368},
  [40] = {.lex_state = 368},
  [41] = {.lex_state = 366},
  [42] = {.lex_state = 368},
  [43] = {.lex_state = 368},
  [44] = {.lex_state = 368},
  [45] = {.lex_state = 368},
  [46] = {.lex_state = 368},
  [47] = {.lex_state = 368},
  [48] = {.lex_state = 368},
  [49] = {.lex_state = 368},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 368},
  [52] = {.lex_state = 368},
  [53] = {.lex_state = 368},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 368},
  [56] = {.lex_state = 366},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 368},
  [66] = {.lex_state = 368},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 368},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 368},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 368},
  [78] = {.lex_state = 368},
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
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 366},
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
  [106] = {.lex_state = 368},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 1},
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
  [128] = {.lex_state = 368},
  [129] = {.lex_state = 368},
  [130] = {.lex_state = 368},
  [131] = {.lex_state = 368},
  [132] = {.lex_state = 369},
  [133] = {.lex_state = 369},
  [134] = {.lex_state = 368},
  [135] = {.lex_state = 368},
  [136] = {.lex_state = 368},
  [137] = {.lex_state = 368},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 368},
  [141] = {.lex_state = 369},
  [142] = {.lex_state = 369},
  [143] = {.lex_state = 369},
  [144] = {.lex_state = 369},
  [145] = {.lex_state = 369},
  [146] = {.lex_state = 369},
  [147] = {.lex_state = 369},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 369},
  [150] = {.lex_state = 369},
  [151] = {.lex_state = 369},
  [152] = {.lex_state = 369},
  [153] = {.lex_state = 369},
  [154] = {.lex_state = 369},
  [155] = {.lex_state = 368},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 368},
  [161] = {.lex_state = 368},
  [162] = {.lex_state = 368},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 368},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 368},
  [181] = {.lex_state = 368},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 368},
  [184] = {.lex_state = 368},
  [185] = {.lex_state = 368},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 368},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 368},
  [194] = {.lex_state = 368},
  [195] = {.lex_state = 368},
  [196] = {.lex_state = 368},
  [197] = {.lex_state = 368},
  [198] = {.lex_state = 368},
  [199] = {.lex_state = 368},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 368},
  [202] = {.lex_state = 368},
  [203] = {.lex_state = 368},
  [204] = {.lex_state = 368},
  [205] = {.lex_state = 368},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 368},
  [208] = {.lex_state = 368},
  [209] = {.lex_state = 368},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 368},
  [213] = {.lex_state = 368},
  [214] = {.lex_state = 368},
  [215] = {.lex_state = 368},
  [216] = {.lex_state = 368},
  [217] = {.lex_state = 368},
  [218] = {.lex_state = 368},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 368},
  [221] = {.lex_state = 368},
  [222] = {.lex_state = 368},
  [223] = {.lex_state = 368},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 368},
  [226] = {.lex_state = 368},
  [227] = {.lex_state = 368},
  [228] = {.lex_state = 368},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 368},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 368},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 366},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 366},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 366},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 366},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 366},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 4},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
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
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 17},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 17},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 17},
  [331] = {.lex_state = 17},
  [332] = {.lex_state = 368},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 6},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 17},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 6},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 6},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 6},
  [360] = {.lex_state = 17},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 18},
  [363] = {.lex_state = 17},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 17},
  [366] = {.lex_state = 17},
  [367] = {.lex_state = 6},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 17},
  [371] = {.lex_state = 17},
  [372] = {.lex_state = 17},
  [373] = {.lex_state = 17},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 17},
  [376] = {.lex_state = 366},
  [377] = {.lex_state = 6},
  [378] = {.lex_state = 6},
  [379] = {.lex_state = 6},
  [380] = {.lex_state = 6},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 6},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 6},
  [385] = {.lex_state = 17},
  [386] = {.lex_state = 17},
  [387] = {.lex_state = 17},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 17},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 6},
  [393] = {.lex_state = 17},
  [394] = {.lex_state = 19},
  [395] = {.lex_state = 6},
  [396] = {.lex_state = 697},
  [397] = {.lex_state = 6},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 19},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 19},
  [405] = {.lex_state = 6},
  [406] = {.lex_state = 19},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 6},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 6},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 6},
  [426] = {.lex_state = 6},
  [427] = {.lex_state = 19},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 6},
  [430] = {.lex_state = 6},
  [431] = {.lex_state = 6},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 6},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 368},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 6},
  [445] = {.lex_state = 6},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 368},
  [449] = {.lex_state = 6},
  [450] = {.lex_state = 6},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 467},
  [456] = {.lex_state = 476},
  [457] = {.lex_state = 6},
  [458] = {.lex_state = 476},
  [459] = {.lex_state = 467},
  [460] = {.lex_state = 467},
  [461] = {.lex_state = 467},
  [462] = {.lex_state = 467},
  [463] = {.lex_state = 467},
  [464] = {.lex_state = 6},
  [465] = {.lex_state = 17},
  [466] = {.lex_state = 467},
  [467] = {.lex_state = 476},
  [468] = {.lex_state = 19},
  [469] = {.lex_state = 19},
  [470] = {.lex_state = 467},
  [471] = {.lex_state = 476},
  [472] = {.lex_state = 19},
  [473] = {.lex_state = 467},
  [474] = {.lex_state = 476},
  [475] = {.lex_state = 467},
  [476] = {.lex_state = 476},
  [477] = {.lex_state = 467},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 17},
  [480] = {.lex_state = 17},
  [481] = {(TSStateId)(-1)},
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
    [sym_keyword_prql] = ACTIONS(1),
    [sym_keyword_version] = ACTIONS(1),
    [sym_keyword_target] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_sql_DOTansi] = ACTIONS(1),
    [anon_sym_sql_DOTbigquery] = ACTIONS(1),
    [anon_sym_sql_DOTclickhouse] = ACTIONS(1),
    [anon_sym_sql_DOTgeneric] = ACTIONS(1),
    [anon_sym_sql_DOThive] = ACTIONS(1),
    [anon_sym_sql_DOTmssql] = ACTIONS(1),
    [anon_sym_sql_DOTmysql] = ACTIONS(1),
    [anon_sym_sql_DOTpostgres] = ACTIONS(1),
    [anon_sym_sql_DOTsqlite] = ACTIONS(1),
    [anon_sym_sql_DOTsnowflake] = ACTIONS(1),
    [anon_sym_sql_DOTduckdb] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
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
    [sym_program] = STATE(478),
    [sym_prql] = STATE(317),
    [sym_pipeline] = STATE(336),
    [sym_variable] = STATE(336),
    [sym_function_definition] = STATE(336),
    [sym_from] = STATE(148),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(312),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_keyword_from] = ACTIONS(7),
    [sym_keyword_func] = ACTIONS(9),
    [sym_keyword_let] = ACTIONS(11),
    [sym_keyword_prql] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_keyword_count,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(2), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(185), 1,
      sym_binary_expression,
    STATE(218), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(351), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(17), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(36), 7,
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
    ACTIONS(19), 1,
      sym_keyword_count,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(194), 1,
      sym_binary_expression,
    STATE(218), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(391), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(17), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(36), 7,
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
    ACTIONS(19), 1,
      sym_keyword_count,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(194), 1,
      sym_binary_expression,
    STATE(218), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(391), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(17), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(36), 7,
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
    ACTIONS(19), 1,
      sym_keyword_count,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(5), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(194), 1,
      sym_binary_expression,
    STATE(218), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(391), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(17), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(36), 7,
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
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym__natural_number,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(6), 1,
      sym_comment,
    STATE(132), 1,
      aux_sym_function_call_repeat1,
    STATE(143), 1,
      sym_literal,
    STATE(144), 1,
      sym__integer,
    STATE(145), 1,
      sym__double_quote_string,
    STATE(149), 1,
      sym__call_parameter,
    STATE(153), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(57), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(53), 11,
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
    ACTIONS(55), 15,
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
    ACTIONS(77), 1,
      anon_sym_Z,
    STATE(7), 1,
      sym_comment,
    STATE(35), 1,
      sym_timezone,
    STATE(468), 1,
      sym_direction,
    ACTIONS(75), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(71), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [554] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_PLUS,
    STATE(8), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(82), 1,
      sym_direction,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(364), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [656] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      anon_sym_COLON,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_comment,
    ACTIONS(91), 3,
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
  [710] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_COLON,
    ACTIONS(101), 1,
      anon_sym_DOT,
    STATE(10), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [764] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_DASH,
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
    STATE(11), 1,
      sym_comment,
    STATE(138), 1,
      aux_sym_function_call_repeat1,
    STATE(166), 1,
      sym_literal,
    STATE(170), 1,
      sym__integer,
    STATE(177), 1,
      sym__double_quote_string,
    STATE(179), 1,
      sym__call_parameter,
    STATE(175), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(103), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(53), 11,
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
    ACTIONS(55), 12,
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
  [840] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [889] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(119), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [938] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_PLUS,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(81), 1,
      sym_direction,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(388), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1037] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_PLUS,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(81), 1,
      sym_direction,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(388), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1136] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(127), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [1185] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      anon_sym_DOT,
    STATE(17), 1,
      sym_comment,
    ACTIONS(119), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [1236] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(131), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [1285] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_PLUS,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(85), 1,
      sym_direction,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(162), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(236), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1384] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_PLUS,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(86), 1,
      sym_direction,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(136), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(236), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1483] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_PLUS,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(81), 1,
      sym_direction,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(388), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1582] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
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
  [1631] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      sym__natural_number,
    STATE(23), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(143), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [1682] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_PLUS,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(83), 1,
      sym_direction,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(236), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1781] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [1830] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym_field,
    STATE(136), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(256), 1,
      sym_table_reference,
    STATE(291), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1928] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_PLUS,
    STATE(27), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(81), 1,
      sym_direction,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(388), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2024] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(155), 1,
      sym_keyword_side,
    STATE(28), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(88), 1,
      sym__join_definition,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(206), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2120] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(349), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2216] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(184), 1,
      sym_binary_expression,
    STATE(191), 1,
      sym_assignment,
    STATE(344), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2314] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_comment,
    STATE(41), 1,
      sym__integer,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(339), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2410] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(32), 1,
      sym_comment,
    ACTIONS(55), 3,
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
  [2460] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
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
  [2508] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
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
  [2556] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(181), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2604] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(36), 1,
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
  [2652] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(37), 1,
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
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [2700] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(193), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2748] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2796] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2844] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      anon_sym_DOT,
    STATE(41), 1,
      sym_comment,
    ACTIONS(207), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(205), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2894] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2942] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(215), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2990] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(219), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [3038] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(45), 1,
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
  [3086] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(227), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [3134] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(231), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [3182] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_T,
    STATE(48), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(235), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [3232] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(143), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [3280] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(50), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym_field,
    STATE(140), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(256), 1,
      sym_table_reference,
    STATE(291), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3378] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(51), 1,
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
  [3426] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_comment,
    ACTIONS(207), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(205), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [3474] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(53), 1,
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
  [3522] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(155), 1,
      sym_keyword_side,
    STATE(41), 1,
      sym__integer,
    STATE(54), 1,
      sym_comment,
    STATE(91), 1,
      sym__join_definition,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(136), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(206), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3618] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(55), 1,
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
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [3666] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [3716] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(57), 1,
      sym_comment,
    STATE(128), 1,
      sym__expression,
    STATE(192), 1,
      sym_function_call,
    STATE(426), 1,
      sym__alias_identifier,
    ACTIONS(255), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3805] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(58), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(135), 1,
      sym_binary_expression,
    STATE(176), 1,
      sym__expression,
    STATE(281), 1,
      sym_term,
    STATE(286), 1,
      sym_assignment,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3900] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(59), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(383), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3993] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(60), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(195), 1,
      sym_binary_expression,
    STATE(381), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4088] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(61), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(135), 1,
      sym_binary_expression,
    STATE(140), 1,
      sym__expression,
    STATE(281), 1,
      sym_term,
    STATE(286), 1,
      sym_assignment,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4183] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(62), 1,
      sym_comment,
    STATE(128), 1,
      sym__expression,
    STATE(192), 1,
      sym_function_call,
    STATE(426), 1,
      sym__alias_identifier,
    ACTIONS(255), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4272] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(63), 1,
      sym_comment,
    STATE(128), 1,
      sym__expression,
    STATE(192), 1,
      sym_function_call,
    STATE(426), 1,
      sym__alias_identifier,
    ACTIONS(255), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4361] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      sym_identifier,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(64), 1,
      sym_comment,
    STATE(128), 1,
      sym__expression,
    STATE(192), 1,
      sym_function_call,
    STATE(426), 1,
      sym__alias_identifier,
    ACTIONS(255), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4450] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(229), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 24,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [4507] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(229), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(227), 29,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [4558] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(67), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(401), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4651] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(68), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(383), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4744] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(229), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(227), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [4793] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(70), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(135), 1,
      sym_binary_expression,
    STATE(136), 1,
      sym__expression,
    STATE(281), 1,
      sym_term,
    STATE(286), 1,
      sym_assignment,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4888] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    ACTIONS(293), 1,
      anon_sym_EQ_EQ,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(71), 1,
      sym_comment,
    STATE(196), 1,
      sym_binary_expression,
    STATE(232), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4981] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(72), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(195), 1,
      sym_binary_expression,
    STATE(381), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5076] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(229), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(227), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [5129] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(74), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(383), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5222] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(75), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(195), 1,
      sym_binary_expression,
    STATE(381), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5317] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(273), 1,
      sym_identifier,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(76), 1,
      sym_comment,
    STATE(214), 1,
      sym_binary_expression,
    STATE(225), 1,
      sym__expression,
    STATE(415), 1,
      sym_function_call,
    STATE(426), 1,
      sym__alias_identifier,
    ACTIONS(301), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5408] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(229), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    STATE(77), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 22,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [5469] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(229), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    STATE(78), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 23,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [5528] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(79), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(383), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5621] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(80), 1,
      sym_comment,
    STATE(204), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5707] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(81), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(390), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5797] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(82), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(346), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5887] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(83), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(251), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5977] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(84), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(136), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(263), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6067] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(85), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(162), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(251), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6157] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(86), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(136), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(251), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6247] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(87), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(383), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6337] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(88), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(200), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6427] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(89), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(418), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6517] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__integer,
    STATE(90), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(195), 1,
      sym_binary_expression,
    STATE(381), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6609] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(91), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(136), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(200), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6699] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(92), 1,
      sym_comment,
    STATE(95), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(191), 1,
      sym_assignment,
    STATE(263), 1,
      sym_term,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(106), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6789] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(313), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(93), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_function_call_repeat1,
    STATE(233), 1,
      sym__call_parameter,
    STATE(234), 1,
      sym_literal,
    STATE(243), 1,
      sym__double_quote_string,
    STATE(249), 1,
      sym__integer,
    STATE(244), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(311), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(55), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 10,
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
  [6860] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(94), 1,
      sym_comment,
    STATE(199), 1,
      sym_binary_expression,
    STATE(232), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6947] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_DOT,
    STATE(95), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 12,
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
    ACTIONS(327), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [6996] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(96), 1,
      sym_comment,
    STATE(199), 1,
      sym_binary_expression,
    STATE(232), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7083] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(97), 1,
      sym_comment,
    STATE(137), 1,
      sym__expression,
    STATE(269), 1,
      sym__boolean_expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7168] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_DASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      sym__natural_number,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_AT,
    STATE(98), 1,
      sym_comment,
    STATE(202), 1,
      sym__integer,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(208), 1,
      sym__expression,
    STATE(237), 1,
      sym_range,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7253] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_DASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(99), 1,
      sym_comment,
    STATE(161), 1,
      sym__integer,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(208), 1,
      sym__expression,
    STATE(327), 1,
      sym_range,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
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
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(77), 1,
      sym__expression,
    STATE(100), 1,
      sym_comment,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
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
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(101), 1,
      sym_comment,
    STATE(205), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
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
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_DASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(102), 1,
      sym_comment,
    STATE(202), 1,
      sym__integer,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(213), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7584] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_DASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(103), 1,
      sym_comment,
    STATE(202), 1,
      sym__integer,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(209), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7666] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(104), 1,
      sym_comment,
    STATE(216), 1,
      sym_binary_expression,
    STATE(235), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7750] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(105), 1,
      sym_comment,
    STATE(227), 1,
      sym_binary_expression,
    STATE(235), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7834] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(106), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 12,
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
    ACTIONS(327), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [7880] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym_comment,
    STATE(232), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(183), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7964] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_DASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(108), 1,
      sym_comment,
    STATE(202), 1,
      sym__integer,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(223), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8046] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym_comment,
    STATE(221), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8128] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(110), 1,
      sym_comment,
    STATE(228), 1,
      sym_binary_expression,
    STATE(235), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8212] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(111), 1,
      sym_comment,
    STATE(220), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8294] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(112), 1,
      sym_comment,
    STATE(212), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8376] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(78), 1,
      sym__expression,
    STATE(113), 1,
      sym_comment,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8458] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
    ACTIONS(353), 1,
      sym__natural_number,
    ACTIONS(355), 1,
      anon_sym_DOT,
    ACTIONS(357), 1,
      sym_identifier,
    STATE(114), 1,
      sym_comment,
    STATE(164), 1,
      aux_sym_function_call_repeat1,
    STATE(264), 1,
      sym__integer,
    STATE(275), 1,
      sym__call_parameter,
    STATE(290), 1,
      sym__double_quote_string,
    STATE(296), 1,
      sym_literal,
    STATE(259), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(345), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(55), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 13,
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
  [8528] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(115), 1,
      sym_comment,
    STATE(214), 1,
      sym_binary_expression,
    STATE(226), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8612] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_DASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(46), 1,
      sym__expression,
    STATE(116), 1,
      sym_comment,
    STATE(202), 1,
      sym__integer,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8694] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(117), 1,
      sym_comment,
    STATE(129), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8776] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_DASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(118), 1,
      sym_comment,
    STATE(202), 1,
      sym__integer,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(215), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8858] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_DASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(119), 1,
      sym_comment,
    STATE(202), 1,
      sym__integer,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(222), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8940] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(46), 1,
      sym__expression,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(120), 1,
      sym_comment,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9022] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(73), 1,
      sym__expression,
    STATE(121), 1,
      sym_comment,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9104] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_DASH,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(122), 1,
      sym_comment,
    STATE(202), 1,
      sym__integer,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(217), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9186] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(65), 1,
      sym__expression,
    STATE(123), 1,
      sym_comment,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9268] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(124), 1,
      sym_comment,
    STATE(199), 1,
      sym_binary_expression,
    STATE(232), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9352] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(66), 1,
      sym__expression,
    STATE(125), 1,
      sym_comment,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9434] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(69), 1,
      sym__expression,
    STATE(126), 1,
      sym_comment,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9516] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(41), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(127), 1,
      sym_comment,
    STATE(130), 1,
      sym__expression,
    STATE(426), 1,
      sym__alias_identifier,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(40), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(52), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(36), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9598] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(128), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(359), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(129), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
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
  [9712] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(130), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(365), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [9769] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_DOT,
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
    ACTIONS(367), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [9812] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym__natural_number,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(132), 1,
      sym_comment,
    STATE(133), 1,
      aux_sym_function_call_repeat1,
    STATE(143), 1,
      sym_literal,
    STATE(144), 1,
      sym__integer,
    STATE(145), 1,
      sym__double_quote_string,
    STATE(149), 1,
      sym__call_parameter,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(153), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(57), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(371), 11,
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
  [9878] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(380), 1,
      anon_sym_DASH,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      sym__natural_number,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(395), 1,
      sym_identifier,
    STATE(143), 1,
      sym_literal,
    STATE(144), 1,
      sym__integer,
    STATE(145), 1,
      sym__double_quote_string,
    STATE(149), 1,
      sym__call_parameter,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(133), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(153), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(377), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(375), 11,
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
  [9942] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(134), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 25,
      ts_builtin_sym_end,
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
  [9981] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(135), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 25,
      ts_builtin_sym_end,
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
  [10020] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(361), 1,
      sym_keyword_or,
    ACTIONS(400), 1,
      anon_sym_EQ,
    STATE(136), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(398), 13,
      ts_builtin_sym_end,
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
  [10075] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(137), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(402), 13,
      ts_builtin_sym_end,
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
  [10127] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_DASH,
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
    STATE(138), 1,
      sym_comment,
    STATE(139), 1,
      aux_sym_function_call_repeat1,
    STATE(166), 1,
      sym_literal,
    STATE(170), 1,
      sym__integer,
    STATE(177), 1,
      sym__double_quote_string,
    STATE(179), 1,
      sym__call_parameter,
    ACTIONS(369), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(175), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(103), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(371), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [10190] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(407), 1,
      anon_sym_DASH,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      sym__natural_number,
    ACTIONS(419), 1,
      anon_sym_DOT,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(166), 1,
      sym_literal,
    STATE(170), 1,
      sym__integer,
    STATE(177), 1,
      sym__double_quote_string,
    STATE(179), 1,
      sym__call_parameter,
    ACTIONS(373), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(139), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(175), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(404), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(375), 8,
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
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(361), 1,
      sym_keyword_or,
    ACTIONS(425), 1,
      anon_sym_EQ,
    STATE(140), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(398), 10,
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
    ACTIONS(431), 1,
      anon_sym_COLON,
    STATE(141), 1,
      sym_comment,
    ACTIONS(427), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(429), 15,
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
    ACTIONS(143), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(145), 15,
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
    ACTIONS(427), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(429), 15,
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
    ACTIONS(205), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(207), 15,
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
  [10471] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(146), 1,
      sym_comment,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(151), 15,
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
    ACTIONS(437), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(439), 15,
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
  [10537] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      sym_keyword_filter,
    ACTIONS(445), 1,
      sym_keyword_derive,
    ACTIONS(447), 1,
      sym_keyword_group,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(451), 1,
      sym_keyword_sort,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(455), 1,
      sym_keyword_join,
    ACTIONS(457), 1,
      sym_keyword_select,
    STATE(148), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_transforms_repeat1,
    STATE(324), 1,
      sym_transforms,
    ACTIONS(441), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(266), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10590] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(149), 1,
      sym_comment,
    ACTIONS(459), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(461), 15,
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
  [10623] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_comment,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(225), 15,
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
  [10689] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(152), 1,
      sym_comment,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(179), 15,
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
    ACTIONS(205), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(207), 15,
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
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(191), 15,
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
  [10788] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(155), 1,
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
  [10820] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(313), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_function_call_repeat1,
    STATE(233), 1,
      sym__call_parameter,
    STATE(234), 1,
      sym_literal,
    STATE(243), 1,
      sym__double_quote_string,
    STATE(249), 1,
      sym__integer,
    STATE(244), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(311), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(371), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [10878] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(466), 1,
      anon_sym_DASH,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
    ACTIONS(472), 1,
      anon_sym_SQUOTE,
    ACTIONS(475), 1,
      sym__natural_number,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(233), 1,
      sym__call_parameter,
    STATE(234), 1,
      sym_literal,
    STATE(243), 1,
      sym__double_quote_string,
    STATE(249), 1,
      sym__integer,
    STATE(157), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(244), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(463), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(375), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [10934] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      sym_keyword_filter,
    ACTIONS(445), 1,
      sym_keyword_derive,
    ACTIONS(447), 1,
      sym_keyword_group,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(451), 1,
      sym_keyword_sort,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(455), 1,
      sym_keyword_join,
    ACTIONS(457), 1,
      sym_keyword_select,
    STATE(158), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(484), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(266), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10984] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(488), 1,
      sym_keyword_filter,
    ACTIONS(491), 1,
      sym_keyword_derive,
    ACTIONS(494), 1,
      sym_keyword_group,
    ACTIONS(497), 1,
      sym_keyword_aggregate,
    ACTIONS(500), 1,
      sym_keyword_sort,
    ACTIONS(503), 1,
      sym_keyword_take,
    ACTIONS(506), 1,
      sym_keyword_join,
    ACTIONS(509), 1,
      sym_keyword_select,
    STATE(159), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(486), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(266), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11032] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 18,
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
  [11064] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(161), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(512), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(205), 13,
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
  [11099] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(361), 1,
      sym_keyword_or,
    ACTIONS(516), 1,
      anon_sym_EQ,
    STATE(162), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(398), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [11146] = 15,
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
    STATE(264), 1,
      sym__integer,
    STATE(275), 1,
      sym__call_parameter,
    STATE(290), 1,
      sym__double_quote_string,
    STATE(296), 1,
      sym_literal,
    STATE(163), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(259), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(518), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(373), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11199] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
    ACTIONS(353), 1,
      sym__natural_number,
    ACTIONS(355), 1,
      anon_sym_DOT,
    ACTIONS(357), 1,
      sym_identifier,
    STATE(163), 1,
      aux_sym_function_call_repeat1,
    STATE(164), 1,
      sym_comment,
    STATE(264), 1,
      sym__integer,
    STATE(275), 1,
      sym__call_parameter,
    STATE(290), 1,
      sym__double_quote_string,
    STATE(296), 1,
      sym_literal,
    STATE(259), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(345), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(369), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11254] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      anon_sym_COLON,
    STATE(165), 1,
      sym_comment,
    ACTIONS(427), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(429), 12,
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
  [11287] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(427), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(429), 12,
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
    ACTIONS(143), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(145), 12,
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
    ACTIONS(189), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(191), 12,
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
    ACTIONS(149), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(151), 12,
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
  [11407] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(170), 1,
      sym_comment,
    ACTIONS(205), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(207), 12,
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
  [11437] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(171), 1,
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
  [11467] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(172), 1,
      sym_comment,
    ACTIONS(223), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(225), 12,
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
  [11497] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment,
    ACTIONS(177), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(179), 12,
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
  [11527] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(443), 1,
      sym_keyword_filter,
    ACTIONS(447), 1,
      sym_keyword_group,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(541), 1,
      sym_keyword_derive,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_join,
    ACTIONS(547), 1,
      sym_keyword_select,
    STATE(174), 1,
      sym_comment,
    STATE(188), 1,
      aux_sym_transforms_repeat1,
    STATE(324), 1,
      sym_transforms,
    STATE(266), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11577] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym_comment,
    ACTIONS(205), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(207), 12,
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
  [11607] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(361), 1,
      sym_keyword_or,
    ACTIONS(549), 1,
      anon_sym_EQ,
    STATE(176), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(398), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11653] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(177), 1,
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
  [11683] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(178), 1,
      sym_comment,
    ACTIONS(437), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(439), 12,
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
    ACTIONS(459), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(461), 12,
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
  [11743] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(551), 1,
      anon_sym_COLON,
    ACTIONS(553), 1,
      anon_sym_DOT,
    STATE(180), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 14,
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
  [11776] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_DOT,
    STATE(181), 1,
      sym_comment,
    ACTIONS(91), 2,
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
  [11809] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(182), 1,
      sym_comment,
    ACTIONS(559), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [11836] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(183), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(561), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    ACTIONS(185), 12,
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
  [11867] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(184), 1,
      sym_comment,
    STATE(348), 1,
      aux_sym_derives_repeat1,
    ACTIONS(187), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 14,
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
  [11898] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      sym_comment,
    STATE(368), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(187), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 12,
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
  [11933] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(186), 1,
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
  [11960] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(187), 1,
      sym_comment,
    ACTIONS(569), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [11987] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      sym_keyword_filter,
    ACTIONS(447), 1,
      sym_keyword_group,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    ACTIONS(541), 1,
      sym_keyword_derive,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_join,
    ACTIONS(547), 1,
      sym_keyword_select,
    STATE(188), 1,
      sym_comment,
    STATE(190), 1,
      aux_sym_transforms_repeat1,
    STATE(266), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [12034] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(189), 1,
      sym_comment,
    STATE(345), 1,
      aux_sym_derives_repeat1,
    ACTIONS(175), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 14,
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
  [12065] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
    ACTIONS(488), 1,
      sym_keyword_filter,
    ACTIONS(494), 1,
      sym_keyword_group,
    ACTIONS(497), 1,
      sym_keyword_aggregate,
    ACTIONS(503), 1,
      sym_keyword_take,
    ACTIONS(571), 1,
      sym_keyword_derive,
    ACTIONS(574), 1,
      sym_keyword_sort,
    ACTIONS(577), 1,
      sym_keyword_join,
    ACTIONS(580), 1,
      sym_keyword_select,
    STATE(190), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(266), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [12110] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(191), 1,
      sym_comment,
    ACTIONS(398), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [12137] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(192), 1,
      sym_comment,
    ACTIONS(583), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [12164] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(585), 1,
      anon_sym_DOT,
    STATE(193), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 14,
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
  [12194] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(194), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(187), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 12,
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
  [12224] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(195), 1,
      sym_comment,
    ACTIONS(187), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 14,
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
  [12252] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RBRACK,
    STATE(196), 1,
      sym_comment,
    STATE(354), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(187), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 12,
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
  [12286] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(197), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(173), 14,
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
  [12314] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(593), 1,
      anon_sym_T,
    STATE(198), 1,
      sym_comment,
    ACTIONS(237), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(235), 13,
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
    STATE(199), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(595), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(185), 12,
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
  [12372] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    STATE(200), 1,
      sym_comment,
    STATE(268), 1,
      sym_conditions,
    STATE(278), 1,
      sym__self_join,
    ACTIONS(597), 13,
      ts_builtin_sym_end,
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
  [12403] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_DOT,
    STATE(201), 1,
      sym_comment,
    ACTIONS(55), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 13,
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
  [12432] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(202), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(205), 13,
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
  [12461] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(603), 1,
      anon_sym_DOT,
    STATE(203), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 13,
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
  [12490] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(204), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(605), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12531] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(205), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(607), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12572] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    STATE(206), 1,
      sym_comment,
    STATE(274), 1,
      sym_conditions,
    STATE(278), 1,
      sym__self_join,
    ACTIONS(609), 13,
      ts_builtin_sym_end,
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
  [12603] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(207), 1,
      sym_comment,
    ACTIONS(191), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(189), 13,
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
  [12630] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(611), 1,
      sym_keyword_and,
    ACTIONS(613), 1,
      sym_keyword_or,
    ACTIONS(619), 1,
      anon_sym_DOT_DOT,
    ACTIONS(623), 1,
      anon_sym_PIPE,
    ACTIONS(627), 1,
      anon_sym_QMARK_QMARK,
    STATE(208), 1,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(621), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(625), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(617), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12670] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(623), 1,
      anon_sym_PIPE,
    ACTIONS(627), 1,
      anon_sym_QMARK_QMARK,
    STATE(209), 1,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(621), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(625), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(227), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(617), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12706] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(210), 1,
      sym_comment,
    ACTIONS(629), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(631), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [12732] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(211), 1,
      sym_comment,
    ACTIONS(629), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(631), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [12758] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    STATE(212), 1,
      sym_comment,
    ACTIONS(227), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12796] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(611), 1,
      sym_keyword_and,
    ACTIONS(623), 1,
      anon_sym_PIPE,
    ACTIONS(627), 1,
      anon_sym_QMARK_QMARK,
    STATE(213), 1,
      sym_comment,
    ACTIONS(227), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(621), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(625), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(617), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12834] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(214), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 13,
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
  [12860] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(623), 1,
      anon_sym_PIPE,
    STATE(215), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(621), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(227), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [12892] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 12,
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
  [12920] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(217), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(227), 11,
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
  [12948] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(361), 1,
      sym_keyword_or,
    ACTIONS(549), 1,
      anon_sym_EQ,
    STATE(218), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12988] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(219), 1,
      sym_comment,
    ACTIONS(635), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(637), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [13014] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    STATE(220), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(227), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13050] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(361), 1,
      sym_keyword_or,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(221), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13090] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(222), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(621), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(227), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [13120] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(623), 1,
      anon_sym_PIPE,
    STATE(223), 1,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(621), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(625), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(227), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(617), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13154] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(641), 1,
      anon_sym_COLON,
    STATE(224), 1,
      sym_comment,
    ACTIONS(427), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(429), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13182] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(643), 1,
      sym_keyword_and,
    ACTIONS(645), 1,
      sym_keyword_or,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13222] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(643), 1,
      sym_keyword_and,
    ACTIONS(645), 1,
      sym_keyword_or,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13262] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 12,
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
  [13290] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 12,
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
  [13318] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(229), 1,
      sym_comment,
    ACTIONS(177), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(179), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13343] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(230), 1,
      sym_comment,
    ACTIONS(437), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(439), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13368] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(655), 1,
      anon_sym_COLON,
    STATE(231), 1,
      sym_comment,
    ACTIONS(429), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(427), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [13395] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(232), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13432] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym_comment,
    ACTIONS(459), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(461), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13457] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(234), 1,
      sym_comment,
    ACTIONS(427), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(429), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13482] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(305), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(643), 1,
      sym_keyword_and,
    ACTIONS(645), 1,
      sym_keyword_or,
    STATE(235), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(283), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13519] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(236), 1,
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
  [13542] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(237), 1,
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
  [13565] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(238), 1,
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
  [13588] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(239), 1,
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
  [13611] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(240), 1,
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
  [13634] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(241), 1,
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
  [13657] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(242), 1,
      sym_comment,
    ACTIONS(669), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13680] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(243), 1,
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
  [13705] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(244), 1,
      sym_comment,
    ACTIONS(205), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(207), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13730] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(245), 1,
      sym_comment,
    ACTIONS(143), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(145), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13755] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(246), 1,
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
  [13778] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(247), 1,
      sym_comment,
    ACTIONS(223), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(225), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13803] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(248), 1,
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
  [13828] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(249), 1,
      sym_comment,
    ACTIONS(205), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(207), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13853] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(250), 1,
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
  [13876] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(251), 1,
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
  [13899] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(252), 1,
      sym_comment,
    ACTIONS(149), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(151), 8,
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
    ACTIONS(677), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
    ACTIONS(189), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(191), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13972] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym__natural_number,
    ACTIONS(67), 1,
      anon_sym_DOT,
    STATE(144), 1,
      sym__integer,
    STATE(145), 1,
      sym__double_quote_string,
    STATE(147), 1,
      sym_literal,
    STATE(255), 1,
      sym_comment,
    STATE(153), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(679), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14012] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(256), 1,
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
  [14034] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(257), 1,
      sym_comment,
    ACTIONS(145), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(143), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14058] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      anon_sym_DASH,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
    ACTIONS(353), 1,
      sym__natural_number,
    ACTIONS(355), 1,
      anon_sym_DOT,
    STATE(258), 1,
      sym_comment,
    STATE(264), 1,
      sym__integer,
    STATE(265), 1,
      sym_literal,
    STATE(290), 1,
      sym__double_quote_string,
    STATE(259), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(683), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14098] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(259), 1,
      sym_comment,
    ACTIONS(207), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(205), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14122] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(687), 1,
      anon_sym_DASH,
    ACTIONS(689), 1,
      anon_sym_DQUOTE,
    ACTIONS(691), 1,
      anon_sym_SQUOTE,
    ACTIONS(693), 1,
      sym__natural_number,
    ACTIONS(695), 1,
      anon_sym_DOT,
    STATE(260), 1,
      sym_comment,
    STATE(365), 1,
      sym__integer,
    STATE(372), 1,
      sym__double_quote_string,
    STATE(393), 1,
      sym_literal,
    STATE(373), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(685), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14162] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(261), 1,
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
  [14184] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(262), 1,
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
  [14208] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(263), 1,
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
  [14230] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(264), 1,
      sym_comment,
    ACTIONS(207), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(205), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14254] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(265), 1,
      sym_comment,
    ACTIONS(439), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(437), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14278] = 3,
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
  [14300] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(267), 1,
      sym_comment,
    ACTIONS(703), 13,
      ts_builtin_sym_end,
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
  [14322] = 3,
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
  [14344] = 3,
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
  [14366] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      sym__natural_number,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(170), 1,
      sym__integer,
    STATE(177), 1,
      sym__double_quote_string,
    STATE(178), 1,
      sym_literal,
    STATE(270), 1,
      sym_comment,
    STATE(175), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(709), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14406] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(271), 1,
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
  [14428] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(272), 1,
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
  [14450] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(273), 1,
      sym_comment,
    ACTIONS(715), 13,
      ts_builtin_sym_end,
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
  [14472] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(274), 1,
      sym_comment,
    ACTIONS(597), 13,
      ts_builtin_sym_end,
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
  [14494] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(275), 1,
      sym_comment,
    ACTIONS(461), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(459), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14518] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(276), 1,
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
  [14540] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(277), 1,
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
  [14562] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(278), 1,
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
  [14584] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(279), 1,
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
  [14606] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(280), 1,
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
  [14628] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(281), 1,
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
  [14650] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(282), 1,
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
  [14672] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(283), 1,
      sym_comment,
    ACTIONS(151), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
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
  [14696] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(284), 1,
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
  [14718] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(285), 1,
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
  [14740] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(286), 1,
      sym_comment,
    ACTIONS(398), 13,
      ts_builtin_sym_end,
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
  [14762] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(287), 1,
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
  [14784] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(288), 1,
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
  [14806] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(313), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      sym__natural_number,
    ACTIONS(321), 1,
      anon_sym_DOT,
    STATE(230), 1,
      sym_literal,
    STATE(243), 1,
      sym__double_quote_string,
    STATE(249), 1,
      sym__integer,
    STATE(289), 1,
      sym_comment,
    STATE(244), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(739), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14846] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(290), 1,
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
  [14870] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(291), 1,
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
  [14892] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(292), 1,
      sym_comment,
    ACTIONS(743), 13,
      ts_builtin_sym_end,
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
  [14914] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(293), 1,
      sym_comment,
    ACTIONS(179), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(177), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14938] = 3,
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
  [14960] = 3,
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
  [14982] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(296), 1,
      sym_comment,
    ACTIONS(429), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(427), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [15006] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(297), 1,
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
  [15028] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(298), 1,
      sym_comment,
    ACTIONS(191), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(189), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [15052] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(299), 1,
      sym_comment,
    ACTIONS(225), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(223), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [15076] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(300), 1,
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
  [15098] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(301), 1,
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
  [15120] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(302), 1,
      sym_comment,
    ACTIONS(755), 13,
      ts_builtin_sym_end,
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
  [15142] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(303), 1,
      sym_comment,
    STATE(333), 1,
      sym_target,
    ACTIONS(757), 11,
      anon_sym_sql_DOTansi,
      anon_sym_sql_DOTbigquery,
      anon_sym_sql_DOTclickhouse,
      anon_sym_sql_DOTgeneric,
      anon_sym_sql_DOThive,
      anon_sym_sql_DOTmssql,
      anon_sym_sql_DOTmysql,
      anon_sym_sql_DOTpostgres,
      anon_sym_sql_DOTsqlite,
      anon_sym_sql_DOTsnowflake,
      anon_sym_sql_DOTduckdb,
  [15165] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(759), 1,
      sym_keyword_sort,
    ACTIONS(761), 1,
      sym_keyword_window,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym_comment,
    STATE(305), 1,
      aux_sym_group_repeat2,
    STATE(322), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15196] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(765), 1,
      sym_keyword_aggregate,
    ACTIONS(768), 1,
      sym_keyword_sort,
    ACTIONS(771), 1,
      sym_keyword_take,
    ACTIONS(774), 1,
      sym_keyword_window,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    STATE(305), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(322), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15225] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(759), 1,
      sym_keyword_sort,
    ACTIONS(761), 1,
      sym_keyword_window,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_group_repeat2,
    STATE(306), 1,
      sym_comment,
    STATE(322), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15256] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(759), 1,
      sym_keyword_sort,
    ACTIONS(761), 1,
      sym_keyword_window,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_group_repeat2,
    STATE(307), 1,
      sym_comment,
    STATE(322), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15287] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(759), 1,
      sym_keyword_sort,
    ACTIONS(761), 1,
      sym_keyword_window,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_group_repeat2,
    STATE(308), 1,
      sym_comment,
    STATE(322), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15318] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(759), 1,
      sym_keyword_sort,
    ACTIONS(761), 1,
      sym_keyword_window,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_group_repeat2,
    STATE(309), 1,
      sym_comment,
    STATE(322), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15349] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(9), 1,
      sym_keyword_func,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(787), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      sym_from,
    STATE(310), 1,
      sym_comment,
    STATE(314), 1,
      aux_sym_program_repeat1,
    STATE(336), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15379] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(759), 1,
      sym_keyword_sort,
    ACTIONS(761), 1,
      sym_keyword_window,
    STATE(304), 1,
      aux_sym_group_repeat2,
    STATE(311), 1,
      sym_comment,
    STATE(322), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15407] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(9), 1,
      sym_keyword_func,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(789), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      sym_from,
    STATE(312), 1,
      sym_comment,
    STATE(314), 1,
      aux_sym_program_repeat1,
    STATE(336), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15437] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(759), 1,
      sym_keyword_sort,
    ACTIONS(761), 1,
      sym_keyword_window,
    STATE(309), 1,
      aux_sym_group_repeat2,
    STATE(313), 1,
      sym_comment,
    STATE(322), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15465] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(791), 1,
      ts_builtin_sym_end,
    ACTIONS(793), 1,
      sym_keyword_from,
    ACTIONS(796), 1,
      sym_keyword_func,
    ACTIONS(799), 1,
      sym_keyword_let,
    STATE(148), 1,
      sym_from,
    STATE(314), 2,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(336), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15493] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(759), 1,
      sym_keyword_sort,
    ACTIONS(761), 1,
      sym_keyword_window,
    STATE(306), 1,
      aux_sym_group_repeat2,
    STATE(315), 1,
      sym_comment,
    STATE(322), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15521] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(759), 1,
      sym_keyword_sort,
    ACTIONS(761), 1,
      sym_keyword_window,
    STATE(307), 1,
      aux_sym_group_repeat2,
    STATE(316), 1,
      sym_comment,
    STATE(322), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15549] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(9), 1,
      sym_keyword_func,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(789), 1,
      ts_builtin_sym_end,
    STATE(148), 1,
      sym_from,
    STATE(310), 1,
      aux_sym_program_repeat1,
    STATE(317), 1,
      sym_comment,
    STATE(336), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15579] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym_keyword_aggregate,
    ACTIONS(453), 1,
      sym_keyword_take,
    ACTIONS(759), 1,
      sym_keyword_sort,
    ACTIONS(761), 1,
      sym_keyword_window,
    STATE(308), 1,
      aux_sym_group_repeat2,
    STATE(318), 1,
      sym_comment,
    STATE(322), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15607] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(804), 1,
      anon_sym_LPAREN,
    STATE(319), 1,
      sym_comment,
    STATE(320), 1,
      aux_sym_window_definitions_repeat1,
    STATE(329), 1,
      sym__window_definition,
    ACTIONS(802), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15628] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    STATE(329), 1,
      sym__window_definition,
    STATE(320), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(806), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15647] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(319), 1,
      aux_sym_window_definitions_repeat1,
    STATE(321), 1,
      sym_comment,
    STATE(329), 1,
      sym__window_definition,
    STATE(421), 1,
      sym_window_definitions,
    ACTIONS(802), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15668] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(322), 1,
      sym_comment,
    ACTIONS(811), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [15682] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(323), 1,
      sym_comment,
    ACTIONS(813), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [15696] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(324), 1,
      sym_comment,
    ACTIONS(815), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      anon_sym_RPAREN,
  [15710] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(325), 1,
      sym_comment,
    ACTIONS(817), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [15723] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(819), 1,
      aux_sym__date_token1,
    ACTIONS(821), 1,
      aux_sym__time_token1,
    STATE(47), 1,
      sym__time,
    STATE(48), 1,
      sym__date,
    STATE(326), 1,
      sym_comment,
  [15742] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(327), 1,
      sym_comment,
    ACTIONS(823), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [15755] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(819), 1,
      aux_sym__date_token1,
    ACTIONS(825), 1,
      aux_sym__time_token1,
    STATE(47), 1,
      sym__time,
    STATE(198), 1,
      sym__date,
    STATE(328), 1,
      sym_comment,
  [15774] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(329), 1,
      sym_comment,
    ACTIONS(827), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [15787] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(829), 1,
      anon_sym_DASH_GT,
    ACTIONS(831), 1,
      sym_identifier,
    STATE(330), 1,
      sym_comment,
    STATE(331), 1,
      aux_sym_function_definition_repeat1,
    STATE(375), 1,
      sym_parameter,
  [15806] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(833), 1,
      anon_sym_DASH_GT,
    ACTIONS(835), 1,
      sym_identifier,
    STATE(375), 1,
      sym_parameter,
    STATE(331), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [15823] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(332), 1,
      sym_comment,
    ACTIONS(838), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [15836] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(333), 1,
      sym_comment,
    ACTIONS(840), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [15849] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(334), 1,
      sym_comment,
    ACTIONS(842), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [15862] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(335), 1,
      sym_comment,
    ACTIONS(844), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [15875] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(336), 1,
      sym_comment,
    ACTIONS(846), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [15888] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      anon_sym_RBRACK,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    STATE(337), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [15902] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(851), 1,
      sym_keyword_from,
    STATE(174), 1,
      sym_from,
    STATE(338), 1,
      sym_comment,
    STATE(399), 1,
      sym_pipeline,
  [15918] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    ACTIONS(855), 1,
      anon_sym_RBRACK,
    STATE(339), 1,
      sym_comment,
    STATE(340), 1,
      aux_sym_group_repeat1,
  [15934] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    ACTIONS(857), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      sym_comment,
    STATE(361), 1,
      aux_sym_group_repeat1,
  [15950] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      sym_comment,
    STATE(361), 1,
      aux_sym_group_repeat1,
  [15966] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    STATE(342), 1,
      sym_comment,
    STATE(352), 1,
      aux_sym_sorts_repeat1,
  [15982] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      sym__natural_number,
    ACTIONS(863), 1,
      anon_sym_DASH,
    STATE(12), 1,
      sym__integer,
    STATE(343), 1,
      sym_comment,
  [15998] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
    STATE(344), 1,
      sym_comment,
    STATE(348), 1,
      aux_sym_derives_repeat1,
  [16014] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(869), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      sym_comment,
    STATE(356), 1,
      aux_sym_derives_repeat1,
  [16030] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      sym_comment,
    STATE(353), 1,
      aux_sym_sorts_repeat1,
  [16046] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(873), 1,
      anon_sym_DASH,
    STATE(13), 1,
      sym__integer,
    STATE(347), 1,
      sym_comment,
  [16062] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    ACTIONS(875), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      sym_comment,
    STATE(356), 1,
      aux_sym_derives_repeat1,
  [16078] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    ACTIONS(879), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      aux_sym_group_repeat1,
    STATE(349), 1,
      sym_comment,
  [16094] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(831), 1,
      sym_identifier,
    STATE(330), 1,
      aux_sym_function_definition_repeat1,
    STATE(350), 1,
      sym_comment,
    STATE(375), 1,
      sym_parameter,
  [16110] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      sym_comment,
    STATE(368), 1,
      aux_sym_aggregate_repeat1,
  [16126] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
    STATE(352), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [16140] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym_sorts_repeat1,
    STATE(353), 1,
      sym_comment,
  [16156] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    ACTIONS(888), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_conditions_repeat1,
    STATE(354), 1,
      sym_comment,
  [16172] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(873), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym__integer,
    STATE(355), 1,
      sym_comment,
  [16188] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    ACTIONS(893), 1,
      anon_sym_RBRACK,
    STATE(356), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [16202] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      sym__natural_number,
    ACTIONS(863), 1,
      anon_sym_DASH,
    STATE(13), 1,
      sym__integer,
    STATE(357), 1,
      sym_comment,
  [16218] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(587), 1,
      anon_sym_RBRACK,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    STATE(358), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [16232] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      sym__natural_number,
    ACTIONS(863), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym__integer,
    STATE(359), 1,
      sym_comment,
  [16248] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(360), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [16260] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(898), 1,
      anon_sym_COMMA,
    ACTIONS(901), 1,
      anon_sym_RBRACK,
    STATE(361), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [16274] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(903), 1,
      sym__natural_number,
    STATE(362), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16288] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(905), 1,
      anon_sym_COLON,
    STATE(363), 1,
      sym_comment,
    ACTIONS(907), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16302] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    ACTIONS(911), 1,
      anon_sym_RBRACK,
    STATE(342), 1,
      aux_sym_sorts_repeat1,
    STATE(364), 1,
      sym_comment,
  [16318] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(913), 1,
      anon_sym_DOT,
    STATE(365), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16332] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(366), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [16344] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(873), 1,
      anon_sym_DASH,
    STATE(12), 1,
      sym__integer,
    STATE(367), 1,
      sym_comment,
  [16360] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    ACTIONS(915), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_aggregate_repeat1,
    STATE(368), 1,
      sym_comment,
  [16376] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(917), 1,
      sym_keyword_derive,
    STATE(369), 1,
      sym_comment,
    STATE(408), 1,
      sym_derives,
  [16389] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(919), 1,
      aux_sym__time_token1,
    STATE(7), 1,
      sym__time,
    STATE(370), 1,
      sym_comment,
  [16402] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(371), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16413] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(372), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16424] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(373), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16435] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(335), 1,
      sym__double_quote_string,
    STATE(374), 1,
      sym_comment,
  [16448] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(375), 1,
      sym_comment,
    ACTIONS(921), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16459] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      sym_keyword_version,
    ACTIONS(925), 1,
      sym_keyword_target,
    STATE(376), 1,
      sym_comment,
  [16472] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(927), 1,
      sym__natural_number,
    ACTIONS(929), 1,
      anon_sym_DOT,
    STATE(377), 1,
      sym_comment,
  [16485] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(931), 1,
      sym__natural_number,
    ACTIONS(933), 1,
      anon_sym_DOT,
    STATE(378), 1,
      sym_comment,
  [16498] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(935), 1,
      sym__natural_number,
    ACTIONS(937), 1,
      anon_sym_DOT,
    STATE(379), 1,
      sym_comment,
  [16511] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(939), 1,
      sym__natural_number,
    ACTIONS(941), 1,
      anon_sym_DOT,
    STATE(380), 1,
      sym_comment,
  [16524] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(381), 1,
      sym_comment,
    ACTIONS(893), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16535] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(943), 1,
      sym__natural_number,
    ACTIONS(945), 1,
      anon_sym_DOT,
    STATE(382), 1,
      sym_comment,
  [16548] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(383), 1,
      sym_comment,
    ACTIONS(901), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16559] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(947), 1,
      sym__natural_number,
    ACTIONS(949), 1,
      anon_sym_DOT,
    STATE(384), 1,
      sym_comment,
  [16572] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(385), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16583] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(386), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16594] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(951), 1,
      aux_sym__time_token1,
    STATE(7), 1,
      sym__time,
    STATE(387), 1,
      sym_comment,
  [16607] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(388), 1,
      sym_comment,
    ACTIONS(884), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16618] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(389), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16629] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(390), 1,
      sym_comment,
    ACTIONS(953), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16640] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(391), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16651] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(929), 1,
      anon_sym_DOT,
    ACTIONS(955), 1,
      sym__natural_number,
    STATE(392), 1,
      sym_comment,
  [16664] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(393), 1,
      sym_comment,
    ACTIONS(957), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16675] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(959), 1,
      aux_sym__date_token2,
    STATE(394), 1,
      sym_comment,
  [16685] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(961), 1,
      sym__natural_number,
    STATE(395), 1,
      sym_comment,
  [16695] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(965), 1,
      aux_sym_comment_token1,
    STATE(396), 1,
      sym_comment,
  [16705] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      sym__natural_number,
    STATE(397), 1,
      sym_comment,
  [16715] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(591), 1,
      anon_sym_RBRACK,
    STATE(398), 1,
      sym_comment,
  [16725] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      sym_comment,
  [16735] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    STATE(400), 1,
      sym_comment,
  [16745] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    STATE(401), 1,
      sym_comment,
  [16755] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(631), 1,
      aux_sym__date_token2,
    STATE(402), 1,
      sym_comment,
  [16765] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(973), 1,
      anon_sym_COLON,
    STATE(403), 1,
      sym_comment,
  [16775] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(975), 1,
      aux_sym__date_token2,
    STATE(404), 1,
      sym_comment,
  [16785] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(977), 1,
      anon_sym_DASH,
    STATE(405), 1,
      sym_comment,
  [16795] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(979), 1,
      aux_sym__date_token2,
    STATE(406), 1,
      sym_comment,
  [16805] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(981), 1,
      anon_sym_LBRACK,
    STATE(407), 1,
      sym_comment,
  [16815] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      sym_comment,
  [16825] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
    STATE(409), 1,
      sym_comment,
  [16835] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(985), 1,
      anon_sym_LPAREN,
    STATE(410), 1,
      sym_comment,
  [16845] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(987), 1,
      anon_sym_COLON,
    STATE(411), 1,
      sym_comment,
  [16855] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(989), 1,
      anon_sym_COLON,
    STATE(412), 1,
      sym_comment,
  [16865] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(991), 1,
      anon_sym_EQ,
    STATE(413), 1,
      sym_comment,
  [16875] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      anon_sym_RBRACK,
    STATE(414), 1,
      sym_comment,
  [16885] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      sym_comment,
  [16895] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(995), 1,
      anon_sym_LPAREN,
    STATE(416), 1,
      sym_comment,
  [16905] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(417), 1,
      sym_comment,
  [16915] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
    STATE(418), 1,
      sym_comment,
  [16925] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(911), 1,
      anon_sym_RBRACK,
    STATE(419), 1,
      sym_comment,
  [16935] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(999), 1,
      sym__natural_number,
    STATE(420), 1,
      sym_comment,
  [16945] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_comment,
  [16955] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1003), 1,
      sym__natural_number,
    STATE(422), 1,
      sym_comment,
  [16965] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1005), 1,
      anon_sym_DQUOTE,
    STATE(423), 1,
      sym_comment,
  [16975] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1007), 1,
      anon_sym_SQUOTE,
    STATE(424), 1,
      sym_comment,
  [16985] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(927), 1,
      sym__natural_number,
    STATE(425), 1,
      sym_comment,
  [16995] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1009), 1,
      anon_sym_DOT,
    STATE(426), 1,
      sym_comment,
  [17005] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1011), 1,
      aux_sym__date_token2,
    STATE(427), 1,
      sym_comment,
  [17015] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1013), 1,
      anon_sym_COLON,
    STATE(428), 1,
      sym_comment,
  [17025] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(955), 1,
      sym__natural_number,
    STATE(429), 1,
      sym_comment,
  [17035] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1015), 1,
      sym__natural_number,
    STATE(430), 1,
      sym_comment,
  [17045] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(903), 1,
      sym__natural_number,
    STATE(431), 1,
      sym_comment,
  [17055] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_DQUOTE,
    STATE(432), 1,
      sym_comment,
  [17065] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1019), 1,
      anon_sym_SQUOTE,
    STATE(433), 1,
      sym_comment,
  [17075] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1021), 1,
      anon_sym_DQUOTE,
    STATE(434), 1,
      sym_comment,
  [17085] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1023), 1,
      anon_sym_LPAREN,
    STATE(435), 1,
      sym_comment,
  [17095] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1025), 1,
      anon_sym_DQUOTE,
    STATE(436), 1,
      sym_comment,
  [17105] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    STATE(437), 1,
      sym_comment,
  [17115] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1029), 1,
      sym__natural_number,
    STATE(438), 1,
      sym_comment,
  [17125] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1031), 1,
      anon_sym_DQUOTE,
    STATE(439), 1,
      sym_comment,
  [17135] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1033), 1,
      anon_sym_SQUOTE,
    STATE(440), 1,
      sym_comment,
  [17145] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1035), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(441), 1,
      sym_comment,
  [17155] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(855), 1,
      anon_sym_RBRACK,
    STATE(442), 1,
      sym_comment,
  [17165] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1037), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      sym_comment,
  [17175] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1039), 1,
      sym__natural_number,
    STATE(444), 1,
      sym_comment,
  [17185] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1041), 1,
      sym__natural_number,
    STATE(445), 1,
      sym_comment,
  [17195] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1043), 1,
      anon_sym_DQUOTE,
    STATE(446), 1,
      sym_comment,
  [17205] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1045), 1,
      anon_sym_SQUOTE,
    STATE(447), 1,
      sym_comment,
  [17215] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1047), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(448), 1,
      sym_comment,
  [17225] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1049), 1,
      sym__natural_number,
    STATE(449), 1,
      sym_comment,
  [17235] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1051), 1,
      sym__natural_number,
    STATE(450), 1,
      sym_comment,
  [17245] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1053), 1,
      anon_sym_DQUOTE,
    STATE(451), 1,
      sym_comment,
  [17255] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1055), 1,
      anon_sym_SQUOTE,
    STATE(452), 1,
      sym_comment,
  [17265] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1057), 1,
      anon_sym_SQUOTE,
    STATE(453), 1,
      sym_comment,
  [17275] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1059), 1,
      anon_sym_DQUOTE,
    STATE(454), 1,
      sym_comment,
  [17285] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1061), 1,
      aux_sym__double_quote_string_token1,
    STATE(455), 1,
      sym_comment,
  [17295] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1063), 1,
      aux_sym__literal_string_token1,
    STATE(456), 1,
      sym_comment,
  [17305] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1065), 1,
      sym__natural_number,
    STATE(457), 1,
      sym_comment,
  [17315] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1067), 1,
      aux_sym__literal_string_token1,
    STATE(458), 1,
      sym_comment,
  [17325] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1069), 1,
      aux_sym__double_quote_string_token1,
    STATE(459), 1,
      sym_comment,
  [17335] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1071), 1,
      aux_sym__double_quote_string_token1,
    STATE(460), 1,
      sym_comment,
  [17345] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1073), 1,
      aux_sym__double_quote_string_token1,
    STATE(461), 1,
      sym_comment,
  [17355] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1075), 1,
      aux_sym__double_quote_string_token1,
    STATE(462), 1,
      sym_comment,
  [17365] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1077), 1,
      aux_sym__double_quote_string_token1,
    STATE(463), 1,
      sym_comment,
  [17375] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1079), 1,
      anon_sym_DASH,
    STATE(464), 1,
      sym_comment,
  [17385] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(465), 1,
      sym_comment,
  [17395] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1083), 1,
      aux_sym__double_quote_string_token1,
    STATE(466), 1,
      sym_comment,
  [17405] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1085), 1,
      aux_sym__literal_string_token1,
    STATE(467), 1,
      sym_comment,
  [17415] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1087), 1,
      aux_sym__date_token2,
    STATE(468), 1,
      sym_comment,
  [17425] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1089), 1,
      aux_sym__date_token2,
    STATE(469), 1,
      sym_comment,
  [17435] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1091), 1,
      aux_sym__double_quote_string_token1,
    STATE(470), 1,
      sym_comment,
  [17445] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1093), 1,
      aux_sym__literal_string_token1,
    STATE(471), 1,
      sym_comment,
  [17455] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1095), 1,
      aux_sym__date_token2,
    STATE(472), 1,
      sym_comment,
  [17465] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1097), 1,
      aux_sym__double_quote_string_token1,
    STATE(473), 1,
      sym_comment,
  [17475] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1099), 1,
      aux_sym__literal_string_token1,
    STATE(474), 1,
      sym_comment,
  [17485] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1101), 1,
      aux_sym__double_quote_string_token1,
    STATE(475), 1,
      sym_comment,
  [17495] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      aux_sym__literal_string_token1,
    STATE(476), 1,
      sym_comment,
  [17505] = 3,
    ACTIONS(963), 1,
      anon_sym_POUND,
    ACTIONS(1105), 1,
      aux_sym__double_quote_string_token1,
    STATE(477), 1,
      sym_comment,
  [17515] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      ts_builtin_sym_end,
    STATE(478), 1,
      sym_comment,
  [17525] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1109), 1,
      sym_identifier,
    STATE(479), 1,
      sym_comment,
  [17535] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1111), 1,
      sym_identifier,
    STATE(480), 1,
      sym_comment,
  [17545] = 1,
    ACTIONS(1113), 1,
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
  [SMALL_STATE(9)] = 656,
  [SMALL_STATE(10)] = 710,
  [SMALL_STATE(11)] = 764,
  [SMALL_STATE(12)] = 840,
  [SMALL_STATE(13)] = 889,
  [SMALL_STATE(14)] = 938,
  [SMALL_STATE(15)] = 1037,
  [SMALL_STATE(16)] = 1136,
  [SMALL_STATE(17)] = 1185,
  [SMALL_STATE(18)] = 1236,
  [SMALL_STATE(19)] = 1285,
  [SMALL_STATE(20)] = 1384,
  [SMALL_STATE(21)] = 1483,
  [SMALL_STATE(22)] = 1582,
  [SMALL_STATE(23)] = 1631,
  [SMALL_STATE(24)] = 1682,
  [SMALL_STATE(25)] = 1781,
  [SMALL_STATE(26)] = 1830,
  [SMALL_STATE(27)] = 1928,
  [SMALL_STATE(28)] = 2024,
  [SMALL_STATE(29)] = 2120,
  [SMALL_STATE(30)] = 2216,
  [SMALL_STATE(31)] = 2314,
  [SMALL_STATE(32)] = 2410,
  [SMALL_STATE(33)] = 2460,
  [SMALL_STATE(34)] = 2508,
  [SMALL_STATE(35)] = 2556,
  [SMALL_STATE(36)] = 2604,
  [SMALL_STATE(37)] = 2652,
  [SMALL_STATE(38)] = 2700,
  [SMALL_STATE(39)] = 2748,
  [SMALL_STATE(40)] = 2796,
  [SMALL_STATE(41)] = 2844,
  [SMALL_STATE(42)] = 2894,
  [SMALL_STATE(43)] = 2942,
  [SMALL_STATE(44)] = 2990,
  [SMALL_STATE(45)] = 3038,
  [SMALL_STATE(46)] = 3086,
  [SMALL_STATE(47)] = 3134,
  [SMALL_STATE(48)] = 3182,
  [SMALL_STATE(49)] = 3232,
  [SMALL_STATE(50)] = 3280,
  [SMALL_STATE(51)] = 3378,
  [SMALL_STATE(52)] = 3426,
  [SMALL_STATE(53)] = 3474,
  [SMALL_STATE(54)] = 3522,
  [SMALL_STATE(55)] = 3618,
  [SMALL_STATE(56)] = 3666,
  [SMALL_STATE(57)] = 3716,
  [SMALL_STATE(58)] = 3805,
  [SMALL_STATE(59)] = 3900,
  [SMALL_STATE(60)] = 3993,
  [SMALL_STATE(61)] = 4088,
  [SMALL_STATE(62)] = 4183,
  [SMALL_STATE(63)] = 4272,
  [SMALL_STATE(64)] = 4361,
  [SMALL_STATE(65)] = 4450,
  [SMALL_STATE(66)] = 4507,
  [SMALL_STATE(67)] = 4558,
  [SMALL_STATE(68)] = 4651,
  [SMALL_STATE(69)] = 4744,
  [SMALL_STATE(70)] = 4793,
  [SMALL_STATE(71)] = 4888,
  [SMALL_STATE(72)] = 4981,
  [SMALL_STATE(73)] = 5076,
  [SMALL_STATE(74)] = 5129,
  [SMALL_STATE(75)] = 5222,
  [SMALL_STATE(76)] = 5317,
  [SMALL_STATE(77)] = 5408,
  [SMALL_STATE(78)] = 5469,
  [SMALL_STATE(79)] = 5528,
  [SMALL_STATE(80)] = 5621,
  [SMALL_STATE(81)] = 5707,
  [SMALL_STATE(82)] = 5797,
  [SMALL_STATE(83)] = 5887,
  [SMALL_STATE(84)] = 5977,
  [SMALL_STATE(85)] = 6067,
  [SMALL_STATE(86)] = 6157,
  [SMALL_STATE(87)] = 6247,
  [SMALL_STATE(88)] = 6337,
  [SMALL_STATE(89)] = 6427,
  [SMALL_STATE(90)] = 6517,
  [SMALL_STATE(91)] = 6609,
  [SMALL_STATE(92)] = 6699,
  [SMALL_STATE(93)] = 6789,
  [SMALL_STATE(94)] = 6860,
  [SMALL_STATE(95)] = 6947,
  [SMALL_STATE(96)] = 6996,
  [SMALL_STATE(97)] = 7083,
  [SMALL_STATE(98)] = 7168,
  [SMALL_STATE(99)] = 7253,
  [SMALL_STATE(100)] = 7338,
  [SMALL_STATE(101)] = 7420,
  [SMALL_STATE(102)] = 7502,
  [SMALL_STATE(103)] = 7584,
  [SMALL_STATE(104)] = 7666,
  [SMALL_STATE(105)] = 7750,
  [SMALL_STATE(106)] = 7834,
  [SMALL_STATE(107)] = 7880,
  [SMALL_STATE(108)] = 7964,
  [SMALL_STATE(109)] = 8046,
  [SMALL_STATE(110)] = 8128,
  [SMALL_STATE(111)] = 8212,
  [SMALL_STATE(112)] = 8294,
  [SMALL_STATE(113)] = 8376,
  [SMALL_STATE(114)] = 8458,
  [SMALL_STATE(115)] = 8528,
  [SMALL_STATE(116)] = 8612,
  [SMALL_STATE(117)] = 8694,
  [SMALL_STATE(118)] = 8776,
  [SMALL_STATE(119)] = 8858,
  [SMALL_STATE(120)] = 8940,
  [SMALL_STATE(121)] = 9022,
  [SMALL_STATE(122)] = 9104,
  [SMALL_STATE(123)] = 9186,
  [SMALL_STATE(124)] = 9268,
  [SMALL_STATE(125)] = 9352,
  [SMALL_STATE(126)] = 9434,
  [SMALL_STATE(127)] = 9516,
  [SMALL_STATE(128)] = 9598,
  [SMALL_STATE(129)] = 9655,
  [SMALL_STATE(130)] = 9712,
  [SMALL_STATE(131)] = 9769,
  [SMALL_STATE(132)] = 9812,
  [SMALL_STATE(133)] = 9878,
  [SMALL_STATE(134)] = 9942,
  [SMALL_STATE(135)] = 9981,
  [SMALL_STATE(136)] = 10020,
  [SMALL_STATE(137)] = 10075,
  [SMALL_STATE(138)] = 10127,
  [SMALL_STATE(139)] = 10190,
  [SMALL_STATE(140)] = 10251,
  [SMALL_STATE(141)] = 10303,
  [SMALL_STATE(142)] = 10339,
  [SMALL_STATE(143)] = 10372,
  [SMALL_STATE(144)] = 10405,
  [SMALL_STATE(145)] = 10438,
  [SMALL_STATE(146)] = 10471,
  [SMALL_STATE(147)] = 10504,
  [SMALL_STATE(148)] = 10537,
  [SMALL_STATE(149)] = 10590,
  [SMALL_STATE(150)] = 10623,
  [SMALL_STATE(151)] = 10656,
  [SMALL_STATE(152)] = 10689,
  [SMALL_STATE(153)] = 10722,
  [SMALL_STATE(154)] = 10755,
  [SMALL_STATE(155)] = 10788,
  [SMALL_STATE(156)] = 10820,
  [SMALL_STATE(157)] = 10878,
  [SMALL_STATE(158)] = 10934,
  [SMALL_STATE(159)] = 10984,
  [SMALL_STATE(160)] = 11032,
  [SMALL_STATE(161)] = 11064,
  [SMALL_STATE(162)] = 11099,
  [SMALL_STATE(163)] = 11146,
  [SMALL_STATE(164)] = 11199,
  [SMALL_STATE(165)] = 11254,
  [SMALL_STATE(166)] = 11287,
  [SMALL_STATE(167)] = 11317,
  [SMALL_STATE(168)] = 11347,
  [SMALL_STATE(169)] = 11377,
  [SMALL_STATE(170)] = 11407,
  [SMALL_STATE(171)] = 11437,
  [SMALL_STATE(172)] = 11467,
  [SMALL_STATE(173)] = 11497,
  [SMALL_STATE(174)] = 11527,
  [SMALL_STATE(175)] = 11577,
  [SMALL_STATE(176)] = 11607,
  [SMALL_STATE(177)] = 11653,
  [SMALL_STATE(178)] = 11683,
  [SMALL_STATE(179)] = 11713,
  [SMALL_STATE(180)] = 11743,
  [SMALL_STATE(181)] = 11776,
  [SMALL_STATE(182)] = 11809,
  [SMALL_STATE(183)] = 11836,
  [SMALL_STATE(184)] = 11867,
  [SMALL_STATE(185)] = 11898,
  [SMALL_STATE(186)] = 11933,
  [SMALL_STATE(187)] = 11960,
  [SMALL_STATE(188)] = 11987,
  [SMALL_STATE(189)] = 12034,
  [SMALL_STATE(190)] = 12065,
  [SMALL_STATE(191)] = 12110,
  [SMALL_STATE(192)] = 12137,
  [SMALL_STATE(193)] = 12164,
  [SMALL_STATE(194)] = 12194,
  [SMALL_STATE(195)] = 12224,
  [SMALL_STATE(196)] = 12252,
  [SMALL_STATE(197)] = 12286,
  [SMALL_STATE(198)] = 12314,
  [SMALL_STATE(199)] = 12343,
  [SMALL_STATE(200)] = 12372,
  [SMALL_STATE(201)] = 12403,
  [SMALL_STATE(202)] = 12432,
  [SMALL_STATE(203)] = 12461,
  [SMALL_STATE(204)] = 12490,
  [SMALL_STATE(205)] = 12531,
  [SMALL_STATE(206)] = 12572,
  [SMALL_STATE(207)] = 12603,
  [SMALL_STATE(208)] = 12630,
  [SMALL_STATE(209)] = 12670,
  [SMALL_STATE(210)] = 12706,
  [SMALL_STATE(211)] = 12732,
  [SMALL_STATE(212)] = 12758,
  [SMALL_STATE(213)] = 12796,
  [SMALL_STATE(214)] = 12834,
  [SMALL_STATE(215)] = 12860,
  [SMALL_STATE(216)] = 12892,
  [SMALL_STATE(217)] = 12920,
  [SMALL_STATE(218)] = 12948,
  [SMALL_STATE(219)] = 12988,
  [SMALL_STATE(220)] = 13014,
  [SMALL_STATE(221)] = 13050,
  [SMALL_STATE(222)] = 13090,
  [SMALL_STATE(223)] = 13120,
  [SMALL_STATE(224)] = 13154,
  [SMALL_STATE(225)] = 13182,
  [SMALL_STATE(226)] = 13222,
  [SMALL_STATE(227)] = 13262,
  [SMALL_STATE(228)] = 13290,
  [SMALL_STATE(229)] = 13318,
  [SMALL_STATE(230)] = 13343,
  [SMALL_STATE(231)] = 13368,
  [SMALL_STATE(232)] = 13395,
  [SMALL_STATE(233)] = 13432,
  [SMALL_STATE(234)] = 13457,
  [SMALL_STATE(235)] = 13482,
  [SMALL_STATE(236)] = 13519,
  [SMALL_STATE(237)] = 13542,
  [SMALL_STATE(238)] = 13565,
  [SMALL_STATE(239)] = 13588,
  [SMALL_STATE(240)] = 13611,
  [SMALL_STATE(241)] = 13634,
  [SMALL_STATE(242)] = 13657,
  [SMALL_STATE(243)] = 13680,
  [SMALL_STATE(244)] = 13705,
  [SMALL_STATE(245)] = 13730,
  [SMALL_STATE(246)] = 13755,
  [SMALL_STATE(247)] = 13778,
  [SMALL_STATE(248)] = 13803,
  [SMALL_STATE(249)] = 13828,
  [SMALL_STATE(250)] = 13853,
  [SMALL_STATE(251)] = 13876,
  [SMALL_STATE(252)] = 13899,
  [SMALL_STATE(253)] = 13924,
  [SMALL_STATE(254)] = 13947,
  [SMALL_STATE(255)] = 13972,
  [SMALL_STATE(256)] = 14012,
  [SMALL_STATE(257)] = 14034,
  [SMALL_STATE(258)] = 14058,
  [SMALL_STATE(259)] = 14098,
  [SMALL_STATE(260)] = 14122,
  [SMALL_STATE(261)] = 14162,
  [SMALL_STATE(262)] = 14184,
  [SMALL_STATE(263)] = 14208,
  [SMALL_STATE(264)] = 14230,
  [SMALL_STATE(265)] = 14254,
  [SMALL_STATE(266)] = 14278,
  [SMALL_STATE(267)] = 14300,
  [SMALL_STATE(268)] = 14322,
  [SMALL_STATE(269)] = 14344,
  [SMALL_STATE(270)] = 14366,
  [SMALL_STATE(271)] = 14406,
  [SMALL_STATE(272)] = 14428,
  [SMALL_STATE(273)] = 14450,
  [SMALL_STATE(274)] = 14472,
  [SMALL_STATE(275)] = 14494,
  [SMALL_STATE(276)] = 14518,
  [SMALL_STATE(277)] = 14540,
  [SMALL_STATE(278)] = 14562,
  [SMALL_STATE(279)] = 14584,
  [SMALL_STATE(280)] = 14606,
  [SMALL_STATE(281)] = 14628,
  [SMALL_STATE(282)] = 14650,
  [SMALL_STATE(283)] = 14672,
  [SMALL_STATE(284)] = 14696,
  [SMALL_STATE(285)] = 14718,
  [SMALL_STATE(286)] = 14740,
  [SMALL_STATE(287)] = 14762,
  [SMALL_STATE(288)] = 14784,
  [SMALL_STATE(289)] = 14806,
  [SMALL_STATE(290)] = 14846,
  [SMALL_STATE(291)] = 14870,
  [SMALL_STATE(292)] = 14892,
  [SMALL_STATE(293)] = 14914,
  [SMALL_STATE(294)] = 14938,
  [SMALL_STATE(295)] = 14960,
  [SMALL_STATE(296)] = 14982,
  [SMALL_STATE(297)] = 15006,
  [SMALL_STATE(298)] = 15028,
  [SMALL_STATE(299)] = 15052,
  [SMALL_STATE(300)] = 15076,
  [SMALL_STATE(301)] = 15098,
  [SMALL_STATE(302)] = 15120,
  [SMALL_STATE(303)] = 15142,
  [SMALL_STATE(304)] = 15165,
  [SMALL_STATE(305)] = 15196,
  [SMALL_STATE(306)] = 15225,
  [SMALL_STATE(307)] = 15256,
  [SMALL_STATE(308)] = 15287,
  [SMALL_STATE(309)] = 15318,
  [SMALL_STATE(310)] = 15349,
  [SMALL_STATE(311)] = 15379,
  [SMALL_STATE(312)] = 15407,
  [SMALL_STATE(313)] = 15437,
  [SMALL_STATE(314)] = 15465,
  [SMALL_STATE(315)] = 15493,
  [SMALL_STATE(316)] = 15521,
  [SMALL_STATE(317)] = 15549,
  [SMALL_STATE(318)] = 15579,
  [SMALL_STATE(319)] = 15607,
  [SMALL_STATE(320)] = 15628,
  [SMALL_STATE(321)] = 15647,
  [SMALL_STATE(322)] = 15668,
  [SMALL_STATE(323)] = 15682,
  [SMALL_STATE(324)] = 15696,
  [SMALL_STATE(325)] = 15710,
  [SMALL_STATE(326)] = 15723,
  [SMALL_STATE(327)] = 15742,
  [SMALL_STATE(328)] = 15755,
  [SMALL_STATE(329)] = 15774,
  [SMALL_STATE(330)] = 15787,
  [SMALL_STATE(331)] = 15806,
  [SMALL_STATE(332)] = 15823,
  [SMALL_STATE(333)] = 15836,
  [SMALL_STATE(334)] = 15849,
  [SMALL_STATE(335)] = 15862,
  [SMALL_STATE(336)] = 15875,
  [SMALL_STATE(337)] = 15888,
  [SMALL_STATE(338)] = 15902,
  [SMALL_STATE(339)] = 15918,
  [SMALL_STATE(340)] = 15934,
  [SMALL_STATE(341)] = 15950,
  [SMALL_STATE(342)] = 15966,
  [SMALL_STATE(343)] = 15982,
  [SMALL_STATE(344)] = 15998,
  [SMALL_STATE(345)] = 16014,
  [SMALL_STATE(346)] = 16030,
  [SMALL_STATE(347)] = 16046,
  [SMALL_STATE(348)] = 16062,
  [SMALL_STATE(349)] = 16078,
  [SMALL_STATE(350)] = 16094,
  [SMALL_STATE(351)] = 16110,
  [SMALL_STATE(352)] = 16126,
  [SMALL_STATE(353)] = 16140,
  [SMALL_STATE(354)] = 16156,
  [SMALL_STATE(355)] = 16172,
  [SMALL_STATE(356)] = 16188,
  [SMALL_STATE(357)] = 16202,
  [SMALL_STATE(358)] = 16218,
  [SMALL_STATE(359)] = 16232,
  [SMALL_STATE(360)] = 16248,
  [SMALL_STATE(361)] = 16260,
  [SMALL_STATE(362)] = 16274,
  [SMALL_STATE(363)] = 16288,
  [SMALL_STATE(364)] = 16302,
  [SMALL_STATE(365)] = 16318,
  [SMALL_STATE(366)] = 16332,
  [SMALL_STATE(367)] = 16344,
  [SMALL_STATE(368)] = 16360,
  [SMALL_STATE(369)] = 16376,
  [SMALL_STATE(370)] = 16389,
  [SMALL_STATE(371)] = 16402,
  [SMALL_STATE(372)] = 16413,
  [SMALL_STATE(373)] = 16424,
  [SMALL_STATE(374)] = 16435,
  [SMALL_STATE(375)] = 16448,
  [SMALL_STATE(376)] = 16459,
  [SMALL_STATE(377)] = 16472,
  [SMALL_STATE(378)] = 16485,
  [SMALL_STATE(379)] = 16498,
  [SMALL_STATE(380)] = 16511,
  [SMALL_STATE(381)] = 16524,
  [SMALL_STATE(382)] = 16535,
  [SMALL_STATE(383)] = 16548,
  [SMALL_STATE(384)] = 16559,
  [SMALL_STATE(385)] = 16572,
  [SMALL_STATE(386)] = 16583,
  [SMALL_STATE(387)] = 16594,
  [SMALL_STATE(388)] = 16607,
  [SMALL_STATE(389)] = 16618,
  [SMALL_STATE(390)] = 16629,
  [SMALL_STATE(391)] = 16640,
  [SMALL_STATE(392)] = 16651,
  [SMALL_STATE(393)] = 16664,
  [SMALL_STATE(394)] = 16675,
  [SMALL_STATE(395)] = 16685,
  [SMALL_STATE(396)] = 16695,
  [SMALL_STATE(397)] = 16705,
  [SMALL_STATE(398)] = 16715,
  [SMALL_STATE(399)] = 16725,
  [SMALL_STATE(400)] = 16735,
  [SMALL_STATE(401)] = 16745,
  [SMALL_STATE(402)] = 16755,
  [SMALL_STATE(403)] = 16765,
  [SMALL_STATE(404)] = 16775,
  [SMALL_STATE(405)] = 16785,
  [SMALL_STATE(406)] = 16795,
  [SMALL_STATE(407)] = 16805,
  [SMALL_STATE(408)] = 16815,
  [SMALL_STATE(409)] = 16825,
  [SMALL_STATE(410)] = 16835,
  [SMALL_STATE(411)] = 16845,
  [SMALL_STATE(412)] = 16855,
  [SMALL_STATE(413)] = 16865,
  [SMALL_STATE(414)] = 16875,
  [SMALL_STATE(415)] = 16885,
  [SMALL_STATE(416)] = 16895,
  [SMALL_STATE(417)] = 16905,
  [SMALL_STATE(418)] = 16915,
  [SMALL_STATE(419)] = 16925,
  [SMALL_STATE(420)] = 16935,
  [SMALL_STATE(421)] = 16945,
  [SMALL_STATE(422)] = 16955,
  [SMALL_STATE(423)] = 16965,
  [SMALL_STATE(424)] = 16975,
  [SMALL_STATE(425)] = 16985,
  [SMALL_STATE(426)] = 16995,
  [SMALL_STATE(427)] = 17005,
  [SMALL_STATE(428)] = 17015,
  [SMALL_STATE(429)] = 17025,
  [SMALL_STATE(430)] = 17035,
  [SMALL_STATE(431)] = 17045,
  [SMALL_STATE(432)] = 17055,
  [SMALL_STATE(433)] = 17065,
  [SMALL_STATE(434)] = 17075,
  [SMALL_STATE(435)] = 17085,
  [SMALL_STATE(436)] = 17095,
  [SMALL_STATE(437)] = 17105,
  [SMALL_STATE(438)] = 17115,
  [SMALL_STATE(439)] = 17125,
  [SMALL_STATE(440)] = 17135,
  [SMALL_STATE(441)] = 17145,
  [SMALL_STATE(442)] = 17155,
  [SMALL_STATE(443)] = 17165,
  [SMALL_STATE(444)] = 17175,
  [SMALL_STATE(445)] = 17185,
  [SMALL_STATE(446)] = 17195,
  [SMALL_STATE(447)] = 17205,
  [SMALL_STATE(448)] = 17215,
  [SMALL_STATE(449)] = 17225,
  [SMALL_STATE(450)] = 17235,
  [SMALL_STATE(451)] = 17245,
  [SMALL_STATE(452)] = 17255,
  [SMALL_STATE(453)] = 17265,
  [SMALL_STATE(454)] = 17275,
  [SMALL_STATE(455)] = 17285,
  [SMALL_STATE(456)] = 17295,
  [SMALL_STATE(457)] = 17305,
  [SMALL_STATE(458)] = 17315,
  [SMALL_STATE(459)] = 17325,
  [SMALL_STATE(460)] = 17335,
  [SMALL_STATE(461)] = 17345,
  [SMALL_STATE(462)] = 17355,
  [SMALL_STATE(463)] = 17365,
  [SMALL_STATE(464)] = 17375,
  [SMALL_STATE(465)] = 17385,
  [SMALL_STATE(466)] = 17395,
  [SMALL_STATE(467)] = 17405,
  [SMALL_STATE(468)] = 17415,
  [SMALL_STATE(469)] = 17425,
  [SMALL_STATE(470)] = 17435,
  [SMALL_STATE(471)] = 17445,
  [SMALL_STATE(472)] = 17455,
  [SMALL_STATE(473)] = 17465,
  [SMALL_STATE(474)] = 17475,
  [SMALL_STATE(475)] = 17485,
  [SMALL_STATE(476)] = 17495,
  [SMALL_STATE(477)] = 17505,
  [SMALL_STATE(478)] = 17515,
  [SMALL_STATE(479)] = 17525,
  [SMALL_STATE(480)] = 17535,
  [SMALL_STATE(481)] = 17545,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 10),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 10),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 18),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 13),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(153),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(384),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(466),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(456),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(151),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(420),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(141),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(175),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(379),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(475),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(474),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(171),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(444),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(165),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 24),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 24),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 14),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 14),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(244),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(378),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(477),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(476),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(248),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(449),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(224),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(97),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(70),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(67),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(407),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(20),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(98),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(54),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(26),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 25),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(259),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(380),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(473),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(471),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(262),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(395),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(231),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 23),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 20),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 21),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(61),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(24),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(28),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(50),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_definition, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(407),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(19),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(98),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(321),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(465),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(480),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(428),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 22),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(363),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 11),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(124),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(27),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(90),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(5),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(87),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1077] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1107] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
