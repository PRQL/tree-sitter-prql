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
#define STATE_COUNT 484
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 159
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
  aux_sym_program_repeat2 = 148,
  aux_sym_function_definition_repeat1 = 149,
  aux_sym_function_call_repeat1 = 150,
  aux_sym_transforms_repeat1 = 151,
  aux_sym_derives_repeat1 = 152,
  aux_sym_aggregate_repeat1 = 153,
  aux_sym_sorts_repeat1 = 154,
  aux_sym_window_definitions_repeat1 = 155,
  aux_sym_group_repeat1 = 156,
  aux_sym_group_repeat2 = 157,
  aux_sym_conditions_repeat1 = 158,
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
  [aux_sym_program_repeat2] = "program_repeat2",
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
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
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
  [aux_sym_program_repeat2] = {
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
      if (lookahead == 'P') ADVANCE(124);
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
      if (lookahead == 'p') ADVANCE(299);
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
      if (lookahead == 'P') ADVANCE(124);
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
      if (lookahead == 'p') ADVANCE(299);
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
  [8] = {.lex_state = 366},
  [9] = {.lex_state = 366},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 366},
  [15] = {.lex_state = 366},
  [16] = {.lex_state = 368},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 368},
  [21] = {.lex_state = 368},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 368},
  [24] = {.lex_state = 368},
  [25] = {.lex_state = 366},
  [26] = {.lex_state = 366},
  [27] = {.lex_state = 368},
  [28] = {.lex_state = 368},
  [29] = {.lex_state = 366},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 368},
  [32] = {.lex_state = 368},
  [33] = {.lex_state = 368},
  [34] = {.lex_state = 368},
  [35] = {.lex_state = 368},
  [36] = {.lex_state = 368},
  [37] = {.lex_state = 366},
  [38] = {.lex_state = 368},
  [39] = {.lex_state = 368},
  [40] = {.lex_state = 368},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 368},
  [43] = {.lex_state = 368},
  [44] = {.lex_state = 368},
  [45] = {.lex_state = 368},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 368},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 368},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 368},
  [54] = {.lex_state = 368},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 366},
  [57] = {.lex_state = 368},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 368},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 368},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 368},
  [76] = {.lex_state = 5},
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
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 366},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 368},
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
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 1},
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
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 369},
  [144] = {.lex_state = 369},
  [145] = {.lex_state = 369},
  [146] = {.lex_state = 369},
  [147] = {.lex_state = 369},
  [148] = {.lex_state = 369},
  [149] = {.lex_state = 369},
  [150] = {.lex_state = 369},
  [151] = {.lex_state = 369},
  [152] = {.lex_state = 369},
  [153] = {.lex_state = 369},
  [154] = {.lex_state = 369},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 368},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 368},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 368},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 368},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 368},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 368},
  [181] = {.lex_state = 368},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 368},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 368},
  [191] = {.lex_state = 368},
  [192] = {.lex_state = 368},
  [193] = {.lex_state = 368},
  [194] = {.lex_state = 368},
  [195] = {.lex_state = 368},
  [196] = {.lex_state = 368},
  [197] = {.lex_state = 368},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 368},
  [200] = {.lex_state = 368},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 368},
  [203] = {.lex_state = 368},
  [204] = {.lex_state = 368},
  [205] = {.lex_state = 368},
  [206] = {.lex_state = 368},
  [207] = {.lex_state = 368},
  [208] = {.lex_state = 368},
  [209] = {.lex_state = 368},
  [210] = {.lex_state = 368},
  [211] = {.lex_state = 368},
  [212] = {.lex_state = 368},
  [213] = {.lex_state = 368},
  [214] = {.lex_state = 368},
  [215] = {.lex_state = 368},
  [216] = {.lex_state = 368},
  [217] = {.lex_state = 368},
  [218] = {.lex_state = 368},
  [219] = {.lex_state = 368},
  [220] = {.lex_state = 368},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 368},
  [224] = {.lex_state = 368},
  [225] = {.lex_state = 368},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 368},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 10},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 368},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 368},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 10},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 366},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 366},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 366},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 366},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 366},
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
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 17},
  [332] = {.lex_state = 17},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 17},
  [335] = {.lex_state = 17},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 368},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 6},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 6},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 17},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 6},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 17},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 17},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 6},
  [362] = {.lex_state = 6},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 6},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 17},
  [368] = {.lex_state = 17},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 18},
  [371] = {.lex_state = 17},
  [372] = {.lex_state = 17},
  [373] = {.lex_state = 17},
  [374] = {.lex_state = 17},
  [375] = {.lex_state = 6},
  [376] = {.lex_state = 17},
  [377] = {.lex_state = 6},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 17},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 6},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 17},
  [387] = {.lex_state = 6},
  [388] = {.lex_state = 6},
  [389] = {.lex_state = 17},
  [390] = {.lex_state = 17},
  [391] = {.lex_state = 6},
  [392] = {.lex_state = 6},
  [393] = {.lex_state = 17},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 366},
  [396] = {.lex_state = 368},
  [397] = {.lex_state = 6},
  [398] = {.lex_state = 6},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 19},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 6},
  [415] = {.lex_state = 19},
  [416] = {.lex_state = 368},
  [417] = {.lex_state = 19},
  [418] = {.lex_state = 19},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 6},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 6},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 6},
  [428] = {.lex_state = 19},
  [429] = {.lex_state = 19},
  [430] = {.lex_state = 17},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 6},
  [433] = {.lex_state = 6},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 697},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 6},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 6},
  [444] = {.lex_state = 6},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 6},
  [447] = {.lex_state = 6},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 6},
  [452] = {.lex_state = 6},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 6},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 467},
  [458] = {.lex_state = 476},
  [459] = {.lex_state = 476},
  [460] = {.lex_state = 467},
  [461] = {.lex_state = 467},
  [462] = {.lex_state = 467},
  [463] = {.lex_state = 467},
  [464] = {.lex_state = 467},
  [465] = {.lex_state = 19},
  [466] = {.lex_state = 17},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 467},
  [469] = {.lex_state = 476},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 467},
  [473] = {.lex_state = 476},
  [474] = {.lex_state = 6},
  [475] = {.lex_state = 467},
  [476] = {.lex_state = 476},
  [477] = {.lex_state = 467},
  [478] = {.lex_state = 476},
  [479] = {.lex_state = 467},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 19},
  [482] = {.lex_state = 17},
  [483] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(480),
    [sym_prql] = STATE(328),
    [sym_pipeline] = STATE(337),
    [sym_variable] = STATE(337),
    [sym_function_definition] = STATE(337),
    [sym_from] = STATE(142),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(304),
    [aux_sym_program_repeat2] = STATE(316),
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(183), 1,
      sym_binary_expression,
    STATE(224), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(341), 3,
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
    STATE(32), 7,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(195), 1,
      sym_binary_expression,
    STATE(224), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(384), 3,
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
    STATE(32), 7,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(195), 1,
      sym_binary_expression,
    STATE(224), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(384), 3,
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
    STATE(32), 7,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(195), 1,
      sym_binary_expression,
    STATE(224), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(384), 3,
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
    STATE(32), 7,
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
    STATE(133), 1,
      aux_sym_function_call_repeat1,
    STATE(146), 1,
      sym__integer,
    STATE(148), 1,
      sym__call_parameter,
    STATE(149), 1,
      sym_literal,
    STATE(154), 1,
      sym__double_quote_string,
    STATE(151), 2,
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
    STATE(40), 1,
      sym_timezone,
    STATE(415), 1,
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
  [554] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_COLON,
    ACTIONS(85), 1,
      anon_sym_DOT,
    STATE(8), 1,
      sym_comment,
    ACTIONS(83), 3,
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
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [608] = 6,
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
  [662] = 30,
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
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    STATE(10), 1,
      sym_comment,
    STATE(37), 1,
      sym__integer,
    STATE(80), 1,
      sym_direction,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(349), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
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
    STATE(139), 1,
      aux_sym_function_call_repeat1,
    STATE(170), 1,
      sym_literal,
    STATE(172), 1,
      sym__double_quote_string,
    STATE(175), 1,
      sym__integer,
    STATE(177), 1,
      sym__call_parameter,
    STATE(167), 2,
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
  [840] = 29,
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
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_comment,
    STATE(37), 1,
      sym__integer,
    STATE(90), 1,
      sym_direction,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(394), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [939] = 29,
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
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      sym_comment,
    STATE(37), 1,
      sym__integer,
    STATE(83), 1,
      sym_direction,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(250), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1038] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(14), 1,
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
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [1089] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [1138] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(123), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [1187] = 29,
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
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      sym_comment,
    STATE(37), 1,
      sym__integer,
    STATE(90), 1,
      sym_direction,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(394), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1286] = 29,
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
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_comment,
    STATE(37), 1,
      sym__integer,
    STATE(90), 1,
      sym_direction,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(394), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1385] = 29,
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
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_comment,
    STATE(37), 1,
      sym__integer,
    STATE(81), 1,
      sym_direction,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(135), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(250), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1484] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      sym__natural_number,
    STATE(20), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [1535] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(143), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [1584] = 29,
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
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_comment,
    STATE(37), 1,
      sym__integer,
    STATE(84), 1,
      sym_direction,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(165), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(250), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1683] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(147), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
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
  [1732] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(91), 3,
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
      sym_keyword_prql,
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
  [1830] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [1879] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
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
  [1927] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
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
  [1975] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(29), 1,
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
  [2025] = 29,
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
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_comment,
    STATE(37), 1,
      sym__integer,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(191), 1,
      sym_binary_expression,
    STATE(340), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2123] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
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
  [2171] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
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
  [2219] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
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
  [2267] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
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
  [2315] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(35), 1,
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
  [2363] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(36), 1,
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
  [2411] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2461] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(203), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2509] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(209), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(207), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2557] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
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
  [2605] = 28,
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
    ACTIONS(215), 1,
      sym_keyword_side,
    STATE(37), 1,
      sym__integer,
    STATE(41), 1,
      sym_comment,
    STATE(91), 1,
      sym__join_definition,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(201), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2701] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(217), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2749] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(223), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2797] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(227), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(225), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2845] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_T,
    STATE(45), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [2895] = 28,
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
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    STATE(37), 1,
      sym__integer,
    STATE(46), 1,
      sym_comment,
    STATE(90), 1,
      sym_direction,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(394), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2991] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [3039] = 29,
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
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(48), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(136), 1,
      sym_field,
    STATE(140), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(267), 1,
      sym_term,
    STATE(274), 1,
      sym_table_reference,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3137] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(49), 1,
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
  [3185] = 28,
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
    ACTIONS(215), 1,
      sym_keyword_side,
    STATE(37), 1,
      sym__integer,
    STATE(50), 1,
      sym_comment,
    STATE(86), 1,
      sym__join_definition,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(135), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(201), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3281] = 29,
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
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(51), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(135), 1,
      sym__expression,
    STATE(136), 1,
      sym_field,
    STATE(185), 1,
      sym_assignment,
    STATE(267), 1,
      sym_term,
    STATE(274), 1,
      sym_table_reference,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3379] = 28,
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
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(52), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(347), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3475] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(53), 1,
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
  [3523] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(54), 1,
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
  [3571] = 28,
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
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(55), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(355), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3667] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_DOT,
    STATE(56), 1,
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
  [3717] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(163), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 29,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [3768] = 26,
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
    ACTIONS(261), 1,
      sym_identifier,
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(58), 1,
      sym_comment,
    STATE(219), 1,
      sym_binary_expression,
    STATE(223), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(471), 1,
      sym_function_call,
    ACTIONS(259), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3859] = 28,
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
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(59), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(196), 1,
      sym_binary_expression,
    STATE(378), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3954] = 27,
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
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(60), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(382), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4047] = 25,
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
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      sym_identifier,
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(61), 1,
      sym_comment,
    STATE(130), 1,
      sym__expression,
    STATE(187), 1,
      sym_function_call,
    STATE(414), 1,
      sym__alias_identifier,
    ACTIONS(269), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4136] = 25,
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
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(62), 1,
      sym_comment,
    STATE(130), 1,
      sym__expression,
    STATE(187), 1,
      sym_function_call,
    STATE(414), 1,
      sym__alias_identifier,
    ACTIONS(269), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4225] = 25,
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
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(63), 1,
      sym_comment,
    STATE(130), 1,
      sym__expression,
    STATE(187), 1,
      sym_function_call,
    STATE(414), 1,
      sym__alias_identifier,
    ACTIONS(269), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4314] = 27,
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
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(64), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(382), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4407] = 27,
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
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(65), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(382), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4500] = 27,
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
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    ACTIONS(285), 1,
      anon_sym_EQ_EQ,
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(66), 1,
      sym_comment,
    STATE(197), 1,
      sym_binary_expression,
    STATE(243), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4593] = 28,
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
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(67), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(196), 1,
      sym_binary_expression,
    STATE(378), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4688] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_EQ,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    STATE(68), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(161), 23,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [4747] = 27,
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
    STATE(37), 1,
      sym__integer,
    STATE(69), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(382), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4840] = 27,
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
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(70), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(470), 1,
      sym_term,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4933] = 28,
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
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(71), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym_binary_expression,
    STATE(135), 1,
      sym__expression,
    STATE(285), 1,
      sym_assignment,
    STATE(290), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5028] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_EQ,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    STATE(72), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(161), 22,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [5089] = 28,
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
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(73), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym_binary_expression,
    STATE(140), 1,
      sym__expression,
    STATE(285), 1,
      sym_assignment,
    STATE(290), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5184] = 25,
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
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(74), 1,
      sym_comment,
    STATE(130), 1,
      sym__expression,
    STATE(187), 1,
      sym_function_call,
    STATE(414), 1,
      sym__alias_identifier,
    ACTIONS(269), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5273] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(163), 1,
      anon_sym_EQ,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    STATE(75), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(161), 24,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [5330] = 28,
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
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(76), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym_binary_expression,
    STATE(176), 1,
      sym__expression,
    STATE(285), 1,
      sym_assignment,
    STATE(290), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5425] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(77), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(163), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [5474] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    STATE(78), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(163), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [5527] = 28,
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
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(79), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(196), 1,
      sym_binary_expression,
    STATE(378), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5622] = 26,
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
    STATE(37), 1,
      sym__integer,
    STATE(80), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(369), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5712] = 26,
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
    STATE(37), 1,
      sym__integer,
    STATE(81), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(135), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(253), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5802] = 26,
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
    STATE(37), 1,
      sym__integer,
    STATE(82), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(135), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(295), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5892] = 26,
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
    STATE(37), 1,
      sym__integer,
    STATE(83), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(253), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5982] = 26,
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
    STATE(37), 1,
      sym__integer,
    STATE(84), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(165), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(253), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6072] = 26,
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
    STATE(37), 1,
      sym__integer,
    STATE(85), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(295), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6162] = 26,
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
    STATE(37), 1,
      sym__integer,
    STATE(86), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(135), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(198), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6252] = 26,
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
    STATE(37), 1,
      sym__integer,
    STATE(87), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(382), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6342] = 27,
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
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym__integer,
    STATE(88), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(196), 1,
      sym_binary_expression,
    STATE(378), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6434] = 26,
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
    STATE(37), 1,
      sym__integer,
    STATE(89), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(402), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6524] = 26,
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
    STATE(37), 1,
      sym__integer,
    STATE(90), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(381), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6614] = 26,
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
    STATE(37), 1,
      sym__integer,
    STATE(91), 1,
      sym_comment,
    STATE(94), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym__expression,
    STATE(185), 1,
      sym_assignment,
    STATE(198), 1,
      sym_term,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(103), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6704] = 24,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(92), 1,
      sym_comment,
    STATE(202), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6790] = 24,
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
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      sym__natural_number,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_AT,
    STATE(93), 1,
      sym_comment,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym__integer,
    STATE(225), 1,
      sym__expression,
    STATE(244), 1,
      sym_range,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6875] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_DOT,
    STATE(94), 1,
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
    ACTIONS(321), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [6924] = 25,
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
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym_comment,
    STATE(207), 1,
      sym_binary_expression,
    STATE(243), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7011] = 24,
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
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(96), 1,
      sym_comment,
    STATE(137), 1,
      sym__expression,
    STATE(286), 1,
      sym__boolean_expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7096] = 25,
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
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(97), 1,
      sym_comment,
    STATE(207), 1,
      sym_binary_expression,
    STATE(243), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7183] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_SQUOTE,
    ACTIONS(337), 1,
      sym__natural_number,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(98), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_function_call_repeat1,
    STATE(229), 1,
      sym_literal,
    STATE(233), 1,
      sym__integer,
    STATE(247), 1,
      sym__double_quote_string,
    STATE(251), 1,
      sym__call_parameter,
    STATE(246), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(329), 3,
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
  [7254] = 24,
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
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(99), 1,
      sym_comment,
    STATE(162), 1,
      sym__integer,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(225), 1,
      sym__expression,
    STATE(330), 1,
      sym_range,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7339] = 24,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym_comment,
    STATE(215), 1,
      sym_binary_expression,
    STATE(248), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7423] = 24,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(101), 1,
      sym_comment,
    STATE(243), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(181), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7507] = 23,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym_comment,
    STATE(210), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7589] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(103), 1,
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
    ACTIONS(321), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [7635] = 24,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(104), 1,
      sym_comment,
    STATE(220), 1,
      sym_binary_expression,
    STATE(248), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7719] = 23,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym__expression,
    STATE(105), 1,
      sym_comment,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7801] = 23,
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
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(28), 1,
      sym__expression,
    STATE(106), 1,
      sym_comment,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym__integer,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7883] = 23,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym_comment,
    STATE(129), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7965] = 23,
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
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(108), 1,
      sym_comment,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym__integer,
    STATE(208), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8047] = 24,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym_comment,
    STATE(218), 1,
      sym_binary_expression,
    STATE(248), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8131] = 23,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(110), 1,
      sym_comment,
    STATE(205), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8213] = 23,
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
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(111), 1,
      sym_comment,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym__integer,
    STATE(209), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8295] = 23,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(112), 1,
      sym_comment,
    STATE(128), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8377] = 23,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(113), 1,
      sym_comment,
    STATE(213), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8459] = 23,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(114), 1,
      sym_comment,
    STATE(228), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8541] = 23,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(68), 1,
      sym__expression,
    STATE(115), 1,
      sym_comment,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8623] = 23,
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
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(116), 1,
      sym_comment,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym__integer,
    STATE(211), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8705] = 23,
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
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(117), 1,
      sym_comment,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym__integer,
    STATE(214), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8787] = 23,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(57), 1,
      sym__expression,
    STATE(118), 1,
      sym_comment,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8869] = 23,
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
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(119), 1,
      sym_comment,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym__integer,
    STATE(212), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8951] = 23,
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
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(319), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__natural_number,
    STATE(120), 1,
      sym_comment,
    STATE(203), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym__integer,
    STATE(216), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9033] = 23,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym__expression,
    STATE(121), 1,
      sym_comment,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9115] = 23,
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
    STATE(28), 1,
      sym__expression,
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(122), 1,
      sym_comment,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9197] = 24,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(123), 1,
      sym_comment,
    STATE(217), 1,
      sym__expression,
    STATE(219), 1,
      sym_binary_expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9281] = 24,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(124), 1,
      sym_comment,
    STATE(207), 1,
      sym_binary_expression,
    STATE(243), 1,
      sym__expression,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9365] = 23,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(78), 1,
      sym__expression,
    STATE(125), 1,
      sym_comment,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9447] = 23,
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
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym__double_quote_string,
    STATE(77), 1,
      sym__expression,
    STATE(126), 1,
      sym_comment,
    STATE(414), 1,
      sym__alias_identifier,
    STATE(27), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(53), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(32), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9529] = 17,
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
    STATE(127), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym_function_call_repeat1,
    STATE(256), 1,
      sym_literal,
    STATE(260), 1,
      sym__integer,
    STATE(280), 1,
      sym__double_quote_string,
    STATE(291), 1,
      sym__call_parameter,
    STATE(279), 2,
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
  [9599] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(128), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
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
  [9656] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(129), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
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
  [9713] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(130), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
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
  [9770] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 13,
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
  [9813] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(376), 1,
      anon_sym_DASH,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_SQUOTE,
    ACTIONS(385), 1,
      sym__natural_number,
    ACTIONS(388), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(146), 1,
      sym__integer,
    STATE(148), 1,
      sym__call_parameter,
    STATE(149), 1,
      sym_literal,
    STATE(154), 1,
      sym__double_quote_string,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(132), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(151), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(373), 3,
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
  [9877] = 17,
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
      aux_sym_function_call_repeat1,
    STATE(133), 1,
      sym_comment,
    STATE(146), 1,
      sym__integer,
    STATE(148), 1,
      sym__call_parameter,
    STATE(149), 1,
      sym_literal,
    STATE(154), 1,
      sym__double_quote_string,
    ACTIONS(394), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(151), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(57), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(396), 11,
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
  [9943] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(134), 1,
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
  [9982] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(361), 1,
      sym_keyword_or,
    ACTIONS(400), 1,
      anon_sym_EQ,
    STATE(135), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
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
  [10037] = 4,
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
  [10076] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(137), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
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
  [10128] = 16,
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
    STATE(170), 1,
      sym_literal,
    STATE(172), 1,
      sym__double_quote_string,
    STATE(175), 1,
      sym__integer,
    STATE(177), 1,
      sym__call_parameter,
    ACTIONS(369), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(138), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(167), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(404), 3,
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
  [10189] = 17,
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
      aux_sym_function_call_repeat1,
    STATE(139), 1,
      sym_comment,
    STATE(170), 1,
      sym_literal,
    STATE(172), 1,
      sym__double_quote_string,
    STATE(175), 1,
      sym__integer,
    STATE(177), 1,
      sym__call_parameter,
    ACTIONS(394), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(167), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(103), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(396), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [10252] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(361), 1,
      sym_keyword_or,
    ACTIONS(425), 1,
      anon_sym_EQ,
    STATE(140), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
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
  [10304] = 5,
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
  [10340] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(435), 1,
      sym_keyword_filter,
    ACTIONS(437), 1,
      sym_keyword_derive,
    ACTIONS(439), 1,
      sym_keyword_group,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_sort,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(447), 1,
      sym_keyword_join,
    ACTIONS(449), 1,
      sym_keyword_select,
    STATE(142), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_transforms_repeat1,
    STATE(329), 1,
      sym_transforms,
    ACTIONS(433), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(262), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10393] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(143), 1,
      sym_comment,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(205), 15,
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
  [10426] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym_comment,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(129), 15,
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
  [10459] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(145), 1,
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
  [10492] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(146), 1,
      sym_comment,
    ACTIONS(197), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(199), 15,
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
  [10525] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(147), 1,
      sym_comment,
    ACTIONS(451), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(453), 15,
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
  [10558] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(148), 1,
      sym_comment,
    ACTIONS(455), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(457), 15,
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
  [10591] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(149), 1,
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
  [10624] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_comment,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(187), 15,
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
  [10657] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(151), 1,
      sym_comment,
    ACTIONS(197), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(199), 15,
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
  [10690] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(152), 1,
      sym_comment,
    ACTIONS(153), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(155), 15,
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
  [10723] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(153), 1,
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
  [10756] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(154), 1,
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
  [10789] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(465), 1,
      sym_keyword_filter,
    ACTIONS(468), 1,
      sym_keyword_derive,
    ACTIONS(471), 1,
      sym_keyword_group,
    ACTIONS(474), 1,
      sym_keyword_aggregate,
    ACTIONS(477), 1,
      sym_keyword_sort,
    ACTIONS(480), 1,
      sym_keyword_take,
    ACTIONS(483), 1,
      sym_keyword_join,
    ACTIONS(486), 1,
      sym_keyword_select,
    STATE(155), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(463), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(262), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10837] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 18,
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
  [10869] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_SQUOTE,
    ACTIONS(337), 1,
      sym__natural_number,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym_function_call_repeat1,
    STATE(229), 1,
      sym_literal,
    STATE(233), 1,
      sym__integer,
    STATE(247), 1,
      sym__double_quote_string,
    STATE(251), 1,
      sym__call_parameter,
    STATE(246), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(329), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(396), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [10927] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(435), 1,
      sym_keyword_filter,
    ACTIONS(437), 1,
      sym_keyword_derive,
    ACTIONS(439), 1,
      sym_keyword_group,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(443), 1,
      sym_keyword_sort,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(447), 1,
      sym_keyword_join,
    ACTIONS(449), 1,
      sym_keyword_select,
    STATE(155), 1,
      aux_sym_transforms_repeat1,
    STATE(158), 1,
      sym_comment,
    ACTIONS(489), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(262), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10977] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(494), 1,
      anon_sym_DASH,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
    ACTIONS(503), 1,
      sym__natural_number,
    ACTIONS(506), 1,
      anon_sym_DOT,
    ACTIONS(509), 1,
      sym_identifier,
    STATE(229), 1,
      sym_literal,
    STATE(233), 1,
      sym__integer,
    STATE(247), 1,
      sym__double_quote_string,
    STATE(251), 1,
      sym__call_parameter,
    STATE(159), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(246), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(491), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(371), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [11033] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 18,
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
  [11065] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(512), 1,
      anon_sym_COLON,
    STATE(161), 1,
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
  [11098] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_DOT,
    STATE(162), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(514), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(197), 13,
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
  [11133] = 16,
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
      sym_comment,
    STATE(164), 1,
      aux_sym_function_call_repeat1,
    STATE(256), 1,
      sym_literal,
    STATE(260), 1,
      sym__integer,
    STATE(280), 1,
      sym__double_quote_string,
    STATE(291), 1,
      sym__call_parameter,
    STATE(279), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(345), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(394), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11188] = 15,
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
    STATE(256), 1,
      sym_literal,
    STATE(260), 1,
      sym__integer,
    STATE(280), 1,
      sym__double_quote_string,
    STATE(291), 1,
      sym__call_parameter,
    STATE(164), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(279), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(518), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(369), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11241] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(361), 1,
      sym_keyword_or,
    ACTIONS(539), 1,
      anon_sym_EQ,
    STATE(165), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
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
  [11288] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
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
  [11318] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(197), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(199), 12,
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
  [11348] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
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
  [11378] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(203), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(205), 12,
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
  [11408] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(170), 1,
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
  [11438] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    ACTIONS(435), 1,
      sym_keyword_filter,
    ACTIONS(439), 1,
      sym_keyword_group,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(541), 1,
      sym_keyword_derive,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_join,
    ACTIONS(547), 1,
      sym_keyword_select,
    STATE(171), 1,
      sym_comment,
    STATE(186), 1,
      aux_sym_transforms_repeat1,
    STATE(329), 1,
      sym_transforms,
    STATE(262), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11488] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(172), 1,
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
  [11518] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment,
    ACTIONS(185), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(187), 12,
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
  [11548] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(174), 1,
      sym_comment,
    ACTIONS(153), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(155), 12,
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
  [11578] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym_comment,
    ACTIONS(197), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(199), 12,
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
  [11608] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(361), 1,
      sym_keyword_or,
    ACTIONS(549), 1,
      anon_sym_EQ,
    STATE(176), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(398), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11654] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(177), 1,
      sym_comment,
    ACTIONS(455), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(457), 12,
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
  [11684] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(178), 1,
      sym_comment,
    ACTIONS(127), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(129), 12,
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
  [11714] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(179), 1,
      sym_comment,
    ACTIONS(451), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(453), 12,
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
  [11744] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(180), 1,
      sym_comment,
    STATE(359), 1,
      aux_sym_derives_repeat1,
    ACTIONS(247), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(245), 14,
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
  [11775] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(181), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(551), 4,
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
  [11806] = 3,
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
  [11833] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym_comment,
    STATE(364), 1,
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
  [11868] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(465), 1,
      sym_keyword_filter,
    ACTIONS(471), 1,
      sym_keyword_group,
    ACTIONS(474), 1,
      sym_keyword_aggregate,
    ACTIONS(480), 1,
      sym_keyword_take,
    ACTIONS(559), 1,
      sym_keyword_derive,
    ACTIONS(562), 1,
      sym_keyword_sort,
    ACTIONS(565), 1,
      sym_keyword_join,
    ACTIONS(568), 1,
      sym_keyword_select,
    STATE(184), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(262), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11913] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(185), 1,
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
  [11940] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(435), 1,
      sym_keyword_filter,
    ACTIONS(439), 1,
      sym_keyword_group,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    ACTIONS(541), 1,
      sym_keyword_derive,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_join,
    ACTIONS(547), 1,
      sym_keyword_select,
    STATE(184), 1,
      aux_sym_transforms_repeat1,
    STATE(186), 1,
      sym_comment,
    STATE(262), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11987] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(187), 1,
      sym_comment,
    ACTIONS(571), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [12014] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(188), 1,
      sym_comment,
    ACTIONS(573), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [12041] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(189), 1,
      sym_comment,
    ACTIONS(575), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [12068] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(577), 1,
      anon_sym_COLON,
    ACTIONS(579), 1,
      anon_sym_DOT,
    STATE(190), 1,
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
  [12101] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(191), 1,
      sym_comment,
    STATE(351), 1,
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
  [12132] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      anon_sym_COLON,
    ACTIONS(583), 1,
      anon_sym_DOT,
    STATE(192), 1,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 14,
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
  [12165] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(585), 1,
      anon_sym_DOT,
    STATE(193), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 14,
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
  [12195] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(194), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(245), 14,
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
  [12223] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(195), 1,
      sym_comment,
    ACTIONS(587), 2,
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
  [12253] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(196), 1,
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
  [12281] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RBRACK,
    STATE(197), 1,
      sym_comment,
    STATE(344), 1,
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
  [12315] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    STATE(198), 1,
      sym_comment,
    STATE(278), 1,
      sym_conditions,
    STATE(294), 1,
      sym__self_join,
    ACTIONS(593), 13,
      ts_builtin_sym_end,
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
  [12346] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(199), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_DOT,
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
  [12373] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(597), 1,
      anon_sym_T,
    STATE(200), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 13,
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
  [12402] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    STATE(201), 1,
      sym_comment,
    STATE(292), 1,
      sym_conditions,
    STATE(294), 1,
      sym__self_join,
    ACTIONS(599), 13,
      ts_builtin_sym_end,
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
  [12433] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(202), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12474] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(603), 1,
      anon_sym_DOT,
    STATE(203), 1,
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
  [12503] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_DOT,
    STATE(204), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 13,
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
  [12532] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(205), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(605), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12573] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(607), 1,
      anon_sym_DOT,
    STATE(206), 1,
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
  [12602] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(207), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(609), 2,
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
  [12631] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      anon_sym_PIPE,
    STATE(208), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(611), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(161), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [12663] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      anon_sym_PIPE,
    ACTIONS(617), 1,
      sym_keyword_and,
    ACTIONS(623), 1,
      anon_sym_QMARK_QMARK,
    STATE(209), 1,
      sym_comment,
    ACTIONS(161), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(611), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(621), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(619), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12701] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(361), 1,
      sym_keyword_or,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12741] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(211), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(611), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 11,
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
  [12769] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(212), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(611), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(161), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [12799] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    STATE(213), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12835] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      anon_sym_PIPE,
    ACTIONS(623), 1,
      anon_sym_QMARK_QMARK,
    STATE(214), 1,
      sym_comment,
    ACTIONS(611), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(621), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(619), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12871] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(627), 1,
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
  [12899] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      anon_sym_PIPE,
    STATE(216), 1,
      sym_comment,
    ACTIONS(611), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(621), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(161), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(619), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12933] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(629), 1,
      sym_keyword_and,
    ACTIONS(631), 1,
      sym_keyword_or,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12973] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
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
  [13001] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(219), 1,
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
  [13027] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
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
  [13055] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(221), 1,
      sym_comment,
    ACTIONS(639), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(641), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [13081] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(643), 1,
      anon_sym_COLON,
    STATE(222), 1,
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
  [13109] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(629), 1,
      sym_keyword_and,
    ACTIONS(631), 1,
      sym_keyword_or,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13149] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(361), 1,
      sym_keyword_or,
    ACTIONS(549), 1,
      anon_sym_EQ,
    STATE(224), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13189] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      anon_sym_PIPE,
    ACTIONS(617), 1,
      sym_keyword_and,
    ACTIONS(623), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(647), 1,
      sym_keyword_or,
    ACTIONS(649), 1,
      anon_sym_DOT_DOT,
    STATE(225), 1,
      sym_comment,
    ACTIONS(611), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(613), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(621), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(619), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13229] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(226), 1,
      sym_comment,
    ACTIONS(651), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(653), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [13255] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(227), 1,
      sym_comment,
    ACTIONS(651), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(653), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [13281] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    STATE(228), 1,
      sym_comment,
    ACTIONS(161), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13319] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(229), 1,
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
  [13344] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(230), 1,
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
  [13367] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(231), 1,
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
  [13390] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(232), 1,
      sym_comment,
    ACTIONS(127), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(129), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13415] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym_comment,
    ACTIONS(197), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(199), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13440] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(234), 1,
      sym_comment,
    ACTIONS(153), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(155), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13465] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(235), 1,
      sym_comment,
    ACTIONS(185), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(187), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13490] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(236), 1,
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
  [13513] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(237), 1,
      sym_comment,
    ACTIONS(203), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(205), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13538] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(661), 1,
      anon_sym_COLON,
    STATE(238), 1,
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
  [13565] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(239), 1,
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
  [13590] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(240), 1,
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
  [13613] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(241), 1,
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
  [13636] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(242), 1,
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
  [13659] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(303), 1,
      sym_keyword_and,
    ACTIONS(361), 1,
      sym_keyword_or,
    STATE(243), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13696] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(244), 1,
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
  [13719] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(245), 1,
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
  [13742] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(246), 1,
      sym_comment,
    ACTIONS(197), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(199), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13767] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(247), 1,
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
  [13792] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    ACTIONS(295), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(629), 1,
      sym_keyword_and,
    ACTIONS(631), 1,
      sym_keyword_or,
    STATE(248), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13829] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(249), 1,
      sym_comment,
    ACTIONS(451), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(453), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13854] = 3,
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
  [13877] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(251), 1,
      sym_comment,
    ACTIONS(455), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(457), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [13902] = 4,
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
  [13927] = 3,
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
  [13950] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(254), 1,
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
  [13973] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(255), 1,
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
  [13995] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(256), 1,
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
  [14019] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      anon_sym_DASH,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_SQUOTE,
    ACTIONS(337), 1,
      sym__natural_number,
    ACTIONS(339), 1,
      anon_sym_DOT,
    STATE(233), 1,
      sym__integer,
    STATE(247), 1,
      sym__double_quote_string,
    STATE(249), 1,
      sym_literal,
    STATE(257), 1,
      sym_comment,
    STATE(246), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(681), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14059] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(258), 1,
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
  [14081] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(259), 1,
      sym_comment,
    ACTIONS(129), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(127), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14105] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(260), 1,
      sym_comment,
    ACTIONS(199), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(197), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14129] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(261), 1,
      sym_comment,
    ACTIONS(155), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(153), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14153] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(262), 1,
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
  [14175] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(263), 1,
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
  [14197] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(264), 1,
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
  [14219] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(265), 1,
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
  [14241] = 12,
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
    STATE(172), 1,
      sym__double_quote_string,
    STATE(175), 1,
      sym__integer,
    STATE(179), 1,
      sym_literal,
    STATE(266), 1,
      sym_comment,
    STATE(167), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(693), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14281] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(267), 1,
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
  [14303] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(268), 1,
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
  [14325] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(269), 1,
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
  [14347] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(270), 1,
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
  [14369] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(271), 1,
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
  [14391] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(272), 1,
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
  [14415] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(273), 1,
      sym_comment,
    ACTIONS(187), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(185), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14439] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(274), 1,
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
  [14461] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(275), 1,
      sym_comment,
    ACTIONS(205), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(203), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14485] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(276), 1,
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
  [14507] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(277), 1,
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
  [14531] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(278), 1,
      sym_comment,
    ACTIONS(709), 13,
      ts_builtin_sym_end,
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
  [14553] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(279), 1,
      sym_comment,
    ACTIONS(199), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(197), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14577] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(280), 1,
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
  [14601] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(281), 1,
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
  [14623] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(282), 1,
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
  [14645] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(283), 1,
      sym_comment,
    ACTIONS(453), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(451), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14669] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(284), 1,
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
  [14691] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(285), 1,
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
  [14713] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(286), 1,
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
  [14735] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(287), 1,
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
  [14757] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(288), 1,
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
  [14779] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(725), 1,
      anon_sym_DASH,
    ACTIONS(727), 1,
      anon_sym_DQUOTE,
    ACTIONS(729), 1,
      anon_sym_SQUOTE,
    ACTIONS(731), 1,
      sym__natural_number,
    ACTIONS(733), 1,
      anon_sym_DOT,
    STATE(289), 1,
      sym_comment,
    STATE(354), 1,
      sym__integer,
    STATE(379), 1,
      sym__double_quote_string,
    STATE(393), 1,
      sym_literal,
    STATE(373), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(723), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14819] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(290), 1,
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
  [14841] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(291), 1,
      sym_comment,
    ACTIONS(457), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(455), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [14865] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(292), 1,
      sym_comment,
    ACTIONS(593), 13,
      ts_builtin_sym_end,
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
  [14887] = 12,
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
    STATE(146), 1,
      sym__integer,
    STATE(147), 1,
      sym_literal,
    STATE(154), 1,
      sym__double_quote_string,
    STATE(293), 1,
      sym_comment,
    STATE(151), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(737), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14927] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(294), 1,
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
  [14949] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(295), 1,
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
  [14971] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(296), 1,
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
  [14993] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(297), 1,
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
  [15015] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(298), 1,
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
  [15037] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(299), 1,
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
  [15059] = 3,
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
  [15081] = 3,
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
  [15103] = 12,
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
    STATE(260), 1,
      sym__integer,
    STATE(280), 1,
      sym__double_quote_string,
    STATE(283), 1,
      sym_literal,
    STATE(302), 1,
      sym_comment,
    STATE(279), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(755), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15143] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(303), 1,
      sym_comment,
    STATE(326), 1,
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
  [15166] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(9), 1,
      sym_keyword_func,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(13), 1,
      sym_keyword_prql,
    ACTIONS(759), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym_from,
    STATE(304), 1,
      sym_comment,
    STATE(318), 1,
      aux_sym_program_repeat2,
    STATE(319), 1,
      aux_sym_program_repeat1,
    STATE(328), 1,
      sym_prql,
    STATE(337), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15205] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(761), 1,
      sym_keyword_sort,
    ACTIONS(763), 1,
      sym_keyword_window,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      sym_comment,
    STATE(309), 1,
      aux_sym_group_repeat2,
    STATE(323), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15236] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(761), 1,
      sym_keyword_sort,
    ACTIONS(763), 1,
      sym_keyword_window,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      sym_comment,
    STATE(309), 1,
      aux_sym_group_repeat2,
    STATE(323), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15267] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(761), 1,
      sym_keyword_sort,
    ACTIONS(763), 1,
      sym_keyword_window,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      sym_comment,
    STATE(309), 1,
      aux_sym_group_repeat2,
    STATE(323), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15298] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(761), 1,
      sym_keyword_sort,
    ACTIONS(763), 1,
      sym_keyword_window,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      sym_comment,
    STATE(309), 1,
      aux_sym_group_repeat2,
    STATE(323), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15329] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_keyword_aggregate,
    ACTIONS(776), 1,
      sym_keyword_sort,
    ACTIONS(779), 1,
      sym_keyword_take,
    ACTIONS(782), 1,
      sym_keyword_window,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(309), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(323), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15358] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(761), 1,
      sym_keyword_sort,
    ACTIONS(763), 1,
      sym_keyword_window,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      aux_sym_group_repeat2,
    STATE(310), 1,
      sym_comment,
    STATE(323), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15389] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(761), 1,
      sym_keyword_sort,
    ACTIONS(763), 1,
      sym_keyword_window,
    STATE(308), 1,
      aux_sym_group_repeat2,
    STATE(311), 1,
      sym_comment,
    STATE(323), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15417] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(761), 1,
      sym_keyword_sort,
    ACTIONS(763), 1,
      sym_keyword_window,
    STATE(310), 1,
      aux_sym_group_repeat2,
    STATE(312), 1,
      sym_comment,
    STATE(323), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15445] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(761), 1,
      sym_keyword_sort,
    ACTIONS(763), 1,
      sym_keyword_window,
    STATE(307), 1,
      aux_sym_group_repeat2,
    STATE(313), 1,
      sym_comment,
    STATE(323), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15473] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(761), 1,
      sym_keyword_sort,
    ACTIONS(763), 1,
      sym_keyword_window,
    STATE(306), 1,
      aux_sym_group_repeat2,
    STATE(314), 1,
      sym_comment,
    STATE(323), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15501] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym_keyword_aggregate,
    ACTIONS(445), 1,
      sym_keyword_take,
    ACTIONS(761), 1,
      sym_keyword_sort,
    ACTIONS(763), 1,
      sym_keyword_window,
    STATE(305), 1,
      aux_sym_group_repeat2,
    STATE(315), 1,
      sym_comment,
    STATE(323), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15529] = 9,
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
    STATE(142), 1,
      sym_from,
    STATE(316), 1,
      sym_comment,
    STATE(317), 1,
      aux_sym_program_repeat2,
    STATE(337), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15559] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(789), 1,
      ts_builtin_sym_end,
    ACTIONS(791), 1,
      sym_keyword_from,
    ACTIONS(794), 1,
      sym_keyword_func,
    ACTIONS(797), 1,
      sym_keyword_let,
    STATE(142), 1,
      sym_from,
    STATE(317), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(337), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15587] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(9), 1,
      sym_keyword_func,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(800), 1,
      ts_builtin_sym_end,
    STATE(142), 1,
      sym_from,
    STATE(317), 1,
      aux_sym_program_repeat2,
    STATE(318), 1,
      sym_comment,
    STATE(337), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15617] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(804), 1,
      sym_keyword_prql,
    STATE(328), 1,
      sym_prql,
    STATE(319), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(802), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [15637] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    STATE(320), 1,
      sym_comment,
    STATE(321), 1,
      aux_sym_window_definitions_repeat1,
    STATE(336), 1,
      sym__window_definition,
    ACTIONS(807), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15658] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
    STATE(336), 1,
      sym__window_definition,
    STATE(321), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(811), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15677] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(320), 1,
      aux_sym_window_definitions_repeat1,
    STATE(322), 1,
      sym_comment,
    STATE(336), 1,
      sym__window_definition,
    STATE(404), 1,
      sym_window_definitions,
    ACTIONS(807), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15698] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(323), 1,
      sym_comment,
    ACTIONS(816), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [15712] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(324), 1,
      sym_comment,
    ACTIONS(818), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [15726] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(325), 1,
      sym_comment,
    ACTIONS(820), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
  [15740] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(326), 1,
      sym_comment,
    ACTIONS(822), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
  [15754] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(327), 1,
      sym_comment,
    ACTIONS(824), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
  [15768] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(328), 1,
      sym_comment,
    ACTIONS(826), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
  [15782] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(329), 1,
      sym_comment,
    ACTIONS(828), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      anon_sym_RPAREN,
  [15796] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(330), 1,
      sym_comment,
    ACTIONS(830), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [15809] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(832), 1,
      aux_sym__date_token1,
    ACTIONS(834), 1,
      aux_sym__time_token1,
    STATE(44), 1,
      sym__time,
    STATE(45), 1,
      sym__date,
    STATE(331), 1,
      sym_comment,
  [15828] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(836), 1,
      anon_sym_DASH_GT,
    ACTIONS(838), 1,
      sym_identifier,
    STATE(376), 1,
      sym_parameter,
    STATE(332), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [15845] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(333), 1,
      sym_comment,
    ACTIONS(841), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [15858] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(843), 1,
      anon_sym_DASH_GT,
    ACTIONS(845), 1,
      sym_identifier,
    STATE(332), 1,
      aux_sym_function_definition_repeat1,
    STATE(334), 1,
      sym_comment,
    STATE(376), 1,
      sym_parameter,
  [15877] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(832), 1,
      aux_sym__date_token1,
    ACTIONS(847), 1,
      aux_sym__time_token1,
    STATE(44), 1,
      sym__time,
    STATE(200), 1,
      sym__date,
    STATE(335), 1,
      sym_comment,
  [15896] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(336), 1,
      sym_comment,
    ACTIONS(849), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [15909] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(337), 1,
      sym_comment,
    ACTIONS(851), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [15922] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(338), 1,
      sym_comment,
    ACTIONS(853), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [15935] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      sym_comment,
    STATE(342), 1,
      aux_sym_sorts_repeat1,
  [15951] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(857), 1,
      anon_sym_COMMA,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    STATE(340), 1,
      sym_comment,
    STATE(351), 1,
      aux_sym_derives_repeat1,
  [15967] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
    STATE(341), 1,
      sym_comment,
    STATE(364), 1,
      aux_sym_aggregate_repeat1,
  [15983] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      anon_sym_RBRACK,
    STATE(342), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [15997] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
    STATE(343), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [16011] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      sym_comment,
    STATE(353), 1,
      aux_sym_conditions_repeat1,
  [16027] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      sym__natural_number,
    ACTIONS(873), 1,
      anon_sym_DASH,
    STATE(24), 1,
      sym__integer,
    STATE(345), 1,
      sym_comment,
  [16043] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(875), 1,
      anon_sym_COMMA,
    ACTIONS(878), 1,
      anon_sym_RBRACK,
    STATE(346), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [16057] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      sym_comment,
    STATE(360), 1,
      aux_sym_group_repeat1,
  [16073] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(884), 1,
      anon_sym_DASH,
    STATE(24), 1,
      sym__integer,
    STATE(348), 1,
      sym_comment,
  [16089] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_RBRACK,
    STATE(349), 1,
      sym_comment,
    STATE(366), 1,
      aux_sym_sorts_repeat1,
  [16105] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(350), 1,
      sym_comment,
    ACTIONS(127), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [16117] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    ACTIONS(890), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_derives_repeat1,
    STATE(351), 1,
      sym_comment,
  [16133] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(884), 1,
      anon_sym_DASH,
    STATE(21), 1,
      sym__integer,
    STATE(352), 1,
      sym_comment,
  [16149] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    STATE(353), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [16163] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      anon_sym_DOT,
    STATE(354), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16177] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(897), 1,
      anon_sym_COMMA,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
    STATE(355), 1,
      sym_comment,
    STATE(363), 1,
      aux_sym_group_repeat1,
  [16193] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(901), 1,
      sym_keyword_from,
    STATE(171), 1,
      sym_from,
    STATE(356), 1,
      sym_comment,
    STATE(467), 1,
      sym_pipeline,
  [16209] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(587), 1,
      anon_sym_RBRACK,
    ACTIONS(903), 1,
      anon_sym_COMMA,
    STATE(357), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [16223] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(845), 1,
      sym_identifier,
    STATE(334), 1,
      aux_sym_function_definition_repeat1,
    STATE(358), 1,
      sym_comment,
    STATE(376), 1,
      sym_parameter,
  [16239] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(908), 1,
      anon_sym_RBRACK,
    STATE(346), 1,
      aux_sym_derives_repeat1,
    STATE(359), 1,
      sym_comment,
  [16255] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    ACTIONS(910), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_group_repeat1,
    STATE(360), 1,
      sym_comment,
  [16271] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      sym__natural_number,
    ACTIONS(873), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym__integer,
    STATE(361), 1,
      sym_comment,
  [16287] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(884), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym__integer,
    STATE(362), 1,
      sym_comment,
  [16303] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    ACTIONS(912), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_group_repeat1,
    STATE(363), 1,
      sym_comment,
  [16319] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(914), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_aggregate_repeat1,
    STATE(364), 1,
      sym_comment,
  [16335] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      sym__natural_number,
    ACTIONS(873), 1,
      anon_sym_DASH,
    STATE(21), 1,
      sym__integer,
    STATE(365), 1,
      sym_comment,
  [16351] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    STATE(342), 1,
      aux_sym_sorts_repeat1,
    STATE(366), 1,
      sym_comment,
  [16367] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(367), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [16379] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(918), 1,
      anon_sym_COLON,
    STATE(368), 1,
      sym_comment,
    ACTIONS(920), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16393] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_sorts_repeat1,
    STATE(369), 1,
      sym_comment,
  [16409] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(922), 1,
      sym__natural_number,
    STATE(370), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16423] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(371), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16434] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(372), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16445] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(373), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16456] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(374), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16467] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(924), 1,
      sym__natural_number,
    ACTIONS(926), 1,
      anon_sym_DOT,
    STATE(375), 1,
      sym_comment,
  [16480] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(376), 1,
      sym_comment,
    ACTIONS(928), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16491] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(930), 1,
      sym__natural_number,
    ACTIONS(932), 1,
      anon_sym_DOT,
    STATE(377), 1,
      sym_comment,
  [16504] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(378), 1,
      sym_comment,
    ACTIONS(878), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16515] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(379), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16526] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(934), 1,
      sym_keyword_derive,
    STATE(380), 1,
      sym_comment,
    STATE(450), 1,
      sym_derives,
  [16539] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(381), 1,
      sym_comment,
    ACTIONS(936), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16550] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(382), 1,
      sym_comment,
    ACTIONS(869), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16561] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(938), 1,
      sym__natural_number,
    ACTIONS(940), 1,
      anon_sym_DOT,
    STATE(383), 1,
      sym_comment,
  [16574] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(384), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16585] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(325), 1,
      sym__double_quote_string,
    STATE(385), 1,
      sym_comment,
  [16598] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(942), 1,
      aux_sym__time_token1,
    STATE(7), 1,
      sym__time,
    STATE(386), 1,
      sym_comment,
  [16611] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(944), 1,
      sym__natural_number,
    ACTIONS(946), 1,
      anon_sym_DOT,
    STATE(387), 1,
      sym_comment,
  [16624] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(948), 1,
      sym__natural_number,
    ACTIONS(950), 1,
      anon_sym_DOT,
    STATE(388), 1,
      sym_comment,
  [16637] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(389), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16648] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(952), 1,
      aux_sym__time_token1,
    STATE(7), 1,
      sym__time,
    STATE(390), 1,
      sym_comment,
  [16661] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(954), 1,
      sym__natural_number,
    ACTIONS(956), 1,
      anon_sym_DOT,
    STATE(391), 1,
      sym_comment,
  [16674] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(926), 1,
      anon_sym_DOT,
    ACTIONS(958), 1,
      sym__natural_number,
    STATE(392), 1,
      sym_comment,
  [16687] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(393), 1,
      sym_comment,
    ACTIONS(960), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [16698] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(394), 1,
      sym_comment,
    ACTIONS(864), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16709] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(962), 1,
      sym_keyword_version,
    ACTIONS(964), 1,
      sym_keyword_target,
    STATE(395), 1,
      sym_comment,
  [16722] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(966), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(396), 1,
      sym_comment,
  [16732] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(968), 1,
      sym__natural_number,
    STATE(397), 1,
      sym_comment,
  [16742] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      sym__natural_number,
    STATE(398), 1,
      sym_comment,
  [16752] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
    STATE(399), 1,
      sym_comment,
  [16762] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      anon_sym_LPAREN,
    STATE(400), 1,
      sym_comment,
  [16772] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
    STATE(401), 1,
      sym_comment,
  [16782] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(972), 1,
      anon_sym_RBRACK,
    STATE(402), 1,
      sym_comment,
  [16792] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      anon_sym_RBRACK,
    STATE(403), 1,
      sym_comment,
  [16802] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(974), 1,
      anon_sym_LPAREN,
    STATE(404), 1,
      sym_comment,
  [16812] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(976), 1,
      anon_sym_COLON,
    STATE(405), 1,
      sym_comment,
  [16822] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(978), 1,
      anon_sym_LBRACK,
    STATE(406), 1,
      sym_comment,
  [16832] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(980), 1,
      anon_sym_LPAREN,
    STATE(407), 1,
      sym_comment,
  [16842] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(982), 1,
      anon_sym_COLON,
    STATE(408), 1,
      sym_comment,
  [16852] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(984), 1,
      anon_sym_COLON,
    STATE(409), 1,
      sym_comment,
  [16862] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(986), 1,
      anon_sym_EQ,
    STATE(410), 1,
      sym_comment,
  [16872] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(653), 1,
      aux_sym__date_token2,
    STATE(411), 1,
      sym_comment,
  [16882] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(988), 1,
      anon_sym_DQUOTE,
    STATE(412), 1,
      sym_comment,
  [16892] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
    STATE(413), 1,
      sym_comment,
  [16902] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(990), 1,
      anon_sym_DOT,
    STATE(414), 1,
      sym_comment,
  [16912] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(992), 1,
      aux_sym__date_token2,
    STATE(415), 1,
      sym_comment,
  [16922] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(994), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(416), 1,
      sym_comment,
  [16932] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(996), 1,
      aux_sym__date_token2,
    STATE(417), 1,
      sym_comment,
  [16942] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(998), 1,
      aux_sym__date_token2,
    STATE(418), 1,
      sym_comment,
  [16952] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    STATE(419), 1,
      sym_comment,
  [16962] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1002), 1,
      anon_sym_COLON,
    STATE(420), 1,
      sym_comment,
  [16972] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1004), 1,
      sym__natural_number,
    STATE(421), 1,
      sym_comment,
  [16982] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(591), 1,
      anon_sym_RBRACK,
    STATE(422), 1,
      sym_comment,
  [16992] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1006), 1,
      sym__natural_number,
    STATE(423), 1,
      sym_comment,
  [17002] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1008), 1,
      anon_sym_DQUOTE,
    STATE(424), 1,
      sym_comment,
  [17012] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1010), 1,
      anon_sym_SQUOTE,
    STATE(425), 1,
      sym_comment,
  [17022] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1012), 1,
      anon_sym_SQUOTE,
    STATE(426), 1,
      sym_comment,
  [17032] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1014), 1,
      anon_sym_DASH,
    STATE(427), 1,
      sym_comment,
  [17042] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1016), 1,
      aux_sym__date_token2,
    STATE(428), 1,
      sym_comment,
  [17052] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1018), 1,
      aux_sym__date_token2,
    STATE(429), 1,
      sym_comment,
  [17062] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1020), 1,
      sym_identifier,
    STATE(430), 1,
      sym_comment,
  [17072] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      anon_sym_RBRACK,
    STATE(431), 1,
      sym_comment,
  [17082] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1022), 1,
      sym__natural_number,
    STATE(432), 1,
      sym_comment,
  [17092] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(922), 1,
      sym__natural_number,
    STATE(433), 1,
      sym_comment,
  [17102] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1024), 1,
      anon_sym_DQUOTE,
    STATE(434), 1,
      sym_comment,
  [17112] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1026), 1,
      anon_sym_SQUOTE,
    STATE(435), 1,
      sym_comment,
  [17122] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1028), 1,
      anon_sym_LPAREN,
    STATE(436), 1,
      sym_comment,
  [17132] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    STATE(437), 1,
      sym_comment,
  [17142] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1034), 1,
      aux_sym_comment_token1,
    STATE(438), 1,
      sym_comment,
  [17152] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1036), 1,
      anon_sym_DQUOTE,
    STATE(439), 1,
      sym_comment,
  [17162] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1038), 1,
      sym__natural_number,
    STATE(440), 1,
      sym_comment,
  [17172] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1040), 1,
      anon_sym_DQUOTE,
    STATE(441), 1,
      sym_comment,
  [17182] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1042), 1,
      anon_sym_SQUOTE,
    STATE(442), 1,
      sym_comment,
  [17192] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1044), 1,
      sym__natural_number,
    STATE(443), 1,
      sym_comment,
  [17202] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(924), 1,
      sym__natural_number,
    STATE(444), 1,
      sym_comment,
  [17212] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1046), 1,
      anon_sym_LPAREN,
    STATE(445), 1,
      sym_comment,
  [17222] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1048), 1,
      sym__natural_number,
    STATE(446), 1,
      sym_comment,
  [17232] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1050), 1,
      sym__natural_number,
    STATE(447), 1,
      sym_comment,
  [17242] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1052), 1,
      anon_sym_DQUOTE,
    STATE(448), 1,
      sym_comment,
  [17252] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1054), 1,
      anon_sym_SQUOTE,
    STATE(449), 1,
      sym_comment,
  [17262] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    STATE(450), 1,
      sym_comment,
  [17272] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1058), 1,
      sym__natural_number,
    STATE(451), 1,
      sym_comment,
  [17282] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1060), 1,
      sym__natural_number,
    STATE(452), 1,
      sym_comment,
  [17292] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1062), 1,
      anon_sym_DQUOTE,
    STATE(453), 1,
      sym_comment,
  [17302] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1064), 1,
      anon_sym_SQUOTE,
    STATE(454), 1,
      sym_comment,
  [17312] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1066), 1,
      anon_sym_DASH,
    STATE(455), 1,
      sym_comment,
  [17322] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1068), 1,
      anon_sym_DQUOTE,
    STATE(456), 1,
      sym_comment,
  [17332] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1070), 1,
      aux_sym__double_quote_string_token1,
    STATE(457), 1,
      sym_comment,
  [17342] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1072), 1,
      aux_sym__literal_string_token1,
    STATE(458), 1,
      sym_comment,
  [17352] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1074), 1,
      aux_sym__literal_string_token1,
    STATE(459), 1,
      sym_comment,
  [17362] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1076), 1,
      aux_sym__double_quote_string_token1,
    STATE(460), 1,
      sym_comment,
  [17372] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1078), 1,
      aux_sym__double_quote_string_token1,
    STATE(461), 1,
      sym_comment,
  [17382] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1080), 1,
      aux_sym__double_quote_string_token1,
    STATE(462), 1,
      sym_comment,
  [17392] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1082), 1,
      aux_sym__double_quote_string_token1,
    STATE(463), 1,
      sym_comment,
  [17402] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1084), 1,
      aux_sym__double_quote_string_token1,
    STATE(464), 1,
      sym_comment,
  [17412] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1086), 1,
      aux_sym__date_token2,
    STATE(465), 1,
      sym_comment,
  [17422] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      sym_identifier,
    STATE(466), 1,
      sym_comment,
  [17432] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      sym_comment,
  [17442] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1092), 1,
      aux_sym__double_quote_string_token1,
    STATE(468), 1,
      sym_comment,
  [17452] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1094), 1,
      aux_sym__literal_string_token1,
    STATE(469), 1,
      sym_comment,
  [17462] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1096), 1,
      anon_sym_LPAREN,
    STATE(470), 1,
      sym_comment,
  [17472] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1098), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      sym_comment,
  [17482] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1100), 1,
      aux_sym__double_quote_string_token1,
    STATE(472), 1,
      sym_comment,
  [17492] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1102), 1,
      aux_sym__literal_string_token1,
    STATE(473), 1,
      sym_comment,
  [17502] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(958), 1,
      sym__natural_number,
    STATE(474), 1,
      sym_comment,
  [17512] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1104), 1,
      aux_sym__double_quote_string_token1,
    STATE(475), 1,
      sym_comment,
  [17522] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1106), 1,
      aux_sym__literal_string_token1,
    STATE(476), 1,
      sym_comment,
  [17532] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1108), 1,
      aux_sym__double_quote_string_token1,
    STATE(477), 1,
      sym_comment,
  [17542] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1110), 1,
      aux_sym__literal_string_token1,
    STATE(478), 1,
      sym_comment,
  [17552] = 3,
    ACTIONS(1032), 1,
      anon_sym_POUND,
    ACTIONS(1112), 1,
      aux_sym__double_quote_string_token1,
    STATE(479), 1,
      sym_comment,
  [17562] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1114), 1,
      ts_builtin_sym_end,
    STATE(480), 1,
      sym_comment,
  [17572] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1116), 1,
      aux_sym__date_token2,
    STATE(481), 1,
      sym_comment,
  [17582] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1118), 1,
      sym_identifier,
    STATE(482), 1,
      sym_comment,
  [17592] = 1,
    ACTIONS(1120), 1,
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
  [SMALL_STATE(9)] = 608,
  [SMALL_STATE(10)] = 662,
  [SMALL_STATE(11)] = 764,
  [SMALL_STATE(12)] = 840,
  [SMALL_STATE(13)] = 939,
  [SMALL_STATE(14)] = 1038,
  [SMALL_STATE(15)] = 1089,
  [SMALL_STATE(16)] = 1138,
  [SMALL_STATE(17)] = 1187,
  [SMALL_STATE(18)] = 1286,
  [SMALL_STATE(19)] = 1385,
  [SMALL_STATE(20)] = 1484,
  [SMALL_STATE(21)] = 1535,
  [SMALL_STATE(22)] = 1584,
  [SMALL_STATE(23)] = 1683,
  [SMALL_STATE(24)] = 1732,
  [SMALL_STATE(25)] = 1781,
  [SMALL_STATE(26)] = 1830,
  [SMALL_STATE(27)] = 1879,
  [SMALL_STATE(28)] = 1927,
  [SMALL_STATE(29)] = 1975,
  [SMALL_STATE(30)] = 2025,
  [SMALL_STATE(31)] = 2123,
  [SMALL_STATE(32)] = 2171,
  [SMALL_STATE(33)] = 2219,
  [SMALL_STATE(34)] = 2267,
  [SMALL_STATE(35)] = 2315,
  [SMALL_STATE(36)] = 2363,
  [SMALL_STATE(37)] = 2411,
  [SMALL_STATE(38)] = 2461,
  [SMALL_STATE(39)] = 2509,
  [SMALL_STATE(40)] = 2557,
  [SMALL_STATE(41)] = 2605,
  [SMALL_STATE(42)] = 2701,
  [SMALL_STATE(43)] = 2749,
  [SMALL_STATE(44)] = 2797,
  [SMALL_STATE(45)] = 2845,
  [SMALL_STATE(46)] = 2895,
  [SMALL_STATE(47)] = 2991,
  [SMALL_STATE(48)] = 3039,
  [SMALL_STATE(49)] = 3137,
  [SMALL_STATE(50)] = 3185,
  [SMALL_STATE(51)] = 3281,
  [SMALL_STATE(52)] = 3379,
  [SMALL_STATE(53)] = 3475,
  [SMALL_STATE(54)] = 3523,
  [SMALL_STATE(55)] = 3571,
  [SMALL_STATE(56)] = 3667,
  [SMALL_STATE(57)] = 3717,
  [SMALL_STATE(58)] = 3768,
  [SMALL_STATE(59)] = 3859,
  [SMALL_STATE(60)] = 3954,
  [SMALL_STATE(61)] = 4047,
  [SMALL_STATE(62)] = 4136,
  [SMALL_STATE(63)] = 4225,
  [SMALL_STATE(64)] = 4314,
  [SMALL_STATE(65)] = 4407,
  [SMALL_STATE(66)] = 4500,
  [SMALL_STATE(67)] = 4593,
  [SMALL_STATE(68)] = 4688,
  [SMALL_STATE(69)] = 4747,
  [SMALL_STATE(70)] = 4840,
  [SMALL_STATE(71)] = 4933,
  [SMALL_STATE(72)] = 5028,
  [SMALL_STATE(73)] = 5089,
  [SMALL_STATE(74)] = 5184,
  [SMALL_STATE(75)] = 5273,
  [SMALL_STATE(76)] = 5330,
  [SMALL_STATE(77)] = 5425,
  [SMALL_STATE(78)] = 5474,
  [SMALL_STATE(79)] = 5527,
  [SMALL_STATE(80)] = 5622,
  [SMALL_STATE(81)] = 5712,
  [SMALL_STATE(82)] = 5802,
  [SMALL_STATE(83)] = 5892,
  [SMALL_STATE(84)] = 5982,
  [SMALL_STATE(85)] = 6072,
  [SMALL_STATE(86)] = 6162,
  [SMALL_STATE(87)] = 6252,
  [SMALL_STATE(88)] = 6342,
  [SMALL_STATE(89)] = 6434,
  [SMALL_STATE(90)] = 6524,
  [SMALL_STATE(91)] = 6614,
  [SMALL_STATE(92)] = 6704,
  [SMALL_STATE(93)] = 6790,
  [SMALL_STATE(94)] = 6875,
  [SMALL_STATE(95)] = 6924,
  [SMALL_STATE(96)] = 7011,
  [SMALL_STATE(97)] = 7096,
  [SMALL_STATE(98)] = 7183,
  [SMALL_STATE(99)] = 7254,
  [SMALL_STATE(100)] = 7339,
  [SMALL_STATE(101)] = 7423,
  [SMALL_STATE(102)] = 7507,
  [SMALL_STATE(103)] = 7589,
  [SMALL_STATE(104)] = 7635,
  [SMALL_STATE(105)] = 7719,
  [SMALL_STATE(106)] = 7801,
  [SMALL_STATE(107)] = 7883,
  [SMALL_STATE(108)] = 7965,
  [SMALL_STATE(109)] = 8047,
  [SMALL_STATE(110)] = 8131,
  [SMALL_STATE(111)] = 8213,
  [SMALL_STATE(112)] = 8295,
  [SMALL_STATE(113)] = 8377,
  [SMALL_STATE(114)] = 8459,
  [SMALL_STATE(115)] = 8541,
  [SMALL_STATE(116)] = 8623,
  [SMALL_STATE(117)] = 8705,
  [SMALL_STATE(118)] = 8787,
  [SMALL_STATE(119)] = 8869,
  [SMALL_STATE(120)] = 8951,
  [SMALL_STATE(121)] = 9033,
  [SMALL_STATE(122)] = 9115,
  [SMALL_STATE(123)] = 9197,
  [SMALL_STATE(124)] = 9281,
  [SMALL_STATE(125)] = 9365,
  [SMALL_STATE(126)] = 9447,
  [SMALL_STATE(127)] = 9529,
  [SMALL_STATE(128)] = 9599,
  [SMALL_STATE(129)] = 9656,
  [SMALL_STATE(130)] = 9713,
  [SMALL_STATE(131)] = 9770,
  [SMALL_STATE(132)] = 9813,
  [SMALL_STATE(133)] = 9877,
  [SMALL_STATE(134)] = 9943,
  [SMALL_STATE(135)] = 9982,
  [SMALL_STATE(136)] = 10037,
  [SMALL_STATE(137)] = 10076,
  [SMALL_STATE(138)] = 10128,
  [SMALL_STATE(139)] = 10189,
  [SMALL_STATE(140)] = 10252,
  [SMALL_STATE(141)] = 10304,
  [SMALL_STATE(142)] = 10340,
  [SMALL_STATE(143)] = 10393,
  [SMALL_STATE(144)] = 10426,
  [SMALL_STATE(145)] = 10459,
  [SMALL_STATE(146)] = 10492,
  [SMALL_STATE(147)] = 10525,
  [SMALL_STATE(148)] = 10558,
  [SMALL_STATE(149)] = 10591,
  [SMALL_STATE(150)] = 10624,
  [SMALL_STATE(151)] = 10657,
  [SMALL_STATE(152)] = 10690,
  [SMALL_STATE(153)] = 10723,
  [SMALL_STATE(154)] = 10756,
  [SMALL_STATE(155)] = 10789,
  [SMALL_STATE(156)] = 10837,
  [SMALL_STATE(157)] = 10869,
  [SMALL_STATE(158)] = 10927,
  [SMALL_STATE(159)] = 10977,
  [SMALL_STATE(160)] = 11033,
  [SMALL_STATE(161)] = 11065,
  [SMALL_STATE(162)] = 11098,
  [SMALL_STATE(163)] = 11133,
  [SMALL_STATE(164)] = 11188,
  [SMALL_STATE(165)] = 11241,
  [SMALL_STATE(166)] = 11288,
  [SMALL_STATE(167)] = 11318,
  [SMALL_STATE(168)] = 11348,
  [SMALL_STATE(169)] = 11378,
  [SMALL_STATE(170)] = 11408,
  [SMALL_STATE(171)] = 11438,
  [SMALL_STATE(172)] = 11488,
  [SMALL_STATE(173)] = 11518,
  [SMALL_STATE(174)] = 11548,
  [SMALL_STATE(175)] = 11578,
  [SMALL_STATE(176)] = 11608,
  [SMALL_STATE(177)] = 11654,
  [SMALL_STATE(178)] = 11684,
  [SMALL_STATE(179)] = 11714,
  [SMALL_STATE(180)] = 11744,
  [SMALL_STATE(181)] = 11775,
  [SMALL_STATE(182)] = 11806,
  [SMALL_STATE(183)] = 11833,
  [SMALL_STATE(184)] = 11868,
  [SMALL_STATE(185)] = 11913,
  [SMALL_STATE(186)] = 11940,
  [SMALL_STATE(187)] = 11987,
  [SMALL_STATE(188)] = 12014,
  [SMALL_STATE(189)] = 12041,
  [SMALL_STATE(190)] = 12068,
  [SMALL_STATE(191)] = 12101,
  [SMALL_STATE(192)] = 12132,
  [SMALL_STATE(193)] = 12165,
  [SMALL_STATE(194)] = 12195,
  [SMALL_STATE(195)] = 12223,
  [SMALL_STATE(196)] = 12253,
  [SMALL_STATE(197)] = 12281,
  [SMALL_STATE(198)] = 12315,
  [SMALL_STATE(199)] = 12346,
  [SMALL_STATE(200)] = 12373,
  [SMALL_STATE(201)] = 12402,
  [SMALL_STATE(202)] = 12433,
  [SMALL_STATE(203)] = 12474,
  [SMALL_STATE(204)] = 12503,
  [SMALL_STATE(205)] = 12532,
  [SMALL_STATE(206)] = 12573,
  [SMALL_STATE(207)] = 12602,
  [SMALL_STATE(208)] = 12631,
  [SMALL_STATE(209)] = 12663,
  [SMALL_STATE(210)] = 12701,
  [SMALL_STATE(211)] = 12741,
  [SMALL_STATE(212)] = 12769,
  [SMALL_STATE(213)] = 12799,
  [SMALL_STATE(214)] = 12835,
  [SMALL_STATE(215)] = 12871,
  [SMALL_STATE(216)] = 12899,
  [SMALL_STATE(217)] = 12933,
  [SMALL_STATE(218)] = 12973,
  [SMALL_STATE(219)] = 13001,
  [SMALL_STATE(220)] = 13027,
  [SMALL_STATE(221)] = 13055,
  [SMALL_STATE(222)] = 13081,
  [SMALL_STATE(223)] = 13109,
  [SMALL_STATE(224)] = 13149,
  [SMALL_STATE(225)] = 13189,
  [SMALL_STATE(226)] = 13229,
  [SMALL_STATE(227)] = 13255,
  [SMALL_STATE(228)] = 13281,
  [SMALL_STATE(229)] = 13319,
  [SMALL_STATE(230)] = 13344,
  [SMALL_STATE(231)] = 13367,
  [SMALL_STATE(232)] = 13390,
  [SMALL_STATE(233)] = 13415,
  [SMALL_STATE(234)] = 13440,
  [SMALL_STATE(235)] = 13465,
  [SMALL_STATE(236)] = 13490,
  [SMALL_STATE(237)] = 13513,
  [SMALL_STATE(238)] = 13538,
  [SMALL_STATE(239)] = 13565,
  [SMALL_STATE(240)] = 13590,
  [SMALL_STATE(241)] = 13613,
  [SMALL_STATE(242)] = 13636,
  [SMALL_STATE(243)] = 13659,
  [SMALL_STATE(244)] = 13696,
  [SMALL_STATE(245)] = 13719,
  [SMALL_STATE(246)] = 13742,
  [SMALL_STATE(247)] = 13767,
  [SMALL_STATE(248)] = 13792,
  [SMALL_STATE(249)] = 13829,
  [SMALL_STATE(250)] = 13854,
  [SMALL_STATE(251)] = 13877,
  [SMALL_STATE(252)] = 13902,
  [SMALL_STATE(253)] = 13927,
  [SMALL_STATE(254)] = 13950,
  [SMALL_STATE(255)] = 13973,
  [SMALL_STATE(256)] = 13995,
  [SMALL_STATE(257)] = 14019,
  [SMALL_STATE(258)] = 14059,
  [SMALL_STATE(259)] = 14081,
  [SMALL_STATE(260)] = 14105,
  [SMALL_STATE(261)] = 14129,
  [SMALL_STATE(262)] = 14153,
  [SMALL_STATE(263)] = 14175,
  [SMALL_STATE(264)] = 14197,
  [SMALL_STATE(265)] = 14219,
  [SMALL_STATE(266)] = 14241,
  [SMALL_STATE(267)] = 14281,
  [SMALL_STATE(268)] = 14303,
  [SMALL_STATE(269)] = 14325,
  [SMALL_STATE(270)] = 14347,
  [SMALL_STATE(271)] = 14369,
  [SMALL_STATE(272)] = 14391,
  [SMALL_STATE(273)] = 14415,
  [SMALL_STATE(274)] = 14439,
  [SMALL_STATE(275)] = 14461,
  [SMALL_STATE(276)] = 14485,
  [SMALL_STATE(277)] = 14507,
  [SMALL_STATE(278)] = 14531,
  [SMALL_STATE(279)] = 14553,
  [SMALL_STATE(280)] = 14577,
  [SMALL_STATE(281)] = 14601,
  [SMALL_STATE(282)] = 14623,
  [SMALL_STATE(283)] = 14645,
  [SMALL_STATE(284)] = 14669,
  [SMALL_STATE(285)] = 14691,
  [SMALL_STATE(286)] = 14713,
  [SMALL_STATE(287)] = 14735,
  [SMALL_STATE(288)] = 14757,
  [SMALL_STATE(289)] = 14779,
  [SMALL_STATE(290)] = 14819,
  [SMALL_STATE(291)] = 14841,
  [SMALL_STATE(292)] = 14865,
  [SMALL_STATE(293)] = 14887,
  [SMALL_STATE(294)] = 14927,
  [SMALL_STATE(295)] = 14949,
  [SMALL_STATE(296)] = 14971,
  [SMALL_STATE(297)] = 14993,
  [SMALL_STATE(298)] = 15015,
  [SMALL_STATE(299)] = 15037,
  [SMALL_STATE(300)] = 15059,
  [SMALL_STATE(301)] = 15081,
  [SMALL_STATE(302)] = 15103,
  [SMALL_STATE(303)] = 15143,
  [SMALL_STATE(304)] = 15166,
  [SMALL_STATE(305)] = 15205,
  [SMALL_STATE(306)] = 15236,
  [SMALL_STATE(307)] = 15267,
  [SMALL_STATE(308)] = 15298,
  [SMALL_STATE(309)] = 15329,
  [SMALL_STATE(310)] = 15358,
  [SMALL_STATE(311)] = 15389,
  [SMALL_STATE(312)] = 15417,
  [SMALL_STATE(313)] = 15445,
  [SMALL_STATE(314)] = 15473,
  [SMALL_STATE(315)] = 15501,
  [SMALL_STATE(316)] = 15529,
  [SMALL_STATE(317)] = 15559,
  [SMALL_STATE(318)] = 15587,
  [SMALL_STATE(319)] = 15617,
  [SMALL_STATE(320)] = 15637,
  [SMALL_STATE(321)] = 15658,
  [SMALL_STATE(322)] = 15677,
  [SMALL_STATE(323)] = 15698,
  [SMALL_STATE(324)] = 15712,
  [SMALL_STATE(325)] = 15726,
  [SMALL_STATE(326)] = 15740,
  [SMALL_STATE(327)] = 15754,
  [SMALL_STATE(328)] = 15768,
  [SMALL_STATE(329)] = 15782,
  [SMALL_STATE(330)] = 15796,
  [SMALL_STATE(331)] = 15809,
  [SMALL_STATE(332)] = 15828,
  [SMALL_STATE(333)] = 15845,
  [SMALL_STATE(334)] = 15858,
  [SMALL_STATE(335)] = 15877,
  [SMALL_STATE(336)] = 15896,
  [SMALL_STATE(337)] = 15909,
  [SMALL_STATE(338)] = 15922,
  [SMALL_STATE(339)] = 15935,
  [SMALL_STATE(340)] = 15951,
  [SMALL_STATE(341)] = 15967,
  [SMALL_STATE(342)] = 15983,
  [SMALL_STATE(343)] = 15997,
  [SMALL_STATE(344)] = 16011,
  [SMALL_STATE(345)] = 16027,
  [SMALL_STATE(346)] = 16043,
  [SMALL_STATE(347)] = 16057,
  [SMALL_STATE(348)] = 16073,
  [SMALL_STATE(349)] = 16089,
  [SMALL_STATE(350)] = 16105,
  [SMALL_STATE(351)] = 16117,
  [SMALL_STATE(352)] = 16133,
  [SMALL_STATE(353)] = 16149,
  [SMALL_STATE(354)] = 16163,
  [SMALL_STATE(355)] = 16177,
  [SMALL_STATE(356)] = 16193,
  [SMALL_STATE(357)] = 16209,
  [SMALL_STATE(358)] = 16223,
  [SMALL_STATE(359)] = 16239,
  [SMALL_STATE(360)] = 16255,
  [SMALL_STATE(361)] = 16271,
  [SMALL_STATE(362)] = 16287,
  [SMALL_STATE(363)] = 16303,
  [SMALL_STATE(364)] = 16319,
  [SMALL_STATE(365)] = 16335,
  [SMALL_STATE(366)] = 16351,
  [SMALL_STATE(367)] = 16367,
  [SMALL_STATE(368)] = 16379,
  [SMALL_STATE(369)] = 16393,
  [SMALL_STATE(370)] = 16409,
  [SMALL_STATE(371)] = 16423,
  [SMALL_STATE(372)] = 16434,
  [SMALL_STATE(373)] = 16445,
  [SMALL_STATE(374)] = 16456,
  [SMALL_STATE(375)] = 16467,
  [SMALL_STATE(376)] = 16480,
  [SMALL_STATE(377)] = 16491,
  [SMALL_STATE(378)] = 16504,
  [SMALL_STATE(379)] = 16515,
  [SMALL_STATE(380)] = 16526,
  [SMALL_STATE(381)] = 16539,
  [SMALL_STATE(382)] = 16550,
  [SMALL_STATE(383)] = 16561,
  [SMALL_STATE(384)] = 16574,
  [SMALL_STATE(385)] = 16585,
  [SMALL_STATE(386)] = 16598,
  [SMALL_STATE(387)] = 16611,
  [SMALL_STATE(388)] = 16624,
  [SMALL_STATE(389)] = 16637,
  [SMALL_STATE(390)] = 16648,
  [SMALL_STATE(391)] = 16661,
  [SMALL_STATE(392)] = 16674,
  [SMALL_STATE(393)] = 16687,
  [SMALL_STATE(394)] = 16698,
  [SMALL_STATE(395)] = 16709,
  [SMALL_STATE(396)] = 16722,
  [SMALL_STATE(397)] = 16732,
  [SMALL_STATE(398)] = 16742,
  [SMALL_STATE(399)] = 16752,
  [SMALL_STATE(400)] = 16762,
  [SMALL_STATE(401)] = 16772,
  [SMALL_STATE(402)] = 16782,
  [SMALL_STATE(403)] = 16792,
  [SMALL_STATE(404)] = 16802,
  [SMALL_STATE(405)] = 16812,
  [SMALL_STATE(406)] = 16822,
  [SMALL_STATE(407)] = 16832,
  [SMALL_STATE(408)] = 16842,
  [SMALL_STATE(409)] = 16852,
  [SMALL_STATE(410)] = 16862,
  [SMALL_STATE(411)] = 16872,
  [SMALL_STATE(412)] = 16882,
  [SMALL_STATE(413)] = 16892,
  [SMALL_STATE(414)] = 16902,
  [SMALL_STATE(415)] = 16912,
  [SMALL_STATE(416)] = 16922,
  [SMALL_STATE(417)] = 16932,
  [SMALL_STATE(418)] = 16942,
  [SMALL_STATE(419)] = 16952,
  [SMALL_STATE(420)] = 16962,
  [SMALL_STATE(421)] = 16972,
  [SMALL_STATE(422)] = 16982,
  [SMALL_STATE(423)] = 16992,
  [SMALL_STATE(424)] = 17002,
  [SMALL_STATE(425)] = 17012,
  [SMALL_STATE(426)] = 17022,
  [SMALL_STATE(427)] = 17032,
  [SMALL_STATE(428)] = 17042,
  [SMALL_STATE(429)] = 17052,
  [SMALL_STATE(430)] = 17062,
  [SMALL_STATE(431)] = 17072,
  [SMALL_STATE(432)] = 17082,
  [SMALL_STATE(433)] = 17092,
  [SMALL_STATE(434)] = 17102,
  [SMALL_STATE(435)] = 17112,
  [SMALL_STATE(436)] = 17122,
  [SMALL_STATE(437)] = 17132,
  [SMALL_STATE(438)] = 17142,
  [SMALL_STATE(439)] = 17152,
  [SMALL_STATE(440)] = 17162,
  [SMALL_STATE(441)] = 17172,
  [SMALL_STATE(442)] = 17182,
  [SMALL_STATE(443)] = 17192,
  [SMALL_STATE(444)] = 17202,
  [SMALL_STATE(445)] = 17212,
  [SMALL_STATE(446)] = 17222,
  [SMALL_STATE(447)] = 17232,
  [SMALL_STATE(448)] = 17242,
  [SMALL_STATE(449)] = 17252,
  [SMALL_STATE(450)] = 17262,
  [SMALL_STATE(451)] = 17272,
  [SMALL_STATE(452)] = 17282,
  [SMALL_STATE(453)] = 17292,
  [SMALL_STATE(454)] = 17302,
  [SMALL_STATE(455)] = 17312,
  [SMALL_STATE(456)] = 17322,
  [SMALL_STATE(457)] = 17332,
  [SMALL_STATE(458)] = 17342,
  [SMALL_STATE(459)] = 17352,
  [SMALL_STATE(460)] = 17362,
  [SMALL_STATE(461)] = 17372,
  [SMALL_STATE(462)] = 17382,
  [SMALL_STATE(463)] = 17392,
  [SMALL_STATE(464)] = 17402,
  [SMALL_STATE(465)] = 17412,
  [SMALL_STATE(466)] = 17422,
  [SMALL_STATE(467)] = 17432,
  [SMALL_STATE(468)] = 17442,
  [SMALL_STATE(469)] = 17452,
  [SMALL_STATE(470)] = 17462,
  [SMALL_STATE(471)] = 17472,
  [SMALL_STATE(472)] = 17482,
  [SMALL_STATE(473)] = 17492,
  [SMALL_STATE(474)] = 17502,
  [SMALL_STATE(475)] = 17512,
  [SMALL_STATE(476)] = 17522,
  [SMALL_STATE(477)] = 17532,
  [SMALL_STATE(478)] = 17542,
  [SMALL_STATE(479)] = 17552,
  [SMALL_STATE(480)] = 17562,
  [SMALL_STATE(481)] = 17572,
  [SMALL_STATE(482)] = 17582,
  [SMALL_STATE(483)] = 17592,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 10),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 10),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 13),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 18),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(151),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(377),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(468),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(458),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(152),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(421),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(141),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(167),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(388),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(477),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(476),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(174),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(446),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(161),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 24),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 24),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 14),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 14),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(96),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(71),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(70),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(406),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(19),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(93),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(50),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(51),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(246),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(391),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(479),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(478),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(234),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(451),
  [509] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(222),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 25),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(279),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(387),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(475),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(473),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(261),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(397),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(238),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 23),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(73),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(13),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(41),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(48),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 20),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 21),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_definition, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(406),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(22),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(93),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(322),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(82),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(466),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(482),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(395),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(405),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 11),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(368),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 22),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(46),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(87),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(88),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(124),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [903] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(5),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
