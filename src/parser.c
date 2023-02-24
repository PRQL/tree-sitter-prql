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
#define STATE_COUNT 536
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 171
#define ALIAS_COUNT 0
#define TOKEN_COUNT 97
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
  sym_keyword_from_text = 51,
  sym_keyword_format = 52,
  sym_keyword_csv = 53,
  sym_keyword_json = 54,
  anon_sym_EQ = 55,
  anon_sym_LPAREN = 56,
  anon_sym_RPAREN = 57,
  anon_sym_DASH_GT = 58,
  anon_sym_LBRACK = 59,
  anon_sym_COMMA = 60,
  anon_sym_RBRACK = 61,
  anon_sym_DASH = 62,
  anon_sym_PLUS = 63,
  anon_sym_EQ_EQ = 64,
  anon_sym_DQUOTE = 65,
  aux_sym__double_quote_string_token1 = 66,
  aux_sym__inner_triple_quotes_token1 = 67,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 68,
  anon_sym_f_DQUOTE = 69,
  anon_sym_f_DQUOTE_DQUOTE_DQUOTE = 70,
  anon_sym_s_DQUOTE = 71,
  anon_sym_s_DQUOTE_DQUOTE_DQUOTE = 72,
  anon_sym_SQUOTE = 73,
  aux_sym__literal_string_token1 = 74,
  sym__natural_number = 75,
  anon_sym_DOT = 76,
  sym_identifier = 77,
  anon_sym_DOT_DOT = 78,
  anon_sym_STAR = 79,
  anon_sym_SLASH = 80,
  anon_sym_PIPE = 81,
  anon_sym_BANG_EQ = 82,
  anon_sym_GT = 83,
  anon_sym_GT_EQ = 84,
  anon_sym_LT = 85,
  anon_sym_LT_EQ = 86,
  anon_sym_QMARK_QMARK = 87,
  aux_sym__date_token1 = 88,
  aux_sym__date_token2 = 89,
  anon_sym_AT = 90,
  aux_sym__time_token1 = 91,
  anon_sym_T = 92,
  anon_sym_Z = 93,
  anon_sym_POUND = 94,
  aux_sym_comment_token1 = 95,
  sym_bang = 96,
  sym_program = 97,
  sym_prql = 98,
  sym_target = 99,
  sym_pipeline = 100,
  sym_variable = 101,
  sym_function_definition = 102,
  sym_parameter = 103,
  sym__call_parameter = 104,
  sym_function_call = 105,
  sym_from_text = 106,
  sym_transforms = 107,
  sym_from = 108,
  sym_derives = 109,
  sym_filter = 110,
  sym__boolean_expression = 111,
  sym_switch = 112,
  sym_switch_condition = 113,
  sym_aggregate = 114,
  sym_aggregate_operation = 115,
  sym__aggregate_count = 116,
  sym_sorts = 117,
  sym_direction = 118,
  sym_takes = 119,
  sym_window = 120,
  sym_window_definitions = 121,
  sym__window_definition = 122,
  sym_group = 123,
  sym_joins = 124,
  sym__join_definition = 125,
  sym_conditions = 126,
  sym__self_join = 127,
  sym_select = 128,
  sym_table_reference = 129,
  sym_term = 130,
  sym__expression = 131,
  sym_literal = 132,
  sym_f_string = 133,
  sym_s_string = 134,
  sym__double_quote_string = 135,
  aux_sym__inner_triple_quotes = 136,
  sym__triple_quote_string = 137,
  sym__double_f_string = 138,
  sym__triple_f_string = 139,
  sym__double_s_string = 140,
  sym__triple_s_string = 141,
  sym__literal_string = 142,
  sym__integer = 143,
  sym__decimal_number = 144,
  sym_field = 145,
  sym__alias_identifier = 146,
  sym_range = 147,
  sym_assignment = 148,
  sym_binary_expression = 149,
  sym__date = 150,
  sym_date = 151,
  sym__time = 152,
  sym_time = 153,
  sym_timestamp = 154,
  sym_timezone = 155,
  sym_comment = 156,
  aux_sym_program_repeat1 = 157,
  aux_sym_program_repeat2 = 158,
  aux_sym_function_definition_repeat1 = 159,
  aux_sym_function_call_repeat1 = 160,
  aux_sym_transforms_repeat1 = 161,
  aux_sym_derives_repeat1 = 162,
  aux_sym_switch_repeat1 = 163,
  aux_sym_switch_repeat2 = 164,
  aux_sym_aggregate_repeat1 = 165,
  aux_sym_sorts_repeat1 = 166,
  aux_sym_window_definitions_repeat1 = 167,
  aux_sym_group_repeat1 = 168,
  aux_sym_group_repeat2 = 169,
  aux_sym_conditions_repeat1 = 170,
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
  [sym_keyword_from_text] = "keyword_from_text",
  [sym_keyword_format] = "keyword_format",
  [sym_keyword_csv] = "keyword_csv",
  [sym_keyword_json] = "keyword_json",
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
  [aux_sym__inner_triple_quotes_token1] = "_inner_triple_quotes_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_f_DQUOTE] = "f\"",
  [anon_sym_f_DQUOTE_DQUOTE_DQUOTE] = "f\"\"\"",
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
  [sym_from_text] = "from_text",
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
  [aux_sym__inner_triple_quotes] = "_inner_triple_quotes",
  [sym__triple_quote_string] = "literal",
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
  [sym_keyword_from_text] = sym_keyword_from_text,
  [sym_keyword_format] = sym_keyword_format,
  [sym_keyword_csv] = sym_keyword_csv,
  [sym_keyword_json] = sym_keyword_json,
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
  [aux_sym__inner_triple_quotes_token1] = aux_sym__inner_triple_quotes_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_f_DQUOTE] = anon_sym_f_DQUOTE,
  [anon_sym_f_DQUOTE_DQUOTE_DQUOTE] = anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
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
  [sym_from_text] = sym_from_text,
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
  [aux_sym__inner_triple_quotes] = aux_sym__inner_triple_quotes,
  [sym__triple_quote_string] = sym_literal,
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
  [sym_keyword_from_text] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_format] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_csv] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_json] = {
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
  [aux_sym__inner_triple_quotes_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
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
  [sym_from_text] = {
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
  [aux_sym__inner_triple_quotes] = {
    .visible = false,
    .named = false,
  },
  [sym__triple_quote_string] = {
    .visible = true,
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
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 4},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 1},
  [19] = {.index = 27, .length = 3},
  [20] = {.index = 30, .length = 3},
  [21] = {.index = 33, .length = 3},
  [22] = {.index = 36, .length = 3},
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
    {field_name, 1},
  [16] =
    {field_version, 3},
  [17] =
    {field_target, 3},
  [18] =
    {field_alias, 0},
    {field_operation, 2},
    {field_operation, 3},
    {field_operator, 1},
  [22] =
    {field_value, 0, .inherited = true},
  [23] =
    {field_default, 2},
  [24] =
    {field_logic, 4},
    {field_name, 1},
  [26] =
    {field_predicate, 1},
  [27] =
    {field_from, 0},
    {field_operator, 1},
    {field_till, 2},
  [30] =
    {field_left, 1},
    {field_operator, 2},
    {field_right, 3},
  [33] =
    {field_alias, 0},
    {field_operator, 1},
    {field_operator, 3},
  [36] =
    {field_alias, 0},
    {field_operation, 3},
    {field_operator, 1},
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
  [12] = {
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
      if (eof) ADVANCE(403);
      if (lookahead == '!') ADVANCE(757);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '.') ADVANCE(521);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(491);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'G') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'J') ADVANCE(126);
      if (lookahead == 'L') ADVANCE(45);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'N') ADVANCE(161);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'R') ADVANCE(78);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(748);
      if (lookahead == 'V') ADVANCE(60);
      if (lookahead == 'W') ADVANCE(81);
      if (lookahead == 'Z') ADVANCE(750);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(322);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'j') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'p') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'v') ADVANCE(216);
      if (lookahead == 'w') ADVANCE(245);
      if (lookahead == '|') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(398)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'O') ADVANCE(597);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'a') ADVANCE(691);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 't') ADVANCE(703);
      if (lookahead == '|') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(382)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(562);
      if (lookahead == 'D') ADVANCE(558);
      if (lookahead == 'F') ADVANCE(529);
      if (lookahead == 'G') ADVANCE(604);
      if (lookahead == 'J') ADVANCE(595);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'O') ADVANCE(597);
      if (lookahead == 'S') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == 'f') ADVANCE(633);
      if (lookahead == 'g') ADVANCE(707);
      if (lookahead == 'j') ADVANCE(698);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 's') ADVANCE(663);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == '|') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(377)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(562);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'O') ADVANCE(597);
      if (lookahead == 'S') ADVANCE(594);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == 'W') ADVANCE(572);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == 'w') ADVANCE(676);
      if (lookahead == '|') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(381)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 't') ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(385)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(527);
      if (lookahead == 't') ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(378)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == 'A') ADVANCE(625);
      if (lookahead == 'C') ADVANCE(591);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'M') ADVANCE(531);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(607);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'c') ADVANCE(694);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead == 'm') ADVANCE(635);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead == 't') ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(376)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == 'A') ADVANCE(628);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(619);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == 't') ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(379)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == 'A') ADVANCE(628);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(620);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead == 't') ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(391)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(574);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead == 't') ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(380)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == 'A') ADVANCE(563);
      if (lookahead == 'D') ADVANCE(558);
      if (lookahead == 'F') ADVANCE(529);
      if (lookahead == 'G') ADVANCE(604);
      if (lookahead == 'J') ADVANCE(595);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == 'f') ADVANCE(633);
      if (lookahead == 'g') ADVANCE(707);
      if (lookahead == 'j') ADVANCE(698);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(663);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(383)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == 'A') ADVANCE(563);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(594);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == 'W') ADVANCE(572);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == 'w') ADVANCE(676);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(384)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(513);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == 'q') ADVANCE(265);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(279);
      if (lookahead == 'w') ADVANCE(246);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(512);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(514);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(510);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(386)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(176);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(737);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(501);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(494);
      END_STATE();
    case 25:
      if (lookahead == '?') ADVANCE(742);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(135);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'U') ADVANCE(97);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'U') ADVANCE(105);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(163);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(106);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(150);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(112);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(74);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(157);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(467);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(154);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(456);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(119);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(86);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(450);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(418);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(426);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(428);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(410);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(432);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(414);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == 'W') ADVANCE(83);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == 'G') ADVANCE(444);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(146);
      if (lookahead == 'T') ADVANCE(469);
      END_STATE();
    case 67:
      if (lookahead == 'G') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 68:
      if (lookahead == 'G') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(38);
      if (lookahead == 'V') ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == 'G') ADVANCE(462);
      END_STATE();
    case 71:
      if (lookahead == 'G') ADVANCE(464);
      END_STATE();
    case 72:
      if (lookahead == 'G') ADVANCE(140);
      END_STATE();
    case 73:
      if (lookahead == 'G') ADVANCE(63);
      END_STATE();
    case 74:
      if (lookahead == 'G') ADVANCE(51);
      END_STATE();
    case 75:
      if (lookahead == 'G') ADVANCE(33);
      END_STATE();
    case 76:
      if (lookahead == 'H') ADVANCE(430);
      END_STATE();
    case 77:
      if (lookahead == 'H') ADVANCE(149);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(69);
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(166);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(135);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'U') ADVANCE(97);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(155);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(124);
      END_STATE();
    case 89:
      if (lookahead == 'K') ADVANCE(47);
      END_STATE();
    case 90:
      if (lookahead == 'K') ADVANCE(47);
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(143);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(158);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(455);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(465);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(471);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(93);
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(94);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(100);
      if (lookahead == 'W') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(85);
      END_STATE();
    case 101:
      if (lookahead == 'M') ADVANCE(446);
      END_STATE();
    case 102:
      if (lookahead == 'M') ADVANCE(404);
      END_STATE();
    case 103:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(460);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(434);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(422);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(490);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(472);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(70);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(148);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(117);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 118:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 119:
      if (lookahead == 'O') ADVANCE(167);
      END_STATE();
    case 120:
      if (lookahead == 'O') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(164);
      END_STATE();
    case 121:
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 122:
      if (lookahead == 'O') ADVANCE(160);
      END_STATE();
    case 123:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 125:
      if (lookahead == 'O') ADVANCE(84);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(123);
      END_STATE();
    case 127:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 128:
      if (lookahead == 'P') ADVANCE(412);
      END_STATE();
    case 129:
      if (lookahead == 'Q') ADVANCE(95);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(458);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(129);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(452);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(408);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(122);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(57);
      END_STATE();
    case 141:
      if (lookahead == 'S') ADVANCE(463);
      END_STATE();
    case 142:
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 143:
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 144:
      if (lookahead == 'S') ADVANCE(159);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(469);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(453);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(416);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(440);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(454);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(488);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(424);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(473);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(486);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(448);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(64);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 160:
      if (lookahead == 'U') ADVANCE(128);
      END_STATE();
    case 161:
      if (lookahead == 'U') ADVANCE(98);
      END_STATE();
    case 162:
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 163:
      if (lookahead == 'U') ADVANCE(48);
      END_STATE();
    case 164:
      if (lookahead == 'V') ADVANCE(489);
      END_STATE();
    case 165:
      if (lookahead == 'V') ADVANCE(442);
      END_STATE();
    case 166:
      if (lookahead == 'V') ADVANCE(50);
      END_STATE();
    case 167:
      if (lookahead == 'W') ADVANCE(420);
      END_STATE();
    case 168:
      if (lookahead == 'X') ADVANCE(127);
      END_STATE();
    case 169:
      if (lookahead == 'X') ADVANCE(436);
      END_STATE();
    case 170:
      if (lookahead == 'X') ADVANCE(153);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == 'g') ADVANCE(218);
      if (lookahead == 'h') ADVANCE(254);
      if (lookahead == 'm') ADVANCE(334);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(485);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(467);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'g') ADVANCE(444);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 225:
      if (lookahead == 'f') ADVANCE(343);
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 226:
      if (lookahead == 'f') ADVANCE(272);
      END_STATE();
    case 227:
      if (lookahead == 'g') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 228:
      if (lookahead == 'g') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == 'v') ADVANCE(217);
      END_STATE();
    case 229:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 230:
      if (lookahead == 'g') ADVANCE(462);
      END_STATE();
    case 231:
      if (lookahead == 'g') ADVANCE(464);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(313);
      END_STATE();
    case 233:
      if (lookahead == 'g') ADVANCE(328);
      END_STATE();
    case 234:
      if (lookahead == 'g') ADVANCE(220);
      END_STATE();
    case 235:
      if (lookahead == 'g') ADVANCE(203);
      END_STATE();
    case 236:
      if (lookahead == 'g') ADVANCE(330);
      END_STATE();
    case 237:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 238:
      if (lookahead == 'h') ADVANCE(430);
      END_STATE();
    case 239:
      if (lookahead == 'h') ADVANCE(345);
      END_STATE();
    case 240:
      if (lookahead == 'h') ADVANCE(307);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 244:
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 258:
      if (lookahead == 'k') ADVANCE(240);
      END_STATE();
    case 259:
      if (lookahead == 'k') ADVANCE(199);
      END_STATE();
    case 260:
      if (lookahead == 'k') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 261:
      if (lookahead == 'k') ADVANCE(190);
      END_STATE();
    case 262:
      if (lookahead == 'k') ADVANCE(207);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'w') ADVANCE(331);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 279:
      if (lookahead == 'm') ADVANCE(446);
      END_STATE();
    case 280:
      if (lookahead == 'm') ADVANCE(405);
      END_STATE();
    case 281:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 282:
      if (lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 283:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 284:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(490);
      END_STATE();
    case 287:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == 'q') ADVANCE(277);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 310:
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 311:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 312:
      if (lookahead == 'p') ADVANCE(412);
      END_STATE();
    case 313:
      if (lookahead == 'q') ADVANCE(365);
      END_STATE();
    case 314:
      if (lookahead == 'q') ADVANCE(268);
      END_STATE();
    case 315:
      if (lookahead == 'q') ADVANCE(269);
      END_STATE();
    case 316:
      if (lookahead == 'q') ADVANCE(270);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 331:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(482);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == 'y') ADVANCE(341);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 343:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 347:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 359:
      if (lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 360:
      if (lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 361:
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 362:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 363:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 364:
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 365:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 366:
      if (lookahead == 'v') ADVANCE(489);
      END_STATE();
    case 367:
      if (lookahead == 'v') ADVANCE(442);
      END_STATE();
    case 368:
      if (lookahead == 'v') ADVANCE(202);
      END_STATE();
    case 369:
      if (lookahead == 'v') ADVANCE(204);
      END_STATE();
    case 370:
      if (lookahead == 'w') ADVANCE(420);
      END_STATE();
    case 371:
      if (lookahead == 'w') ADVANCE(226);
      END_STATE();
    case 372:
      if (lookahead == 'x') ADVANCE(311);
      END_STATE();
    case 373:
      if (lookahead == 'x') ADVANCE(436);
      END_STATE();
    case 374:
      if (lookahead == 'x') ADVANCE(349);
      END_STATE();
    case 375:
      if (lookahead == 'y') ADVANCE(476);
      END_STATE();
    case 376:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(376)
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == 'A') ADVANCE(625);
      if (lookahead == 'C') ADVANCE(591);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'M') ADVANCE(531);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(607);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'c') ADVANCE(694);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead == 'm') ADVANCE(635);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead == 't') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 377:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(377)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(562);
      if (lookahead == 'D') ADVANCE(558);
      if (lookahead == 'F') ADVANCE(529);
      if (lookahead == 'G') ADVANCE(604);
      if (lookahead == 'J') ADVANCE(595);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'O') ADVANCE(597);
      if (lookahead == 'S') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == 'f') ADVANCE(633);
      if (lookahead == 'g') ADVANCE(707);
      if (lookahead == 'j') ADVANCE(698);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 's') ADVANCE(663);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == '|') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 378:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(378)
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(527);
      if (lookahead == 't') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 379:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(379)
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == 'A') ADVANCE(628);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(619);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == 't') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 380:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(380)
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(574);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead == 't') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 381:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(381)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(562);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'O') ADVANCE(597);
      if (lookahead == 'S') ADVANCE(594);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == 'W') ADVANCE(572);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == 'w') ADVANCE(676);
      if (lookahead == '|') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 382:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(382)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(588);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'O') ADVANCE(597);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'a') ADVANCE(691);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 't') ADVANCE(703);
      if (lookahead == '|') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 383:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(383)
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == 'A') ADVANCE(563);
      if (lookahead == 'D') ADVANCE(558);
      if (lookahead == 'F') ADVANCE(529);
      if (lookahead == 'G') ADVANCE(604);
      if (lookahead == 'J') ADVANCE(595);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == 'f') ADVANCE(633);
      if (lookahead == 'g') ADVANCE(707);
      if (lookahead == 'j') ADVANCE(698);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(663);
      if (lookahead == 't') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 384:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(384)
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == 'A') ADVANCE(563);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(594);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == 'W') ADVANCE(572);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == 'w') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 385:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(385)
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 't') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 386:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(386)
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == ':') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 387:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(508);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead != 0) ADVANCE(506);
      END_STATE();
    case 388:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 389:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(509);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead != 0) ADVANCE(506);
      END_STATE();
    case 390:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      if (lookahead == '#') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      END_STATE();
    case 391:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(391)
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == 'A') ADVANCE(628);
      if (lookahead == 'F') ADVANCE(530);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(620);
      if (lookahead == 'T') ADVANCE(600);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead == 'f') ADVANCE(522);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead == 't') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 392:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(747);
      END_STATE();
    case 393:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(743);
      END_STATE();
    case 394:
      if (eof) ADVANCE(403);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(491);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'G') ADVANCE(134);
      if (lookahead == 'J') ADVANCE(125);
      if (lookahead == 'L') ADVANCE(65);
      if (lookahead == 'N') ADVANCE(161);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'R') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'V') ADVANCE(60);
      if (lookahead == 'W') ADVANCE(81);
      if (lookahead == 'Z') ADVANCE(750);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 'g') ADVANCE(322);
      if (lookahead == 'j') ADVANCE(309);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'p') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'v') ADVANCE(216);
      if (lookahead == 'w') ADVANCE(245);
      if (lookahead == '|') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(401)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 395:
      if (eof) ADVANCE(403);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(562);
      if (lookahead == 'D') ADVANCE(558);
      if (lookahead == 'F') ADVANCE(528);
      if (lookahead == 'G') ADVANCE(604);
      if (lookahead == 'J') ADVANCE(595);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'O') ADVANCE(597);
      if (lookahead == 'S') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == 'f') ADVANCE(632);
      if (lookahead == 'g') ADVANCE(707);
      if (lookahead == 'j') ADVANCE(698);
      if (lookahead == 'l') ADVANCE(661);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 's') ADVANCE(663);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == '|') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(399)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 396:
      if (eof) ADVANCE(403);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '.') ADVANCE(521);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(491);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead == 'F') ADVANCE(80);
      if (lookahead == 'G') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'J') ADVANCE(125);
      if (lookahead == 'L') ADVANCE(45);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(78);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(749);
      if (lookahead == 'W') ADVANCE(81);
      if (lookahead == 'Z') ADVANCE(750);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'g') ADVANCE(322);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == 'j') ADVANCE(309);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(245);
      if (lookahead == '|') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(400)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 397:
      if (eof) ADVANCE(403);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == 'A') ADVANCE(563);
      if (lookahead == 'D') ADVANCE(558);
      if (lookahead == 'F') ADVANCE(528);
      if (lookahead == 'G') ADVANCE(604);
      if (lookahead == 'J') ADVANCE(595);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == 'f') ADVANCE(632);
      if (lookahead == 'g') ADVANCE(707);
      if (lookahead == 'j') ADVANCE(698);
      if (lookahead == 'l') ADVANCE(661);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(663);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(402)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 398:
      if (eof) ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(398)
      if (lookahead == '!') ADVANCE(757);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '.') ADVANCE(521);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(491);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == '@') ADVANCE(746);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'C') ADVANCE(120);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'G') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'J') ADVANCE(126);
      if (lookahead == 'L') ADVANCE(45);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'N') ADVANCE(161);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'R') ADVANCE(78);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(748);
      if (lookahead == 'V') ADVANCE(60);
      if (lookahead == 'W') ADVANCE(81);
      if (lookahead == 'Z') ADVANCE(750);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(322);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'j') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'p') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'v') ADVANCE(216);
      if (lookahead == 'w') ADVANCE(245);
      if (lookahead == '|') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 399:
      if (eof) ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(399)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(562);
      if (lookahead == 'D') ADVANCE(558);
      if (lookahead == 'F') ADVANCE(528);
      if (lookahead == 'G') ADVANCE(604);
      if (lookahead == 'J') ADVANCE(595);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'O') ADVANCE(597);
      if (lookahead == 'S') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == 'f') ADVANCE(632);
      if (lookahead == 'g') ADVANCE(707);
      if (lookahead == 'j') ADVANCE(698);
      if (lookahead == 'l') ADVANCE(661);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 'o') ADVANCE(701);
      if (lookahead == 's') ADVANCE(663);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == '|') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 400:
      if (eof) ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(400)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '.') ADVANCE(521);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(491);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead == 'F') ADVANCE(80);
      if (lookahead == 'G') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'J') ADVANCE(125);
      if (lookahead == 'L') ADVANCE(45);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(78);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(749);
      if (lookahead == 'W') ADVANCE(81);
      if (lookahead == 'Z') ADVANCE(750);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'g') ADVANCE(322);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == 'j') ADVANCE(309);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(245);
      if (lookahead == '|') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 401:
      if (eof) ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(401)
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == '(') ADVANCE(492);
      if (lookahead == ')') ADVANCE(493);
      if (lookahead == '*') ADVANCE(734);
      if (lookahead == '+') ADVANCE(500);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(499);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '/') ADVANCE(735);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == '<') ADVANCE(740);
      if (lookahead == '=') ADVANCE(491);
      if (lookahead == '>') ADVANCE(738);
      if (lookahead == '?') ADVANCE(25);
      if (lookahead == 'A') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(168);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'G') ADVANCE(134);
      if (lookahead == 'J') ADVANCE(125);
      if (lookahead == 'L') ADVANCE(65);
      if (lookahead == 'N') ADVANCE(161);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead == 'R') ADVANCE(118);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'V') ADVANCE(60);
      if (lookahead == 'W') ADVANCE(81);
      if (lookahead == 'Z') ADVANCE(750);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == ']') ADVANCE(497);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == 'g') ADVANCE(322);
      if (lookahead == 'j') ADVANCE(309);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 'p') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(299);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'v') ADVANCE(216);
      if (lookahead == 'w') ADVANCE(245);
      if (lookahead == '|') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 402:
      if (eof) ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(402)
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '\'') ADVANCE(515);
      if (lookahead == ',') ADVANCE(496);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == ':') ADVANCE(474);
      if (lookahead == 'A') ADVANCE(563);
      if (lookahead == 'D') ADVANCE(558);
      if (lookahead == 'F') ADVANCE(528);
      if (lookahead == 'G') ADVANCE(604);
      if (lookahead == 'J') ADVANCE(595);
      if (lookahead == 'L') ADVANCE(557);
      if (lookahead == 'N') ADVANCE(623);
      if (lookahead == 'S') ADVANCE(559);
      if (lookahead == 'T') ADVANCE(533);
      if (lookahead == '[') ADVANCE(495);
      if (lookahead == 'a') ADVANCE(668);
      if (lookahead == 'd') ADVANCE(662);
      if (lookahead == 'f') ADVANCE(632);
      if (lookahead == 'g') ADVANCE(707);
      if (lookahead == 'j') ADVANCE(698);
      if (lookahead == 'l') ADVANCE(661);
      if (lookahead == 'n') ADVANCE(723);
      if (lookahead == 's') ADVANCE(663);
      if (lookahead == 't') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(156);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(353);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_keyword_window);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(193);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_keyword_from_text);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_keyword_from_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_keyword_format);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_keyword_csv);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_keyword_json);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(501);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(494);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(753);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(505);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(504);
      if (lookahead == '#') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(505);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '"') ADVANCE(16);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(508);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead != 0) ADVANCE(506);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(509);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead != 0) ADVANCE(506);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(518);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(517);
      if (lookahead == '#') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(518);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(733);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == 'a') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(513);
      if (lookahead == 'i') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(513);
      if (lookahead == 't') ADVANCE(645);
      if (lookahead == 'u') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(513);
      if (lookahead == 'u') ADVANCE(684);
      if (lookahead == 'w') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(513);
      if (lookahead == 'u') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(576);
      if (lookahead == 'I') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(592);
      if (lookahead == 'U') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(576);
      if (lookahead == 'I') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(630);
      if (lookahead == 'I') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(575);
      if (lookahead == 'R') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(599);
      if (lookahead == 'G') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(580);
      if (lookahead == 'O') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(566);
      if (lookahead == 'N') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(541);
      if (lookahead == 'U') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(581);
      if (lookahead == 'W') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == 'i') ADVANCE(682);
      if (lookahead == 'r') ADVANCE(695);
      if (lookahead == 'u') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == 'i') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == 'i') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == 'r') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead == 'g') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead == 'o') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(670);
      if (lookahead == 'n') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(732);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(739);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(741);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(744);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(163);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(89);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(505);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(518);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(756);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(737);
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
  [6] = {.lex_state = 395},
  [7] = {.lex_state = 396},
  [8] = {.lex_state = 394},
  [9] = {.lex_state = 394},
  [10] = {.lex_state = 394},
  [11] = {.lex_state = 394},
  [12] = {.lex_state = 394},
  [13] = {.lex_state = 396},
  [14] = {.lex_state = 396},
  [15] = {.lex_state = 394},
  [16] = {.lex_state = 396},
  [17] = {.lex_state = 396},
  [18] = {.lex_state = 396},
  [19] = {.lex_state = 394},
  [20] = {.lex_state = 396},
  [21] = {.lex_state = 394},
  [22] = {.lex_state = 396},
  [23] = {.lex_state = 396},
  [24] = {.lex_state = 396},
  [25] = {.lex_state = 396},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 396},
  [28] = {.lex_state = 396},
  [29] = {.lex_state = 396},
  [30] = {.lex_state = 396},
  [31] = {.lex_state = 396},
  [32] = {.lex_state = 396},
  [33] = {.lex_state = 396},
  [34] = {.lex_state = 396},
  [35] = {.lex_state = 394},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 396},
  [38] = {.lex_state = 396},
  [39] = {.lex_state = 396},
  [40] = {.lex_state = 396},
  [41] = {.lex_state = 396},
  [42] = {.lex_state = 396},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 396},
  [55] = {.lex_state = 396},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 396},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 396},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 396},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 396},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
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
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 394},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 396},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 3},
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
  [125] = {.lex_state = 396},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 396},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 396},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 396},
  [146] = {.lex_state = 397},
  [147] = {.lex_state = 397},
  [148] = {.lex_state = 396},
  [149] = {.lex_state = 396},
  [150] = {.lex_state = 396},
  [151] = {.lex_state = 396},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 396},
  [155] = {.lex_state = 397},
  [156] = {.lex_state = 397},
  [157] = {.lex_state = 397},
  [158] = {.lex_state = 397},
  [159] = {.lex_state = 397},
  [160] = {.lex_state = 397},
  [161] = {.lex_state = 397},
  [162] = {.lex_state = 397},
  [163] = {.lex_state = 397},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 397},
  [167] = {.lex_state = 397},
  [168] = {.lex_state = 397},
  [169] = {.lex_state = 397},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 396},
  [174] = {.lex_state = 396},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 396},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 396},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 396},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 396},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 396},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 396},
  [209] = {.lex_state = 396},
  [210] = {.lex_state = 396},
  [211] = {.lex_state = 396},
  [212] = {.lex_state = 396},
  [213] = {.lex_state = 396},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 396},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 396},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 396},
  [222] = {.lex_state = 396},
  [223] = {.lex_state = 394},
  [224] = {.lex_state = 396},
  [225] = {.lex_state = 396},
  [226] = {.lex_state = 396},
  [227] = {.lex_state = 396},
  [228] = {.lex_state = 396},
  [229] = {.lex_state = 396},
  [230] = {.lex_state = 396},
  [231] = {.lex_state = 396},
  [232] = {.lex_state = 396},
  [233] = {.lex_state = 396},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 396},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 396},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 396},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 396},
  [246] = {.lex_state = 396},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 396},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 396},
  [251] = {.lex_state = 396},
  [252] = {.lex_state = 396},
  [253] = {.lex_state = 396},
  [254] = {.lex_state = 396},
  [255] = {.lex_state = 396},
  [256] = {.lex_state = 396},
  [257] = {.lex_state = 396},
  [258] = {.lex_state = 396},
  [259] = {.lex_state = 396},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 396},
  [262] = {.lex_state = 396},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 396},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 396},
  [269] = {.lex_state = 396},
  [270] = {.lex_state = 396},
  [271] = {.lex_state = 11},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 396},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 396},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 11},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 11},
  [293] = {.lex_state = 11},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 11},
  [299] = {.lex_state = 11},
  [300] = {.lex_state = 11},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 11},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 11},
  [308] = {.lex_state = 396},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 11},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 11},
  [321] = {.lex_state = 11},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 394},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 394},
  [326] = {.lex_state = 394},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 4},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 394},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 394},
  [338] = {.lex_state = 394},
  [339] = {.lex_state = 394},
  [340] = {.lex_state = 4},
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
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 18},
  [372] = {.lex_state = 18},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 18},
  [375] = {.lex_state = 396},
  [376] = {.lex_state = 18},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 6},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 387},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 396},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 6},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 6},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 387},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 18},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 18},
  [398] = {.lex_state = 6},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 18},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 6},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 18},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 19},
  [410] = {.lex_state = 387},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 18},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 6},
  [416] = {.lex_state = 387},
  [417] = {.lex_state = 18},
  [418] = {.lex_state = 6},
  [419] = {.lex_state = 389},
  [420] = {.lex_state = 6},
  [421] = {.lex_state = 387},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 6},
  [424] = {.lex_state = 394},
  [425] = {.lex_state = 18},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 18},
  [428] = {.lex_state = 18},
  [429] = {.lex_state = 18},
  [430] = {.lex_state = 6},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 18},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 18},
  [435] = {.lex_state = 18},
  [436] = {.lex_state = 6},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 389},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 6},
  [443] = {.lex_state = 389},
  [444] = {.lex_state = 18},
  [445] = {.lex_state = 18},
  [446] = {.lex_state = 396},
  [447] = {.lex_state = 6},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 6},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 20},
  [455] = {.lex_state = 755},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 6},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 6},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 6},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 18},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 20},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 20},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 6},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 20},
  [482] = {.lex_state = 20},
  [483] = {.lex_state = 20},
  [484] = {.lex_state = 6},
  [485] = {.lex_state = 6},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 6},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 20},
  [498] = {.lex_state = 6},
  [499] = {.lex_state = 6},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 6},
  [504] = {.lex_state = 6},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 503},
  [510] = {.lex_state = 516},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 6},
  [513] = {.lex_state = 6},
  [514] = {.lex_state = 516},
  [515] = {.lex_state = 6},
  [516] = {.lex_state = 503},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 503},
  [519] = {.lex_state = 503},
  [520] = {.lex_state = 503},
  [521] = {.lex_state = 516},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 18},
  [524] = {.lex_state = 503},
  [525] = {.lex_state = 516},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 503},
  [528] = {.lex_state = 516},
  [529] = {.lex_state = 503},
  [530] = {.lex_state = 516},
  [531] = {.lex_state = 503},
  [532] = {.lex_state = 20},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 18},
  [535] = {(TSStateId)(-1)},
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
    [sym_keyword_from_text] = ACTIONS(1),
    [sym_keyword_format] = ACTIONS(1),
    [sym_keyword_csv] = ACTIONS(1),
    [sym_keyword_json] = ACTIONS(1),
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
    [sym_program] = STATE(526),
    [sym_prql] = STATE(364),
    [sym_pipeline] = STATE(370),
    [sym_variable] = STATE(370),
    [sym_function_definition] = STATE(370),
    [sym_from_text] = STATE(165),
    [sym_from] = STATE(165),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(273),
    [aux_sym_program_repeat2] = STATE(343),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_keyword_from] = ACTIONS(7),
    [sym_keyword_func] = ACTIONS(9),
    [sym_keyword_let] = ACTIONS(11),
    [sym_keyword_prql] = ACTIONS(13),
    [sym_keyword_from_text] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
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
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(2), 1,
      sym_comment,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(208), 1,
      sym_binary_expression,
    STATE(261), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(385), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(19), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(20), 7,
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
    ACTIONS(21), 1,
      sym_keyword_count,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_comment,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(212), 1,
      sym_binary_expression,
    STATE(261), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(431), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(19), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(20), 7,
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
    ACTIONS(21), 1,
      sym_keyword_count,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(212), 1,
      sym_binary_expression,
    STATE(261), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(431), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(19), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(20), 7,
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
    ACTIONS(21), 1,
      sym_keyword_count,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(5), 1,
      sym_comment,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(212), 1,
      sym_binary_expression,
    STATE(261), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(431), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(19), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(20), 7,
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
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      sym__natural_number,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(6), 1,
      sym_comment,
    STATE(147), 1,
      aux_sym_function_call_repeat1,
    STATE(156), 1,
      sym__double_quote_string,
    STATE(157), 1,
      sym__call_parameter,
    STATE(161), 1,
      sym__integer,
    STATE(168), 1,
      sym_literal,
    STATE(166), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(59), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(55), 11,
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
    ACTIONS(57), 16,
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
      sym_keyword_from_text,
      anon_sym_GT,
      anon_sym_LT,
  [496] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_PLUS,
    ACTIONS(81), 1,
      anon_sym_Z,
    STATE(7), 1,
      sym_comment,
    STATE(37), 1,
      sym_timezone,
    STATE(483), 1,
      sym_direction,
    ACTIONS(75), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [559] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      anon_sym_DOT,
    STATE(8), 1,
      sym_comment,
    ACTIONS(85), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [615] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_comment,
    ACTIONS(93), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [671] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(101), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 35,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [722] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(105), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 35,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [773] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(109), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 35,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [824] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(113), 6,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(111), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [875] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(85), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 35,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [926] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_comment,
    ACTIONS(117), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [979] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(123), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 35,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1030] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      sym__natural_number,
    STATE(17), 1,
      sym_comment,
    ACTIONS(127), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1083] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(117), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 35,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1134] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      anon_sym_DOT,
    STATE(19), 1,
      sym_comment,
    ACTIONS(57), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1186] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(135), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1236] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_DASH_GT,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(21), 1,
      sym_comment,
    ACTIONS(135), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1290] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(143), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1340] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(147), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1390] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(151), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1440] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(155), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1490] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      sym__natural_number,
    ACTIONS(167), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      sym_identifier,
    STATE(26), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_function_call_repeat1,
    STATE(181), 1,
      sym_literal,
    STATE(186), 1,
      sym__integer,
    STATE(195), 1,
      sym__double_quote_string,
    STATE(203), 1,
      sym__call_parameter,
    STATE(191), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(157), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(55), 11,
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
    ACTIONS(57), 12,
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
  [1566] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(173), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(171), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1616] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(177), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(175), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1666] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(181), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1716] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(185), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1766] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(189), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1816] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(193), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(191), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1866] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(197), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(195), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1916] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(201), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(199), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [1966] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(35), 1,
      sym_comment,
    ACTIONS(185), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(183), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [2018] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      anon_sym_PLUS,
    STATE(35), 1,
      sym__integer,
    STATE(36), 1,
      sym_comment,
    STATE(89), 1,
      sym_direction,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(386), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2120] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(215), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(213), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [2170] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      anon_sym_T,
    STATE(38), 1,
      sym_comment,
    ACTIONS(219), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(217), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [2222] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(225), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(223), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [2272] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(229), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(227), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [2322] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(233), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(231), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [2372] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(127), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [2422] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      sym_keyword_switch,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(43), 1,
      sym_comment,
    STATE(141), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    ACTIONS(237), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(204), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2515] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      sym_keyword_switch,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(44), 1,
      sym_comment,
    STATE(141), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    ACTIONS(237), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(204), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2608] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      sym_keyword_switch,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      sym_identifier,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(45), 1,
      sym_comment,
    STATE(141), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    ACTIONS(237), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(204), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2701] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      anon_sym_PLUS,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(46), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(97), 1,
      sym_direction,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(433), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2800] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      sym_keyword_switch,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_identifier,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(47), 1,
      sym_comment,
    STATE(141), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    ACTIONS(237), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(204), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2893] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(48), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_switch_repeat1,
    STATE(218), 1,
      sym_switch_condition,
    STATE(252), 1,
      sym_literal,
    STATE(253), 1,
      sym_binary_expression,
    STATE(275), 1,
      sym__expression,
    STATE(394), 1,
      aux_sym_switch_repeat2,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2994] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      anon_sym_PLUS,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(49), 1,
      sym_comment,
    STATE(95), 1,
      sym_direction,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(148), 1,
      sym__expression,
    STATE(187), 1,
      sym_assignment,
    STATE(244), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3093] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      anon_sym_PLUS,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(50), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(97), 1,
      sym_direction,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(433), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3192] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      anon_sym_PLUS,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(51), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym_direction,
    STATE(154), 1,
      sym__expression,
    STATE(187), 1,
      sym_assignment,
    STATE(244), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3291] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      anon_sym_PLUS,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(52), 1,
      sym_comment,
    STATE(91), 1,
      sym_direction,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(180), 1,
      sym__expression,
    STATE(187), 1,
      sym_assignment,
    STATE(244), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3390] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      anon_sym_PLUS,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(53), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(97), 1,
      sym_direction,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(433), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3489] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(181), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [3539] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    STATE(55), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(181), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 28,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [3593] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(56), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(390), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3689] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(48), 1,
      aux_sym_switch_repeat1,
    STATE(57), 1,
      sym_comment,
    STATE(218), 1,
      sym_switch_condition,
    STATE(252), 1,
      sym_literal,
    STATE(253), 1,
      sym_binary_expression,
    STATE(275), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3787] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      anon_sym_PLUS,
    STATE(35), 1,
      sym__integer,
    STATE(58), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(97), 1,
      sym_direction,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(433), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3883] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(59), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(383), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3979] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(60), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(206), 1,
      sym_binary_expression,
    STATE(396), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4077] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(61), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(148), 1,
      sym__expression,
    STATE(149), 1,
      sym_field,
    STATE(187), 1,
      sym_assignment,
    STATE(294), 1,
      sym_table_reference,
    STATE(297), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4175] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(287), 1,
      sym_keyword_side,
    STATE(35), 1,
      sym__integer,
    STATE(62), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(99), 1,
      sym__join_definition,
    STATE(148), 1,
      sym__expression,
    STATE(187), 1,
      sym_assignment,
    STATE(220), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4271] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(181), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(179), 24,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_QMARK_QMARK,
  [4329] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      anon_sym_DASH,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(307), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(310), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(313), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(316), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(322), 1,
      sym__natural_number,
    ACTIONS(325), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(218), 1,
      sym_switch_condition,
    STATE(252), 1,
      sym_literal,
    STATE(253), 1,
      sym_binary_expression,
    STATE(275), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(64), 2,
      sym_comment,
      aux_sym_switch_repeat1,
    ACTIONS(293), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4423] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(181), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 29,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
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
  [4475] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(66), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(149), 1,
      sym_field,
    STATE(154), 1,
      sym__expression,
    STATE(187), 1,
      sym_assignment,
    STATE(294), 1,
      sym_table_reference,
    STATE(297), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4573] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(287), 1,
      sym_keyword_side,
    STATE(35), 1,
      sym__integer,
    STATE(67), 1,
      sym_comment,
    STATE(87), 1,
      sym__join_definition,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(187), 1,
      sym_assignment,
    STATE(220), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4669] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    STATE(68), 1,
      sym_comment,
    ACTIONS(181), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(179), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4729] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(64), 1,
      aux_sym_switch_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(218), 1,
      sym_switch_condition,
    STATE(252), 1,
      sym_literal,
    STATE(253), 1,
      sym_binary_expression,
    STATE(275), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4825] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    STATE(70), 1,
      sym_comment,
    ACTIONS(181), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(179), 22,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4887] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(71), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(150), 1,
      sym_binary_expression,
    STATE(154), 1,
      sym__expression,
    STATE(289), 1,
      sym_term,
    STATE(290), 1,
      sym_assignment,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4982] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(72), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(422), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5075] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(73), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(422), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5168] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      sym_identifier,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(74), 1,
      sym_comment,
    STATE(243), 1,
      sym__expression,
    STATE(245), 1,
      sym_binary_expression,
    STATE(467), 1,
      sym_function_call,
    STATE(512), 1,
      sym__alias_identifier,
    ACTIONS(346), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5259] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(75), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(422), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5352] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(69), 1,
      aux_sym_switch_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(218), 1,
      sym_switch_condition,
    STATE(252), 1,
      sym_literal,
    STATE(253), 1,
      sym_binary_expression,
    STATE(275), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5447] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(77), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(216), 1,
      sym_binary_expression,
    STATE(426), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5542] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(78), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(150), 1,
      sym_binary_expression,
    STATE(193), 1,
      sym__expression,
    STATE(289), 1,
      sym_term,
    STATE(290), 1,
      sym_assignment,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5637] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(79), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(216), 1,
      sym_binary_expression,
    STATE(426), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5732] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(80), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(422), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5825] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    ACTIONS(364), 1,
      anon_sym_EQ_EQ,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(81), 1,
      sym_comment,
    STATE(213), 1,
      sym_binary_expression,
    STATE(308), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5918] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(82), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(148), 1,
      sym__expression,
    STATE(150), 1,
      sym_binary_expression,
    STATE(289), 1,
      sym_term,
    STATE(290), 1,
      sym_assignment,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6013] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(83), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(457), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6106] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(69), 1,
      aux_sym_switch_repeat1,
    STATE(84), 1,
      sym_comment,
    STATE(218), 1,
      sym_switch_condition,
    STATE(252), 1,
      sym_literal,
    STATE(253), 1,
      sym_binary_expression,
    STATE(275), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6201] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__integer,
    STATE(85), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(216), 1,
      sym_binary_expression,
    STATE(426), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6296] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym__integer,
    STATE(86), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(216), 1,
      sym_binary_expression,
    STATE(426), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6388] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(87), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(187), 1,
      sym_assignment,
    STATE(217), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6478] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(88), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(148), 1,
      sym__expression,
    STATE(187), 1,
      sym_assignment,
    STATE(274), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6568] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(89), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(407), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6658] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(90), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(187), 1,
      sym_assignment,
    STATE(274), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6748] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(91), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(180), 1,
      sym__expression,
    STATE(187), 1,
      sym_assignment,
    STATE(260), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6838] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(92), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(511), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6928] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(93), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(422), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7018] = 27,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(69), 1,
      aux_sym_switch_repeat1,
    STATE(94), 1,
      sym_comment,
    STATE(218), 1,
      sym_switch_condition,
    STATE(252), 1,
      sym_literal,
    STATE(253), 1,
      sym_binary_expression,
    STATE(275), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7110] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(95), 1,
      sym_comment,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(148), 1,
      sym__expression,
    STATE(187), 1,
      sym_assignment,
    STATE(260), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7200] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      sym_keyword_from,
    STATE(96), 1,
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
    ACTIONS(372), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7252] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(97), 1,
      sym_comment,
    STATE(187), 1,
      sym_assignment,
    STATE(193), 1,
      sym__expression,
    STATE(441), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7342] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(98), 1,
      sym_comment,
    STATE(227), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7428] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(99), 1,
      sym_comment,
    STATE(148), 1,
      sym__expression,
    STATE(187), 1,
      sym_assignment,
    STATE(217), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7518] = 26,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(96), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym_comment,
    STATE(154), 1,
      sym__expression,
    STATE(187), 1,
      sym_assignment,
    STATE(260), 1,
      sym_term,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7608] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(101), 1,
      sym_comment,
    STATE(225), 1,
      sym_binary_expression,
    STATE(308), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7695] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      sym_keyword_from,
    STATE(102), 1,
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
    ACTIONS(372), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7744] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_DASH,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(384), 1,
      sym__natural_number,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_AT,
    STATE(103), 1,
      sym_comment,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(230), 1,
      sym__integer,
    STATE(246), 1,
      sym__expression,
    STATE(247), 1,
      sym_range,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7829] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(392), 1,
      anon_sym_DASH,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(396), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      sym__natural_number,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      sym_identifier,
    STATE(104), 1,
      sym_comment,
    STATE(175), 1,
      aux_sym_function_call_repeat1,
    STATE(293), 1,
      sym__integer,
    STATE(299), 1,
      sym__call_parameter,
    STATE(300), 1,
      sym_literal,
    STATE(321), 1,
      sym__double_quote_string,
    STATE(320), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(390), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(57), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 10,
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
  [7900] = 25,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(105), 1,
      sym_comment,
    STATE(225), 1,
      sym_binary_expression,
    STATE(308), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7987] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_DASH,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_AT,
    ACTIONS(406), 1,
      sym__natural_number,
    STATE(106), 1,
      sym_comment,
    STATE(177), 1,
      sym__integer,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(246), 1,
      sym__expression,
    STATE(377), 1,
      sym_range,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8072] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(107), 1,
      sym_comment,
    STATE(151), 1,
      sym__expression,
    STATE(287), 1,
      sym__boolean_expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8157] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_DASH,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_AT,
    ACTIONS(406), 1,
      sym__natural_number,
    STATE(108), 1,
      sym_comment,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(230), 1,
      sym__integer,
    STATE(236), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8239] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(109), 1,
      sym_comment,
    STATE(223), 1,
      sym__double_quote_string,
    STATE(262), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8321] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_DASH,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_AT,
    ACTIONS(406), 1,
      sym__natural_number,
    STATE(110), 1,
      sym_comment,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(230), 1,
      sym__integer,
    STATE(259), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8403] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(111), 1,
      sym_comment,
    STATE(223), 1,
      sym__double_quote_string,
    STATE(269), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8485] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(112), 1,
      sym_comment,
    STATE(225), 1,
      sym_binary_expression,
    STATE(308), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8569] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(113), 1,
      sym_comment,
    STATE(226), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8651] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_DASH,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_AT,
    ACTIONS(406), 1,
      sym__natural_number,
    STATE(114), 1,
      sym_comment,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(230), 1,
      sym__integer,
    STATE(268), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8733] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(29), 1,
      sym__expression,
    STATE(35), 1,
      sym__integer,
    STATE(115), 1,
      sym_comment,
    STATE(223), 1,
      sym__double_quote_string,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8815] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_DASH,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_AT,
    ACTIONS(406), 1,
      sym__natural_number,
    STATE(116), 1,
      sym_comment,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(230), 1,
      sym__integer,
    STATE(266), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8897] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(117), 1,
      sym_comment,
    STATE(223), 1,
      sym__double_quote_string,
    STATE(270), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8979] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(118), 1,
      sym_comment,
    STATE(241), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9063] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(119), 1,
      sym_comment,
    STATE(245), 1,
      sym_binary_expression,
    STATE(248), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9147] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(120), 1,
      sym_comment,
    STATE(254), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9229] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(121), 1,
      sym_comment,
    STATE(232), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9311] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(122), 1,
      sym_comment,
    STATE(233), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9395] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(123), 1,
      sym_comment,
    STATE(255), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9477] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(63), 1,
      sym__expression,
    STATE(124), 1,
      sym_comment,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9559] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    ACTIONS(412), 1,
      sym_keyword_from,
    ACTIONS(414), 1,
      sym_keyword_or,
    STATE(125), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(410), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9619] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_DASH,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_AT,
    ACTIONS(406), 1,
      sym__natural_number,
    STATE(126), 1,
      sym_comment,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(230), 1,
      sym__integer,
    STATE(257), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9701] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(65), 1,
      sym__expression,
    STATE(127), 1,
      sym_comment,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9783] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(54), 1,
      sym__expression,
    STATE(128), 1,
      sym_comment,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9865] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(55), 1,
      sym__expression,
    STATE(129), 1,
      sym_comment,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9947] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(29), 1,
      sym__expression,
    STATE(35), 1,
      sym__integer,
    STATE(130), 1,
      sym_comment,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10029] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(70), 1,
      sym__expression,
    STATE(131), 1,
      sym_comment,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10111] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(68), 1,
      sym__expression,
    STATE(132), 1,
      sym_comment,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10193] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(418), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      anon_sym_SQUOTE,
    ACTIONS(424), 1,
      sym__natural_number,
    ACTIONS(426), 1,
      anon_sym_DOT,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(133), 1,
      sym_comment,
    STATE(176), 1,
      aux_sym_function_call_repeat1,
    STATE(322), 1,
      sym__call_parameter,
    STATE(327), 1,
      sym__integer,
    STATE(329), 1,
      sym__double_quote_string,
    STATE(340), 1,
      sym_literal,
    STATE(330), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(416), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(57), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 13,
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
  [10263] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(134), 1,
      sym_comment,
    STATE(223), 1,
      sym__double_quote_string,
    STATE(258), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10345] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(135), 1,
      sym_comment,
    STATE(223), 1,
      sym__double_quote_string,
    STATE(250), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10427] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(35), 1,
      sym__integer,
    STATE(136), 1,
      sym_comment,
    STATE(223), 1,
      sym__double_quote_string,
    STATE(231), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10509] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(137), 1,
      sym_comment,
    STATE(139), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10591] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(125), 1,
      sym__expression,
    STATE(138), 1,
      sym_comment,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10673] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    ACTIONS(414), 1,
      sym_keyword_or,
    ACTIONS(432), 1,
      sym_keyword_from,
    STATE(139), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(430), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10733] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(140), 1,
      sym_comment,
    STATE(308), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(198), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [10817] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    ACTIONS(414), 1,
      sym_keyword_or,
    ACTIONS(436), 1,
      sym_keyword_from,
    STATE(141), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(434), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10877] = 24,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__double_quote_string,
    STATE(35), 1,
      sym__integer,
    STATE(142), 1,
      sym_comment,
    STATE(256), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [10961] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_DASH,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_AT,
    ACTIONS(406), 1,
      sym__natural_number,
    STATE(29), 1,
      sym__expression,
    STATE(143), 1,
      sym_comment,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(230), 1,
      sym__integer,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11043] = 23,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_DASH,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_AT,
    ACTIONS(406), 1,
      sym__natural_number,
    STATE(144), 1,
      sym_comment,
    STATE(228), 1,
      sym__double_quote_string,
    STATE(230), 1,
      sym__integer,
    STATE(251), 1,
      sym__expression,
    STATE(512), 1,
      sym__alias_identifier,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(33), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(34), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(20), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11125] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(440), 1,
      sym_keyword_from,
    STATE(145), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 13,
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
    ACTIONS(438), 14,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [11171] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_DASH,
    ACTIONS(452), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      anon_sym_SQUOTE,
    ACTIONS(458), 1,
      sym__natural_number,
    ACTIONS(461), 1,
      anon_sym_DOT,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(156), 1,
      sym__double_quote_string,
    STATE(157), 1,
      sym__call_parameter,
    STATE(161), 1,
      sym__integer,
    STATE(168), 1,
      sym_literal,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(146), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(166), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(446), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(444), 12,
      sym_keyword_from,
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
      sym_keyword_from_text,
  [11236] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      sym__natural_number,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(146), 1,
      aux_sym_function_call_repeat1,
    STATE(147), 1,
      sym_comment,
    STATE(156), 1,
      sym__double_quote_string,
    STATE(157), 1,
      sym__call_parameter,
    STATE(161), 1,
      sym__integer,
    STATE(168), 1,
      sym_literal,
    ACTIONS(467), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(166), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(59), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(469), 12,
      sym_keyword_from,
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
      sym_keyword_from_text,
  [11303] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    ACTIONS(414), 1,
      sym_keyword_or,
    ACTIONS(473), 1,
      sym_keyword_from,
    ACTIONS(475), 1,
      anon_sym_EQ,
    STATE(148), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(471), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LBRACK,
  [11361] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(149), 1,
      sym_comment,
    ACTIONS(135), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 25,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
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
  [11401] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_comment,
    ACTIONS(135), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 25,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
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
  [11441] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    ACTIONS(414), 1,
      sym_keyword_or,
    ACTIONS(479), 1,
      sym_keyword_from,
    STATE(151), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(477), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [11496] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      sym__natural_number,
    ACTIONS(167), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      sym_identifier,
    STATE(152), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_function_call_repeat1,
    STATE(181), 1,
      sym_literal,
    STATE(186), 1,
      sym__integer,
    STATE(195), 1,
      sym__double_quote_string,
    STATE(203), 1,
      sym__call_parameter,
    ACTIONS(467), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(191), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(157), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(469), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [11559] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(484), 1,
      anon_sym_DASH,
    ACTIONS(487), 1,
      anon_sym_DQUOTE,
    ACTIONS(490), 1,
      anon_sym_SQUOTE,
    ACTIONS(493), 1,
      sym__natural_number,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(499), 1,
      sym_identifier,
    STATE(181), 1,
      sym_literal,
    STATE(186), 1,
      sym__integer,
    STATE(195), 1,
      sym__double_quote_string,
    STATE(203), 1,
      sym__call_parameter,
    ACTIONS(442), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(153), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(191), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(481), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(444), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [11620] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    ACTIONS(414), 1,
      sym_keyword_or,
    ACTIONS(502), 1,
      anon_sym_EQ,
    STATE(154), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(471), 10,
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
  [11672] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      anon_sym_COLON,
    STATE(155), 1,
      sym_comment,
    ACTIONS(504), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(506), 16,
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
      sym_keyword_from_text,
      sym_identifier,
  [11709] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_comment,
    ACTIONS(137), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(510), 16,
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
      sym_keyword_from_text,
      sym_identifier,
  [11744] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(157), 1,
      sym_comment,
    ACTIONS(512), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(514), 16,
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
      sym_keyword_from_text,
      sym_identifier,
  [11778] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym_comment,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(189), 16,
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
      sym_keyword_from_text,
      sym_identifier,
  [11812] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_comment,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(109), 16,
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
      sym_keyword_from_text,
      sym_identifier,
  [11846] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(105), 16,
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
      sym_keyword_from_text,
      sym_identifier,
  [11880] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(161), 1,
      sym_comment,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(185), 16,
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
      sym_keyword_from_text,
      sym_identifier,
  [11914] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(162), 1,
      sym_comment,
    ACTIONS(516), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(518), 16,
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
      sym_keyword_from_text,
      sym_identifier,
  [11948] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(127), 16,
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
      sym_keyword_from_text,
      sym_identifier,
  [11982] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(522), 1,
      sym_keyword_from,
    ACTIONS(524), 1,
      sym_keyword_filter,
    ACTIONS(526), 1,
      sym_keyword_derive,
    ACTIONS(528), 1,
      sym_keyword_group,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(532), 1,
      sym_keyword_sort,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(536), 1,
      sym_keyword_join,
    ACTIONS(538), 1,
      sym_keyword_select,
    STATE(164), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_transforms_repeat1,
    STATE(369), 1,
      sym_transforms,
    ACTIONS(520), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(277), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [12038] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      sym_keyword_filter,
    ACTIONS(526), 1,
      sym_keyword_derive,
    ACTIONS(528), 1,
      sym_keyword_group,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(532), 1,
      sym_keyword_sort,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(536), 1,
      sym_keyword_join,
    ACTIONS(538), 1,
      sym_keyword_select,
    ACTIONS(542), 1,
      sym_keyword_from,
    STATE(165), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_transforms_repeat1,
    STATE(357), 1,
      sym_transforms,
    ACTIONS(540), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(277), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [12094] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(185), 16,
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
      sym_keyword_from_text,
      sym_identifier,
  [12128] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(225), 16,
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
      sym_keyword_from_text,
      sym_identifier,
  [12162] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    ACTIONS(504), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(506), 16,
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
      sym_keyword_from_text,
      sym_identifier,
  [12196] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(101), 16,
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
      sym_keyword_from_text,
      sym_identifier,
  [12230] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(546), 1,
      sym_keyword_from,
    ACTIONS(548), 1,
      sym_keyword_filter,
    ACTIONS(551), 1,
      sym_keyword_derive,
    ACTIONS(554), 1,
      sym_keyword_group,
    ACTIONS(557), 1,
      sym_keyword_aggregate,
    ACTIONS(560), 1,
      sym_keyword_sort,
    ACTIONS(563), 1,
      sym_keyword_take,
    ACTIONS(566), 1,
      sym_keyword_join,
    ACTIONS(569), 1,
      sym_keyword_select,
    STATE(170), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(544), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(277), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [12281] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      sym_keyword_filter,
    ACTIONS(526), 1,
      sym_keyword_derive,
    ACTIONS(528), 1,
      sym_keyword_group,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(532), 1,
      sym_keyword_sort,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(536), 1,
      sym_keyword_join,
    ACTIONS(538), 1,
      sym_keyword_select,
    ACTIONS(574), 1,
      sym_keyword_from,
    STATE(170), 1,
      aux_sym_transforms_repeat1,
    STATE(171), 1,
      sym_comment,
    ACTIONS(572), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(277), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [12334] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(579), 1,
      anon_sym_DASH,
    ACTIONS(582), 1,
      anon_sym_DQUOTE,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(588), 1,
      sym__natural_number,
    ACTIONS(591), 1,
      anon_sym_DOT,
    ACTIONS(594), 1,
      sym_identifier,
    STATE(293), 1,
      sym__integer,
    STATE(299), 1,
      sym__call_parameter,
    STATE(300), 1,
      sym_literal,
    STATE(321), 1,
      sym__double_quote_string,
    STATE(172), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(320), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(576), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(444), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [12390] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 18,
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
  [12422] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(174), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 18,
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
  [12454] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(392), 1,
      anon_sym_DASH,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(396), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      sym__natural_number,
    ACTIONS(400), 1,
      anon_sym_DOT,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      aux_sym_function_call_repeat1,
    STATE(175), 1,
      sym_comment,
    STATE(293), 1,
      sym__integer,
    STATE(299), 1,
      sym__call_parameter,
    STATE(300), 1,
      sym_literal,
    STATE(321), 1,
      sym__double_quote_string,
    STATE(320), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(390), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(469), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [12512] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(418), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      anon_sym_SQUOTE,
    ACTIONS(424), 1,
      sym__natural_number,
    ACTIONS(426), 1,
      anon_sym_DOT,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(176), 1,
      sym_comment,
    STATE(179), 1,
      aux_sym_function_call_repeat1,
    STATE(322), 1,
      sym__call_parameter,
    STATE(327), 1,
      sym__integer,
    STATE(329), 1,
      sym__double_quote_string,
    STATE(340), 1,
      sym_literal,
    STATE(330), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(416), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(467), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12567] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(599), 1,
      anon_sym_DOT,
    STATE(177), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(597), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
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
  [12602] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_COLON,
    STATE(178), 1,
      sym_comment,
    ACTIONS(504), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(506), 12,
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
  [12635] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(606), 1,
      anon_sym_DASH,
    ACTIONS(609), 1,
      anon_sym_DQUOTE,
    ACTIONS(612), 1,
      anon_sym_SQUOTE,
    ACTIONS(615), 1,
      sym__natural_number,
    ACTIONS(618), 1,
      anon_sym_DOT,
    ACTIONS(621), 1,
      sym_identifier,
    STATE(322), 1,
      sym__call_parameter,
    STATE(327), 1,
      sym__integer,
    STATE(329), 1,
      sym__double_quote_string,
    STATE(340), 1,
      sym_literal,
    STATE(179), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(330), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(603), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(442), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12688] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    ACTIONS(414), 1,
      sym_keyword_or,
    ACTIONS(624), 1,
      anon_sym_EQ,
    STATE(180), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(471), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [12735] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(181), 1,
      sym_comment,
    ACTIONS(504), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(506), 12,
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
  [12765] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(182), 1,
      sym_comment,
    ACTIONS(125), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(127), 12,
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
  [12795] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(628), 1,
      sym_keyword_from,
    STATE(183), 1,
      sym_comment,
    ACTIONS(626), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12825] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(184), 1,
      sym_comment,
    ACTIONS(103), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(105), 12,
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
  [12855] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(632), 1,
      sym_keyword_from,
    STATE(185), 1,
      sym_comment,
    ACTIONS(630), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12885] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(186), 1,
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
  [12915] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(473), 1,
      sym_keyword_from,
    STATE(187), 1,
      sym_comment,
    ACTIONS(471), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12945] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(636), 1,
      sym_keyword_from,
    STATE(188), 1,
      sym_comment,
    ACTIONS(634), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12975] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      sym_keyword_from,
    STATE(189), 1,
      sym_comment,
    ACTIONS(638), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13005] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(644), 1,
      sym_keyword_from,
    STATE(190), 1,
      sym_comment,
    ACTIONS(642), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13035] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(191), 1,
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
  [13065] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(192), 1,
      sym_comment,
    ACTIONS(99), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(101), 12,
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
  [13095] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    ACTIONS(414), 1,
      sym_keyword_or,
    ACTIONS(646), 1,
      anon_sym_EQ,
    STATE(193), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(471), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13141] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(194), 1,
      sym_comment,
    ACTIONS(107), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(109), 12,
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
  [13171] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(195), 1,
      sym_comment,
    ACTIONS(137), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(510), 12,
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
  [13201] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      sym_keyword_filter,
    ACTIONS(528), 1,
      sym_keyword_group,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 1,
      sym_keyword_derive,
    ACTIONS(650), 1,
      sym_keyword_sort,
    ACTIONS(652), 1,
      sym_keyword_join,
    ACTIONS(654), 1,
      sym_keyword_select,
    STATE(196), 1,
      sym_comment,
    STATE(207), 1,
      aux_sym_transforms_repeat1,
    STATE(357), 1,
      sym_transforms,
    STATE(277), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [13251] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(197), 1,
      sym_comment,
    ACTIONS(516), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(518), 12,
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
  [13281] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      sym_keyword_from,
    STATE(198), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(656), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
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
  [13315] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(662), 1,
      sym_keyword_from,
    STATE(199), 1,
      sym_comment,
    ACTIONS(660), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13345] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(200), 1,
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
  [13375] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(666), 1,
      sym_keyword_from,
    STATE(201), 1,
      sym_comment,
    ACTIONS(664), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13405] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(202), 1,
      sym_comment,
    ACTIONS(187), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(189), 12,
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
  [13435] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(203), 1,
      sym_comment,
    ACTIONS(512), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(514), 12,
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
  [13465] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(670), 1,
      sym_keyword_from,
    STATE(204), 1,
      sym_comment,
    ACTIONS(668), 18,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13495] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    ACTIONS(548), 1,
      sym_keyword_filter,
    ACTIONS(554), 1,
      sym_keyword_group,
    ACTIONS(557), 1,
      sym_keyword_aggregate,
    ACTIONS(563), 1,
      sym_keyword_take,
    ACTIONS(672), 1,
      sym_keyword_derive,
    ACTIONS(675), 1,
      sym_keyword_sort,
    ACTIONS(678), 1,
      sym_keyword_join,
    ACTIONS(681), 1,
      sym_keyword_select,
    STATE(205), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(277), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [13540] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(206), 1,
      sym_comment,
    STATE(379), 1,
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
  [13571] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      sym_keyword_filter,
    ACTIONS(528), 1,
      sym_keyword_group,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    ACTIONS(648), 1,
      sym_keyword_derive,
    ACTIONS(650), 1,
      sym_keyword_sort,
    ACTIONS(652), 1,
      sym_keyword_join,
    ACTIONS(654), 1,
      sym_keyword_select,
    STATE(205), 1,
      aux_sym_transforms_repeat1,
    STATE(207), 1,
      sym_comment,
    STATE(277), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [13618] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(686), 1,
      anon_sym_RBRACK,
    STATE(208), 1,
      sym_comment,
    STATE(406), 1,
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
  [13653] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(209), 1,
      sym_comment,
    STATE(393), 1,
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
  [13684] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(688), 1,
      anon_sym_COLON,
    ACTIONS(690), 1,
      anon_sym_DOT,
    STATE(210), 1,
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
  [13717] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(692), 1,
      anon_sym_COLON,
    ACTIONS(694), 1,
      anon_sym_DOT,
    STATE(211), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 14,
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
  [13750] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(212), 1,
      sym_comment,
    ACTIONS(696), 2,
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
  [13780] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RBRACK,
    STATE(213), 1,
      sym_comment,
    STATE(395), 1,
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
  [13814] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(214), 1,
      sym_comment,
    ACTIONS(702), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(704), 11,
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
  [13842] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(215), 1,
      sym_comment,
    ACTIONS(706), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(708), 11,
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
  [13870] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(216), 1,
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
  [13898] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(712), 1,
      sym_keyword_from,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
    STATE(217), 1,
      sym_comment,
    STATE(288), 1,
      sym_conditions,
    STATE(317), 1,
      sym__self_join,
    ACTIONS(710), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13932] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(218), 1,
      sym_comment,
    ACTIONS(716), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(718), 11,
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
  [13960] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(219), 1,
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
  [13988] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
    ACTIONS(722), 1,
      sym_keyword_from,
    STATE(220), 1,
      sym_comment,
    STATE(317), 1,
      sym__self_join,
    STATE(318), 1,
      sym_conditions,
    ACTIONS(720), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14022] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(724), 1,
      anon_sym_DOT,
    STATE(221), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 14,
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
  [14052] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      anon_sym_T,
    STATE(222), 1,
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
  [14081] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(223), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 12,
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
  [14110] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(224), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 13,
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
  [14137] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(225), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(728), 2,
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
  [14166] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    ACTIONS(414), 1,
      sym_keyword_or,
    STATE(226), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(730), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14207] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    ACTIONS(414), 1,
      sym_keyword_or,
    STATE(227), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(732), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14248] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(734), 1,
      anon_sym_DOT,
    STATE(228), 1,
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
  [14277] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(736), 1,
      anon_sym_DOT,
    STATE(229), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 13,
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
  [14306] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(599), 1,
      anon_sym_DOT,
    STATE(230), 1,
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
  [14335] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      anon_sym_PLUS,
    ACTIONS(746), 1,
      anon_sym_PIPE,
    STATE(231), 1,
      sym_comment,
    ACTIONS(744), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(748), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_QMARK_QMARK,
    ACTIONS(742), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14371] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    STATE(232), 1,
      sym_comment,
    ACTIONS(179), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14409] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
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
  [14437] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(754), 1,
      sym_keyword_from,
    STATE(234), 1,
      sym_comment,
    ACTIONS(752), 14,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14463] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(758), 1,
      sym_keyword_from,
    STATE(235), 1,
      sym_comment,
    ACTIONS(756), 14,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14489] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(766), 1,
      anon_sym_PIPE,
    ACTIONS(770), 1,
      anon_sym_QMARK_QMARK,
    STATE(236), 1,
      sym_comment,
    ACTIONS(760), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(764), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(768), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(762), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14525] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(237), 1,
      sym_comment,
    ACTIONS(772), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(774), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [14551] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(238), 1,
      sym_comment,
    ACTIONS(776), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(778), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [14577] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(782), 1,
      sym_keyword_from,
    STATE(239), 1,
      sym_comment,
    ACTIONS(780), 14,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14603] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(786), 1,
      sym_keyword_from,
    STATE(240), 1,
      sym_comment,
    ACTIONS(784), 14,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14629] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
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
  [14657] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(242), 1,
      sym_comment,
    ACTIONS(772), 6,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      sym_identifier,
    ACTIONS(774), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [14683] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(790), 1,
      sym_keyword_and,
    ACTIONS(792), 1,
      sym_keyword_or,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14723] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_keyword_from,
    STATE(244), 1,
      sym_comment,
    ACTIONS(796), 14,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14749] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(245), 1,
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
  [14775] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(766), 1,
      anon_sym_PIPE,
    ACTIONS(770), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(800), 1,
      sym_keyword_and,
    ACTIONS(802), 1,
      sym_keyword_or,
    ACTIONS(804), 1,
      anon_sym_DOT_DOT,
    STATE(246), 1,
      sym_comment,
    ACTIONS(760), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(764), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(768), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(762), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14815] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      sym_keyword_from,
    STATE(247), 1,
      sym_comment,
    ACTIONS(806), 14,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14841] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(790), 1,
      sym_keyword_and,
    ACTIONS(792), 1,
      sym_keyword_or,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14881] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(814), 1,
      sym_keyword_from,
    STATE(249), 1,
      sym_comment,
    ACTIONS(812), 14,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14907] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      anon_sym_PLUS,
    STATE(250), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(744), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(179), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_EQ_EQ,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14939] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(766), 1,
      anon_sym_PIPE,
    ACTIONS(770), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(800), 1,
      sym_keyword_and,
    STATE(251), 1,
      sym_comment,
    ACTIONS(179), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(760), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(764), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(768), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(762), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14977] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(816), 1,
      anon_sym_DASH_GT,
    STATE(252), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 11,
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
  [15005] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(818), 1,
      anon_sym_DASH_GT,
    STATE(253), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 11,
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
  [15033] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    STATE(254), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15069] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    ACTIONS(414), 1,
      sym_keyword_or,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15109] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
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
  [15137] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(766), 1,
      anon_sym_PIPE,
    STATE(257), 1,
      sym_comment,
    ACTIONS(760), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(764), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(768), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(762), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15171] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      anon_sym_PLUS,
    STATE(258), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 11,
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
  [15201] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(259), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(760), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(764), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(179), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15231] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(826), 1,
      sym_keyword_from,
    STATE(260), 1,
      sym_comment,
    ACTIONS(824), 14,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15257] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    ACTIONS(414), 1,
      sym_keyword_or,
    ACTIONS(646), 1,
      anon_sym_EQ,
    STATE(261), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15297] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      anon_sym_PLUS,
    ACTIONS(746), 1,
      anon_sym_PIPE,
    STATE(262), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(744), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(179), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15331] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(830), 1,
      sym_keyword_from,
    STATE(263), 1,
      sym_comment,
    ACTIONS(828), 14,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15357] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(834), 1,
      sym_keyword_from,
    STATE(264), 1,
      sym_comment,
    ACTIONS(832), 14,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15383] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(836), 1,
      anon_sym_COLON,
    STATE(265), 1,
      sym_comment,
    ACTIONS(504), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(506), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [15411] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(766), 1,
      anon_sym_PIPE,
    STATE(266), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(760), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(764), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(179), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15443] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(840), 1,
      sym_keyword_from,
    STATE(267), 1,
      sym_comment,
    ACTIONS(838), 14,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15469] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(268), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(760), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(179), 11,
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
  [15497] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      anon_sym_PLUS,
    ACTIONS(746), 1,
      anon_sym_PIPE,
    ACTIONS(842), 1,
      sym_keyword_and,
    ACTIONS(844), 1,
      anon_sym_QMARK_QMARK,
    STATE(269), 1,
      sym_comment,
    ACTIONS(179), 2,
      sym_keyword_or,
      anon_sym_DASH_GT,
    ACTIONS(744), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(748), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(742), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15537] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      anon_sym_DASH,
    ACTIONS(740), 1,
      anon_sym_PLUS,
    ACTIONS(746), 1,
      anon_sym_PIPE,
    ACTIONS(844), 1,
      anon_sym_QMARK_QMARK,
    STATE(270), 1,
      sym_comment,
    ACTIONS(744), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(748), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(179), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
    ACTIONS(742), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15575] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(271), 1,
      sym_comment,
    ACTIONS(103), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(105), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [15600] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(848), 1,
      sym_keyword_from,
    STATE(272), 1,
      sym_comment,
    ACTIONS(846), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15625] = 13,
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
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
    STATE(273), 1,
      sym_comment,
    STATE(342), 1,
      aux_sym_program_repeat2,
    STATE(356), 1,
      aux_sym_program_repeat1,
    STATE(364), 1,
      sym_prql,
    STATE(165), 2,
      sym_from_text,
      sym_from,
    STATE(370), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15668] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(854), 1,
      sym_keyword_from,
    STATE(274), 1,
      sym_comment,
    ACTIONS(852), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15693] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(746), 1,
      anon_sym_PIPE,
    ACTIONS(842), 1,
      sym_keyword_and,
    ACTIONS(844), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(856), 1,
      sym_keyword_or,
    STATE(275), 1,
      sym_comment,
    ACTIONS(740), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(744), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(748), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(742), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15730] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(860), 1,
      sym_keyword_from,
    STATE(276), 1,
      sym_comment,
    ACTIONS(858), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15755] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(864), 1,
      sym_keyword_from,
    STATE(277), 1,
      sym_comment,
    ACTIONS(862), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15780] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(868), 1,
      sym_keyword_from,
    STATE(278), 1,
      sym_comment,
    ACTIONS(866), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15805] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(790), 1,
      sym_keyword_and,
    ACTIONS(792), 1,
      sym_keyword_or,
    STATE(279), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15842] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(872), 1,
      sym_keyword_from,
    STATE(280), 1,
      sym_comment,
    ACTIONS(870), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15867] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(281), 1,
      sym_comment,
    ACTIONS(125), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(127), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [15892] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(876), 1,
      sym_keyword_from,
    STATE(282), 1,
      sym_comment,
    ACTIONS(874), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15917] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(880), 1,
      sym_keyword_from,
    STATE(283), 1,
      sym_comment,
    ACTIONS(878), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15942] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(884), 1,
      sym_keyword_from,
    STATE(284), 1,
      sym_comment,
    ACTIONS(882), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15967] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      sym_keyword_from,
    STATE(285), 1,
      sym_comment,
    ACTIONS(886), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15992] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      sym_keyword_from,
    STATE(286), 1,
      sym_comment,
    ACTIONS(890), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16017] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(896), 1,
      sym_keyword_from,
    STATE(287), 1,
      sym_comment,
    ACTIONS(894), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16042] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(900), 1,
      sym_keyword_from,
    STATE(288), 1,
      sym_comment,
    ACTIONS(898), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16067] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(904), 1,
      sym_keyword_from,
    STATE(289), 1,
      sym_comment,
    ACTIONS(902), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16092] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(473), 1,
      sym_keyword_from,
    STATE(290), 1,
      sym_comment,
    ACTIONS(471), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16117] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(908), 1,
      sym_keyword_from,
    STATE(291), 1,
      sym_comment,
    ACTIONS(906), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16142] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(292), 1,
      sym_comment,
    ACTIONS(107), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(109), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [16167] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(293), 1,
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
  [16192] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(912), 1,
      sym_keyword_from,
    STATE(294), 1,
      sym_comment,
    ACTIONS(910), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16217] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(916), 1,
      sym_keyword_from,
    STATE(295), 1,
      sym_comment,
    ACTIONS(914), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16242] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(920), 1,
      sym_keyword_from,
    STATE(296), 1,
      sym_comment,
    ACTIONS(918), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16267] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(924), 1,
      sym_keyword_from,
    STATE(297), 1,
      sym_comment,
    ACTIONS(922), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16292] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(298), 1,
      sym_comment,
    ACTIONS(99), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(101), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [16317] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(299), 1,
      sym_comment,
    ACTIONS(512), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(514), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [16342] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(300), 1,
      sym_comment,
    ACTIONS(504), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(506), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [16367] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(928), 1,
      sym_keyword_from,
    STATE(301), 1,
      sym_comment,
    ACTIONS(926), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16392] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(932), 1,
      sym_keyword_from,
    STATE(302), 1,
      sym_comment,
    ACTIONS(930), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16417] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(303), 1,
      sym_comment,
    ACTIONS(187), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(189), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [16442] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(936), 1,
      sym_keyword_from,
    STATE(304), 1,
      sym_comment,
    ACTIONS(934), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16467] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(940), 1,
      sym_keyword_from,
    STATE(305), 1,
      sym_comment,
    ACTIONS(938), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16492] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(942), 1,
      anon_sym_COLON,
    STATE(306), 1,
      sym_comment,
    ACTIONS(506), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(504), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [16519] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(307), 1,
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
  [16544] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(334), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(338), 1,
      sym_keyword_and,
    ACTIONS(414), 1,
      sym_keyword_or,
    STATE(308), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(263), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(291), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16581] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(946), 1,
      sym_keyword_from,
    STATE(309), 1,
      sym_comment,
    ACTIONS(944), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16606] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(310), 1,
      sym_comment,
    ACTIONS(516), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(518), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [16631] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(950), 1,
      sym_keyword_from,
    STATE(311), 1,
      sym_comment,
    ACTIONS(948), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16656] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(954), 1,
      sym_keyword_from,
    STATE(312), 1,
      sym_comment,
    ACTIONS(952), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16681] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(958), 1,
      sym_keyword_from,
    STATE(313), 1,
      sym_comment,
    ACTIONS(956), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16706] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(962), 1,
      sym_keyword_from,
    STATE(314), 1,
      sym_comment,
    ACTIONS(960), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16731] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(966), 1,
      sym_keyword_from,
    STATE(315), 1,
      sym_comment,
    ACTIONS(964), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16756] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      sym_keyword_from,
    STATE(316), 1,
      sym_comment,
    ACTIONS(968), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16781] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(974), 1,
      sym_keyword_from,
    STATE(317), 1,
      sym_comment,
    ACTIONS(972), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16806] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(712), 1,
      sym_keyword_from,
    STATE(318), 1,
      sym_comment,
    ACTIONS(710), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16831] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(978), 1,
      sym_keyword_from,
    STATE(319), 1,
      sym_comment,
    ACTIONS(976), 13,
      ts_builtin_sym_end,
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
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16856] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(320), 1,
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
  [16881] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(321), 1,
      sym_comment,
    ACTIONS(137), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(510), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [16906] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(322), 1,
      sym_comment,
    ACTIONS(514), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(512), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [16930] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(392), 1,
      anon_sym_DASH,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(396), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      sym__natural_number,
    ACTIONS(400), 1,
      anon_sym_DOT,
    STATE(293), 1,
      sym__integer,
    STATE(310), 1,
      sym_literal,
    STATE(321), 1,
      sym__double_quote_string,
    STATE(323), 1,
      sym_comment,
    STATE(320), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(980), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [16970] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(324), 1,
      sym_comment,
    ACTIONS(109), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(107), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [16994] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      sym__natural_number,
    ACTIONS(167), 1,
      anon_sym_DOT,
    STATE(186), 1,
      sym__integer,
    STATE(195), 1,
      sym__double_quote_string,
    STATE(197), 1,
      sym_literal,
    STATE(325), 1,
      sym_comment,
    STATE(191), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(982), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17034] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(418), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    ACTIONS(422), 1,
      anon_sym_SQUOTE,
    ACTIONS(424), 1,
      sym__natural_number,
    ACTIONS(426), 1,
      anon_sym_DOT,
    STATE(326), 1,
      sym_comment,
    STATE(327), 1,
      sym__integer,
    STATE(329), 1,
      sym__double_quote_string,
    STATE(331), 1,
      sym_literal,
    STATE(330), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(984), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17074] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(327), 1,
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
  [17098] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(328), 1,
      sym_comment,
    ACTIONS(105), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(103), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17122] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(329), 1,
      sym_comment,
    ACTIONS(510), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(137), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17146] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(330), 1,
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
  [17170] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(331), 1,
      sym_comment,
    ACTIONS(518), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(516), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17194] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(332), 1,
      sym_comment,
    ACTIONS(101), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(99), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17218] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(333), 1,
      sym_comment,
    ACTIONS(127), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
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
  [17242] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(334), 1,
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
  [17266] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(988), 1,
      anon_sym_DASH,
    ACTIONS(990), 1,
      anon_sym_DQUOTE,
    ACTIONS(992), 1,
      anon_sym_SQUOTE,
    ACTIONS(994), 1,
      sym__natural_number,
    ACTIONS(996), 1,
      anon_sym_DOT,
    STATE(335), 1,
      sym_comment,
    STATE(397), 1,
      sym__integer,
    STATE(417), 1,
      sym__double_quote_string,
    STATE(435), 1,
      sym_literal,
    STATE(432), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(986), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17306] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(336), 1,
      sym_comment,
    ACTIONS(189), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(187), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17330] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      sym__natural_number,
    ACTIONS(69), 1,
      anon_sym_DOT,
    STATE(156), 1,
      sym__double_quote_string,
    STATE(161), 1,
      sym__integer,
    STATE(162), 1,
      sym_literal,
    STATE(337), 1,
      sym_comment,
    STATE(166), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(998), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17370] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    STATE(35), 1,
      sym__integer,
    STATE(156), 1,
      sym__double_quote_string,
    STATE(338), 1,
      sym_comment,
    STATE(458), 1,
      sym_literal,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(1000), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17410] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym_DOT,
    STATE(35), 1,
      sym__integer,
    STATE(156), 1,
      sym__double_quote_string,
    STATE(339), 1,
      sym_comment,
    STATE(456), 1,
      sym_literal,
    STATE(30), 2,
      sym__literal_string,
      sym__decimal_number,
    ACTIONS(1000), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17450] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(340), 1,
      sym_comment,
    ACTIONS(506), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(504), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17474] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(341), 1,
      sym_comment,
    STATE(360), 1,
      sym_target,
    ACTIONS(1002), 11,
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
  [17497] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(9), 1,
      sym_keyword_func,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(1004), 1,
      ts_builtin_sym_end,
    STATE(342), 1,
      sym_comment,
    STATE(344), 1,
      aux_sym_program_repeat2,
    STATE(165), 2,
      sym_from_text,
      sym_from,
    STATE(370), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [17531] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(9), 1,
      sym_keyword_func,
    ACTIONS(11), 1,
      sym_keyword_let,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
    STATE(343), 1,
      sym_comment,
    STATE(344), 1,
      aux_sym_program_repeat2,
    STATE(165), 2,
      sym_from_text,
      sym_from,
    STATE(370), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [17565] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1006), 1,
      ts_builtin_sym_end,
    ACTIONS(1008), 1,
      sym_keyword_from,
    ACTIONS(1011), 1,
      sym_keyword_func,
    ACTIONS(1014), 1,
      sym_keyword_let,
    ACTIONS(1017), 1,
      sym_keyword_from_text,
    STATE(165), 2,
      sym_from_text,
      sym_from,
    STATE(344), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(370), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [17597] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(1020), 1,
      sym_keyword_sort,
    ACTIONS(1022), 1,
      sym_keyword_window,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_comment,
    STATE(350), 1,
      aux_sym_group_repeat2,
    STATE(366), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17628] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(1020), 1,
      sym_keyword_sort,
    ACTIONS(1022), 1,
      sym_keyword_window,
    ACTIONS(1026), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      sym_comment,
    STATE(350), 1,
      aux_sym_group_repeat2,
    STATE(366), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17659] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(1020), 1,
      sym_keyword_sort,
    ACTIONS(1022), 1,
      sym_keyword_window,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      sym_comment,
    STATE(350), 1,
      aux_sym_group_repeat2,
    STATE(366), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17690] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(1020), 1,
      sym_keyword_sort,
    ACTIONS(1022), 1,
      sym_keyword_window,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      sym_comment,
    STATE(350), 1,
      aux_sym_group_repeat2,
    STATE(366), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17721] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(1020), 1,
      sym_keyword_sort,
    ACTIONS(1022), 1,
      sym_keyword_window,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    STATE(349), 1,
      sym_comment,
    STATE(350), 1,
      aux_sym_group_repeat2,
    STATE(366), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17752] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1034), 1,
      sym_keyword_aggregate,
    ACTIONS(1037), 1,
      sym_keyword_sort,
    ACTIONS(1040), 1,
      sym_keyword_take,
    ACTIONS(1043), 1,
      sym_keyword_window,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
    STATE(350), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(366), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17781] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(1020), 1,
      sym_keyword_sort,
    ACTIONS(1022), 1,
      sym_keyword_window,
    STATE(349), 1,
      aux_sym_group_repeat2,
    STATE(351), 1,
      sym_comment,
    STATE(366), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17809] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(1020), 1,
      sym_keyword_sort,
    ACTIONS(1022), 1,
      sym_keyword_window,
    STATE(345), 1,
      aux_sym_group_repeat2,
    STATE(352), 1,
      sym_comment,
    STATE(366), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17837] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(1020), 1,
      sym_keyword_sort,
    ACTIONS(1022), 1,
      sym_keyword_window,
    STATE(347), 1,
      aux_sym_group_repeat2,
    STATE(353), 1,
      sym_comment,
    STATE(366), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17865] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(1020), 1,
      sym_keyword_sort,
    ACTIONS(1022), 1,
      sym_keyword_window,
    STATE(348), 1,
      aux_sym_group_repeat2,
    STATE(354), 1,
      sym_comment,
    STATE(366), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17893] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(530), 1,
      sym_keyword_aggregate,
    ACTIONS(534), 1,
      sym_keyword_take,
    ACTIONS(1020), 1,
      sym_keyword_sort,
    ACTIONS(1022), 1,
      sym_keyword_window,
    STATE(346), 1,
      aux_sym_group_repeat2,
    STATE(355), 1,
      sym_comment,
    STATE(366), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17921] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1050), 1,
      sym_keyword_from,
    ACTIONS(1052), 1,
      sym_keyword_prql,
    STATE(364), 1,
      sym_prql,
    STATE(356), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1048), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17944] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1057), 1,
      sym_keyword_from,
    STATE(357), 1,
      sym_comment,
    ACTIONS(1055), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [17961] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1061), 1,
      sym_keyword_from,
    STATE(358), 1,
      sym_comment,
    ACTIONS(1059), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17978] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1065), 1,
      sym_keyword_from,
    STATE(359), 1,
      sym_comment,
    ACTIONS(1063), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17995] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1069), 1,
      sym_keyword_from,
    STATE(360), 1,
      sym_comment,
    ACTIONS(1067), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [18012] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1073), 1,
      anon_sym_LPAREN,
    STATE(361), 1,
      sym_comment,
    STATE(363), 1,
      aux_sym_window_definitions_repeat1,
    STATE(373), 1,
      sym__window_definition,
    ACTIONS(1071), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [18033] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(361), 1,
      aux_sym_window_definitions_repeat1,
    STATE(362), 1,
      sym_comment,
    STATE(373), 1,
      sym__window_definition,
    STATE(507), 1,
      sym_window_definitions,
    ACTIONS(1071), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [18054] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    STATE(373), 1,
      sym__window_definition,
    STATE(363), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1075), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [18073] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1082), 1,
      sym_keyword_from,
    STATE(364), 1,
      sym_comment,
    ACTIONS(1080), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [18090] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(365), 1,
      sym_comment,
    ACTIONS(1084), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [18104] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(366), 1,
      sym_comment,
    ACTIONS(1086), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [18118] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(1088), 1,
      sym_keyword_from,
    STATE(367), 1,
      sym_comment,
    STATE(468), 1,
      sym_pipeline,
    STATE(196), 2,
      sym_from_text,
      sym_from,
  [18138] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1092), 1,
      sym_keyword_from,
    STATE(368), 1,
      sym_comment,
    ACTIONS(1090), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [18154] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1096), 1,
      sym_keyword_from,
    STATE(369), 1,
      sym_comment,
    ACTIONS(1094), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [18170] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1100), 1,
      sym_keyword_from,
    STATE(370), 1,
      sym_comment,
    ACTIONS(1098), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [18186] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1102), 1,
      anon_sym_DASH_GT,
    ACTIONS(1104), 1,
      sym_identifier,
    STATE(371), 1,
      sym_comment,
    STATE(374), 1,
      aux_sym_function_definition_repeat1,
    STATE(434), 1,
      sym_parameter,
  [18205] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1106), 1,
      aux_sym__date_token1,
    ACTIONS(1108), 1,
      aux_sym__time_token1,
    STATE(32), 1,
      sym__time,
    STATE(222), 1,
      sym__date,
    STATE(372), 1,
      sym_comment,
  [18224] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(373), 1,
      sym_comment,
    ACTIONS(1110), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [18237] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1112), 1,
      anon_sym_DASH_GT,
    ACTIONS(1114), 1,
      sym_identifier,
    STATE(434), 1,
      sym_parameter,
    STATE(374), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [18254] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(375), 1,
      sym_comment,
    ACTIONS(1117), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [18267] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1106), 1,
      aux_sym__date_token1,
    ACTIONS(1119), 1,
      aux_sym__time_token1,
    STATE(32), 1,
      sym__time,
    STATE(38), 1,
      sym__date,
    STATE(376), 1,
      sym_comment,
  [18286] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(377), 1,
      sym_comment,
    ACTIONS(1121), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [18299] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(1123), 1,
      anon_sym_DASH,
    STATE(14), 1,
      sym__integer,
    STATE(378), 1,
      sym_comment,
  [18315] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    ACTIONS(1125), 1,
      anon_sym_COMMA,
    STATE(379), 1,
      sym_comment,
    STATE(414), 1,
      aux_sym_derives_repeat1,
  [18331] = 4,
    ACTIONS(1127), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1130), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    STATE(380), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [18345] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    STATE(381), 2,
      sym_comment,
      aux_sym_switch_repeat2,
  [18359] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1137), 1,
      sym_keyword_format,
    ACTIONS(1139), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(276), 1,
      sym__triple_quote_string,
    STATE(382), 1,
      sym_comment,
  [18375] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1141), 1,
      anon_sym_COMMA,
    ACTIONS(1143), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      sym_comment,
    STATE(403), 1,
      aux_sym_group_repeat1,
  [18391] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(406), 1,
      sym__natural_number,
    ACTIONS(1145), 1,
      anon_sym_DASH,
    STATE(14), 1,
      sym__integer,
    STATE(384), 1,
      sym_comment,
  [18407] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(686), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      sym_comment,
    STATE(406), 1,
      aux_sym_aggregate_repeat1,
  [18423] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1149), 1,
      anon_sym_RBRACK,
    STATE(386), 1,
      sym_comment,
    STATE(408), 1,
      aux_sym_sorts_repeat1,
  [18439] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(1123), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym__integer,
    STATE(387), 1,
      sym_comment,
  [18455] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(728), 1,
      anon_sym_RBRACK,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    STATE(388), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [18469] = 5,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1154), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1156), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(380), 1,
      aux_sym__inner_triple_quotes,
    STATE(389), 1,
      sym_comment,
  [18485] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_RBRACK,
    STATE(390), 1,
      sym_comment,
    STATE(411), 1,
      aux_sym_group_repeat1,
  [18501] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(1162), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_from_text,
    STATE(391), 1,
      sym_comment,
  [18517] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1104), 1,
      sym_identifier,
    STATE(371), 1,
      aux_sym_function_definition_repeat1,
    STATE(392), 1,
      sym_comment,
    STATE(434), 1,
      sym_parameter,
  [18533] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    ACTIONS(1166), 1,
      anon_sym_RBRACK,
    STATE(393), 1,
      sym_comment,
    STATE(414), 1,
      aux_sym_derives_repeat1,
  [18549] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    ACTIONS(1168), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_switch_repeat2,
    STATE(394), 1,
      sym_comment,
  [18565] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(378), 1,
      anon_sym_RBRACK,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      aux_sym_conditions_repeat1,
    STATE(395), 1,
      sym_comment,
  [18581] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_RBRACK,
    STATE(379), 1,
      aux_sym_derives_repeat1,
    STATE(396), 1,
      sym_comment,
  [18597] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1176), 1,
      anon_sym_DOT,
    STATE(397), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18611] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(406), 1,
      sym__natural_number,
    ACTIONS(1145), 1,
      anon_sym_DASH,
    STATE(18), 1,
      sym__integer,
    STATE(398), 1,
      sym_comment,
  [18627] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RBRACK,
    STATE(399), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [18641] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1183), 1,
      anon_sym_COLON,
    STATE(400), 1,
      sym_comment,
    ACTIONS(1185), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18655] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    ACTIONS(1187), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym_sorts_repeat1,
    STATE(401), 1,
      sym_comment,
  [18671] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(406), 1,
      sym__natural_number,
    ACTIONS(1145), 1,
      anon_sym_DASH,
    STATE(16), 1,
      sym__integer,
    STATE(402), 1,
      sym_comment,
  [18687] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    STATE(403), 1,
      sym_comment,
    STATE(413), 1,
      aux_sym_group_repeat1,
  [18703] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(404), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [18715] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(696), 1,
      anon_sym_RBRACK,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    STATE(405), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [18729] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(405), 1,
      aux_sym_aggregate_repeat1,
    STATE(406), 1,
      sym_comment,
  [18745] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    STATE(401), 1,
      aux_sym_sorts_repeat1,
    STATE(407), 1,
      sym_comment,
  [18761] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym_sorts_repeat1,
    STATE(408), 1,
      sym_comment,
  [18777] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1198), 1,
      sym__natural_number,
    STATE(409), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18791] = 5,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1154), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1200), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(380), 1,
      aux_sym__inner_triple_quotes,
    STATE(410), 1,
      sym_comment,
  [18807] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    STATE(411), 1,
      sym_comment,
    STATE(413), 1,
      aux_sym_group_repeat1,
  [18823] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(412), 1,
      sym_comment,
    ACTIONS(107), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym_identifier,
  [18835] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1207), 1,
      anon_sym_RBRACK,
    STATE(413), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [18849] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RBRACK,
    STATE(414), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [18863] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(1123), 1,
      anon_sym_DASH,
    STATE(18), 1,
      sym__integer,
    STATE(415), 1,
      sym_comment,
  [18879] = 5,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1154), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1214), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(380), 1,
      aux_sym__inner_triple_quotes,
    STATE(416), 1,
      sym_comment,
  [18895] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(417), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [18906] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1216), 1,
      sym__natural_number,
    ACTIONS(1218), 1,
      anon_sym_DOT,
    STATE(418), 1,
      sym_comment,
  [18919] = 4,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1154), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(389), 1,
      aux_sym__inner_triple_quotes,
    STATE(419), 1,
      sym_comment,
  [18932] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1220), 1,
      sym__natural_number,
    ACTIONS(1222), 1,
      anon_sym_DOT,
    STATE(420), 1,
      sym_comment,
  [18945] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    STATE(421), 1,
      sym_comment,
    ACTIONS(1224), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [18956] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(422), 1,
      sym_comment,
    ACTIONS(1207), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18967] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1226), 1,
      sym__natural_number,
    ACTIONS(1228), 1,
      anon_sym_DOT,
    STATE(423), 1,
      sym_comment,
  [18980] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1230), 1,
      sym_keyword_version,
    ACTIONS(1232), 1,
      sym_keyword_target,
    STATE(424), 1,
      sym_comment,
  [18993] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(425), 1,
      sym_comment,
    ACTIONS(187), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [19004] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(426), 1,
      sym_comment,
    ACTIONS(1212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19015] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(427), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [19026] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(428), 1,
      sym_comment,
    ACTIONS(223), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [19037] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(429), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [19048] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1234), 1,
      sym__natural_number,
    ACTIONS(1236), 1,
      anon_sym_DOT,
    STATE(430), 1,
      sym_comment,
  [19061] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(431), 1,
      sym_comment,
    ACTIONS(696), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19072] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(432), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [19083] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(433), 1,
      sym_comment,
    ACTIONS(1181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19094] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(434), 1,
      sym_comment,
    ACTIONS(1238), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [19105] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(435), 1,
      sym_comment,
    ACTIONS(1240), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [19116] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1242), 1,
      sym__natural_number,
    ACTIONS(1244), 1,
      anon_sym_DOT,
    STATE(436), 1,
      sym_comment,
  [19129] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(358), 1,
      sym__double_quote_string,
    STATE(437), 1,
      sym_comment,
  [19142] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(438), 1,
      sym_comment,
    ACTIONS(1246), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [19153] = 4,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1154), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(410), 1,
      aux_sym__inner_triple_quotes,
    STATE(439), 1,
      sym_comment,
  [19166] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1248), 1,
      sym_keyword_derive,
    STATE(440), 1,
      sym_comment,
    STATE(533), 1,
      sym_derives,
  [19179] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(441), 1,
      sym_comment,
    ACTIONS(1250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19190] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1252), 1,
      sym__natural_number,
    ACTIONS(1254), 1,
      anon_sym_DOT,
    STATE(442), 1,
      sym_comment,
  [19203] = 4,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1154), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(416), 1,
      aux_sym__inner_triple_quotes,
    STATE(443), 1,
      sym_comment,
  [19216] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1256), 1,
      aux_sym__time_token1,
    STATE(7), 1,
      sym__time,
    STATE(444), 1,
      sym_comment,
  [19229] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1258), 1,
      aux_sym__time_token1,
    STATE(7), 1,
      sym__time,
    STATE(445), 1,
      sym_comment,
  [19242] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1139), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(305), 1,
      sym__triple_quote_string,
    STATE(446), 1,
      sym_comment,
  [19255] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1254), 1,
      anon_sym_DOT,
    ACTIONS(1260), 1,
      sym__natural_number,
    STATE(447), 1,
      sym_comment,
  [19268] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1262), 1,
      anon_sym_COLON,
    STATE(448), 1,
      sym_comment,
  [19278] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1264), 1,
      sym__natural_number,
    STATE(449), 1,
      sym_comment,
  [19288] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1266), 1,
      anon_sym_LPAREN,
    STATE(450), 1,
      sym_comment,
  [19298] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1143), 1,
      anon_sym_RBRACK,
    STATE(451), 1,
      sym_comment,
  [19308] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1174), 1,
      anon_sym_RBRACK,
    STATE(452), 1,
      sym_comment,
  [19318] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1268), 1,
      anon_sym_LBRACK,
    STATE(453), 1,
      sym_comment,
  [19328] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1270), 1,
      aux_sym__date_token2,
    STATE(454), 1,
      sym_comment,
  [19338] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1272), 1,
      aux_sym_comment_token1,
    STATE(455), 1,
      sym_comment,
  [19348] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1274), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      sym_comment,
  [19358] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1276), 1,
      anon_sym_LPAREN,
    STATE(457), 1,
      sym_comment,
  [19368] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1278), 1,
      anon_sym_COMMA,
    STATE(458), 1,
      sym_comment,
  [19378] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1280), 1,
      sym__natural_number,
    STATE(459), 1,
      sym_comment,
  [19388] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1149), 1,
      anon_sym_RBRACK,
    STATE(460), 1,
      sym_comment,
  [19398] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1282), 1,
      sym__natural_number,
    STATE(461), 1,
      sym_comment,
  [19408] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1284), 1,
      anon_sym_DQUOTE,
    STATE(462), 1,
      sym_comment,
  [19418] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1286), 1,
      anon_sym_SQUOTE,
    STATE(463), 1,
      sym_comment,
  [19428] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1160), 1,
      anon_sym_RBRACK,
    STATE(464), 1,
      sym_comment,
  [19438] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1288), 1,
      anon_sym_DASH,
    STATE(465), 1,
      sym_comment,
  [19448] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1260), 1,
      sym__natural_number,
    STATE(466), 1,
      sym_comment,
  [19458] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      sym_comment,
  [19468] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym_comment,
  [19478] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1294), 1,
      sym_identifier,
    STATE(469), 1,
      sym_comment,
  [19488] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1296), 1,
      anon_sym_DASH,
    STATE(470), 1,
      sym_comment,
  [19498] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1298), 1,
      anon_sym_SQUOTE,
    STATE(471), 1,
      sym_comment,
  [19508] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1300), 1,
      anon_sym_LPAREN,
    STATE(472), 1,
      sym_comment,
  [19518] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1302), 1,
      aux_sym__date_token2,
    STATE(473), 1,
      sym_comment,
  [19528] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
    STATE(474), 1,
      sym_comment,
  [19538] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(700), 1,
      anon_sym_RBRACK,
    STATE(475), 1,
      sym_comment,
  [19548] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1306), 1,
      aux_sym__date_token2,
    STATE(476), 1,
      sym_comment,
  [19558] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1308), 1,
      anon_sym_DQUOTE,
    STATE(477), 1,
      sym_comment,
  [19568] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1310), 1,
      anon_sym_DQUOTE,
    STATE(478), 1,
      sym_comment,
  [19578] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(129), 1,
      sym__natural_number,
    STATE(479), 1,
      sym_comment,
  [19588] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1312), 1,
      anon_sym_LBRACK,
    STATE(480), 1,
      sym_comment,
  [19598] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1314), 1,
      aux_sym__date_token2,
    STATE(481), 1,
      sym_comment,
  [19608] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1316), 1,
      aux_sym__date_token2,
    STATE(482), 1,
      sym_comment,
  [19618] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1318), 1,
      aux_sym__date_token2,
    STATE(483), 1,
      sym_comment,
  [19628] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1320), 1,
      sym__natural_number,
    STATE(484), 1,
      sym_comment,
  [19638] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1198), 1,
      sym__natural_number,
    STATE(485), 1,
      sym_comment,
  [19648] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE,
    STATE(486), 1,
      sym_comment,
  [19658] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1324), 1,
      anon_sym_SQUOTE,
    STATE(487), 1,
      sym_comment,
  [19668] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1326), 1,
      anon_sym_COLON,
    STATE(488), 1,
      sym_comment,
  [19678] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1328), 1,
      anon_sym_COLON,
    STATE(489), 1,
      sym_comment,
  [19688] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(490), 1,
      sym_comment,
  [19698] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_comment,
  [19708] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1330), 1,
      sym__natural_number,
    STATE(492), 1,
      sym_comment,
  [19718] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1332), 1,
      anon_sym_DQUOTE,
    STATE(493), 1,
      sym_comment,
  [19728] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1334), 1,
      anon_sym_SQUOTE,
    STATE(494), 1,
      sym_comment,
  [19738] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1336), 1,
      anon_sym_COLON,
    STATE(495), 1,
      sym_comment,
  [19748] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1338), 1,
      anon_sym_EQ,
    STATE(496), 1,
      sym_comment,
  [19758] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1340), 1,
      aux_sym__date_token2,
    STATE(497), 1,
      sym_comment,
  [19768] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1342), 1,
      sym__natural_number,
    STATE(498), 1,
      sym_comment,
  [19778] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1344), 1,
      sym__natural_number,
    STATE(499), 1,
      sym_comment,
  [19788] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1346), 1,
      anon_sym_DQUOTE,
    STATE(500), 1,
      sym_comment,
  [19798] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1348), 1,
      anon_sym_SQUOTE,
    STATE(501), 1,
      sym_comment,
  [19808] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1350), 1,
      anon_sym_LPAREN,
    STATE(502), 1,
      sym_comment,
  [19818] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1352), 1,
      sym__natural_number,
    STATE(503), 1,
      sym_comment,
  [19828] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1354), 1,
      sym__natural_number,
    STATE(504), 1,
      sym_comment,
  [19838] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1356), 1,
      anon_sym_DQUOTE,
    STATE(505), 1,
      sym_comment,
  [19848] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1358), 1,
      anon_sym_SQUOTE,
    STATE(506), 1,
      sym_comment,
  [19858] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1360), 1,
      anon_sym_LPAREN,
    STATE(507), 1,
      sym_comment,
  [19868] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1362), 1,
      anon_sym_DQUOTE,
    STATE(508), 1,
      sym_comment,
  [19878] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1364), 1,
      aux_sym__double_quote_string_token1,
    STATE(509), 1,
      sym_comment,
  [19888] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1366), 1,
      aux_sym__literal_string_token1,
    STATE(510), 1,
      sym_comment,
  [19898] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1368), 1,
      anon_sym_RBRACK,
    STATE(511), 1,
      sym_comment,
  [19908] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1370), 1,
      anon_sym_DOT,
    STATE(512), 1,
      sym_comment,
  [19918] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1372), 1,
      sym__natural_number,
    STATE(513), 1,
      sym_comment,
  [19928] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1374), 1,
      aux_sym__literal_string_token1,
    STATE(514), 1,
      sym_comment,
  [19938] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1252), 1,
      sym__natural_number,
    STATE(515), 1,
      sym_comment,
  [19948] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1376), 1,
      aux_sym__double_quote_string_token1,
    STATE(516), 1,
      sym_comment,
  [19958] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1378), 1,
      anon_sym_LPAREN,
    STATE(517), 1,
      sym_comment,
  [19968] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1380), 1,
      aux_sym__double_quote_string_token1,
    STATE(518), 1,
      sym_comment,
  [19978] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1382), 1,
      aux_sym__double_quote_string_token1,
    STATE(519), 1,
      sym_comment,
  [19988] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1384), 1,
      aux_sym__double_quote_string_token1,
    STATE(520), 1,
      sym_comment,
  [19998] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1386), 1,
      aux_sym__literal_string_token1,
    STATE(521), 1,
      sym_comment,
  [20008] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1388), 1,
      anon_sym_COLON,
    STATE(522), 1,
      sym_comment,
  [20018] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1390), 1,
      sym_identifier,
    STATE(523), 1,
      sym_comment,
  [20028] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1392), 1,
      aux_sym__double_quote_string_token1,
    STATE(524), 1,
      sym_comment,
  [20038] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1394), 1,
      aux_sym__literal_string_token1,
    STATE(525), 1,
      sym_comment,
  [20048] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1396), 1,
      ts_builtin_sym_end,
    STATE(526), 1,
      sym_comment,
  [20058] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1398), 1,
      aux_sym__double_quote_string_token1,
    STATE(527), 1,
      sym_comment,
  [20068] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1400), 1,
      aux_sym__literal_string_token1,
    STATE(528), 1,
      sym_comment,
  [20078] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1402), 1,
      aux_sym__double_quote_string_token1,
    STATE(529), 1,
      sym_comment,
  [20088] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1404), 1,
      aux_sym__literal_string_token1,
    STATE(530), 1,
      sym_comment,
  [20098] = 3,
    ACTIONS(1132), 1,
      anon_sym_POUND,
    ACTIONS(1406), 1,
      aux_sym__double_quote_string_token1,
    STATE(531), 1,
      sym_comment,
  [20108] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(774), 1,
      aux_sym__date_token2,
    STATE(532), 1,
      sym_comment,
  [20118] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      sym_comment,
  [20128] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1410), 1,
      sym_identifier,
    STATE(534), 1,
      sym_comment,
  [20138] = 1,
    ACTIONS(1412), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 107,
  [SMALL_STATE(4)] = 211,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 416,
  [SMALL_STATE(7)] = 496,
  [SMALL_STATE(8)] = 559,
  [SMALL_STATE(9)] = 615,
  [SMALL_STATE(10)] = 671,
  [SMALL_STATE(11)] = 722,
  [SMALL_STATE(12)] = 773,
  [SMALL_STATE(13)] = 824,
  [SMALL_STATE(14)] = 875,
  [SMALL_STATE(15)] = 926,
  [SMALL_STATE(16)] = 979,
  [SMALL_STATE(17)] = 1030,
  [SMALL_STATE(18)] = 1083,
  [SMALL_STATE(19)] = 1134,
  [SMALL_STATE(20)] = 1186,
  [SMALL_STATE(21)] = 1236,
  [SMALL_STATE(22)] = 1290,
  [SMALL_STATE(23)] = 1340,
  [SMALL_STATE(24)] = 1390,
  [SMALL_STATE(25)] = 1440,
  [SMALL_STATE(26)] = 1490,
  [SMALL_STATE(27)] = 1566,
  [SMALL_STATE(28)] = 1616,
  [SMALL_STATE(29)] = 1666,
  [SMALL_STATE(30)] = 1716,
  [SMALL_STATE(31)] = 1766,
  [SMALL_STATE(32)] = 1816,
  [SMALL_STATE(33)] = 1866,
  [SMALL_STATE(34)] = 1916,
  [SMALL_STATE(35)] = 1966,
  [SMALL_STATE(36)] = 2018,
  [SMALL_STATE(37)] = 2120,
  [SMALL_STATE(38)] = 2170,
  [SMALL_STATE(39)] = 2222,
  [SMALL_STATE(40)] = 2272,
  [SMALL_STATE(41)] = 2322,
  [SMALL_STATE(42)] = 2372,
  [SMALL_STATE(43)] = 2422,
  [SMALL_STATE(44)] = 2515,
  [SMALL_STATE(45)] = 2608,
  [SMALL_STATE(46)] = 2701,
  [SMALL_STATE(47)] = 2800,
  [SMALL_STATE(48)] = 2893,
  [SMALL_STATE(49)] = 2994,
  [SMALL_STATE(50)] = 3093,
  [SMALL_STATE(51)] = 3192,
  [SMALL_STATE(52)] = 3291,
  [SMALL_STATE(53)] = 3390,
  [SMALL_STATE(54)] = 3489,
  [SMALL_STATE(55)] = 3539,
  [SMALL_STATE(56)] = 3593,
  [SMALL_STATE(57)] = 3689,
  [SMALL_STATE(58)] = 3787,
  [SMALL_STATE(59)] = 3883,
  [SMALL_STATE(60)] = 3979,
  [SMALL_STATE(61)] = 4077,
  [SMALL_STATE(62)] = 4175,
  [SMALL_STATE(63)] = 4271,
  [SMALL_STATE(64)] = 4329,
  [SMALL_STATE(65)] = 4423,
  [SMALL_STATE(66)] = 4475,
  [SMALL_STATE(67)] = 4573,
  [SMALL_STATE(68)] = 4669,
  [SMALL_STATE(69)] = 4729,
  [SMALL_STATE(70)] = 4825,
  [SMALL_STATE(71)] = 4887,
  [SMALL_STATE(72)] = 4982,
  [SMALL_STATE(73)] = 5075,
  [SMALL_STATE(74)] = 5168,
  [SMALL_STATE(75)] = 5259,
  [SMALL_STATE(76)] = 5352,
  [SMALL_STATE(77)] = 5447,
  [SMALL_STATE(78)] = 5542,
  [SMALL_STATE(79)] = 5637,
  [SMALL_STATE(80)] = 5732,
  [SMALL_STATE(81)] = 5825,
  [SMALL_STATE(82)] = 5918,
  [SMALL_STATE(83)] = 6013,
  [SMALL_STATE(84)] = 6106,
  [SMALL_STATE(85)] = 6201,
  [SMALL_STATE(86)] = 6296,
  [SMALL_STATE(87)] = 6388,
  [SMALL_STATE(88)] = 6478,
  [SMALL_STATE(89)] = 6568,
  [SMALL_STATE(90)] = 6658,
  [SMALL_STATE(91)] = 6748,
  [SMALL_STATE(92)] = 6838,
  [SMALL_STATE(93)] = 6928,
  [SMALL_STATE(94)] = 7018,
  [SMALL_STATE(95)] = 7110,
  [SMALL_STATE(96)] = 7200,
  [SMALL_STATE(97)] = 7252,
  [SMALL_STATE(98)] = 7342,
  [SMALL_STATE(99)] = 7428,
  [SMALL_STATE(100)] = 7518,
  [SMALL_STATE(101)] = 7608,
  [SMALL_STATE(102)] = 7695,
  [SMALL_STATE(103)] = 7744,
  [SMALL_STATE(104)] = 7829,
  [SMALL_STATE(105)] = 7900,
  [SMALL_STATE(106)] = 7987,
  [SMALL_STATE(107)] = 8072,
  [SMALL_STATE(108)] = 8157,
  [SMALL_STATE(109)] = 8239,
  [SMALL_STATE(110)] = 8321,
  [SMALL_STATE(111)] = 8403,
  [SMALL_STATE(112)] = 8485,
  [SMALL_STATE(113)] = 8569,
  [SMALL_STATE(114)] = 8651,
  [SMALL_STATE(115)] = 8733,
  [SMALL_STATE(116)] = 8815,
  [SMALL_STATE(117)] = 8897,
  [SMALL_STATE(118)] = 8979,
  [SMALL_STATE(119)] = 9063,
  [SMALL_STATE(120)] = 9147,
  [SMALL_STATE(121)] = 9229,
  [SMALL_STATE(122)] = 9311,
  [SMALL_STATE(123)] = 9395,
  [SMALL_STATE(124)] = 9477,
  [SMALL_STATE(125)] = 9559,
  [SMALL_STATE(126)] = 9619,
  [SMALL_STATE(127)] = 9701,
  [SMALL_STATE(128)] = 9783,
  [SMALL_STATE(129)] = 9865,
  [SMALL_STATE(130)] = 9947,
  [SMALL_STATE(131)] = 10029,
  [SMALL_STATE(132)] = 10111,
  [SMALL_STATE(133)] = 10193,
  [SMALL_STATE(134)] = 10263,
  [SMALL_STATE(135)] = 10345,
  [SMALL_STATE(136)] = 10427,
  [SMALL_STATE(137)] = 10509,
  [SMALL_STATE(138)] = 10591,
  [SMALL_STATE(139)] = 10673,
  [SMALL_STATE(140)] = 10733,
  [SMALL_STATE(141)] = 10817,
  [SMALL_STATE(142)] = 10877,
  [SMALL_STATE(143)] = 10961,
  [SMALL_STATE(144)] = 11043,
  [SMALL_STATE(145)] = 11125,
  [SMALL_STATE(146)] = 11171,
  [SMALL_STATE(147)] = 11236,
  [SMALL_STATE(148)] = 11303,
  [SMALL_STATE(149)] = 11361,
  [SMALL_STATE(150)] = 11401,
  [SMALL_STATE(151)] = 11441,
  [SMALL_STATE(152)] = 11496,
  [SMALL_STATE(153)] = 11559,
  [SMALL_STATE(154)] = 11620,
  [SMALL_STATE(155)] = 11672,
  [SMALL_STATE(156)] = 11709,
  [SMALL_STATE(157)] = 11744,
  [SMALL_STATE(158)] = 11778,
  [SMALL_STATE(159)] = 11812,
  [SMALL_STATE(160)] = 11846,
  [SMALL_STATE(161)] = 11880,
  [SMALL_STATE(162)] = 11914,
  [SMALL_STATE(163)] = 11948,
  [SMALL_STATE(164)] = 11982,
  [SMALL_STATE(165)] = 12038,
  [SMALL_STATE(166)] = 12094,
  [SMALL_STATE(167)] = 12128,
  [SMALL_STATE(168)] = 12162,
  [SMALL_STATE(169)] = 12196,
  [SMALL_STATE(170)] = 12230,
  [SMALL_STATE(171)] = 12281,
  [SMALL_STATE(172)] = 12334,
  [SMALL_STATE(173)] = 12390,
  [SMALL_STATE(174)] = 12422,
  [SMALL_STATE(175)] = 12454,
  [SMALL_STATE(176)] = 12512,
  [SMALL_STATE(177)] = 12567,
  [SMALL_STATE(178)] = 12602,
  [SMALL_STATE(179)] = 12635,
  [SMALL_STATE(180)] = 12688,
  [SMALL_STATE(181)] = 12735,
  [SMALL_STATE(182)] = 12765,
  [SMALL_STATE(183)] = 12795,
  [SMALL_STATE(184)] = 12825,
  [SMALL_STATE(185)] = 12855,
  [SMALL_STATE(186)] = 12885,
  [SMALL_STATE(187)] = 12915,
  [SMALL_STATE(188)] = 12945,
  [SMALL_STATE(189)] = 12975,
  [SMALL_STATE(190)] = 13005,
  [SMALL_STATE(191)] = 13035,
  [SMALL_STATE(192)] = 13065,
  [SMALL_STATE(193)] = 13095,
  [SMALL_STATE(194)] = 13141,
  [SMALL_STATE(195)] = 13171,
  [SMALL_STATE(196)] = 13201,
  [SMALL_STATE(197)] = 13251,
  [SMALL_STATE(198)] = 13281,
  [SMALL_STATE(199)] = 13315,
  [SMALL_STATE(200)] = 13345,
  [SMALL_STATE(201)] = 13375,
  [SMALL_STATE(202)] = 13405,
  [SMALL_STATE(203)] = 13435,
  [SMALL_STATE(204)] = 13465,
  [SMALL_STATE(205)] = 13495,
  [SMALL_STATE(206)] = 13540,
  [SMALL_STATE(207)] = 13571,
  [SMALL_STATE(208)] = 13618,
  [SMALL_STATE(209)] = 13653,
  [SMALL_STATE(210)] = 13684,
  [SMALL_STATE(211)] = 13717,
  [SMALL_STATE(212)] = 13750,
  [SMALL_STATE(213)] = 13780,
  [SMALL_STATE(214)] = 13814,
  [SMALL_STATE(215)] = 13842,
  [SMALL_STATE(216)] = 13870,
  [SMALL_STATE(217)] = 13898,
  [SMALL_STATE(218)] = 13932,
  [SMALL_STATE(219)] = 13960,
  [SMALL_STATE(220)] = 13988,
  [SMALL_STATE(221)] = 14022,
  [SMALL_STATE(222)] = 14052,
  [SMALL_STATE(223)] = 14081,
  [SMALL_STATE(224)] = 14110,
  [SMALL_STATE(225)] = 14137,
  [SMALL_STATE(226)] = 14166,
  [SMALL_STATE(227)] = 14207,
  [SMALL_STATE(228)] = 14248,
  [SMALL_STATE(229)] = 14277,
  [SMALL_STATE(230)] = 14306,
  [SMALL_STATE(231)] = 14335,
  [SMALL_STATE(232)] = 14371,
  [SMALL_STATE(233)] = 14409,
  [SMALL_STATE(234)] = 14437,
  [SMALL_STATE(235)] = 14463,
  [SMALL_STATE(236)] = 14489,
  [SMALL_STATE(237)] = 14525,
  [SMALL_STATE(238)] = 14551,
  [SMALL_STATE(239)] = 14577,
  [SMALL_STATE(240)] = 14603,
  [SMALL_STATE(241)] = 14629,
  [SMALL_STATE(242)] = 14657,
  [SMALL_STATE(243)] = 14683,
  [SMALL_STATE(244)] = 14723,
  [SMALL_STATE(245)] = 14749,
  [SMALL_STATE(246)] = 14775,
  [SMALL_STATE(247)] = 14815,
  [SMALL_STATE(248)] = 14841,
  [SMALL_STATE(249)] = 14881,
  [SMALL_STATE(250)] = 14907,
  [SMALL_STATE(251)] = 14939,
  [SMALL_STATE(252)] = 14977,
  [SMALL_STATE(253)] = 15005,
  [SMALL_STATE(254)] = 15033,
  [SMALL_STATE(255)] = 15069,
  [SMALL_STATE(256)] = 15109,
  [SMALL_STATE(257)] = 15137,
  [SMALL_STATE(258)] = 15171,
  [SMALL_STATE(259)] = 15201,
  [SMALL_STATE(260)] = 15231,
  [SMALL_STATE(261)] = 15257,
  [SMALL_STATE(262)] = 15297,
  [SMALL_STATE(263)] = 15331,
  [SMALL_STATE(264)] = 15357,
  [SMALL_STATE(265)] = 15383,
  [SMALL_STATE(266)] = 15411,
  [SMALL_STATE(267)] = 15443,
  [SMALL_STATE(268)] = 15469,
  [SMALL_STATE(269)] = 15497,
  [SMALL_STATE(270)] = 15537,
  [SMALL_STATE(271)] = 15575,
  [SMALL_STATE(272)] = 15600,
  [SMALL_STATE(273)] = 15625,
  [SMALL_STATE(274)] = 15668,
  [SMALL_STATE(275)] = 15693,
  [SMALL_STATE(276)] = 15730,
  [SMALL_STATE(277)] = 15755,
  [SMALL_STATE(278)] = 15780,
  [SMALL_STATE(279)] = 15805,
  [SMALL_STATE(280)] = 15842,
  [SMALL_STATE(281)] = 15867,
  [SMALL_STATE(282)] = 15892,
  [SMALL_STATE(283)] = 15917,
  [SMALL_STATE(284)] = 15942,
  [SMALL_STATE(285)] = 15967,
  [SMALL_STATE(286)] = 15992,
  [SMALL_STATE(287)] = 16017,
  [SMALL_STATE(288)] = 16042,
  [SMALL_STATE(289)] = 16067,
  [SMALL_STATE(290)] = 16092,
  [SMALL_STATE(291)] = 16117,
  [SMALL_STATE(292)] = 16142,
  [SMALL_STATE(293)] = 16167,
  [SMALL_STATE(294)] = 16192,
  [SMALL_STATE(295)] = 16217,
  [SMALL_STATE(296)] = 16242,
  [SMALL_STATE(297)] = 16267,
  [SMALL_STATE(298)] = 16292,
  [SMALL_STATE(299)] = 16317,
  [SMALL_STATE(300)] = 16342,
  [SMALL_STATE(301)] = 16367,
  [SMALL_STATE(302)] = 16392,
  [SMALL_STATE(303)] = 16417,
  [SMALL_STATE(304)] = 16442,
  [SMALL_STATE(305)] = 16467,
  [SMALL_STATE(306)] = 16492,
  [SMALL_STATE(307)] = 16519,
  [SMALL_STATE(308)] = 16544,
  [SMALL_STATE(309)] = 16581,
  [SMALL_STATE(310)] = 16606,
  [SMALL_STATE(311)] = 16631,
  [SMALL_STATE(312)] = 16656,
  [SMALL_STATE(313)] = 16681,
  [SMALL_STATE(314)] = 16706,
  [SMALL_STATE(315)] = 16731,
  [SMALL_STATE(316)] = 16756,
  [SMALL_STATE(317)] = 16781,
  [SMALL_STATE(318)] = 16806,
  [SMALL_STATE(319)] = 16831,
  [SMALL_STATE(320)] = 16856,
  [SMALL_STATE(321)] = 16881,
  [SMALL_STATE(322)] = 16906,
  [SMALL_STATE(323)] = 16930,
  [SMALL_STATE(324)] = 16970,
  [SMALL_STATE(325)] = 16994,
  [SMALL_STATE(326)] = 17034,
  [SMALL_STATE(327)] = 17074,
  [SMALL_STATE(328)] = 17098,
  [SMALL_STATE(329)] = 17122,
  [SMALL_STATE(330)] = 17146,
  [SMALL_STATE(331)] = 17170,
  [SMALL_STATE(332)] = 17194,
  [SMALL_STATE(333)] = 17218,
  [SMALL_STATE(334)] = 17242,
  [SMALL_STATE(335)] = 17266,
  [SMALL_STATE(336)] = 17306,
  [SMALL_STATE(337)] = 17330,
  [SMALL_STATE(338)] = 17370,
  [SMALL_STATE(339)] = 17410,
  [SMALL_STATE(340)] = 17450,
  [SMALL_STATE(341)] = 17474,
  [SMALL_STATE(342)] = 17497,
  [SMALL_STATE(343)] = 17531,
  [SMALL_STATE(344)] = 17565,
  [SMALL_STATE(345)] = 17597,
  [SMALL_STATE(346)] = 17628,
  [SMALL_STATE(347)] = 17659,
  [SMALL_STATE(348)] = 17690,
  [SMALL_STATE(349)] = 17721,
  [SMALL_STATE(350)] = 17752,
  [SMALL_STATE(351)] = 17781,
  [SMALL_STATE(352)] = 17809,
  [SMALL_STATE(353)] = 17837,
  [SMALL_STATE(354)] = 17865,
  [SMALL_STATE(355)] = 17893,
  [SMALL_STATE(356)] = 17921,
  [SMALL_STATE(357)] = 17944,
  [SMALL_STATE(358)] = 17961,
  [SMALL_STATE(359)] = 17978,
  [SMALL_STATE(360)] = 17995,
  [SMALL_STATE(361)] = 18012,
  [SMALL_STATE(362)] = 18033,
  [SMALL_STATE(363)] = 18054,
  [SMALL_STATE(364)] = 18073,
  [SMALL_STATE(365)] = 18090,
  [SMALL_STATE(366)] = 18104,
  [SMALL_STATE(367)] = 18118,
  [SMALL_STATE(368)] = 18138,
  [SMALL_STATE(369)] = 18154,
  [SMALL_STATE(370)] = 18170,
  [SMALL_STATE(371)] = 18186,
  [SMALL_STATE(372)] = 18205,
  [SMALL_STATE(373)] = 18224,
  [SMALL_STATE(374)] = 18237,
  [SMALL_STATE(375)] = 18254,
  [SMALL_STATE(376)] = 18267,
  [SMALL_STATE(377)] = 18286,
  [SMALL_STATE(378)] = 18299,
  [SMALL_STATE(379)] = 18315,
  [SMALL_STATE(380)] = 18331,
  [SMALL_STATE(381)] = 18345,
  [SMALL_STATE(382)] = 18359,
  [SMALL_STATE(383)] = 18375,
  [SMALL_STATE(384)] = 18391,
  [SMALL_STATE(385)] = 18407,
  [SMALL_STATE(386)] = 18423,
  [SMALL_STATE(387)] = 18439,
  [SMALL_STATE(388)] = 18455,
  [SMALL_STATE(389)] = 18469,
  [SMALL_STATE(390)] = 18485,
  [SMALL_STATE(391)] = 18501,
  [SMALL_STATE(392)] = 18517,
  [SMALL_STATE(393)] = 18533,
  [SMALL_STATE(394)] = 18549,
  [SMALL_STATE(395)] = 18565,
  [SMALL_STATE(396)] = 18581,
  [SMALL_STATE(397)] = 18597,
  [SMALL_STATE(398)] = 18611,
  [SMALL_STATE(399)] = 18627,
  [SMALL_STATE(400)] = 18641,
  [SMALL_STATE(401)] = 18655,
  [SMALL_STATE(402)] = 18671,
  [SMALL_STATE(403)] = 18687,
  [SMALL_STATE(404)] = 18703,
  [SMALL_STATE(405)] = 18715,
  [SMALL_STATE(406)] = 18729,
  [SMALL_STATE(407)] = 18745,
  [SMALL_STATE(408)] = 18761,
  [SMALL_STATE(409)] = 18777,
  [SMALL_STATE(410)] = 18791,
  [SMALL_STATE(411)] = 18807,
  [SMALL_STATE(412)] = 18823,
  [SMALL_STATE(413)] = 18835,
  [SMALL_STATE(414)] = 18849,
  [SMALL_STATE(415)] = 18863,
  [SMALL_STATE(416)] = 18879,
  [SMALL_STATE(417)] = 18895,
  [SMALL_STATE(418)] = 18906,
  [SMALL_STATE(419)] = 18919,
  [SMALL_STATE(420)] = 18932,
  [SMALL_STATE(421)] = 18945,
  [SMALL_STATE(422)] = 18956,
  [SMALL_STATE(423)] = 18967,
  [SMALL_STATE(424)] = 18980,
  [SMALL_STATE(425)] = 18993,
  [SMALL_STATE(426)] = 19004,
  [SMALL_STATE(427)] = 19015,
  [SMALL_STATE(428)] = 19026,
  [SMALL_STATE(429)] = 19037,
  [SMALL_STATE(430)] = 19048,
  [SMALL_STATE(431)] = 19061,
  [SMALL_STATE(432)] = 19072,
  [SMALL_STATE(433)] = 19083,
  [SMALL_STATE(434)] = 19094,
  [SMALL_STATE(435)] = 19105,
  [SMALL_STATE(436)] = 19116,
  [SMALL_STATE(437)] = 19129,
  [SMALL_STATE(438)] = 19142,
  [SMALL_STATE(439)] = 19153,
  [SMALL_STATE(440)] = 19166,
  [SMALL_STATE(441)] = 19179,
  [SMALL_STATE(442)] = 19190,
  [SMALL_STATE(443)] = 19203,
  [SMALL_STATE(444)] = 19216,
  [SMALL_STATE(445)] = 19229,
  [SMALL_STATE(446)] = 19242,
  [SMALL_STATE(447)] = 19255,
  [SMALL_STATE(448)] = 19268,
  [SMALL_STATE(449)] = 19278,
  [SMALL_STATE(450)] = 19288,
  [SMALL_STATE(451)] = 19298,
  [SMALL_STATE(452)] = 19308,
  [SMALL_STATE(453)] = 19318,
  [SMALL_STATE(454)] = 19328,
  [SMALL_STATE(455)] = 19338,
  [SMALL_STATE(456)] = 19348,
  [SMALL_STATE(457)] = 19358,
  [SMALL_STATE(458)] = 19368,
  [SMALL_STATE(459)] = 19378,
  [SMALL_STATE(460)] = 19388,
  [SMALL_STATE(461)] = 19398,
  [SMALL_STATE(462)] = 19408,
  [SMALL_STATE(463)] = 19418,
  [SMALL_STATE(464)] = 19428,
  [SMALL_STATE(465)] = 19438,
  [SMALL_STATE(466)] = 19448,
  [SMALL_STATE(467)] = 19458,
  [SMALL_STATE(468)] = 19468,
  [SMALL_STATE(469)] = 19478,
  [SMALL_STATE(470)] = 19488,
  [SMALL_STATE(471)] = 19498,
  [SMALL_STATE(472)] = 19508,
  [SMALL_STATE(473)] = 19518,
  [SMALL_STATE(474)] = 19528,
  [SMALL_STATE(475)] = 19538,
  [SMALL_STATE(476)] = 19548,
  [SMALL_STATE(477)] = 19558,
  [SMALL_STATE(478)] = 19568,
  [SMALL_STATE(479)] = 19578,
  [SMALL_STATE(480)] = 19588,
  [SMALL_STATE(481)] = 19598,
  [SMALL_STATE(482)] = 19608,
  [SMALL_STATE(483)] = 19618,
  [SMALL_STATE(484)] = 19628,
  [SMALL_STATE(485)] = 19638,
  [SMALL_STATE(486)] = 19648,
  [SMALL_STATE(487)] = 19658,
  [SMALL_STATE(488)] = 19668,
  [SMALL_STATE(489)] = 19678,
  [SMALL_STATE(490)] = 19688,
  [SMALL_STATE(491)] = 19698,
  [SMALL_STATE(492)] = 19708,
  [SMALL_STATE(493)] = 19718,
  [SMALL_STATE(494)] = 19728,
  [SMALL_STATE(495)] = 19738,
  [SMALL_STATE(496)] = 19748,
  [SMALL_STATE(497)] = 19758,
  [SMALL_STATE(498)] = 19768,
  [SMALL_STATE(499)] = 19778,
  [SMALL_STATE(500)] = 19788,
  [SMALL_STATE(501)] = 19798,
  [SMALL_STATE(502)] = 19808,
  [SMALL_STATE(503)] = 19818,
  [SMALL_STATE(504)] = 19828,
  [SMALL_STATE(505)] = 19838,
  [SMALL_STATE(506)] = 19848,
  [SMALL_STATE(507)] = 19858,
  [SMALL_STATE(508)] = 19868,
  [SMALL_STATE(509)] = 19878,
  [SMALL_STATE(510)] = 19888,
  [SMALL_STATE(511)] = 19898,
  [SMALL_STATE(512)] = 19908,
  [SMALL_STATE(513)] = 19918,
  [SMALL_STATE(514)] = 19928,
  [SMALL_STATE(515)] = 19938,
  [SMALL_STATE(516)] = 19948,
  [SMALL_STATE(517)] = 19958,
  [SMALL_STATE(518)] = 19968,
  [SMALL_STATE(519)] = 19978,
  [SMALL_STATE(520)] = 19988,
  [SMALL_STATE(521)] = 19998,
  [SMALL_STATE(522)] = 20008,
  [SMALL_STATE(523)] = 20018,
  [SMALL_STATE(524)] = 20028,
  [SMALL_STATE(525)] = 20038,
  [SMALL_STATE(526)] = 20048,
  [SMALL_STATE(527)] = 20058,
  [SMALL_STATE(528)] = 20068,
  [SMALL_STATE(529)] = 20078,
  [SMALL_STATE(530)] = 20088,
  [SMALL_STATE(531)] = 20098,
  [SMALL_STATE(532)] = 20108,
  [SMALL_STATE(533)] = 20118,
  [SMALL_STATE(534)] = 20128,
  [SMALL_STATE(535)] = 20138,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__integer, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 10),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 10),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(30),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(122),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(447),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(519),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(518),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(443),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(516),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(439),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(514),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(10),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(513),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(19),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(376),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 14),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 14),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 19),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 19),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2, .production_id = 6),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(166),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(418),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(520),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(510),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(169),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(459),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(155),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(191),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(430),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(529),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(528),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(192),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(498),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(178),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 15),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 15),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 24),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 24),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 11),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 11),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(107),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(82),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(83),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(480),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(49),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(103),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(62),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(61),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(320),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(436),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(531),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(530),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(298),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(503),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(265),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 25),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(330),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(420),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(527),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(525),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(332),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(449),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(306),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 22),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 22),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 21),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 21),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 6),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 6),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 5),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 5),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 17),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 17),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 23),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 6, .production_id = 23),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 4),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(71),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(51),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(67),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(66),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 26),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 26),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 27),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 27),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 7),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_definition, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 5),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 5),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 8),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 3),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 4),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 1),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 4),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 7),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 18),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 18),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 6),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 5),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 2),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [958] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__self_join, 4),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 3),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [1008] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(88),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(523),
  [1014] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(534),
  [1017] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(382),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(480),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(52),
  [1040] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(103),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(362),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(424),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1057] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1065] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1075] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(522),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(400),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(421),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2), SHIFT_REPEAT(94),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(112),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(58),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(5),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(93),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(86),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 16),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [1386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1396] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [1400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
