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
#define STATE_COUNT 523
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 28

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
  sym_switch = 106,
  sym_switch_condition = 107,
  sym_aggregate = 108,
  sym_aggregate_operation = 109,
  sym__aggregate_count = 110,
  sym_sorts = 111,
  sym_direction = 112,
  sym_takes = 113,
  sym_window = 114,
  sym_window_definitions = 115,
  sym__window_definition = 116,
  sym_group = 117,
  sym_joins = 118,
  sym__join_definition = 119,
  sym_conditions = 120,
  sym__self_join = 121,
  sym_select = 122,
  sym_table_reference = 123,
  sym_term = 124,
  sym__expression = 125,
  sym_literal = 126,
  sym_f_string = 127,
  sym_s_string = 128,
  sym__double_quote_string = 129,
  sym__double_f_string = 130,
  sym__triple_f_string = 131,
  sym__double_s_string = 132,
  sym__triple_s_string = 133,
  sym__literal_string = 134,
  sym__integer = 135,
  sym__decimal_number = 136,
  sym_field = 137,
  sym__alias_identifier = 138,
  sym_range = 139,
  sym_assignment = 140,
  sym_binary_expression = 141,
  sym__date = 142,
  sym_date = 143,
  sym__time = 144,
  sym_time = 145,
  sym_timestamp = 146,
  sym_timezone = 147,
  sym_comment = 148,
  aux_sym_program_repeat1 = 149,
  aux_sym_program_repeat2 = 150,
  aux_sym_function_definition_repeat1 = 151,
  aux_sym_function_call_repeat1 = 152,
  aux_sym_transforms_repeat1 = 153,
  aux_sym_derives_repeat1 = 154,
  aux_sym_switch_repeat1 = 155,
  aux_sym_switch_repeat2 = 156,
  aux_sym_aggregate_repeat1 = 157,
  aux_sym_sorts_repeat1 = 158,
  aux_sym_window_definitions_repeat1 = 159,
  aux_sym_group_repeat1 = 160,
  aux_sym_group_repeat2 = 161,
  aux_sym_conditions_repeat1 = 162,
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
  [sym_switch] = "switch",
  [sym_switch_condition] = "switch_condition",
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
  [aux_sym_switch_repeat1] = "switch_repeat1",
  [aux_sym_switch_repeat2] = "switch_repeat2",
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
  [sym_switch] = sym_switch,
  [sym_switch_condition] = sym_switch_condition,
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
  [aux_sym_switch_repeat1] = aux_sym_switch_repeat1,
  [aux_sym_switch_repeat2] = aux_sym_switch_repeat2,
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
  [sym_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_condition] = {
    .visible = true,
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
  [aux_sym_switch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_repeat2] = {
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
  field_result = 10,
  field_right = 11,
  field_table = 12,
  field_target = 13,
  field_till = 14,
  field_value = 15,
  field_version = 16,
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
  [field_result] = "result",
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
  [26] = {.index = 44, .length = 2},
  [27] = {.index = 46, .length = 1},
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
  [44] =
    {field_default, 0},
    {field_result, 2},
  [46] =
    {field_result, 2},
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
      if (eof) ADVANCE(377);
      if (lookahead == '!') ADVANCE(712);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '.') ADVANCE(484);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(458);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == '@') ADVANCE(701);
      if (lookahead == 'A') ADVANCE(66);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'G') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'J') ADVANCE(120);
      if (lookahead == 'L') ADVANCE(44);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'N') ADVANCE(151);
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == 'P') ADVANCE(125);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(703);
      if (lookahead == 'V') ADVANCE(58);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == 'Z') ADVANCE(705);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'j') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'p') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == 'v') ADVANCE(201);
      if (lookahead == 'w') ADVANCE(231);
      if (lookahead == '|') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(372)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(550);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'O') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == '|') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(358)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(524);
      if (lookahead == 'D') ADVANCE(520);
      if (lookahead == 'F') ADVANCE(492);
      if (lookahead == 'G') ADVANCE(566);
      if (lookahead == 'J') ADVANCE(557);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'O') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(521);
      if (lookahead == 'T') ADVANCE(496);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(620);
      if (lookahead == 'f') ADVANCE(592);
      if (lookahead == 'g') ADVANCE(665);
      if (lookahead == 'j') ADVANCE(656);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == '|') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(353)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(524);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'O') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(556);
      if (lookahead == 'T') ADVANCE(496);
      if (lookahead == 'W') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead == 's') ADVANCE(655);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead == '|') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(357)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(361)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '@') ADVANCE(701);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(354)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '@') ADVANCE(701);
      if (lookahead == 'A') ADVANCE(585);
      if (lookahead == 'C') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'M') ADVANCE(494);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(569);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'm') ADVANCE(594);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(487);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(352)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '@') ADVANCE(701);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(579);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(355)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '@') ADVANCE(701);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(580);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(365)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '@') ADVANCE(701);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(536);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(356)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == 'A') ADVANCE(525);
      if (lookahead == 'D') ADVANCE(520);
      if (lookahead == 'F') ADVANCE(492);
      if (lookahead == 'G') ADVANCE(566);
      if (lookahead == 'J') ADVANCE(557);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(521);
      if (lookahead == 'T') ADVANCE(496);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'd') ADVANCE(620);
      if (lookahead == 'f') ADVANCE(592);
      if (lookahead == 'g') ADVANCE(665);
      if (lookahead == 'j') ADVANCE(656);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(359)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == 'A') ADVANCE(525);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(556);
      if (lookahead == 'T') ADVANCE(496);
      if (lookahead == 'W') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(655);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(360)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(473);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(476);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == 'q') ADVANCE(251);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(265);
      if (lookahead == 'w') ADVANCE(232);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(474);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(477);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(475);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(362)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(363)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(364)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(163);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(692);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(468);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(461);
      END_STATE();
    case 25:
      if (lookahead == '?') ADVANCE(697);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(95);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(102);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(153);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(158);
      if (lookahead == 'I') ADVANCE(103);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(147);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(108);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(439);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(74);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(143);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(145);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(428);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(115);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(85);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(422);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(390);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(398);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(400);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(382);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(404);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(386);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == 'U') ADVANCE(99);
      if (lookahead == 'W') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(131);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == 'G') ADVANCE(416);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(144);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(127);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 64:
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead == 'T') ADVANCE(441);
      END_STATE();
    case 65:
      if (lookahead == 'G') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 66:
      if (lookahead == 'G') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == 'V') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 'G') ADVANCE(75);
      END_STATE();
    case 68:
      if (lookahead == 'G') ADVANCE(434);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(436);
      END_STATE();
    case 70:
      if (lookahead == 'G') ADVANCE(30);
      END_STATE();
    case 71:
      if (lookahead == 'G') ADVANCE(132);
      END_STATE();
    case 72:
      if (lookahead == 'G') ADVANCE(60);
      END_STATE();
    case 73:
      if (lookahead == 'G') ADVANCE(50);
      END_STATE();
    case 74:
      if (lookahead == 'H') ADVANCE(402);
      END_STATE();
    case 75:
      if (lookahead == 'H') ADVANCE(142);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(155);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(95);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(137);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 87:
      if (lookahead == 'K') ADVANCE(46);
      END_STATE();
    case 88:
      if (lookahead == 'K') ADVANCE(46);
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(136);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(148);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(427);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(437);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(443);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(91);
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(92);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(98);
      if (lookahead == 'W') ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(84);
      END_STATE();
    case 99:
      if (lookahead == 'M') ADVANCE(418);
      END_STATE();
    case 100:
      if (lookahead == 'M') ADVANCE(378);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(432);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(406);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(394);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(444);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(141);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(69);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(113);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(156);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(152);
      END_STATE();
    case 117:
      if (lookahead == 'O') ADVANCE(100);
      END_STATE();
    case 118:
      if (lookahead == 'O') ADVANCE(150);
      END_STATE();
    case 119:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 120:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 121:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 122:
      if (lookahead == 'P') ADVANCE(384);
      END_STATE();
    case 123:
      if (lookahead == 'Q') ADVANCE(93);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(430);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(123);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(424);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(380);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(135);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(140);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(118);
      END_STATE();
    case 134:
      if (lookahead == 'S') ADVANCE(435);
      END_STATE();
    case 135:
      if (lookahead == 'S') ADVANCE(82);
      END_STATE();
    case 136:
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 137:
      if (lookahead == 'S') ADVANCE(149);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(441);
      END_STATE();
    case 139:
      if (lookahead == 'T') ADVANCE(425);
      END_STATE();
    case 140:
      if (lookahead == 'T') ADVANCE(388);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(412);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(426);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(396);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(445);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(420);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(86);
      END_STATE();
    case 150:
      if (lookahead == 'U') ADVANCE(122);
      END_STATE();
    case 151:
      if (lookahead == 'U') ADVANCE(96);
      END_STATE();
    case 152:
      if (lookahead == 'U') ADVANCE(109);
      END_STATE();
    case 153:
      if (lookahead == 'U') ADVANCE(47);
      END_STATE();
    case 154:
      if (lookahead == 'V') ADVANCE(414);
      END_STATE();
    case 155:
      if (lookahead == 'V') ADVANCE(49);
      END_STATE();
    case 156:
      if (lookahead == 'W') ADVANCE(392);
      END_STATE();
    case 157:
      if (lookahead == 'X') ADVANCE(121);
      END_STATE();
    case 158:
      if (lookahead == 'X') ADVANCE(408);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(279);
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(259);
      if (lookahead == 'd') ADVANCE(340);
      if (lookahead == 'g') ADVANCE(204);
      if (lookahead == 'h') ADVANCE(241);
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(289);
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 168:
      if (lookahead == 'b') ADVANCE(457);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(439);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(450);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(329);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(428);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 187:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'g') ADVANCE(416);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 211:
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 212:
      if (lookahead == 'f') ADVANCE(258);
      END_STATE();
    case 213:
      if (lookahead == 'g') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 214:
      if (lookahead == 'g') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'v') ADVANCE(203);
      END_STATE();
    case 215:
      if (lookahead == 'g') ADVANCE(225);
      END_STATE();
    case 216:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 217:
      if (lookahead == 'g') ADVANCE(436);
      END_STATE();
    case 218:
      if (lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 219:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 220:
      if (lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 221:
      if (lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 222:
      if (lookahead == 'g') ADVANCE(310);
      END_STATE();
    case 223:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 224:
      if (lookahead == 'h') ADVANCE(402);
      END_STATE();
    case 225:
      if (lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 226:
      if (lookahead == 'h') ADVANCE(290);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(333);
      END_STATE();
    case 244:
      if (lookahead == 'k') ADVANCE(226);
      END_STATE();
    case 245:
      if (lookahead == 'k') ADVANCE(186);
      END_STATE();
    case 246:
      if (lookahead == 'k') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 247:
      if (lookahead == 'k') ADVANCE(177);
      END_STATE();
    case 248:
      if (lookahead == 'k') ADVANCE(194);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 257:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 259:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 'w') ADVANCE(312);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 265:
      if (lookahead == 'm') ADVANCE(418);
      END_STATE();
    case 266:
      if (lookahead == 'm') ADVANCE(378);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 271:
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 272:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 273:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 274:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 275:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(287);
      if (lookahead == 'q') ADVANCE(263);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 278:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 280:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(318);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 293:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 294:
      if (lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 295:
      if (lookahead == 'q') ADVANCE(343);
      END_STATE();
    case 296:
      if (lookahead == 'q') ADVANCE(254);
      END_STATE();
    case 297:
      if (lookahead == 'q') ADVANCE(255);
      END_STATE();
    case 298:
      if (lookahead == 'q') ADVANCE(256);
      END_STATE();
    case 299:
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 300:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 301:
      if (lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 304:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 305:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 306:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 307:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 308:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 309:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 310:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 312:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 313:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 314:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 315:
      if (lookahead == 's') ADVANCE(321);
      if (lookahead == 'y') ADVANCE(322);
      END_STATE();
    case 316:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 317:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 318:
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 319:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 320:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 321:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 322:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 337:
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 338:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 339:
      if (lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 340:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 341:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 342:
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 343:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 344:
      if (lookahead == 'v') ADVANCE(414);
      END_STATE();
    case 345:
      if (lookahead == 'v') ADVANCE(189);
      END_STATE();
    case 346:
      if (lookahead == 'v') ADVANCE(191);
      END_STATE();
    case 347:
      if (lookahead == 'w') ADVANCE(392);
      END_STATE();
    case 348:
      if (lookahead == 'w') ADVANCE(212);
      END_STATE();
    case 349:
      if (lookahead == 'x') ADVANCE(293);
      END_STATE();
    case 350:
      if (lookahead == 'x') ADVANCE(408);
      END_STATE();
    case 351:
      if (lookahead == 'y') ADVANCE(448);
      END_STATE();
    case 352:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(352)
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '@') ADVANCE(701);
      if (lookahead == 'A') ADVANCE(585);
      if (lookahead == 'C') ADVANCE(553);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'M') ADVANCE(494);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(569);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'm') ADVANCE(594);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(487);
      if (lookahead == 't') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 353:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(353)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(524);
      if (lookahead == 'D') ADVANCE(520);
      if (lookahead == 'F') ADVANCE(492);
      if (lookahead == 'G') ADVANCE(566);
      if (lookahead == 'J') ADVANCE(557);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'O') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(521);
      if (lookahead == 'T') ADVANCE(496);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(620);
      if (lookahead == 'f') ADVANCE(592);
      if (lookahead == 'g') ADVANCE(665);
      if (lookahead == 'j') ADVANCE(656);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == '|') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 354:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(354)
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '@') ADVANCE(701);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead == 't') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 355:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(355)
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '@') ADVANCE(701);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(579);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == 't') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 356:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(356)
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '@') ADVANCE(701);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(536);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead == 't') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 357:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(357)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(524);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'O') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(556);
      if (lookahead == 'T') ADVANCE(496);
      if (lookahead == 'W') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead == 's') ADVANCE(655);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(634);
      if (lookahead == '|') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 358:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(358)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(550);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'O') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == '|') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 359:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(359)
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == 'A') ADVANCE(525);
      if (lookahead == 'D') ADVANCE(520);
      if (lookahead == 'F') ADVANCE(492);
      if (lookahead == 'G') ADVANCE(566);
      if (lookahead == 'J') ADVANCE(557);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(521);
      if (lookahead == 'T') ADVANCE(496);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'd') ADVANCE(620);
      if (lookahead == 'f') ADVANCE(592);
      if (lookahead == 'g') ADVANCE(665);
      if (lookahead == 'j') ADVANCE(656);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == 't') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 360:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(360)
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == 'A') ADVANCE(525);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(556);
      if (lookahead == 'T') ADVANCE(496);
      if (lookahead == 'W') ADVANCE(534);
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(655);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 361:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(361)
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'f') ADVANCE(593);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 't') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 362:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(362)
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == ':') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 363:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(363)
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 364:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(364)
      if (lookahead == '#') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      END_STATE();
    case 365:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(365)
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '@') ADVANCE(701);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(493);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(580);
      if (lookahead == 'T') ADVANCE(562);
      if (lookahead == 'a') ADVANCE(684);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 't') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 366:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(702);
      END_STATE();
    case 367:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(698);
      END_STATE();
    case 368:
      if (eof) ADVANCE(377);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(458);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'G') ADVANCE(133);
      if (lookahead == 'J') ADVANCE(120);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'N') ADVANCE(151);
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == 'P') ADVANCE(125);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(57);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'V') ADVANCE(58);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == 'Z') ADVANCE(705);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'g') ADVANCE(311);
      if (lookahead == 'j') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'p') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == 'v') ADVANCE(201);
      if (lookahead == 'w') ADVANCE(231);
      if (lookahead == '|') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(375)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 369:
      if (eof) ADVANCE(377);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(524);
      if (lookahead == 'D') ADVANCE(520);
      if (lookahead == 'F') ADVANCE(491);
      if (lookahead == 'G') ADVANCE(566);
      if (lookahead == 'J') ADVANCE(557);
      if (lookahead == 'L') ADVANCE(519);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'O') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(521);
      if (lookahead == 'T') ADVANCE(496);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(620);
      if (lookahead == 'f') ADVANCE(591);
      if (lookahead == 'g') ADVANCE(665);
      if (lookahead == 'j') ADVANCE(656);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == '|') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(373)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 370:
      if (eof) ADVANCE(377);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '.') ADVANCE(484);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(458);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'G') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == 'J') ADVANCE(120);
      if (lookahead == 'L') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(57);
      if (lookahead == 'T') ADVANCE(704);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == 'Z') ADVANCE(705);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'j') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == 'w') ADVANCE(231);
      if (lookahead == '|') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(374)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 371:
      if (eof) ADVANCE(377);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == 'A') ADVANCE(525);
      if (lookahead == 'D') ADVANCE(520);
      if (lookahead == 'F') ADVANCE(491);
      if (lookahead == 'G') ADVANCE(566);
      if (lookahead == 'J') ADVANCE(557);
      if (lookahead == 'L') ADVANCE(519);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(521);
      if (lookahead == 'T') ADVANCE(496);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'd') ADVANCE(620);
      if (lookahead == 'f') ADVANCE(591);
      if (lookahead == 'g') ADVANCE(665);
      if (lookahead == 'j') ADVANCE(656);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(376)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 372:
      if (eof) ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(372)
      if (lookahead == '!') ADVANCE(712);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '.') ADVANCE(484);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(458);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == '@') ADVANCE(701);
      if (lookahead == 'A') ADVANCE(66);
      if (lookahead == 'C') ADVANCE(116);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'G') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'J') ADVANCE(120);
      if (lookahead == 'L') ADVANCE(44);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'N') ADVANCE(151);
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == 'P') ADVANCE(125);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(703);
      if (lookahead == 'V') ADVANCE(58);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == 'Z') ADVANCE(705);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'j') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'p') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == 'v') ADVANCE(201);
      if (lookahead == 'w') ADVANCE(231);
      if (lookahead == '|') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 373:
      if (eof) ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(373)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(524);
      if (lookahead == 'D') ADVANCE(520);
      if (lookahead == 'F') ADVANCE(491);
      if (lookahead == 'G') ADVANCE(566);
      if (lookahead == 'J') ADVANCE(557);
      if (lookahead == 'L') ADVANCE(519);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'O') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(521);
      if (lookahead == 'T') ADVANCE(496);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'd') ADVANCE(620);
      if (lookahead == 'f') ADVANCE(591);
      if (lookahead == 'g') ADVANCE(665);
      if (lookahead == 'j') ADVANCE(656);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == '|') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 374:
      if (eof) ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(374)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '.') ADVANCE(484);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(458);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'G') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == 'J') ADVANCE(120);
      if (lookahead == 'L') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(57);
      if (lookahead == 'T') ADVANCE(704);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == 'Z') ADVANCE(705);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'j') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == 'w') ADVANCE(231);
      if (lookahead == '|') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 375:
      if (eof) ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(375)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == '(') ADVANCE(459);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '*') ADVANCE(689);
      if (lookahead == '+') ADVANCE(467);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(690);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == '<') ADVANCE(695);
      if (lookahead == '=') ADVANCE(458);
      if (lookahead == '>') ADVANCE(693);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(54);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'G') ADVANCE(133);
      if (lookahead == 'J') ADVANCE(120);
      if (lookahead == 'L') ADVANCE(63);
      if (lookahead == 'N') ADVANCE(151);
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead == 'P') ADVANCE(125);
      if (lookahead == 'R') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(57);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'V') ADVANCE(58);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == 'Z') ADVANCE(705);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == ']') ADVANCE(464);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'g') ADVANCE(311);
      if (lookahead == 'j') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'p') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == 'v') ADVANCE(201);
      if (lookahead == 'w') ADVANCE(231);
      if (lookahead == '|') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 376:
      if (eof) ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(376)
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '#') ADVANCE(706);
      if (lookahead == '\'') ADVANCE(478);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == ':') ADVANCE(446);
      if (lookahead == 'A') ADVANCE(525);
      if (lookahead == 'D') ADVANCE(520);
      if (lookahead == 'F') ADVANCE(491);
      if (lookahead == 'G') ADVANCE(566);
      if (lookahead == 'J') ADVANCE(557);
      if (lookahead == 'L') ADVANCE(519);
      if (lookahead == 'N') ADVANCE(583);
      if (lookahead == 'S') ADVANCE(521);
      if (lookahead == 'T') ADVANCE(496);
      if (lookahead == '[') ADVANCE(462);
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'd') ADVANCE(620);
      if (lookahead == 'f') ADVANCE(591);
      if (lookahead == 'g') ADVANCE(665);
      if (lookahead == 'j') ADVANCE(656);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == 's') ADVANCE(621);
      if (lookahead == 't') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_keyword_window);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_keyword_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(180);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(468);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(461);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(708);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(472);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(471);
      if (lookahead == '#') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(472);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(709);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(481);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(480);
      if (lookahead == '#') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(481);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(688);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(473);
      if (lookahead == 'a') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(476);
      if (lookahead == 't') ADVANCE(604);
      if (lookahead == 'u') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(476);
      if (lookahead == 'u') ADVANCE(642);
      if (lookahead == 'w') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(476);
      if (lookahead == 'u') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(538);
      if (lookahead == 'I') ADVANCE(541);
      if (lookahead == 'R') ADVANCE(554);
      if (lookahead == 'U') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(538);
      if (lookahead == 'I') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(590);
      if (lookahead == 'I') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead == 'R') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(561);
      if (lookahead == 'G') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(542);
      if (lookahead == 'O') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(528);
      if (lookahead == 'N') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(504);
      if (lookahead == 'U') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(543);
      if (lookahead == 'W') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(653);
      if (lookahead == 'u') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(686);
      if (lookahead == 'i') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(636);
      if (lookahead == 'r') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(658);
      if (lookahead == 'g') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(641);
      if (lookahead == 'o') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(628);
      if (lookahead == 'n') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(694);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(696);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(699);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(153);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(711);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(472);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(481);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(707);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(711);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(711);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(692);
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
  [6] = {.lex_state = 369},
  [7] = {.lex_state = 370},
  [8] = {.lex_state = 368},
  [9] = {.lex_state = 368},
  [10] = {.lex_state = 370},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 370},
  [13] = {.lex_state = 368},
  [14] = {.lex_state = 368},
  [15] = {.lex_state = 370},
  [16] = {.lex_state = 368},
  [17] = {.lex_state = 370},
  [18] = {.lex_state = 368},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 370},
  [21] = {.lex_state = 370},
  [22] = {.lex_state = 370},
  [23] = {.lex_state = 370},
  [24] = {.lex_state = 370},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 370},
  [27] = {.lex_state = 370},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 368},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 370},
  [33] = {.lex_state = 370},
  [34] = {.lex_state = 370},
  [35] = {.lex_state = 370},
  [36] = {.lex_state = 370},
  [37] = {.lex_state = 368},
  [38] = {.lex_state = 370},
  [39] = {.lex_state = 370},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 370},
  [44] = {.lex_state = 370},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 370},
  [49] = {.lex_state = 368},
  [50] = {.lex_state = 370},
  [51] = {.lex_state = 370},
  [52] = {.lex_state = 370},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 370},
  [67] = {.lex_state = 370},
  [68] = {.lex_state = 370},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 370},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 370},
  [82] = {.lex_state = 370},
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
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 368},
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
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 370},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 370},
  [143] = {.lex_state = 370},
  [144] = {.lex_state = 370},
  [145] = {.lex_state = 370},
  [146] = {.lex_state = 371},
  [147] = {.lex_state = 371},
  [148] = {.lex_state = 370},
  [149] = {.lex_state = 370},
  [150] = {.lex_state = 370},
  [151] = {.lex_state = 370},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 370},
  [155] = {.lex_state = 371},
  [156] = {.lex_state = 371},
  [157] = {.lex_state = 371},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 371},
  [160] = {.lex_state = 371},
  [161] = {.lex_state = 371},
  [162] = {.lex_state = 371},
  [163] = {.lex_state = 371},
  [164] = {.lex_state = 371},
  [165] = {.lex_state = 371},
  [166] = {.lex_state = 371},
  [167] = {.lex_state = 371},
  [168] = {.lex_state = 371},
  [169] = {.lex_state = 370},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 370},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 370},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 370},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 370},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 370},
  [196] = {.lex_state = 370},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 370},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 370},
  [205] = {.lex_state = 370},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 370},
  [211] = {.lex_state = 370},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 370},
  [215] = {.lex_state = 370},
  [216] = {.lex_state = 370},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 370},
  [219] = {.lex_state = 370},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 370},
  [222] = {.lex_state = 370},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 370},
  [225] = {.lex_state = 368},
  [226] = {.lex_state = 370},
  [227] = {.lex_state = 370},
  [228] = {.lex_state = 370},
  [229] = {.lex_state = 370},
  [230] = {.lex_state = 370},
  [231] = {.lex_state = 370},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 370},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 370},
  [237] = {.lex_state = 370},
  [238] = {.lex_state = 370},
  [239] = {.lex_state = 370},
  [240] = {.lex_state = 370},
  [241] = {.lex_state = 370},
  [242] = {.lex_state = 370},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 370},
  [245] = {.lex_state = 370},
  [246] = {.lex_state = 370},
  [247] = {.lex_state = 370},
  [248] = {.lex_state = 370},
  [249] = {.lex_state = 370},
  [250] = {.lex_state = 370},
  [251] = {.lex_state = 370},
  [252] = {.lex_state = 370},
  [253] = {.lex_state = 370},
  [254] = {.lex_state = 370},
  [255] = {.lex_state = 370},
  [256] = {.lex_state = 370},
  [257] = {.lex_state = 370},
  [258] = {.lex_state = 370},
  [259] = {.lex_state = 11},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 11},
  [264] = {.lex_state = 11},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 11},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 11},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 370},
  [271] = {.lex_state = 11},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 370},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 370},
  [281] = {.lex_state = 11},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 368},
  [290] = {.lex_state = 368},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 4},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 368},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 368},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 368},
  [313] = {.lex_state = 368},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 368},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
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
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 18},
  [364] = {.lex_state = 18},
  [365] = {.lex_state = 18},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 370},
  [370] = {.lex_state = 18},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 6},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 6},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 18},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 6},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 6},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 6},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 18},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 19},
  [397] = {.lex_state = 6},
  [398] = {.lex_state = 18},
  [399] = {.lex_state = 18},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 18},
  [406] = {.lex_state = 6},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 18},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 18},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 18},
  [415] = {.lex_state = 18},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 18},
  [418] = {.lex_state = 18},
  [419] = {.lex_state = 18},
  [420] = {.lex_state = 6},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 6},
  [423] = {.lex_state = 18},
  [424] = {.lex_state = 6},
  [425] = {.lex_state = 18},
  [426] = {.lex_state = 6},
  [427] = {.lex_state = 6},
  [428] = {.lex_state = 18},
  [429] = {.lex_state = 6},
  [430] = {.lex_state = 368},
  [431] = {.lex_state = 6},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 20},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 6},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 710},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 6},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 20},
  [453] = {.lex_state = 20},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 20},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 20},
  [461] = {.lex_state = 18},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 370},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 370},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 20},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 6},
  [472] = {.lex_state = 6},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 6},
  [476] = {.lex_state = 20},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 6},
  [479] = {.lex_state = 6},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 6},
  [486] = {.lex_state = 6},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 6},
  [491] = {.lex_state = 6},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 6},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 470},
  [497] = {.lex_state = 479},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 20},
  [500] = {.lex_state = 6},
  [501] = {.lex_state = 6},
  [502] = {.lex_state = 479},
  [503] = {.lex_state = 470},
  [504] = {.lex_state = 470},
  [505] = {.lex_state = 470},
  [506] = {.lex_state = 470},
  [507] = {.lex_state = 470},
  [508] = {.lex_state = 479},
  [509] = {.lex_state = 470},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 470},
  [512] = {.lex_state = 479},
  [513] = {.lex_state = 18},
  [514] = {.lex_state = 470},
  [515] = {.lex_state = 479},
  [516] = {.lex_state = 470},
  [517] = {.lex_state = 479},
  [518] = {.lex_state = 470},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 18},
  [522] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(519),
    [sym_prql] = STATE(358),
    [sym_pipeline] = STATE(367),
    [sym_variable] = STATE(367),
    [sym_function_definition] = STATE(367),
    [sym_from] = STATE(158),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(337),
    [aux_sym_program_repeat2] = STATE(344),
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_binary_expression,
    STATE(231), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(377), 3,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(218), 1,
      sym_binary_expression,
    STATE(231), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(407), 3,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(218), 1,
      sym_binary_expression,
    STATE(231), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(407), 3,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(218), 1,
      sym_binary_expression,
    STATE(231), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(407), 3,
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
    STATE(147), 1,
      aux_sym_function_call_repeat1,
    STATE(155), 1,
      sym__double_quote_string,
    STATE(161), 1,
      sym__integer,
    STATE(165), 1,
      sym_literal,
    STATE(168), 1,
      sym__call_parameter,
    STATE(160), 2,
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
  [495] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      anon_sym_PLUS,
    ACTIONS(79), 1,
      anon_sym_Z,
    STATE(7), 1,
      sym_comment,
    STATE(44), 1,
      sym_timezone,
    STATE(456), 1,
      sym_direction,
    ACTIONS(73), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(71), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
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
  [557] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_COLON,
    ACTIONS(87), 1,
      anon_sym_DOT,
    STATE(8), 1,
      sym_comment,
    ACTIONS(85), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(81), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
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
      anon_sym_Z,
  [612] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(95), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_comment,
    ACTIONS(93), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
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
      anon_sym_Z,
  [667] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      sym__natural_number,
    STATE(10), 1,
      sym_comment,
    ACTIONS(99), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [719] = 17,
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
    STATE(152), 1,
      aux_sym_function_call_repeat1,
    STATE(180), 1,
      sym__call_parameter,
    STATE(181), 1,
      sym_literal,
    STATE(189), 1,
      sym__double_quote_string,
    STATE(192), 1,
      sym__integer,
    STATE(191), 2,
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
  [795] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(119), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [845] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(13), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
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
      anon_sym_Z,
  [897] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(129), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [947] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [997] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1047] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_comment,
    ACTIONS(137), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1097] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(141), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1147] = 30,
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
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_PLUS,
    STATE(19), 1,
      sym_comment,
    STATE(37), 1,
      sym__integer,
    STATE(89), 1,
      sym_direction,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(388), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [1249] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(85), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(81), 35,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1299] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(153), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
    STATE(22), 1,
      sym_comment,
    ACTIONS(157), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(155), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1397] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(161), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1446] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(165), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1495] = 29,
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
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_comment,
    STATE(37), 1,
      sym__integer,
    STATE(94), 1,
      sym_direction,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(276), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [1594] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    ACTIONS(171), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(169), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1643] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(99), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1692] = 29,
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
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_comment,
    STATE(37), 1,
      sym__integer,
    STATE(98), 1,
      sym_direction,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(276), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [1791] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(173), 1,
      anon_sym_DOT,
    STATE(29), 1,
      sym_comment,
    ACTIONS(55), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
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
  [1842] = 29,
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
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_PLUS,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_comment,
    STATE(37), 1,
      sym__integer,
    STATE(97), 1,
      sym_direction,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(409), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [1941] = 29,
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
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_PLUS,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_comment,
    STATE(37), 1,
      sym__integer,
    STATE(97), 1,
      sym_direction,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(409), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [2040] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(181), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [2089] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [2138] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [2187] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(193), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(191), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [2236] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(197), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [2285] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym_comment,
    ACTIONS(201), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
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
  [2336] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(207), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [2385] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(201), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [2434] = 26,
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
    ACTIONS(209), 1,
      sym_keyword_switch,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      sym_identifier,
    STATE(37), 1,
      sym__integer,
    STATE(40), 1,
      sym_comment,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(142), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    ACTIONS(211), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(206), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(15), 3,
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
  [2527] = 26,
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
    ACTIONS(209), 1,
      sym_keyword_switch,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(37), 1,
      sym__integer,
    STATE(41), 1,
      sym_comment,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(142), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    ACTIONS(211), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(206), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(15), 3,
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
  [2620] = 29,
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
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_PLUS,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(42), 1,
      sym_comment,
    STATE(97), 1,
      sym_direction,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(409), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [2719] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(223), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [2768] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(227), 4,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [2817] = 26,
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
    ACTIONS(209), 1,
      sym_keyword_switch,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      sym_identifier,
    STATE(37), 1,
      sym__integer,
    STATE(45), 1,
      sym_comment,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(142), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    ACTIONS(211), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(206), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(15), 3,
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
  [2910] = 29,
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
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_PLUS,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(46), 1,
      sym_comment,
    STATE(88), 1,
      sym_direction,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(149), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(276), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [3009] = 30,
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
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(47), 1,
      sym_comment,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(54), 1,
      aux_sym_switch_repeat1,
    STATE(217), 1,
      sym_switch_condition,
    STATE(239), 1,
      sym_literal,
    STATE(240), 1,
      sym_binary_expression,
    STATE(277), 1,
      sym__expression,
    STATE(393), 1,
      aux_sym_switch_repeat2,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3110] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(237), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(235), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [3159] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_DASH_GT,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [3212] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    ACTIONS(245), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(243), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [3261] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_comment,
    ACTIONS(249), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(247), 34,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [3310] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(255), 1,
      anon_sym_T,
    STATE(52), 1,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 33,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
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
  [3361] = 26,
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
    ACTIONS(209), 1,
      sym_keyword_switch,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(37), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(53), 1,
      sym_comment,
    STATE(142), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    ACTIONS(211), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(206), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(15), 3,
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
  [3454] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_DASH,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(276), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(279), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(282), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(285), 1,
      anon_sym_SQUOTE,
    ACTIONS(288), 1,
      sym__natural_number,
    ACTIONS(291), 1,
      anon_sym_DOT,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(297), 1,
      anon_sym_AT,
    STATE(37), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(217), 1,
      sym_switch_condition,
    STATE(239), 1,
      sym_literal,
    STATE(240), 1,
      sym_binary_expression,
    STATE(277), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    ACTIONS(265), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(54), 2,
      sym_comment,
      aux_sym_switch_repeat1,
    ACTIONS(259), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3548] = 29,
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
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(55), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(210), 1,
      sym_binary_expression,
    STATE(382), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3646] = 29,
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
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(56), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(149), 1,
      sym__expression,
    STATE(150), 1,
      sym_field,
    STATE(202), 1,
      sym_assignment,
    STATE(322), 1,
      sym_term,
    STATE(331), 1,
      sym_table_reference,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3744] = 28,
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
    ACTIONS(308), 1,
      sym_keyword_side,
    STATE(37), 1,
      sym__integer,
    STATE(57), 1,
      sym_comment,
    STATE(91), 1,
      sym__join_definition,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(149), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(220), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [3840] = 28,
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
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(58), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(376), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [3936] = 28,
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
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_PLUS,
    STATE(37), 1,
      sym__integer,
    STATE(59), 1,
      sym_comment,
    STATE(97), 1,
      sym_direction,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(409), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [4032] = 28,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(54), 1,
      aux_sym_switch_repeat1,
    STATE(60), 1,
      sym_comment,
    STATE(217), 1,
      sym_switch_condition,
    STATE(239), 1,
      sym_literal,
    STATE(240), 1,
      sym_binary_expression,
    STATE(277), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    ACTIONS(314), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4128] = 29,
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
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(47), 1,
      aux_sym_switch_repeat1,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(61), 1,
      sym_comment,
    STATE(217), 1,
      sym_switch_condition,
    STATE(239), 1,
      sym_literal,
    STATE(240), 1,
      sym_binary_expression,
    STATE(277), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4226] = 28,
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
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(62), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(395), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [4322] = 28,
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
    ACTIONS(308), 1,
      sym_keyword_side,
    STATE(37), 1,
      sym__integer,
    STATE(63), 1,
      sym_comment,
    STATE(96), 1,
      sym__join_definition,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(220), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [4418] = 29,
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
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(64), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(150), 1,
      sym_field,
    STATE(154), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(322), 1,
      sym_term,
    STATE(331), 1,
      sym_table_reference,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4516] = 28,
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
    ACTIONS(324), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(65), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(148), 1,
      sym_binary_expression,
    STATE(187), 1,
      sym__expression,
    STATE(321), 1,
      sym_term,
    STATE(323), 1,
      sym_assignment,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4611] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_EQ,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    STATE(66), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 22,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [4672] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_EQ,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 24,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [4729] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(189), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [4782] = 27,
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
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(69), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(411), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [4875] = 28,
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
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(70), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(216), 1,
      sym_binary_expression,
    STATE(412), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4970] = 27,
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
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(71), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(411), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [5063] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(189), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [5112] = 28,
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
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(73), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(216), 1,
      sym_binary_expression,
    STATE(412), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5207] = 28,
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
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(60), 1,
      aux_sym_switch_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(217), 1,
      sym_switch_condition,
    STATE(239), 1,
      sym_literal,
    STATE(240), 1,
      sym_binary_expression,
    STATE(277), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5302] = 28,
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
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(60), 1,
      aux_sym_switch_repeat1,
    STATE(75), 1,
      sym_comment,
    STATE(217), 1,
      sym_switch_condition,
    STATE(239), 1,
      sym_literal,
    STATE(240), 1,
      sym_binary_expression,
    STATE(277), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5397] = 28,
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
    ACTIONS(324), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(76), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(148), 1,
      sym_binary_expression,
    STATE(154), 1,
      sym__expression,
    STATE(321), 1,
      sym_term,
    STATE(323), 1,
      sym_assignment,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5492] = 27,
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
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(77), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(411), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [5585] = 27,
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
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(78), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(411), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [5678] = 28,
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
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(79), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(216), 1,
      sym_binary_expression,
    STATE(412), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5773] = 26,
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
    ACTIONS(215), 1,
      sym_identifier,
    STATE(37), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(80), 1,
      sym_comment,
    STATE(254), 1,
      sym__expression,
    STATE(255), 1,
      sym_binary_expression,
    STATE(437), 1,
      sym_function_call,
    STATE(500), 1,
      sym__alias_identifier,
    ACTIONS(360), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [5864] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_EQ,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    STATE(81), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 23,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [5923] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(82), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(189), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 29,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [5974] = 27,
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
    ACTIONS(362), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(83), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(455), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [6067] = 28,
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
    ACTIONS(324), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(84), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(148), 1,
      sym_binary_expression,
    STATE(149), 1,
      sym__expression,
    STATE(321), 1,
      sym_term,
    STATE(323), 1,
      sym_assignment,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6162] = 27,
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
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    ACTIONS(368), 1,
      anon_sym_EQ_EQ,
    STATE(37), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(85), 1,
      sym_comment,
    STATE(211), 1,
      sym_binary_expression,
    STATE(270), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [6255] = 26,
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
    STATE(102), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(328), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [6345] = 26,
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
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(411), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [6435] = 26,
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
    STATE(88), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(149), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(272), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [6525] = 26,
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
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(386), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [6615] = 26,
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
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(489), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [6705] = 26,
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
    STATE(102), 1,
      sym__double_quote_string,
    STATE(149), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(223), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [6795] = 24,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(92), 1,
      sym_comment,
    STATE(222), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [6881] = 27,
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
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym__integer,
    STATE(93), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(216), 1,
      sym_binary_expression,
    STATE(412), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6973] = 26,
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
    STATE(94), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(272), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [7063] = 27,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(60), 1,
      aux_sym_switch_repeat1,
    STATE(95), 1,
      sym_comment,
    STATE(217), 1,
      sym_switch_condition,
    STATE(239), 1,
      sym_literal,
    STATE(240), 1,
      sym_binary_expression,
    STATE(277), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(33), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7155] = 26,
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
    STATE(96), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(223), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [7245] = 26,
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
    STATE(97), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(416), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [7335] = 26,
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
    STATE(98), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(176), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(272), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [7425] = 26,
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
    STATE(99), 1,
      sym_comment,
    STATE(102), 1,
      sym__double_quote_string,
    STATE(149), 1,
      sym__expression,
    STATE(202), 1,
      sym_assignment,
    STATE(328), 1,
      sym_term,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(135), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(15), 3,
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
  [7515] = 25,
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
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym_comment,
    STATE(229), 1,
      sym_binary_expression,
    STATE(270), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [7602] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(376), 1,
      anon_sym_DASH,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      sym__natural_number,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(101), 1,
      sym_comment,
    STATE(172), 1,
      aux_sym_function_call_repeat1,
    STATE(264), 1,
      sym__double_quote_string,
    STATE(271), 1,
      sym__integer,
    STATE(278), 1,
      sym__call_parameter,
    STATE(284), 1,
      sym_literal,
    STATE(268), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(374), 3,
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
  [7673] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(102), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 12,
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
    ACTIONS(388), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [7722] = 24,
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
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(103), 1,
      sym_comment,
    STATE(151), 1,
      sym__expression,
    STATE(286), 1,
      sym__boolean_expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [7807] = 24,
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
    ACTIONS(392), 1,
      anon_sym_DASH,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(396), 1,
      sym__natural_number,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_AT,
    STATE(104), 1,
      sym_comment,
    STATE(227), 1,
      sym__integer,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(238), 1,
      sym__expression,
    STATE(260), 1,
      sym_range,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [7892] = 24,
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
    ACTIONS(392), 1,
      anon_sym_DASH,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_AT,
    ACTIONS(402), 1,
      sym__natural_number,
    STATE(105), 1,
      sym_comment,
    STATE(178), 1,
      sym__integer,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(238), 1,
      sym__expression,
    STATE(371), 1,
      sym_range,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [7977] = 25,
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
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(106), 1,
      sym_comment,
    STATE(229), 1,
      sym_binary_expression,
    STATE(270), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [8064] = 23,
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
    STATE(107), 1,
      sym_comment,
    STATE(225), 1,
      sym__double_quote_string,
    STATE(256), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [8146] = 23,
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
    ACTIONS(392), 1,
      anon_sym_DASH,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_AT,
    ACTIONS(402), 1,
      sym__natural_number,
    STATE(108), 1,
      sym_comment,
    STATE(227), 1,
      sym__integer,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(234), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [8228] = 23,
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
    STATE(109), 1,
      sym_comment,
    STATE(225), 1,
      sym__double_quote_string,
    STATE(248), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [8310] = 23,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(82), 1,
      sym__expression,
    STATE(110), 1,
      sym_comment,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [8392] = 23,
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
    STATE(111), 1,
      sym_comment,
    STATE(225), 1,
      sym__double_quote_string,
    STATE(251), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [8474] = 23,
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
    STATE(34), 1,
      sym__expression,
    STATE(37), 1,
      sym__integer,
    STATE(112), 1,
      sym_comment,
    STATE(225), 1,
      sym__double_quote_string,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [8556] = 23,
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
    ACTIONS(392), 1,
      anon_sym_DASH,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_AT,
    ACTIONS(402), 1,
      sym__natural_number,
    STATE(113), 1,
      sym_comment,
    STATE(227), 1,
      sym__integer,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(247), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [8638] = 23,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(114), 1,
      sym_comment,
    STATE(257), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [8720] = 23,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(115), 1,
      sym_comment,
    STATE(258), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [8802] = 23,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(67), 1,
      sym__expression,
    STATE(116), 1,
      sym_comment,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [8884] = 24,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(117), 1,
      sym_comment,
    STATE(230), 1,
      sym__expression,
    STATE(255), 1,
      sym_binary_expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [8968] = 23,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym__expression,
    STATE(118), 1,
      sym_comment,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [9050] = 23,
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
    ACTIONS(392), 1,
      anon_sym_DASH,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_AT,
    ACTIONS(402), 1,
      sym__natural_number,
    STATE(119), 1,
      sym_comment,
    STATE(227), 1,
      sym__integer,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(246), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [9132] = 23,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(68), 1,
      sym__expression,
    STATE(120), 1,
      sym_comment,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [9214] = 23,
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
    STATE(34), 1,
      sym__expression,
    STATE(37), 1,
      sym__integer,
    STATE(49), 1,
      sym__double_quote_string,
    STATE(121), 1,
      sym_comment,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [9296] = 23,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(66), 1,
      sym__expression,
    STATE(122), 1,
      sym_comment,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [9378] = 24,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(123), 1,
      sym_comment,
    STATE(236), 1,
      sym_binary_expression,
    STATE(280), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [9462] = 23,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(124), 1,
      sym_comment,
    STATE(242), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [9544] = 23,
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
    ACTIONS(392), 1,
      anon_sym_DASH,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_AT,
    ACTIONS(402), 1,
      sym__natural_number,
    STATE(125), 1,
      sym_comment,
    STATE(227), 1,
      sym__integer,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(249), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [9626] = 23,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym__expression,
    STATE(126), 1,
      sym_comment,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [9708] = 23,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(127), 1,
      sym_comment,
    STATE(143), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [9790] = 23,
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
    ACTIONS(392), 1,
      anon_sym_DASH,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_AT,
    ACTIONS(402), 1,
      sym__natural_number,
    STATE(128), 1,
      sym_comment,
    STATE(227), 1,
      sym__integer,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(250), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [9872] = 23,
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
    STATE(129), 1,
      sym_comment,
    STATE(225), 1,
      sym__double_quote_string,
    STATE(253), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [9954] = 23,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(130), 1,
      sym_comment,
    STATE(144), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [10036] = 23,
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
    ACTIONS(392), 1,
      anon_sym_DASH,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_AT,
    ACTIONS(402), 1,
      sym__natural_number,
    STATE(34), 1,
      sym__expression,
    STATE(131), 1,
      sym_comment,
    STATE(227), 1,
      sym__integer,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [10118] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(408), 1,
      anon_sym_DASH,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 1,
      sym__natural_number,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(132), 1,
      sym_comment,
    STATE(177), 1,
      aux_sym_function_call_repeat1,
    STATE(288), 1,
      sym_literal,
    STATE(291), 1,
      sym__double_quote_string,
    STATE(292), 1,
      sym__call_parameter,
    STATE(302), 1,
      sym__integer,
    STATE(318), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(406), 3,
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
  [10188] = 23,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(133), 1,
      sym_comment,
    STATE(219), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [10270] = 23,
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
    STATE(134), 1,
      sym_comment,
    STATE(225), 1,
      sym__double_quote_string,
    STATE(241), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [10352] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(135), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 12,
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
    ACTIONS(388), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [10398] = 24,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(136), 1,
      sym_comment,
    STATE(229), 1,
      sym_binary_expression,
    STATE(270), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [10482] = 24,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(137), 1,
      sym_comment,
    STATE(237), 1,
      sym_binary_expression,
    STATE(280), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [10566] = 23,
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
    STATE(138), 1,
      sym_comment,
    STATE(225), 1,
      sym__double_quote_string,
    STATE(244), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [10648] = 23,
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
    ACTIONS(392), 1,
      anon_sym_DASH,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_AT,
    ACTIONS(402), 1,
      sym__natural_number,
    STATE(139), 1,
      sym_comment,
    STATE(227), 1,
      sym__integer,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(245), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [10730] = 24,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym_comment,
    STATE(270), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(201), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(15), 3,
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
  [10814] = 24,
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
    STATE(49), 1,
      sym__double_quote_string,
    STATE(141), 1,
      sym_comment,
    STATE(252), 1,
      sym_binary_expression,
    STATE(280), 1,
      sym__expression,
    STATE(500), 1,
      sym__alias_identifier,
    STATE(35), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(36), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(15), 3,
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
  [10898] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(422), 1,
      sym_keyword_or,
    STATE(142), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(420), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [10955] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(422), 1,
      sym_keyword_or,
    STATE(143), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(424), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [11012] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(422), 1,
      sym_keyword_or,
    STATE(144), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(426), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [11069] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(145), 1,
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
    ACTIONS(428), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [11112] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    ACTIONS(443), 1,
      anon_sym_SQUOTE,
    ACTIONS(446), 1,
      sym__natural_number,
    ACTIONS(449), 1,
      anon_sym_DOT,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(155), 1,
      sym__double_quote_string,
    STATE(161), 1,
      sym__integer,
    STATE(165), 1,
      sym_literal,
    STATE(168), 1,
      sym__call_parameter,
    ACTIONS(430), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(146), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(160), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(434), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(432), 11,
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
  [11176] = 17,
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
    STATE(146), 1,
      aux_sym_function_call_repeat1,
    STATE(147), 1,
      sym_comment,
    STATE(155), 1,
      sym__double_quote_string,
    STATE(161), 1,
      sym__integer,
    STATE(165), 1,
      sym_literal,
    STATE(168), 1,
      sym__call_parameter,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(160), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(57), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(457), 11,
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
  [11242] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(148), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 25,
      ts_builtin_sym_end,
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
  [11281] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(422), 1,
      sym_keyword_or,
    ACTIONS(461), 1,
      anon_sym_EQ,
    STATE(149), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(459), 13,
      ts_builtin_sym_end,
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
  [11336] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 25,
      ts_builtin_sym_end,
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
  [11375] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(422), 1,
      sym_keyword_or,
    STATE(151), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(463), 13,
      ts_builtin_sym_end,
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
  [11427] = 17,
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
    STATE(152), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_function_call_repeat1,
    STATE(180), 1,
      sym__call_parameter,
    STATE(181), 1,
      sym_literal,
    STATE(189), 1,
      sym__double_quote_string,
    STATE(192), 1,
      sym__integer,
    ACTIONS(455), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(191), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(103), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(457), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [11490] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(468), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    ACTIONS(477), 1,
      sym__natural_number,
    ACTIONS(480), 1,
      anon_sym_DOT,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(180), 1,
      sym__call_parameter,
    STATE(181), 1,
      sym_literal,
    STATE(189), 1,
      sym__double_quote_string,
    STATE(192), 1,
      sym__integer,
    ACTIONS(430), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(153), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(191), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(465), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(432), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [11551] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(422), 1,
      sym_keyword_or,
    ACTIONS(486), 1,
      anon_sym_EQ,
    STATE(154), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(459), 10,
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
  [11603] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(155), 1,
      sym_comment,
    ACTIONS(239), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(488), 15,
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
  [11637] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(494), 1,
      anon_sym_COLON,
    STATE(156), 1,
      sym_comment,
    ACTIONS(490), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(492), 15,
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
  [11673] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(157), 1,
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
  [11706] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      sym_keyword_filter,
    ACTIONS(500), 1,
      sym_keyword_derive,
    ACTIONS(502), 1,
      sym_keyword_group,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(506), 1,
      sym_keyword_sort,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(510), 1,
      sym_keyword_join,
    ACTIONS(512), 1,
      sym_keyword_select,
    STATE(158), 1,
      sym_comment,
    STATE(174), 1,
      aux_sym_transforms_repeat1,
    STATE(357), 1,
      sym_transforms,
    ACTIONS(496), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(309), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11759] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_comment,
    ACTIONS(221), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(223), 15,
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
  [11792] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
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
  [11825] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(161), 1,
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
  [11858] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(162), 1,
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
  [11891] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(514), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(516), 15,
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
  [11924] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_comment,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(99), 15,
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
  [11957] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(490), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(492), 15,
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
  [11990] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(133), 15,
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
  [12023] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(161), 15,
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
  [12056] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    ACTIONS(518), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(520), 15,
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
  [12089] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
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
  [12121] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      sym_keyword_filter,
    ACTIONS(527), 1,
      sym_keyword_derive,
    ACTIONS(530), 1,
      sym_keyword_group,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(536), 1,
      sym_keyword_sort,
    ACTIONS(539), 1,
      sym_keyword_take,
    ACTIONS(542), 1,
      sym_keyword_join,
    ACTIONS(545), 1,
      sym_keyword_select,
    STATE(170), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(522), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(309), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [12169] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    ACTIONS(551), 1,
      anon_sym_DASH,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
    ACTIONS(557), 1,
      anon_sym_SQUOTE,
    ACTIONS(560), 1,
      sym__natural_number,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      sym_identifier,
    STATE(264), 1,
      sym__double_quote_string,
    STATE(271), 1,
      sym__integer,
    STATE(278), 1,
      sym__call_parameter,
    STATE(284), 1,
      sym_literal,
    STATE(171), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(268), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(548), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(432), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [12225] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(376), 1,
      anon_sym_DASH,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      sym__natural_number,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_function_call_repeat1,
    STATE(172), 1,
      sym_comment,
    STATE(264), 1,
      sym__double_quote_string,
    STATE(271), 1,
      sym__integer,
    STATE(278), 1,
      sym__call_parameter,
    STATE(284), 1,
      sym_literal,
    STATE(268), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(374), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(457), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [12283] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(173), 1,
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
  [12315] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      sym_keyword_filter,
    ACTIONS(500), 1,
      sym_keyword_derive,
    ACTIONS(502), 1,
      sym_keyword_group,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(506), 1,
      sym_keyword_sort,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(510), 1,
      sym_keyword_join,
    ACTIONS(512), 1,
      sym_keyword_select,
    STATE(170), 1,
      aux_sym_transforms_repeat1,
    STATE(174), 1,
      sym_comment,
    ACTIONS(569), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    STATE(309), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [12365] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      anon_sym_COLON,
    STATE(175), 1,
      sym_comment,
    ACTIONS(490), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(492), 12,
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
  [12398] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(422), 1,
      sym_keyword_or,
    ACTIONS(573), 1,
      anon_sym_EQ,
    STATE(176), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(459), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [12445] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(408), 1,
      anon_sym_DASH,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 1,
      sym__natural_number,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(177), 1,
      sym_comment,
    STATE(179), 1,
      aux_sym_function_call_repeat1,
    STATE(288), 1,
      sym_literal,
    STATE(291), 1,
      sym__double_quote_string,
    STATE(292), 1,
      sym__call_parameter,
    STATE(302), 1,
      sym__integer,
    STATE(318), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(406), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(455), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12500] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(577), 1,
      anon_sym_DOT,
    STATE(178), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(575), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(199), 13,
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
  [12535] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(582), 1,
      anon_sym_DASH,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
    ACTIONS(588), 1,
      anon_sym_SQUOTE,
    ACTIONS(591), 1,
      sym__natural_number,
    ACTIONS(594), 1,
      anon_sym_DOT,
    ACTIONS(597), 1,
      sym_identifier,
    STATE(288), 1,
      sym_literal,
    STATE(291), 1,
      sym__double_quote_string,
    STATE(292), 1,
      sym__call_parameter,
    STATE(302), 1,
      sym__integer,
    STATE(179), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(318), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(579), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(430), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12588] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(180), 1,
      sym_comment,
    ACTIONS(518), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(520), 12,
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
  [12618] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(181), 1,
      sym_comment,
    ACTIONS(490), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(492), 12,
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
  [12648] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(498), 1,
      sym_keyword_filter,
    ACTIONS(502), 1,
      sym_keyword_group,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(600), 1,
      sym_keyword_derive,
    ACTIONS(602), 1,
      sym_keyword_sort,
    ACTIONS(604), 1,
      sym_keyword_join,
    ACTIONS(606), 1,
      sym_keyword_select,
    STATE(182), 1,
      sym_comment,
    STATE(207), 1,
      aux_sym_transforms_repeat1,
    STATE(357), 1,
      sym_transforms,
    STATE(309), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [12698] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(183), 1,
      sym_comment,
    ACTIONS(221), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(223), 12,
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
  [12728] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(184), 1,
      sym_comment,
    ACTIONS(159), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(161), 12,
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
  [12758] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(185), 1,
      sym_comment,
    ACTIONS(514), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(516), 12,
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
  [12788] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(186), 1,
      sym_comment,
    ACTIONS(131), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(133), 12,
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
  [12818] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(422), 1,
      sym_keyword_or,
    ACTIONS(608), 1,
      anon_sym_EQ,
    STATE(187), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(459), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12864] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(188), 1,
      sym_comment,
    ACTIONS(97), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(99), 12,
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
  [12894] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(189), 1,
      sym_comment,
    ACTIONS(239), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(488), 12,
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
  [12924] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(190), 1,
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
  [12954] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(191), 1,
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
  [12984] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(192), 1,
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
  [13014] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(193), 1,
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
  [13044] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(524), 1,
      sym_keyword_filter,
    ACTIONS(530), 1,
      sym_keyword_group,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(539), 1,
      sym_keyword_take,
    ACTIONS(610), 1,
      sym_keyword_derive,
    ACTIONS(613), 1,
      sym_keyword_sort,
    ACTIONS(616), 1,
      sym_keyword_join,
    ACTIONS(619), 1,
      sym_keyword_select,
    STATE(194), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(309), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [13089] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(195), 1,
      sym_comment,
    STATE(392), 1,
      aux_sym_derives_repeat1,
    ACTIONS(165), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 14,
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
  [13120] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(622), 1,
      anon_sym_COLON,
    ACTIONS(624), 1,
      anon_sym_DOT,
    STATE(196), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(89), 14,
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
  [13153] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(197), 1,
      sym_comment,
    ACTIONS(626), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13180] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(198), 1,
      sym_comment,
    ACTIONS(628), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13207] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(199), 1,
      sym_comment,
    ACTIONS(630), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13234] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(200), 1,
      sym_comment,
    ACTIONS(632), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13261] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(201), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(634), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
    ACTIONS(183), 12,
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
  [13292] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(202), 1,
      sym_comment,
    ACTIONS(459), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13319] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(203), 1,
      sym_comment,
    ACTIONS(636), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13346] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      sym_comment,
    STATE(384), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(185), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 12,
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
  [13381] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_DOT,
    STATE(205), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(81), 14,
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
  [13414] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(206), 1,
      sym_comment,
    ACTIONS(646), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13441] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      sym_keyword_filter,
    ACTIONS(502), 1,
      sym_keyword_group,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(600), 1,
      sym_keyword_derive,
    ACTIONS(602), 1,
      sym_keyword_sort,
    ACTIONS(604), 1,
      sym_keyword_join,
    ACTIONS(606), 1,
      sym_keyword_select,
    STATE(194), 1,
      aux_sym_transforms_repeat1,
    STATE(207), 1,
      sym_comment,
    STATE(309), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [13488] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(208), 1,
      sym_comment,
    ACTIONS(648), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13515] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(209), 1,
      sym_comment,
    ACTIONS(650), 18,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [13542] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(210), 1,
      sym_comment,
    STATE(380), 1,
      aux_sym_derives_repeat1,
    ACTIONS(185), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 14,
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
  [13573] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_RBRACK,
    STATE(211), 1,
      sym_comment,
    STATE(394), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 12,
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
  [13607] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(212), 1,
      sym_comment,
    ACTIONS(656), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(658), 11,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [13635] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(213), 1,
      sym_comment,
    ACTIONS(660), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(662), 11,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [13663] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(664), 1,
      anon_sym_DOT,
    STATE(214), 1,
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
  [13693] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(215), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 14,
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
  [13721] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(216), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 14,
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
  [13749] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(217), 1,
      sym_comment,
    ACTIONS(666), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(668), 11,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [13777] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(218), 1,
      sym_comment,
    ACTIONS(670), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(185), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 12,
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
  [13807] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(422), 1,
      sym_keyword_or,
    STATE(219), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(672), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13848] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_comment,
    STATE(293), 1,
      sym_conditions,
    STATE(295), 1,
      sym__self_join,
    ACTIONS(674), 13,
      ts_builtin_sym_end,
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
  [13879] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(678), 1,
      anon_sym_T,
    STATE(221), 1,
      sym_comment,
    ACTIONS(253), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 13,
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
  [13908] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(422), 1,
      sym_keyword_or,
    STATE(222), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(680), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13949] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      anon_sym_LBRACK,
    STATE(223), 1,
      sym_comment,
    STATE(295), 1,
      sym__self_join,
    STATE(334), 1,
      sym_conditions,
    ACTIONS(682), 13,
      ts_builtin_sym_end,
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
  [13980] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(224), 1,
      sym_comment,
    ACTIONS(133), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 13,
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
  [14007] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(225), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 12,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14036] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(684), 1,
      anon_sym_DOT,
    STATE(226), 1,
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
  [14065] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(577), 1,
      anon_sym_DOT,
    STATE(227), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 13,
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
  [14094] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      anon_sym_DOT,
    STATE(228), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 13,
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
  [14123] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(229), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(688), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(183), 12,
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
  [14152] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(690), 1,
      sym_keyword_and,
    ACTIONS(692), 1,
      sym_keyword_or,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14192] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(422), 1,
      sym_keyword_or,
    ACTIONS(608), 1,
      anon_sym_EQ,
    STATE(231), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14232] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(232), 1,
      sym_comment,
    ACTIONS(696), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(698), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [14258] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym_comment,
    ACTIONS(700), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(702), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [14284] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(714), 1,
      anon_sym_QMARK_QMARK,
    STATE(234), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(708), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(712), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(706), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14320] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(235), 1,
      sym_comment,
    ACTIONS(700), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(702), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [14346] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 12,
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
  [14374] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 12,
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
  [14402] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(714), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(720), 1,
      sym_keyword_and,
    ACTIONS(722), 1,
      sym_keyword_or,
    ACTIONS(724), 1,
      anon_sym_DOT_DOT,
    STATE(238), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(708), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(712), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(706), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14442] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      anon_sym_DASH_GT,
    STATE(239), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14470] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(728), 1,
      anon_sym_DASH_GT,
    STATE(240), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14498] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      anon_sym_DASH,
    ACTIONS(732), 1,
      anon_sym_PLUS,
    ACTIONS(738), 1,
      anon_sym_PIPE,
    STATE(241), 1,
      sym_comment,
    ACTIONS(736), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(740), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_QMARK_QMARK,
    ACTIONS(734), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14534] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(422), 1,
      sym_keyword_or,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14574] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(744), 1,
      anon_sym_COLON,
    STATE(243), 1,
      sym_comment,
    ACTIONS(490), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(492), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [14602] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      anon_sym_DASH,
    ACTIONS(732), 1,
      anon_sym_PLUS,
    STATE(244), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(736), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(187), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_EQ_EQ,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14634] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    ACTIONS(714), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(720), 1,
      sym_keyword_and,
    STATE(245), 1,
      sym_comment,
    ACTIONS(187), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(704), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(708), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(712), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(706), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14672] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    STATE(246), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(708), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(712), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(706), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14706] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(247), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(704), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(708), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(187), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14736] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      anon_sym_DASH,
    ACTIONS(732), 1,
      anon_sym_PLUS,
    STATE(248), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14766] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(249), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(704), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(187), 11,
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
  [14794] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(710), 1,
      anon_sym_PIPE,
    STATE(250), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(704), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(708), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(187), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14826] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      anon_sym_DASH,
    ACTIONS(732), 1,
      anon_sym_PLUS,
    ACTIONS(738), 1,
      anon_sym_PIPE,
    STATE(251), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(736), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(187), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14860] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 12,
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
  [14888] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      anon_sym_DASH,
    ACTIONS(732), 1,
      anon_sym_PLUS,
    ACTIONS(738), 1,
      anon_sym_PIPE,
    ACTIONS(748), 1,
      sym_keyword_and,
    ACTIONS(750), 1,
      anon_sym_QMARK_QMARK,
    STATE(253), 1,
      sym_comment,
    ACTIONS(187), 2,
      sym_keyword_or,
      anon_sym_DASH_GT,
    ACTIONS(736), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(740), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(734), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14928] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(690), 1,
      sym_keyword_and,
    ACTIONS(692), 1,
      sym_keyword_or,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14968] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(255), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 13,
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
  [14994] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      anon_sym_DASH,
    ACTIONS(732), 1,
      anon_sym_PLUS,
    ACTIONS(738), 1,
      anon_sym_PIPE,
    ACTIONS(750), 1,
      anon_sym_QMARK_QMARK,
    STATE(256), 1,
      sym_comment,
    ACTIONS(736), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(740), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
    ACTIONS(734), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15032] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    STATE(257), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15068] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    STATE(258), 1,
      sym_comment,
    ACTIONS(187), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15106] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(259), 1,
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
  [15131] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(260), 1,
      sym_comment,
    ACTIONS(754), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [15154] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(261), 1,
      sym_comment,
    ACTIONS(756), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [15177] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(262), 1,
      sym_comment,
    ACTIONS(758), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [15200] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(263), 1,
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
  [15225] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(264), 1,
      sym_comment,
    ACTIONS(239), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(488), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [15250] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(760), 1,
      anon_sym_COLON,
    STATE(265), 1,
      sym_comment,
    ACTIONS(492), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(490), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [15277] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(266), 1,
      sym_comment,
    ACTIONS(131), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(133), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [15302] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(267), 1,
      sym_comment,
    ACTIONS(762), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [15325] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(268), 1,
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
  [15350] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(269), 1,
      sym_comment,
    ACTIONS(764), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [15373] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      sym_keyword_and,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(422), 1,
      sym_keyword_or,
    STATE(270), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15410] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(271), 1,
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
  [15435] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(272), 1,
      sym_comment,
    ACTIONS(766), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [15458] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(273), 1,
      sym_comment,
    ACTIONS(514), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(516), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [15483] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(274), 1,
      sym_comment,
    ACTIONS(768), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [15506] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(275), 1,
      sym_comment,
    ACTIONS(770), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [15529] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym_comment,
    ACTIONS(772), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [15552] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      anon_sym_PIPE,
    ACTIONS(748), 1,
      sym_keyword_and,
    ACTIONS(750), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(774), 1,
      sym_keyword_or,
    STATE(277), 1,
      sym_comment,
    ACTIONS(732), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(736), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(740), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(734), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15589] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(278), 1,
      sym_comment,
    ACTIONS(518), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(520), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [15614] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(279), 1,
      sym_comment,
    ACTIONS(776), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [15637] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(338), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(690), 1,
      sym_keyword_and,
    ACTIONS(692), 1,
      sym_keyword_or,
    STATE(280), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(332), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(336), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15674] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(281), 1,
      sym_comment,
    ACTIONS(97), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(99), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [15699] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(282), 1,
      sym_comment,
    ACTIONS(159), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(161), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [15724] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(283), 1,
      sym_comment,
    ACTIONS(221), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(223), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [15749] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(284), 1,
      sym_comment,
    ACTIONS(490), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(492), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [15774] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(285), 1,
      sym_comment,
    ACTIONS(778), 14,
      ts_builtin_sym_end,
      sym_keyword_from,
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
  [15797] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(286), 1,
      sym_comment,
    ACTIONS(780), 13,
      ts_builtin_sym_end,
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
  [15819] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(287), 1,
      sym_comment,
    ACTIONS(782), 13,
      ts_builtin_sym_end,
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
  [15841] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(288), 1,
      sym_comment,
    ACTIONS(492), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(490), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [15865] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym__integer,
    STATE(155), 1,
      sym__double_quote_string,
    STATE(289), 1,
      sym_comment,
    STATE(451), 1,
      sym_literal,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(784), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15905] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(43), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym__integer,
    STATE(155), 1,
      sym__double_quote_string,
    STATE(290), 1,
      sym_comment,
    STATE(520), 1,
      sym_literal,
    STATE(39), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(784), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15945] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(291), 1,
      sym_comment,
    ACTIONS(488), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(239), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [15969] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(292), 1,
      sym_comment,
    ACTIONS(520), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(518), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [15993] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(293), 1,
      sym_comment,
    ACTIONS(682), 13,
      ts_builtin_sym_end,
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
  [16015] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(294), 1,
      sym_comment,
    ACTIONS(786), 13,
      ts_builtin_sym_end,
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
  [16037] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(295), 1,
      sym_comment,
    ACTIONS(788), 13,
      ts_builtin_sym_end,
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
  [16059] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(296), 1,
      sym_comment,
    ACTIONS(790), 13,
      ts_builtin_sym_end,
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
  [16081] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(297), 1,
      sym_comment,
    ACTIONS(516), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(514), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [16105] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(298), 1,
      sym_comment,
    ACTIONS(792), 13,
      ts_builtin_sym_end,
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
  [16127] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(299), 1,
      sym_comment,
    ACTIONS(133), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(131), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [16151] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(300), 1,
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
  [16175] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(301), 1,
      sym_comment,
    ACTIONS(794), 13,
      ts_builtin_sym_end,
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
  [16197] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(302), 1,
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
  [16221] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(303), 1,
      sym_comment,
    ACTIONS(796), 13,
      ts_builtin_sym_end,
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
  [16243] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(304), 1,
      sym_comment,
    ACTIONS(798), 13,
      ts_builtin_sym_end,
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
  [16265] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(408), 1,
      anon_sym_DASH,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 1,
      sym__natural_number,
    ACTIONS(416), 1,
      anon_sym_DOT,
    STATE(291), 1,
      sym__double_quote_string,
    STATE(297), 1,
      sym_literal,
    STATE(302), 1,
      sym__integer,
    STATE(305), 1,
      sym_comment,
    STATE(318), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(800), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [16305] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(306), 1,
      sym_comment,
    ACTIONS(802), 13,
      ts_builtin_sym_end,
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
  [16327] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(307), 1,
      sym_comment,
    ACTIONS(804), 13,
      ts_builtin_sym_end,
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
  [16349] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(308), 1,
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
  [16373] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(309), 1,
      sym_comment,
    ACTIONS(806), 13,
      ts_builtin_sym_end,
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
  [16395] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(810), 1,
      anon_sym_DASH,
    ACTIONS(812), 1,
      anon_sym_DQUOTE,
    ACTIONS(814), 1,
      anon_sym_SQUOTE,
    ACTIONS(816), 1,
      sym__natural_number,
    ACTIONS(818), 1,
      anon_sym_DOT,
    STATE(310), 1,
      sym_comment,
    STATE(399), 1,
      sym__integer,
    STATE(423), 1,
      sym__double_quote_string,
    STATE(428), 1,
      sym_literal,
    STATE(419), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(808), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [16435] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(311), 1,
      sym_comment,
    ACTIONS(820), 13,
      ts_builtin_sym_end,
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
  [16457] = 12,
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
    STATE(185), 1,
      sym_literal,
    STATE(189), 1,
      sym__double_quote_string,
    STATE(192), 1,
      sym__integer,
    STATE(312), 1,
      sym_comment,
    STATE(191), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(822), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [16497] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(376), 1,
      anon_sym_DASH,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      sym__natural_number,
    ACTIONS(384), 1,
      anon_sym_DOT,
    STATE(264), 1,
      sym__double_quote_string,
    STATE(271), 1,
      sym__integer,
    STATE(273), 1,
      sym_literal,
    STATE(313), 1,
      sym_comment,
    STATE(268), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(824), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [16537] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(314), 1,
      sym_comment,
    ACTIONS(826), 13,
      ts_builtin_sym_end,
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
  [16559] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(315), 1,
      sym_comment,
    ACTIONS(828), 13,
      ts_builtin_sym_end,
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
  [16581] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(316), 1,
      sym_comment,
    ACTIONS(830), 13,
      ts_builtin_sym_end,
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
  [16603] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(317), 1,
      sym_comment,
    ACTIONS(832), 13,
      ts_builtin_sym_end,
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
  [16625] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(318), 1,
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
  [16649] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(319), 1,
      sym_comment,
    ACTIONS(834), 13,
      ts_builtin_sym_end,
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
  [16671] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(320), 1,
      sym_comment,
    ACTIONS(836), 13,
      ts_builtin_sym_end,
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
  [16693] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(321), 1,
      sym_comment,
    ACTIONS(838), 13,
      ts_builtin_sym_end,
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
  [16715] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(322), 1,
      sym_comment,
    ACTIONS(840), 13,
      ts_builtin_sym_end,
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
  [16737] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(323), 1,
      sym_comment,
    ACTIONS(459), 13,
      ts_builtin_sym_end,
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
  [16759] = 12,
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
    STATE(155), 1,
      sym__double_quote_string,
    STATE(161), 1,
      sym__integer,
    STATE(163), 1,
      sym_literal,
    STATE(324), 1,
      sym_comment,
    STATE(160), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(842), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [16799] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(325), 1,
      sym_comment,
    ACTIONS(99), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(97), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [16823] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(326), 1,
      sym_comment,
    ACTIONS(161), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(159), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [16847] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(327), 1,
      sym_comment,
    ACTIONS(844), 13,
      ts_builtin_sym_end,
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
  [16869] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(328), 1,
      sym_comment,
    ACTIONS(846), 13,
      ts_builtin_sym_end,
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
  [16891] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(329), 1,
      sym_comment,
    ACTIONS(223), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(221), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [16915] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(330), 1,
      sym_comment,
    ACTIONS(848), 13,
      ts_builtin_sym_end,
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
  [16937] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(331), 1,
      sym_comment,
    ACTIONS(850), 13,
      ts_builtin_sym_end,
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
  [16959] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(332), 1,
      sym_comment,
    ACTIONS(852), 13,
      ts_builtin_sym_end,
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
  [16981] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(333), 1,
      sym_comment,
    ACTIONS(854), 13,
      ts_builtin_sym_end,
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
  [17003] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(334), 1,
      sym_comment,
    ACTIONS(856), 13,
      ts_builtin_sym_end,
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
  [17025] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(335), 1,
      sym_comment,
    ACTIONS(858), 13,
      ts_builtin_sym_end,
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
  [17047] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(336), 1,
      sym_comment,
    STATE(361), 1,
      sym_target,
    ACTIONS(860), 11,
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
  [17070] = 12,
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
    ACTIONS(862), 1,
      ts_builtin_sym_end,
    STATE(158), 1,
      sym_from,
    STATE(337), 1,
      sym_comment,
    STATE(351), 1,
      aux_sym_program_repeat2,
    STATE(352), 1,
      aux_sym_program_repeat1,
    STATE(358), 1,
      sym_prql,
    STATE(367), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [17109] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(864), 1,
      sym_keyword_sort,
    ACTIONS(866), 1,
      sym_keyword_window,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
    STATE(338), 1,
      sym_comment,
    STATE(340), 1,
      aux_sym_group_repeat2,
    STATE(362), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17140] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(864), 1,
      sym_keyword_sort,
    ACTIONS(866), 1,
      sym_keyword_window,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_comment,
    STATE(340), 1,
      aux_sym_group_repeat2,
    STATE(362), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17171] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(872), 1,
      sym_keyword_aggregate,
    ACTIONS(875), 1,
      sym_keyword_sort,
    ACTIONS(878), 1,
      sym_keyword_take,
    ACTIONS(881), 1,
      sym_keyword_window,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
    STATE(340), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(362), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17200] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(864), 1,
      sym_keyword_sort,
    ACTIONS(866), 1,
      sym_keyword_window,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      aux_sym_group_repeat2,
    STATE(341), 1,
      sym_comment,
    STATE(362), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17231] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(864), 1,
      sym_keyword_sort,
    ACTIONS(866), 1,
      sym_keyword_window,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      aux_sym_group_repeat2,
    STATE(342), 1,
      sym_comment,
    STATE(362), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17262] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(864), 1,
      sym_keyword_sort,
    ACTIONS(866), 1,
      sym_keyword_window,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      aux_sym_group_repeat2,
    STATE(343), 1,
      sym_comment,
    STATE(362), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17293] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(9), 1,
      sym_keyword_func,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(862), 1,
      ts_builtin_sym_end,
    STATE(158), 1,
      sym_from,
    STATE(344), 1,
      sym_comment,
    STATE(347), 1,
      aux_sym_program_repeat2,
    STATE(367), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [17323] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(864), 1,
      sym_keyword_sort,
    ACTIONS(866), 1,
      sym_keyword_window,
    STATE(339), 1,
      aux_sym_group_repeat2,
    STATE(345), 1,
      sym_comment,
    STATE(362), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17351] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(864), 1,
      sym_keyword_sort,
    ACTIONS(866), 1,
      sym_keyword_window,
    STATE(338), 1,
      aux_sym_group_repeat2,
    STATE(346), 1,
      sym_comment,
    STATE(362), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17379] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      ts_builtin_sym_end,
    ACTIONS(894), 1,
      sym_keyword_from,
    ACTIONS(897), 1,
      sym_keyword_func,
    ACTIONS(900), 1,
      sym_keyword_let,
    STATE(158), 1,
      sym_from,
    STATE(347), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(367), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [17407] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(864), 1,
      sym_keyword_sort,
    ACTIONS(866), 1,
      sym_keyword_window,
    STATE(343), 1,
      aux_sym_group_repeat2,
    STATE(348), 1,
      sym_comment,
    STATE(362), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17435] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(864), 1,
      sym_keyword_sort,
    ACTIONS(866), 1,
      sym_keyword_window,
    STATE(341), 1,
      aux_sym_group_repeat2,
    STATE(349), 1,
      sym_comment,
    STATE(362), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17463] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      sym_keyword_aggregate,
    ACTIONS(508), 1,
      sym_keyword_take,
    ACTIONS(864), 1,
      sym_keyword_sort,
    ACTIONS(866), 1,
      sym_keyword_window,
    STATE(342), 1,
      aux_sym_group_repeat2,
    STATE(350), 1,
      sym_comment,
    STATE(362), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17491] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(9), 1,
      sym_keyword_func,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(903), 1,
      ts_builtin_sym_end,
    STATE(158), 1,
      sym_from,
    STATE(347), 1,
      aux_sym_program_repeat2,
    STATE(351), 1,
      sym_comment,
    STATE(367), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [17521] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(907), 1,
      sym_keyword_prql,
    STATE(358), 1,
      sym_prql,
    STATE(352), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(905), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [17541] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(353), 1,
      sym_comment,
    STATE(354), 1,
      aux_sym_window_definitions_repeat1,
    STATE(368), 1,
      sym__window_definition,
    STATE(477), 1,
      sym_window_definitions,
    ACTIONS(910), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17562] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(912), 1,
      anon_sym_LPAREN,
    STATE(354), 1,
      sym_comment,
    STATE(355), 1,
      aux_sym_window_definitions_repeat1,
    STATE(368), 1,
      sym__window_definition,
    ACTIONS(910), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17583] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(917), 1,
      anon_sym_LPAREN,
    STATE(368), 1,
      sym__window_definition,
    STATE(355), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(914), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17602] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(356), 1,
      sym_comment,
    ACTIONS(919), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [17616] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(357), 1,
      sym_comment,
    ACTIONS(921), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      anon_sym_RPAREN,
  [17630] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(358), 1,
      sym_comment,
    ACTIONS(923), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
  [17644] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(359), 1,
      sym_comment,
    ACTIONS(925), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
  [17658] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(360), 1,
      sym_comment,
    ACTIONS(927), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
  [17672] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(361), 1,
      sym_comment,
    ACTIONS(929), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
  [17686] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(362), 1,
      sym_comment,
    ACTIONS(931), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [17700] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(933), 1,
      aux_sym__date_token1,
    ACTIONS(935), 1,
      aux_sym__time_token1,
    STATE(32), 1,
      sym__time,
    STATE(221), 1,
      sym__date,
    STATE(363), 1,
      sym_comment,
  [17719] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(937), 1,
      anon_sym_DASH_GT,
    ACTIONS(939), 1,
      sym_identifier,
    STATE(364), 1,
      sym_comment,
    STATE(370), 1,
      aux_sym_function_definition_repeat1,
    STATE(408), 1,
      sym_parameter,
  [17738] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(933), 1,
      aux_sym__date_token1,
    ACTIONS(941), 1,
      aux_sym__time_token1,
    STATE(32), 1,
      sym__time,
    STATE(52), 1,
      sym__date,
    STATE(365), 1,
      sym_comment,
  [17757] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(366), 1,
      sym_comment,
    ACTIONS(943), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [17770] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(367), 1,
      sym_comment,
    ACTIONS(945), 4,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_func,
      sym_keyword_let,
  [17783] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(368), 1,
      sym_comment,
    ACTIONS(947), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17796] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(369), 1,
      sym_comment,
    ACTIONS(949), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [17809] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(951), 1,
      anon_sym_DASH_GT,
    ACTIONS(953), 1,
      sym_identifier,
    STATE(408), 1,
      sym_parameter,
    STATE(370), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [17826] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(371), 1,
      sym_comment,
    ACTIONS(956), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17839] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    ACTIONS(961), 1,
      anon_sym_RBRACK,
    STATE(372), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [17853] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(963), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym__integer,
    STATE(373), 1,
      sym_comment,
  [17869] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(688), 1,
      anon_sym_RBRACK,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    STATE(374), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [17883] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(963), 1,
      anon_sym_DASH,
    STATE(17), 1,
      sym__integer,
    STATE(375), 1,
      sym_comment,
  [17899] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    ACTIONS(970), 1,
      anon_sym_RBRACK,
    STATE(376), 1,
      sym_comment,
    STATE(383), 1,
      aux_sym_group_repeat1,
  [17915] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      anon_sym_RBRACK,
    STATE(377), 1,
      sym_comment,
    STATE(384), 1,
      aux_sym_aggregate_repeat1,
  [17931] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    STATE(378), 2,
      sym_comment,
      aux_sym_switch_repeat2,
  [17945] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(939), 1,
      sym_identifier,
    STATE(364), 1,
      aux_sym_function_definition_repeat1,
    STATE(379), 1,
      sym_comment,
    STATE(408), 1,
      sym_parameter,
  [17961] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    ACTIONS(975), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      sym_comment,
    STATE(401), 1,
      aux_sym_derives_repeat1,
  [17977] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      sym__natural_number,
    ACTIONS(977), 1,
      anon_sym_DASH,
    STATE(20), 1,
      sym__integer,
    STATE(381), 1,
      sym_comment,
  [17993] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(981), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      aux_sym_derives_repeat1,
    STATE(382), 1,
      sym_comment,
  [18009] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    ACTIONS(983), 1,
      anon_sym_COMMA,
    STATE(372), 1,
      aux_sym_group_repeat1,
    STATE(383), 1,
      sym_comment,
  [18025] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(384), 1,
      sym_comment,
    STATE(403), 1,
      aux_sym_aggregate_repeat1,
  [18041] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      sym__natural_number,
    ACTIONS(977), 1,
      anon_sym_DASH,
    STATE(15), 1,
      sym__integer,
    STATE(385), 1,
      sym_comment,
  [18057] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    ACTIONS(987), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      sym_comment,
    STATE(402), 1,
      aux_sym_sorts_repeat1,
  [18073] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    ACTIONS(987), 1,
      anon_sym_COMMA,
    STATE(387), 1,
      sym_comment,
    STATE(400), 1,
      aux_sym_sorts_repeat1,
  [18089] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    ACTIONS(991), 1,
      anon_sym_RBRACK,
    STATE(387), 1,
      aux_sym_sorts_repeat1,
    STATE(388), 1,
      sym_comment,
  [18105] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      sym__natural_number,
    ACTIONS(977), 1,
      anon_sym_DASH,
    STATE(17), 1,
      sym__integer,
    STATE(389), 1,
      sym_comment,
  [18121] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    STATE(372), 1,
      aux_sym_group_repeat1,
    STATE(390), 1,
      sym_comment,
  [18137] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(391), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [18149] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
    STATE(392), 1,
      sym_comment,
    STATE(401), 1,
      aux_sym_derives_repeat1,
  [18165] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      aux_sym_switch_repeat2,
    STATE(393), 1,
      sym_comment,
  [18181] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      aux_sym_conditions_repeat1,
    STATE(394), 1,
      sym_comment,
  [18197] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    ACTIONS(1005), 1,
      anon_sym_RBRACK,
    STATE(390), 1,
      aux_sym_group_repeat1,
    STATE(395), 1,
      sym_comment,
  [18213] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1007), 1,
      sym__natural_number,
    STATE(396), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18227] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym__natural_number,
    ACTIONS(963), 1,
      anon_sym_DASH,
    STATE(20), 1,
      sym__integer,
    STATE(397), 1,
      sym_comment,
  [18243] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(398), 1,
      sym_comment,
    ACTIONS(127), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [18255] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1009), 1,
      anon_sym_DOT,
    STATE(399), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18269] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
    ACTIONS(1014), 1,
      anon_sym_RBRACK,
    STATE(400), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [18283] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
    STATE(401), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [18297] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    STATE(400), 1,
      aux_sym_sorts_repeat1,
    STATE(402), 1,
      sym_comment,
  [18313] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(670), 1,
      anon_sym_RBRACK,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
    STATE(403), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [18327] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1026), 1,
      sym_keyword_from,
    STATE(182), 1,
      sym_from,
    STATE(404), 1,
      sym_comment,
    STATE(436), 1,
      sym_pipeline,
  [18343] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1028), 1,
      anon_sym_COLON,
    STATE(405), 1,
      sym_comment,
    ACTIONS(1030), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18357] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1032), 1,
      sym__natural_number,
    ACTIONS(1034), 1,
      anon_sym_DOT,
    STATE(406), 1,
      sym_comment,
  [18370] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(407), 1,
      sym_comment,
    ACTIONS(670), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18381] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(408), 1,
      sym_comment,
    ACTIONS(1036), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18392] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(409), 1,
      sym_comment,
    ACTIONS(1014), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18403] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(410), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18414] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(411), 1,
      sym_comment,
    ACTIONS(961), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18425] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(412), 1,
      sym_comment,
    ACTIONS(1019), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18436] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(360), 1,
      sym__double_quote_string,
    STATE(413), 1,
      sym_comment,
  [18449] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(414), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18460] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(415), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18471] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(416), 1,
      sym_comment,
    ACTIONS(1038), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18482] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(417), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18493] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1040), 1,
      aux_sym__time_token1,
    STATE(7), 1,
      sym__time,
    STATE(418), 1,
      sym_comment,
  [18506] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(419), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18517] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1042), 1,
      sym__natural_number,
    ACTIONS(1044), 1,
      anon_sym_DOT,
    STATE(420), 1,
      sym_comment,
  [18530] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1046), 1,
      sym_keyword_derive,
    STATE(421), 1,
      sym_comment,
    STATE(510), 1,
      sym_derives,
  [18543] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1048), 1,
      sym__natural_number,
    ACTIONS(1050), 1,
      anon_sym_DOT,
    STATE(422), 1,
      sym_comment,
  [18556] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(423), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18567] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1052), 1,
      sym__natural_number,
    ACTIONS(1054), 1,
      anon_sym_DOT,
    STATE(424), 1,
      sym_comment,
  [18580] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1056), 1,
      aux_sym__time_token1,
    STATE(7), 1,
      sym__time,
    STATE(425), 1,
      sym_comment,
  [18593] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1058), 1,
      sym__natural_number,
    ACTIONS(1060), 1,
      anon_sym_DOT,
    STATE(426), 1,
      sym_comment,
  [18606] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1062), 1,
      sym__natural_number,
    ACTIONS(1064), 1,
      anon_sym_DOT,
    STATE(427), 1,
      sym_comment,
  [18619] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(428), 1,
      sym_comment,
    ACTIONS(1066), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18630] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1064), 1,
      anon_sym_DOT,
    ACTIONS(1068), 1,
      sym__natural_number,
    STATE(429), 1,
      sym_comment,
  [18643] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1070), 1,
      sym_keyword_version,
    ACTIONS(1072), 1,
      sym_keyword_target,
    STATE(430), 1,
      sym_comment,
  [18656] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1074), 1,
      sym__natural_number,
    STATE(431), 1,
      sym_comment,
  [18666] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1076), 1,
      anon_sym_LBRACK,
    STATE(432), 1,
      sym_comment,
  [18676] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1078), 1,
      aux_sym__date_token2,
    STATE(433), 1,
      sym_comment,
  [18686] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      anon_sym_RBRACK,
    STATE(434), 1,
      sym_comment,
  [18696] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1080), 1,
      anon_sym_LPAREN,
    STATE(435), 1,
      sym_comment,
  [18706] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
    STATE(436), 1,
      sym_comment,
  [18716] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1084), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      sym_comment,
  [18726] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1062), 1,
      sym__natural_number,
    STATE(438), 1,
      sym_comment,
  [18736] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1086), 1,
      anon_sym_DASH,
    STATE(439), 1,
      sym_comment,
  [18746] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1005), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_comment,
  [18756] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(991), 1,
      anon_sym_RBRACK,
    STATE(441), 1,
      sym_comment,
  [18766] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_RBRACK,
    STATE(442), 1,
      sym_comment,
  [18776] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      anon_sym_LPAREN,
    STATE(443), 1,
      sym_comment,
  [18786] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      anon_sym_RBRACK,
    STATE(444), 1,
      sym_comment,
  [18796] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(981), 1,
      anon_sym_RBRACK,
    STATE(445), 1,
      sym_comment,
  [18806] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1092), 1,
      aux_sym_comment_token1,
    STATE(446), 1,
      sym_comment,
  [18816] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1094), 1,
      anon_sym_LBRACK,
    STATE(447), 1,
      sym_comment,
  [18826] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1096), 1,
      sym__natural_number,
    STATE(448), 1,
      sym_comment,
  [18836] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1098), 1,
      anon_sym_DQUOTE,
    STATE(449), 1,
      sym_comment,
  [18846] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1100), 1,
      anon_sym_SQUOTE,
    STATE(450), 1,
      sym_comment,
  [18856] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    STATE(451), 1,
      sym_comment,
  [18866] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1104), 1,
      aux_sym__date_token2,
    STATE(452), 1,
      sym_comment,
  [18876] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1106), 1,
      aux_sym__date_token2,
    STATE(453), 1,
      sym_comment,
  [18886] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1108), 1,
      anon_sym_COLON,
    STATE(454), 1,
      sym_comment,
  [18896] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
    STATE(455), 1,
      sym_comment,
  [18906] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1112), 1,
      aux_sym__date_token2,
    STATE(456), 1,
      sym_comment,
  [18916] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1114), 1,
      anon_sym_LPAREN,
    STATE(457), 1,
      sym_comment,
  [18926] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(458), 1,
      sym_comment,
  [18936] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1116), 1,
      anon_sym_LPAREN,
    STATE(459), 1,
      sym_comment,
  [18946] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1118), 1,
      aux_sym__date_token2,
    STATE(460), 1,
      sym_comment,
  [18956] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1120), 1,
      sym_identifier,
    STATE(461), 1,
      sym_comment,
  [18966] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1122), 1,
      anon_sym_DASH,
    STATE(462), 1,
      sym_comment,
  [18976] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1124), 1,
      anon_sym_SQUOTE,
    STATE(463), 1,
      sym_comment,
  [18986] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1126), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(464), 1,
      sym_comment,
  [18996] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_DQUOTE,
    STATE(465), 1,
      sym_comment,
  [19006] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1130), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(466), 1,
      sym_comment,
  [19016] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1132), 1,
      anon_sym_DQUOTE,
    STATE(467), 1,
      sym_comment,
  [19026] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      aux_sym__date_token2,
    STATE(468), 1,
      sym_comment,
  [19036] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1136), 1,
      anon_sym_DQUOTE,
    STATE(469), 1,
      sym_comment,
  [19046] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1138), 1,
      anon_sym_COLON,
    STATE(470), 1,
      sym_comment,
  [19056] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1140), 1,
      sym__natural_number,
    STATE(471), 1,
      sym_comment,
  [19066] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1007), 1,
      sym__natural_number,
    STATE(472), 1,
      sym_comment,
  [19076] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1142), 1,
      anon_sym_DQUOTE,
    STATE(473), 1,
      sym_comment,
  [19086] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1144), 1,
      anon_sym_SQUOTE,
    STATE(474), 1,
      sym_comment,
  [19096] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      sym__natural_number,
    STATE(475), 1,
      sym_comment,
  [19106] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1146), 1,
      aux_sym__date_token2,
    STATE(476), 1,
      sym_comment,
  [19116] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1148), 1,
      anon_sym_LPAREN,
    STATE(477), 1,
      sym_comment,
  [19126] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1150), 1,
      sym__natural_number,
    STATE(478), 1,
      sym_comment,
  [19136] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1152), 1,
      sym__natural_number,
    STATE(479), 1,
      sym_comment,
  [19146] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1154), 1,
      anon_sym_DQUOTE,
    STATE(480), 1,
      sym_comment,
  [19156] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1156), 1,
      anon_sym_SQUOTE,
    STATE(481), 1,
      sym_comment,
  [19166] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1158), 1,
      anon_sym_COLON,
    STATE(482), 1,
      sym_comment,
  [19176] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1160), 1,
      anon_sym_COLON,
    STATE(483), 1,
      sym_comment,
  [19186] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1162), 1,
      anon_sym_LPAREN,
    STATE(484), 1,
      sym_comment,
  [19196] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1164), 1,
      sym__natural_number,
    STATE(485), 1,
      sym_comment,
  [19206] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1166), 1,
      sym__natural_number,
    STATE(486), 1,
      sym_comment,
  [19216] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1168), 1,
      anon_sym_DQUOTE,
    STATE(487), 1,
      sym_comment,
  [19226] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1170), 1,
      anon_sym_SQUOTE,
    STATE(488), 1,
      sym_comment,
  [19236] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      anon_sym_RBRACK,
    STATE(489), 1,
      sym_comment,
  [19246] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1174), 1,
      sym__natural_number,
    STATE(490), 1,
      sym_comment,
  [19256] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1176), 1,
      sym__natural_number,
    STATE(491), 1,
      sym_comment,
  [19266] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1178), 1,
      anon_sym_DQUOTE,
    STATE(492), 1,
      sym_comment,
  [19276] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1180), 1,
      anon_sym_SQUOTE,
    STATE(493), 1,
      sym_comment,
  [19286] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1068), 1,
      sym__natural_number,
    STATE(494), 1,
      sym_comment,
  [19296] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1182), 1,
      anon_sym_DQUOTE,
    STATE(495), 1,
      sym_comment,
  [19306] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1184), 1,
      aux_sym__double_quote_string_token1,
    STATE(496), 1,
      sym_comment,
  [19316] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1186), 1,
      aux_sym__literal_string_token1,
    STATE(497), 1,
      sym_comment,
  [19326] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1188), 1,
      anon_sym_EQ,
    STATE(498), 1,
      sym_comment,
  [19336] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(702), 1,
      aux_sym__date_token2,
    STATE(499), 1,
      sym_comment,
  [19346] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1190), 1,
      anon_sym_DOT,
    STATE(500), 1,
      sym_comment,
  [19356] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1192), 1,
      sym__natural_number,
    STATE(501), 1,
      sym_comment,
  [19366] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1194), 1,
      aux_sym__literal_string_token1,
    STATE(502), 1,
      sym_comment,
  [19376] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1196), 1,
      aux_sym__double_quote_string_token1,
    STATE(503), 1,
      sym_comment,
  [19386] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1198), 1,
      aux_sym__double_quote_string_token1,
    STATE(504), 1,
      sym_comment,
  [19396] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1200), 1,
      aux_sym__double_quote_string_token1,
    STATE(505), 1,
      sym_comment,
  [19406] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1202), 1,
      aux_sym__double_quote_string_token1,
    STATE(506), 1,
      sym_comment,
  [19416] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1204), 1,
      aux_sym__double_quote_string_token1,
    STATE(507), 1,
      sym_comment,
  [19426] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1206), 1,
      aux_sym__literal_string_token1,
    STATE(508), 1,
      sym_comment,
  [19436] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1208), 1,
      aux_sym__double_quote_string_token1,
    STATE(509), 1,
      sym_comment,
  [19446] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      sym_comment,
  [19456] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1212), 1,
      aux_sym__double_quote_string_token1,
    STATE(511), 1,
      sym_comment,
  [19466] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1214), 1,
      aux_sym__literal_string_token1,
    STATE(512), 1,
      sym_comment,
  [19476] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1216), 1,
      sym_identifier,
    STATE(513), 1,
      sym_comment,
  [19486] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1218), 1,
      aux_sym__double_quote_string_token1,
    STATE(514), 1,
      sym_comment,
  [19496] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1220), 1,
      aux_sym__literal_string_token1,
    STATE(515), 1,
      sym_comment,
  [19506] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1222), 1,
      aux_sym__double_quote_string_token1,
    STATE(516), 1,
      sym_comment,
  [19516] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1224), 1,
      aux_sym__literal_string_token1,
    STATE(517), 1,
      sym_comment,
  [19526] = 3,
    ACTIONS(1090), 1,
      anon_sym_POUND,
    ACTIONS(1226), 1,
      aux_sym__double_quote_string_token1,
    STATE(518), 1,
      sym_comment,
  [19536] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1228), 1,
      ts_builtin_sym_end,
    STATE(519), 1,
      sym_comment,
  [19546] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    STATE(520), 1,
      sym_comment,
  [19556] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1232), 1,
      sym_identifier,
    STATE(521), 1,
      sym_comment,
  [19566] = 1,
    ACTIONS(1234), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 107,
  [SMALL_STATE(4)] = 211,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 416,
  [SMALL_STATE(7)] = 495,
  [SMALL_STATE(8)] = 557,
  [SMALL_STATE(9)] = 612,
  [SMALL_STATE(10)] = 667,
  [SMALL_STATE(11)] = 719,
  [SMALL_STATE(12)] = 795,
  [SMALL_STATE(13)] = 845,
  [SMALL_STATE(14)] = 897,
  [SMALL_STATE(15)] = 947,
  [SMALL_STATE(16)] = 997,
  [SMALL_STATE(17)] = 1047,
  [SMALL_STATE(18)] = 1097,
  [SMALL_STATE(19)] = 1147,
  [SMALL_STATE(20)] = 1249,
  [SMALL_STATE(21)] = 1299,
  [SMALL_STATE(22)] = 1348,
  [SMALL_STATE(23)] = 1397,
  [SMALL_STATE(24)] = 1446,
  [SMALL_STATE(25)] = 1495,
  [SMALL_STATE(26)] = 1594,
  [SMALL_STATE(27)] = 1643,
  [SMALL_STATE(28)] = 1692,
  [SMALL_STATE(29)] = 1791,
  [SMALL_STATE(30)] = 1842,
  [SMALL_STATE(31)] = 1941,
  [SMALL_STATE(32)] = 2040,
  [SMALL_STATE(33)] = 2089,
  [SMALL_STATE(34)] = 2138,
  [SMALL_STATE(35)] = 2187,
  [SMALL_STATE(36)] = 2236,
  [SMALL_STATE(37)] = 2285,
  [SMALL_STATE(38)] = 2336,
  [SMALL_STATE(39)] = 2385,
  [SMALL_STATE(40)] = 2434,
  [SMALL_STATE(41)] = 2527,
  [SMALL_STATE(42)] = 2620,
  [SMALL_STATE(43)] = 2719,
  [SMALL_STATE(44)] = 2768,
  [SMALL_STATE(45)] = 2817,
  [SMALL_STATE(46)] = 2910,
  [SMALL_STATE(47)] = 3009,
  [SMALL_STATE(48)] = 3110,
  [SMALL_STATE(49)] = 3159,
  [SMALL_STATE(50)] = 3212,
  [SMALL_STATE(51)] = 3261,
  [SMALL_STATE(52)] = 3310,
  [SMALL_STATE(53)] = 3361,
  [SMALL_STATE(54)] = 3454,
  [SMALL_STATE(55)] = 3548,
  [SMALL_STATE(56)] = 3646,
  [SMALL_STATE(57)] = 3744,
  [SMALL_STATE(58)] = 3840,
  [SMALL_STATE(59)] = 3936,
  [SMALL_STATE(60)] = 4032,
  [SMALL_STATE(61)] = 4128,
  [SMALL_STATE(62)] = 4226,
  [SMALL_STATE(63)] = 4322,
  [SMALL_STATE(64)] = 4418,
  [SMALL_STATE(65)] = 4516,
  [SMALL_STATE(66)] = 4611,
  [SMALL_STATE(67)] = 4672,
  [SMALL_STATE(68)] = 4729,
  [SMALL_STATE(69)] = 4782,
  [SMALL_STATE(70)] = 4875,
  [SMALL_STATE(71)] = 4970,
  [SMALL_STATE(72)] = 5063,
  [SMALL_STATE(73)] = 5112,
  [SMALL_STATE(74)] = 5207,
  [SMALL_STATE(75)] = 5302,
  [SMALL_STATE(76)] = 5397,
  [SMALL_STATE(77)] = 5492,
  [SMALL_STATE(78)] = 5585,
  [SMALL_STATE(79)] = 5678,
  [SMALL_STATE(80)] = 5773,
  [SMALL_STATE(81)] = 5864,
  [SMALL_STATE(82)] = 5923,
  [SMALL_STATE(83)] = 5974,
  [SMALL_STATE(84)] = 6067,
  [SMALL_STATE(85)] = 6162,
  [SMALL_STATE(86)] = 6255,
  [SMALL_STATE(87)] = 6345,
  [SMALL_STATE(88)] = 6435,
  [SMALL_STATE(89)] = 6525,
  [SMALL_STATE(90)] = 6615,
  [SMALL_STATE(91)] = 6705,
  [SMALL_STATE(92)] = 6795,
  [SMALL_STATE(93)] = 6881,
  [SMALL_STATE(94)] = 6973,
  [SMALL_STATE(95)] = 7063,
  [SMALL_STATE(96)] = 7155,
  [SMALL_STATE(97)] = 7245,
  [SMALL_STATE(98)] = 7335,
  [SMALL_STATE(99)] = 7425,
  [SMALL_STATE(100)] = 7515,
  [SMALL_STATE(101)] = 7602,
  [SMALL_STATE(102)] = 7673,
  [SMALL_STATE(103)] = 7722,
  [SMALL_STATE(104)] = 7807,
  [SMALL_STATE(105)] = 7892,
  [SMALL_STATE(106)] = 7977,
  [SMALL_STATE(107)] = 8064,
  [SMALL_STATE(108)] = 8146,
  [SMALL_STATE(109)] = 8228,
  [SMALL_STATE(110)] = 8310,
  [SMALL_STATE(111)] = 8392,
  [SMALL_STATE(112)] = 8474,
  [SMALL_STATE(113)] = 8556,
  [SMALL_STATE(114)] = 8638,
  [SMALL_STATE(115)] = 8720,
  [SMALL_STATE(116)] = 8802,
  [SMALL_STATE(117)] = 8884,
  [SMALL_STATE(118)] = 8968,
  [SMALL_STATE(119)] = 9050,
  [SMALL_STATE(120)] = 9132,
  [SMALL_STATE(121)] = 9214,
  [SMALL_STATE(122)] = 9296,
  [SMALL_STATE(123)] = 9378,
  [SMALL_STATE(124)] = 9462,
  [SMALL_STATE(125)] = 9544,
  [SMALL_STATE(126)] = 9626,
  [SMALL_STATE(127)] = 9708,
  [SMALL_STATE(128)] = 9790,
  [SMALL_STATE(129)] = 9872,
  [SMALL_STATE(130)] = 9954,
  [SMALL_STATE(131)] = 10036,
  [SMALL_STATE(132)] = 10118,
  [SMALL_STATE(133)] = 10188,
  [SMALL_STATE(134)] = 10270,
  [SMALL_STATE(135)] = 10352,
  [SMALL_STATE(136)] = 10398,
  [SMALL_STATE(137)] = 10482,
  [SMALL_STATE(138)] = 10566,
  [SMALL_STATE(139)] = 10648,
  [SMALL_STATE(140)] = 10730,
  [SMALL_STATE(141)] = 10814,
  [SMALL_STATE(142)] = 10898,
  [SMALL_STATE(143)] = 10955,
  [SMALL_STATE(144)] = 11012,
  [SMALL_STATE(145)] = 11069,
  [SMALL_STATE(146)] = 11112,
  [SMALL_STATE(147)] = 11176,
  [SMALL_STATE(148)] = 11242,
  [SMALL_STATE(149)] = 11281,
  [SMALL_STATE(150)] = 11336,
  [SMALL_STATE(151)] = 11375,
  [SMALL_STATE(152)] = 11427,
  [SMALL_STATE(153)] = 11490,
  [SMALL_STATE(154)] = 11551,
  [SMALL_STATE(155)] = 11603,
  [SMALL_STATE(156)] = 11637,
  [SMALL_STATE(157)] = 11673,
  [SMALL_STATE(158)] = 11706,
  [SMALL_STATE(159)] = 11759,
  [SMALL_STATE(160)] = 11792,
  [SMALL_STATE(161)] = 11825,
  [SMALL_STATE(162)] = 11858,
  [SMALL_STATE(163)] = 11891,
  [SMALL_STATE(164)] = 11924,
  [SMALL_STATE(165)] = 11957,
  [SMALL_STATE(166)] = 11990,
  [SMALL_STATE(167)] = 12023,
  [SMALL_STATE(168)] = 12056,
  [SMALL_STATE(169)] = 12089,
  [SMALL_STATE(170)] = 12121,
  [SMALL_STATE(171)] = 12169,
  [SMALL_STATE(172)] = 12225,
  [SMALL_STATE(173)] = 12283,
  [SMALL_STATE(174)] = 12315,
  [SMALL_STATE(175)] = 12365,
  [SMALL_STATE(176)] = 12398,
  [SMALL_STATE(177)] = 12445,
  [SMALL_STATE(178)] = 12500,
  [SMALL_STATE(179)] = 12535,
  [SMALL_STATE(180)] = 12588,
  [SMALL_STATE(181)] = 12618,
  [SMALL_STATE(182)] = 12648,
  [SMALL_STATE(183)] = 12698,
  [SMALL_STATE(184)] = 12728,
  [SMALL_STATE(185)] = 12758,
  [SMALL_STATE(186)] = 12788,
  [SMALL_STATE(187)] = 12818,
  [SMALL_STATE(188)] = 12864,
  [SMALL_STATE(189)] = 12894,
  [SMALL_STATE(190)] = 12924,
  [SMALL_STATE(191)] = 12954,
  [SMALL_STATE(192)] = 12984,
  [SMALL_STATE(193)] = 13014,
  [SMALL_STATE(194)] = 13044,
  [SMALL_STATE(195)] = 13089,
  [SMALL_STATE(196)] = 13120,
  [SMALL_STATE(197)] = 13153,
  [SMALL_STATE(198)] = 13180,
  [SMALL_STATE(199)] = 13207,
  [SMALL_STATE(200)] = 13234,
  [SMALL_STATE(201)] = 13261,
  [SMALL_STATE(202)] = 13292,
  [SMALL_STATE(203)] = 13319,
  [SMALL_STATE(204)] = 13346,
  [SMALL_STATE(205)] = 13381,
  [SMALL_STATE(206)] = 13414,
  [SMALL_STATE(207)] = 13441,
  [SMALL_STATE(208)] = 13488,
  [SMALL_STATE(209)] = 13515,
  [SMALL_STATE(210)] = 13542,
  [SMALL_STATE(211)] = 13573,
  [SMALL_STATE(212)] = 13607,
  [SMALL_STATE(213)] = 13635,
  [SMALL_STATE(214)] = 13663,
  [SMALL_STATE(215)] = 13693,
  [SMALL_STATE(216)] = 13721,
  [SMALL_STATE(217)] = 13749,
  [SMALL_STATE(218)] = 13777,
  [SMALL_STATE(219)] = 13807,
  [SMALL_STATE(220)] = 13848,
  [SMALL_STATE(221)] = 13879,
  [SMALL_STATE(222)] = 13908,
  [SMALL_STATE(223)] = 13949,
  [SMALL_STATE(224)] = 13980,
  [SMALL_STATE(225)] = 14007,
  [SMALL_STATE(226)] = 14036,
  [SMALL_STATE(227)] = 14065,
  [SMALL_STATE(228)] = 14094,
  [SMALL_STATE(229)] = 14123,
  [SMALL_STATE(230)] = 14152,
  [SMALL_STATE(231)] = 14192,
  [SMALL_STATE(232)] = 14232,
  [SMALL_STATE(233)] = 14258,
  [SMALL_STATE(234)] = 14284,
  [SMALL_STATE(235)] = 14320,
  [SMALL_STATE(236)] = 14346,
  [SMALL_STATE(237)] = 14374,
  [SMALL_STATE(238)] = 14402,
  [SMALL_STATE(239)] = 14442,
  [SMALL_STATE(240)] = 14470,
  [SMALL_STATE(241)] = 14498,
  [SMALL_STATE(242)] = 14534,
  [SMALL_STATE(243)] = 14574,
  [SMALL_STATE(244)] = 14602,
  [SMALL_STATE(245)] = 14634,
  [SMALL_STATE(246)] = 14672,
  [SMALL_STATE(247)] = 14706,
  [SMALL_STATE(248)] = 14736,
  [SMALL_STATE(249)] = 14766,
  [SMALL_STATE(250)] = 14794,
  [SMALL_STATE(251)] = 14826,
  [SMALL_STATE(252)] = 14860,
  [SMALL_STATE(253)] = 14888,
  [SMALL_STATE(254)] = 14928,
  [SMALL_STATE(255)] = 14968,
  [SMALL_STATE(256)] = 14994,
  [SMALL_STATE(257)] = 15032,
  [SMALL_STATE(258)] = 15068,
  [SMALL_STATE(259)] = 15106,
  [SMALL_STATE(260)] = 15131,
  [SMALL_STATE(261)] = 15154,
  [SMALL_STATE(262)] = 15177,
  [SMALL_STATE(263)] = 15200,
  [SMALL_STATE(264)] = 15225,
  [SMALL_STATE(265)] = 15250,
  [SMALL_STATE(266)] = 15277,
  [SMALL_STATE(267)] = 15302,
  [SMALL_STATE(268)] = 15325,
  [SMALL_STATE(269)] = 15350,
  [SMALL_STATE(270)] = 15373,
  [SMALL_STATE(271)] = 15410,
  [SMALL_STATE(272)] = 15435,
  [SMALL_STATE(273)] = 15458,
  [SMALL_STATE(274)] = 15483,
  [SMALL_STATE(275)] = 15506,
  [SMALL_STATE(276)] = 15529,
  [SMALL_STATE(277)] = 15552,
  [SMALL_STATE(278)] = 15589,
  [SMALL_STATE(279)] = 15614,
  [SMALL_STATE(280)] = 15637,
  [SMALL_STATE(281)] = 15674,
  [SMALL_STATE(282)] = 15699,
  [SMALL_STATE(283)] = 15724,
  [SMALL_STATE(284)] = 15749,
  [SMALL_STATE(285)] = 15774,
  [SMALL_STATE(286)] = 15797,
  [SMALL_STATE(287)] = 15819,
  [SMALL_STATE(288)] = 15841,
  [SMALL_STATE(289)] = 15865,
  [SMALL_STATE(290)] = 15905,
  [SMALL_STATE(291)] = 15945,
  [SMALL_STATE(292)] = 15969,
  [SMALL_STATE(293)] = 15993,
  [SMALL_STATE(294)] = 16015,
  [SMALL_STATE(295)] = 16037,
  [SMALL_STATE(296)] = 16059,
  [SMALL_STATE(297)] = 16081,
  [SMALL_STATE(298)] = 16105,
  [SMALL_STATE(299)] = 16127,
  [SMALL_STATE(300)] = 16151,
  [SMALL_STATE(301)] = 16175,
  [SMALL_STATE(302)] = 16197,
  [SMALL_STATE(303)] = 16221,
  [SMALL_STATE(304)] = 16243,
  [SMALL_STATE(305)] = 16265,
  [SMALL_STATE(306)] = 16305,
  [SMALL_STATE(307)] = 16327,
  [SMALL_STATE(308)] = 16349,
  [SMALL_STATE(309)] = 16373,
  [SMALL_STATE(310)] = 16395,
  [SMALL_STATE(311)] = 16435,
  [SMALL_STATE(312)] = 16457,
  [SMALL_STATE(313)] = 16497,
  [SMALL_STATE(314)] = 16537,
  [SMALL_STATE(315)] = 16559,
  [SMALL_STATE(316)] = 16581,
  [SMALL_STATE(317)] = 16603,
  [SMALL_STATE(318)] = 16625,
  [SMALL_STATE(319)] = 16649,
  [SMALL_STATE(320)] = 16671,
  [SMALL_STATE(321)] = 16693,
  [SMALL_STATE(322)] = 16715,
  [SMALL_STATE(323)] = 16737,
  [SMALL_STATE(324)] = 16759,
  [SMALL_STATE(325)] = 16799,
  [SMALL_STATE(326)] = 16823,
  [SMALL_STATE(327)] = 16847,
  [SMALL_STATE(328)] = 16869,
  [SMALL_STATE(329)] = 16891,
  [SMALL_STATE(330)] = 16915,
  [SMALL_STATE(331)] = 16937,
  [SMALL_STATE(332)] = 16959,
  [SMALL_STATE(333)] = 16981,
  [SMALL_STATE(334)] = 17003,
  [SMALL_STATE(335)] = 17025,
  [SMALL_STATE(336)] = 17047,
  [SMALL_STATE(337)] = 17070,
  [SMALL_STATE(338)] = 17109,
  [SMALL_STATE(339)] = 17140,
  [SMALL_STATE(340)] = 17171,
  [SMALL_STATE(341)] = 17200,
  [SMALL_STATE(342)] = 17231,
  [SMALL_STATE(343)] = 17262,
  [SMALL_STATE(344)] = 17293,
  [SMALL_STATE(345)] = 17323,
  [SMALL_STATE(346)] = 17351,
  [SMALL_STATE(347)] = 17379,
  [SMALL_STATE(348)] = 17407,
  [SMALL_STATE(349)] = 17435,
  [SMALL_STATE(350)] = 17463,
  [SMALL_STATE(351)] = 17491,
  [SMALL_STATE(352)] = 17521,
  [SMALL_STATE(353)] = 17541,
  [SMALL_STATE(354)] = 17562,
  [SMALL_STATE(355)] = 17583,
  [SMALL_STATE(356)] = 17602,
  [SMALL_STATE(357)] = 17616,
  [SMALL_STATE(358)] = 17630,
  [SMALL_STATE(359)] = 17644,
  [SMALL_STATE(360)] = 17658,
  [SMALL_STATE(361)] = 17672,
  [SMALL_STATE(362)] = 17686,
  [SMALL_STATE(363)] = 17700,
  [SMALL_STATE(364)] = 17719,
  [SMALL_STATE(365)] = 17738,
  [SMALL_STATE(366)] = 17757,
  [SMALL_STATE(367)] = 17770,
  [SMALL_STATE(368)] = 17783,
  [SMALL_STATE(369)] = 17796,
  [SMALL_STATE(370)] = 17809,
  [SMALL_STATE(371)] = 17826,
  [SMALL_STATE(372)] = 17839,
  [SMALL_STATE(373)] = 17853,
  [SMALL_STATE(374)] = 17869,
  [SMALL_STATE(375)] = 17883,
  [SMALL_STATE(376)] = 17899,
  [SMALL_STATE(377)] = 17915,
  [SMALL_STATE(378)] = 17931,
  [SMALL_STATE(379)] = 17945,
  [SMALL_STATE(380)] = 17961,
  [SMALL_STATE(381)] = 17977,
  [SMALL_STATE(382)] = 17993,
  [SMALL_STATE(383)] = 18009,
  [SMALL_STATE(384)] = 18025,
  [SMALL_STATE(385)] = 18041,
  [SMALL_STATE(386)] = 18057,
  [SMALL_STATE(387)] = 18073,
  [SMALL_STATE(388)] = 18089,
  [SMALL_STATE(389)] = 18105,
  [SMALL_STATE(390)] = 18121,
  [SMALL_STATE(391)] = 18137,
  [SMALL_STATE(392)] = 18149,
  [SMALL_STATE(393)] = 18165,
  [SMALL_STATE(394)] = 18181,
  [SMALL_STATE(395)] = 18197,
  [SMALL_STATE(396)] = 18213,
  [SMALL_STATE(397)] = 18227,
  [SMALL_STATE(398)] = 18243,
  [SMALL_STATE(399)] = 18255,
  [SMALL_STATE(400)] = 18269,
  [SMALL_STATE(401)] = 18283,
  [SMALL_STATE(402)] = 18297,
  [SMALL_STATE(403)] = 18313,
  [SMALL_STATE(404)] = 18327,
  [SMALL_STATE(405)] = 18343,
  [SMALL_STATE(406)] = 18357,
  [SMALL_STATE(407)] = 18370,
  [SMALL_STATE(408)] = 18381,
  [SMALL_STATE(409)] = 18392,
  [SMALL_STATE(410)] = 18403,
  [SMALL_STATE(411)] = 18414,
  [SMALL_STATE(412)] = 18425,
  [SMALL_STATE(413)] = 18436,
  [SMALL_STATE(414)] = 18449,
  [SMALL_STATE(415)] = 18460,
  [SMALL_STATE(416)] = 18471,
  [SMALL_STATE(417)] = 18482,
  [SMALL_STATE(418)] = 18493,
  [SMALL_STATE(419)] = 18506,
  [SMALL_STATE(420)] = 18517,
  [SMALL_STATE(421)] = 18530,
  [SMALL_STATE(422)] = 18543,
  [SMALL_STATE(423)] = 18556,
  [SMALL_STATE(424)] = 18567,
  [SMALL_STATE(425)] = 18580,
  [SMALL_STATE(426)] = 18593,
  [SMALL_STATE(427)] = 18606,
  [SMALL_STATE(428)] = 18619,
  [SMALL_STATE(429)] = 18630,
  [SMALL_STATE(430)] = 18643,
  [SMALL_STATE(431)] = 18656,
  [SMALL_STATE(432)] = 18666,
  [SMALL_STATE(433)] = 18676,
  [SMALL_STATE(434)] = 18686,
  [SMALL_STATE(435)] = 18696,
  [SMALL_STATE(436)] = 18706,
  [SMALL_STATE(437)] = 18716,
  [SMALL_STATE(438)] = 18726,
  [SMALL_STATE(439)] = 18736,
  [SMALL_STATE(440)] = 18746,
  [SMALL_STATE(441)] = 18756,
  [SMALL_STATE(442)] = 18766,
  [SMALL_STATE(443)] = 18776,
  [SMALL_STATE(444)] = 18786,
  [SMALL_STATE(445)] = 18796,
  [SMALL_STATE(446)] = 18806,
  [SMALL_STATE(447)] = 18816,
  [SMALL_STATE(448)] = 18826,
  [SMALL_STATE(449)] = 18836,
  [SMALL_STATE(450)] = 18846,
  [SMALL_STATE(451)] = 18856,
  [SMALL_STATE(452)] = 18866,
  [SMALL_STATE(453)] = 18876,
  [SMALL_STATE(454)] = 18886,
  [SMALL_STATE(455)] = 18896,
  [SMALL_STATE(456)] = 18906,
  [SMALL_STATE(457)] = 18916,
  [SMALL_STATE(458)] = 18926,
  [SMALL_STATE(459)] = 18936,
  [SMALL_STATE(460)] = 18946,
  [SMALL_STATE(461)] = 18956,
  [SMALL_STATE(462)] = 18966,
  [SMALL_STATE(463)] = 18976,
  [SMALL_STATE(464)] = 18986,
  [SMALL_STATE(465)] = 18996,
  [SMALL_STATE(466)] = 19006,
  [SMALL_STATE(467)] = 19016,
  [SMALL_STATE(468)] = 19026,
  [SMALL_STATE(469)] = 19036,
  [SMALL_STATE(470)] = 19046,
  [SMALL_STATE(471)] = 19056,
  [SMALL_STATE(472)] = 19066,
  [SMALL_STATE(473)] = 19076,
  [SMALL_STATE(474)] = 19086,
  [SMALL_STATE(475)] = 19096,
  [SMALL_STATE(476)] = 19106,
  [SMALL_STATE(477)] = 19116,
  [SMALL_STATE(478)] = 19126,
  [SMALL_STATE(479)] = 19136,
  [SMALL_STATE(480)] = 19146,
  [SMALL_STATE(481)] = 19156,
  [SMALL_STATE(482)] = 19166,
  [SMALL_STATE(483)] = 19176,
  [SMALL_STATE(484)] = 19186,
  [SMALL_STATE(485)] = 19196,
  [SMALL_STATE(486)] = 19206,
  [SMALL_STATE(487)] = 19216,
  [SMALL_STATE(488)] = 19226,
  [SMALL_STATE(489)] = 19236,
  [SMALL_STATE(490)] = 19246,
  [SMALL_STATE(491)] = 19256,
  [SMALL_STATE(492)] = 19266,
  [SMALL_STATE(493)] = 19276,
  [SMALL_STATE(494)] = 19286,
  [SMALL_STATE(495)] = 19296,
  [SMALL_STATE(496)] = 19306,
  [SMALL_STATE(497)] = 19316,
  [SMALL_STATE(498)] = 19326,
  [SMALL_STATE(499)] = 19336,
  [SMALL_STATE(500)] = 19346,
  [SMALL_STATE(501)] = 19356,
  [SMALL_STATE(502)] = 19366,
  [SMALL_STATE(503)] = 19376,
  [SMALL_STATE(504)] = 19386,
  [SMALL_STATE(505)] = 19396,
  [SMALL_STATE(506)] = 19406,
  [SMALL_STATE(507)] = 19416,
  [SMALL_STATE(508)] = 19426,
  [SMALL_STATE(509)] = 19436,
  [SMALL_STATE(510)] = 19446,
  [SMALL_STATE(511)] = 19456,
  [SMALL_STATE(512)] = 19466,
  [SMALL_STATE(513)] = 19476,
  [SMALL_STATE(514)] = 19486,
  [SMALL_STATE(515)] = 19496,
  [SMALL_STATE(516)] = 19506,
  [SMALL_STATE(517)] = 19516,
  [SMALL_STATE(518)] = 19526,
  [SMALL_STATE(519)] = 19536,
  [SMALL_STATE(520)] = 19546,
  [SMALL_STATE(521)] = 19556,
  [SMALL_STATE(522)] = 19566,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 10),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 10),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(39),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(137),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(427),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(509),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(506),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(505),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(504),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(503),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(502),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(18),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(501),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(29),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(365),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 18),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 13),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(160),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(406),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(507),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(497),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(162),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(431),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(156),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(191),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(424),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(516),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(515),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(193),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(485),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(175),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 24),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 24),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 14),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 14),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(103),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(84),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(83),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(432),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(46),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(104),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(57),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(56),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(268),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(426),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(518),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(517),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(259),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(490),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(243),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 25),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(318),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(422),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(514),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(512),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(308),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(478),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(265),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(76),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(25),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(63),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(64),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 20),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 4),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 21),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 23),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 6),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 5),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 26),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 26),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 27),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 27),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_definition, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(432),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(28),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(104),
  [881] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(353),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(99),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(513),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(521),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(430),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [914] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(470),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 11),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 22),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [953] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(405),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [958] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(87),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(136),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [972] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2), SHIFT_REPEAT(95),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(59),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(93),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(5),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [1228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
