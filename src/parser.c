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
#define STATE_COUNT 550
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 173
#define ALIAS_COUNT 0
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 27

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
  anon_sym__ = 76,
  anon_sym_DOT = 77,
  sym_identifier = 78,
  anon_sym_DOT_DOT = 79,
  anon_sym_STAR = 80,
  anon_sym_SLASH = 81,
  anon_sym_PIPE = 82,
  anon_sym_BANG_EQ = 83,
  anon_sym_GT = 84,
  anon_sym_GT_EQ = 85,
  anon_sym_LT = 86,
  anon_sym_LT_EQ = 87,
  anon_sym_QMARK_QMARK = 88,
  aux_sym__date_token1 = 89,
  aux_sym__date_token2 = 90,
  anon_sym_AT = 91,
  aux_sym__time_token1 = 92,
  anon_sym_T = 93,
  anon_sym_Z = 94,
  anon_sym_POUND = 95,
  aux_sym_comment_token1 = 96,
  sym_bang = 97,
  sym_program = 98,
  sym_prql = 99,
  sym_target = 100,
  sym_pipeline = 101,
  sym_variable = 102,
  sym_function_definition = 103,
  sym_parameter = 104,
  sym__call_parameter = 105,
  sym_function_call = 106,
  sym_from_text = 107,
  sym_transforms = 108,
  sym_from = 109,
  sym_derives = 110,
  sym_filter = 111,
  sym__boolean_expression = 112,
  sym_switch = 113,
  sym_switch_condition = 114,
  sym_aggregate = 115,
  sym_aggregate_operation = 116,
  sym__aggregate_count = 117,
  sym_sorts = 118,
  sym_direction = 119,
  sym_takes = 120,
  sym_window = 121,
  sym_window_definitions = 122,
  sym__window_definition = 123,
  sym_group = 124,
  sym_joins = 125,
  sym__join_definition = 126,
  sym_conditions = 127,
  sym__self_join = 128,
  sym_select = 129,
  sym_table_reference = 130,
  sym_term = 131,
  sym__expression = 132,
  sym_literal = 133,
  sym_f_string = 134,
  sym_s_string = 135,
  sym__double_quote_string = 136,
  aux_sym__inner_triple_quotes = 137,
  sym__triple_quote_string = 138,
  sym__double_f_string = 139,
  sym__triple_f_string = 140,
  sym__double_s_string = 141,
  sym__triple_s_string = 142,
  sym__literal_string = 143,
  aux_sym__friendly_number = 144,
  sym_integer = 145,
  sym_decimal_number = 146,
  sym_field = 147,
  sym__alias_identifier = 148,
  sym_range = 149,
  sym_assignment = 150,
  sym_binary_expression = 151,
  sym__date = 152,
  sym_date = 153,
  sym__time = 154,
  sym_time = 155,
  sym_timestamp = 156,
  sym_timezone = 157,
  sym_comment = 158,
  aux_sym_program_repeat1 = 159,
  aux_sym_program_repeat2 = 160,
  aux_sym_function_definition_repeat1 = 161,
  aux_sym_function_call_repeat1 = 162,
  aux_sym_transforms_repeat1 = 163,
  aux_sym_derives_repeat1 = 164,
  aux_sym_switch_repeat1 = 165,
  aux_sym_switch_repeat2 = 166,
  aux_sym_aggregate_repeat1 = 167,
  aux_sym_sorts_repeat1 = 168,
  aux_sym_window_definitions_repeat1 = 169,
  aux_sym_group_repeat1 = 170,
  aux_sym_group_repeat2 = 171,
  aux_sym_conditions_repeat1 = 172,
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
  [anon_sym__] = "_",
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
  [aux_sym__friendly_number] = "_friendly_number",
  [sym_integer] = "integer",
  [sym_decimal_number] = "decimal_number",
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
  [anon_sym__] = anon_sym__,
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
  [aux_sym__friendly_number] = aux_sym__friendly_number,
  [sym_integer] = sym_integer,
  [sym_decimal_number] = sym_decimal_number,
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
  [anon_sym__] = {
    .visible = true,
    .named = false,
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
  [aux_sym__friendly_number] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_number] = {
    .visible = true,
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
  [6] = {.index = 4, .length = 3},
  [7] = {.index = 7, .length = 3},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 1},
  [13] = {.index = 18, .length = 4},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 1},
  [16] = {.index = 24, .length = 2},
  [17] = {.index = 26, .length = 1},
  [18] = {.index = 27, .length = 3},
  [19] = {.index = 30, .length = 3},
  [20] = {.index = 33, .length = 3},
  [21] = {.index = 36, .length = 3},
  [22] = {.index = 39, .length = 4},
  [23] = {.index = 43, .length = 1},
  [25] = {.index = 44, .length = 2},
  [26] = {.index = 46, .length = 1},
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
  [11] = {
    [3] = sym_literal,
  },
  [24] = {
    [2] = sym_literal,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__double_quote_string, 3,
    sym__double_quote_string,
    sym_identifier,
    sym_literal,
  sym_integer, 2,
    sym_integer,
    sym_literal,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(412);
      if (lookahead == '!') ADVANCE(768);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '.') ADVANCE(532);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(500);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(757);
      if (lookahead == 'A') ADVANCE(70);
      if (lookahead == 'C') ADVANCE(123);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == 'J') ADVANCE(129);
      if (lookahead == 'L') ADVANCE(47);
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'N') ADVANCE(165);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(759);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead == 'W') ADVANCE(84);
      if (lookahead == 'Z') ADVANCE(761);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 'j') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 'p') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == 'v') ADVANCE(221);
      if (lookahead == 'w') ADVANCE(251);
      if (lookahead == '|') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(407)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(599);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'O') ADVANCE(608);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(702);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead == '|') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(389)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(573);
      if (lookahead == 'D') ADVANCE(569);
      if (lookahead == 'F') ADVANCE(540);
      if (lookahead == 'G') ADVANCE(615);
      if (lookahead == 'J') ADVANCE(606);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'O') ADVANCE(608);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(544);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead == 'f') ADVANCE(644);
      if (lookahead == 'g') ADVANCE(718);
      if (lookahead == 'j') ADVANCE(709);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead == 't') ADVANCE(648);
      if (lookahead == '|') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(385)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(573);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'O') ADVANCE(608);
      if (lookahead == 'S') ADVANCE(605);
      if (lookahead == 'T') ADVANCE(544);
      if (lookahead == 'W') ADVANCE(583);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead == 't') ADVANCE(648);
      if (lookahead == 'w') ADVANCE(687);
      if (lookahead == '|') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(392)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(757);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'f') ADVANCE(533);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(384)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '@') ADVANCE(757);
      if (lookahead == 'A') ADVANCE(636);
      if (lookahead == 'C') ADVANCE(602);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'M') ADVANCE(542);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(618);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(736);
      if (lookahead == 'c') ADVANCE(705);
      if (lookahead == 'f') ADVANCE(533);
      if (lookahead == 'm') ADVANCE(646);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(383)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '@') ADVANCE(757);
      if (lookahead == 'A') ADVANCE(639);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(630);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(739);
      if (lookahead == 'f') ADVANCE(533);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(386)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '@') ADVANCE(757);
      if (lookahead == 'A') ADVANCE(639);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(631);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(739);
      if (lookahead == 'f') ADVANCE(533);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(400)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '@') ADVANCE(757);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(585);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'f') ADVANCE(533);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(387)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == 'A') ADVANCE(574);
      if (lookahead == 'D') ADVANCE(569);
      if (lookahead == 'F') ADVANCE(540);
      if (lookahead == 'G') ADVANCE(615);
      if (lookahead == 'J') ADVANCE(606);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(544);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead == 'f') ADVANCE(644);
      if (lookahead == 'g') ADVANCE(718);
      if (lookahead == 'j') ADVANCE(709);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead == 't') ADVANCE(648);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == 'A') ADVANCE(574);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(605);
      if (lookahead == 'T') ADVANCE(544);
      if (lookahead == 'W') ADVANCE(583);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead == 't') ADVANCE(648);
      if (lookahead == 'w') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(391)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(165);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'v') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(393)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(520);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == 'q') ADVANCE(271);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(285);
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(521);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(523);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(519);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(395)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(394)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(399)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(756);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(180);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(748);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(510);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(503);
      END_STATE();
    case 27:
      if (lookahead == '?') ADVANCE(753);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'U') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(154);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(141);
      if (lookahead == 'R') ADVANCE(167);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(76);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(161);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(476);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(78);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(155);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(158);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(465);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(122);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(85);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(459);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(427);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(435);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(437);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(419);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(441);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(423);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(140);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == 'I') ADVANCE(41);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'T') ADVANCE(45);
      if (lookahead == 'U') ADVANCE(104);
      if (lookahead == 'W') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead == 'O') ADVANCE(143);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(142);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(139);
      if (lookahead == 'G') ADVANCE(453);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(136);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 68:
      if (lookahead == 'F') ADVANCE(150);
      if (lookahead == 'T') ADVANCE(478);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 70:
      if (lookahead == 'G') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == 'V') ADVANCE(63);
      END_STATE();
    case 71:
      if (lookahead == 'G') ADVANCE(79);
      END_STATE();
    case 72:
      if (lookahead == 'G') ADVANCE(471);
      END_STATE();
    case 73:
      if (lookahead == 'G') ADVANCE(473);
      END_STATE();
    case 74:
      if (lookahead == 'G') ADVANCE(144);
      END_STATE();
    case 75:
      if (lookahead == 'G') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'G') ADVANCE(53);
      END_STATE();
    case 77:
      if (lookahead == 'G') ADVANCE(35);
      END_STATE();
    case 78:
      if (lookahead == 'H') ADVANCE(439);
      END_STATE();
    case 79:
      if (lookahead == 'H') ADVANCE(153);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(71);
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(170);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(138);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'U') ADVANCE(100);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'U') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(113);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(148);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(159);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(127);
      END_STATE();
    case 92:
      if (lookahead == 'K') ADVANCE(49);
      END_STATE();
    case 93:
      if (lookahead == 'K') ADVANCE(49);
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(147);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(162);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(464);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(474);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(480);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(55);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(96);
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(97);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'W') ADVANCE(145);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(88);
      END_STATE();
    case 104:
      if (lookahead == 'M') ADVANCE(455);
      END_STATE();
    case 105:
      if (lookahead == 'M') ADVANCE(413);
      END_STATE();
    case 106:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(469);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(443);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(431);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(499);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(481);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(72);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(152);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(73);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(120);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 121:
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 122:
      if (lookahead == 'O') ADVANCE(171);
      END_STATE();
    case 123:
      if (lookahead == 'O') ADVANCE(166);
      if (lookahead == 'S') ADVANCE(168);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 125:
      if (lookahead == 'O') ADVANCE(164);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 129:
      if (lookahead == 'O') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(126);
      END_STATE();
    case 130:
      if (lookahead == 'P') ADVANCE(33);
      END_STATE();
    case 131:
      if (lookahead == 'P') ADVANCE(421);
      END_STATE();
    case 132:
      if (lookahead == 'Q') ADVANCE(98);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(467);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(132);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(461);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(417);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(125);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(106);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(34);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(81);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 142:
      if (lookahead == 'R') ADVANCE(146);
      END_STATE();
    case 143:
      if (lookahead == 'R') ADVANCE(151);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 145:
      if (lookahead == 'S') ADVANCE(472);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(91);
      END_STATE();
    case 147:
      if (lookahead == 'S') ADVANCE(51);
      END_STATE();
    case 148:
      if (lookahead == 'S') ADVANCE(163);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(478);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(462);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(425);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(449);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(463);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(497);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(433);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(482);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(495);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(457);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 164:
      if (lookahead == 'U') ADVANCE(131);
      END_STATE();
    case 165:
      if (lookahead == 'U') ADVANCE(101);
      END_STATE();
    case 166:
      if (lookahead == 'U') ADVANCE(116);
      END_STATE();
    case 167:
      if (lookahead == 'U') ADVANCE(50);
      END_STATE();
    case 168:
      if (lookahead == 'V') ADVANCE(498);
      END_STATE();
    case 169:
      if (lookahead == 'V') ADVANCE(451);
      END_STATE();
    case 170:
      if (lookahead == 'V') ADVANCE(52);
      END_STATE();
    case 171:
      if (lookahead == 'W') ADVANCE(429);
      END_STATE();
    case 172:
      if (lookahead == 'X') ADVANCE(130);
      END_STATE();
    case 173:
      if (lookahead == 'X') ADVANCE(445);
      END_STATE();
    case 174:
      if (lookahead == 'X') ADVANCE(157);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'c') ADVANCE(279);
      if (lookahead == 'd') ADVANCE(369);
      if (lookahead == 'g') ADVANCE(223);
      if (lookahead == 'h') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(494);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == 'g') ADVANCE(453);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 230:
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 231:
      if (lookahead == 'f') ADVANCE(278);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 233:
      if (lookahead == 'g') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 'v') ADVANCE(222);
      END_STATE();
    case 234:
      if (lookahead == 'g') ADVANCE(244);
      END_STATE();
    case 235:
      if (lookahead == 'g') ADVANCE(471);
      END_STATE();
    case 236:
      if (lookahead == 'g') ADVANCE(473);
      END_STATE();
    case 237:
      if (lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 238:
      if (lookahead == 'g') ADVANCE(335);
      END_STATE();
    case 239:
      if (lookahead == 'g') ADVANCE(225);
      END_STATE();
    case 240:
      if (lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 241:
      if (lookahead == 'g') ADVANCE(337);
      END_STATE();
    case 242:
      if (lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 243:
      if (lookahead == 'h') ADVANCE(439);
      END_STATE();
    case 244:
      if (lookahead == 'h') ADVANCE(352);
      END_STATE();
    case 245:
      if (lookahead == 'h') ADVANCE(313);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(484);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 263:
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 264:
      if (lookahead == 'k') ADVANCE(245);
      END_STATE();
    case 265:
      if (lookahead == 'k') ADVANCE(204);
      END_STATE();
    case 266:
      if (lookahead == 'k') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 267:
      if (lookahead == 'k') ADVANCE(195);
      END_STATE();
    case 268:
      if (lookahead == 'k') ADVANCE(212);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(342);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(489);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'w') ADVANCE(338);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 284:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(455);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(414);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(470);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(431);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(499);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(481);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead == 'q') ADVANCE(283);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 310:
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 316:
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 317:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 318:
      if (lookahead == 'p') ADVANCE(421);
      END_STATE();
    case 319:
      if (lookahead == 'q') ADVANCE(372);
      END_STATE();
    case 320:
      if (lookahead == 'q') ADVANCE(274);
      END_STATE();
    case 321:
      if (lookahead == 'q') ADVANCE(275);
      END_STATE();
    case 322:
      if (lookahead == 'q') ADVANCE(276);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(417);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(472);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(491);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(347);
      if (lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(365);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 348:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 366:
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 367:
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 368:
      if (lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 369:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 370:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 371:
      if (lookahead == 'u') ADVANCE(346);
      END_STATE();
    case 372:
      if (lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 373:
      if (lookahead == 'v') ADVANCE(498);
      END_STATE();
    case 374:
      if (lookahead == 'v') ADVANCE(451);
      END_STATE();
    case 375:
      if (lookahead == 'v') ADVANCE(207);
      END_STATE();
    case 376:
      if (lookahead == 'v') ADVANCE(209);
      END_STATE();
    case 377:
      if (lookahead == 'w') ADVANCE(429);
      END_STATE();
    case 378:
      if (lookahead == 'w') ADVANCE(231);
      END_STATE();
    case 379:
      if (lookahead == 'x') ADVANCE(317);
      END_STATE();
    case 380:
      if (lookahead == 'x') ADVANCE(445);
      END_STATE();
    case 381:
      if (lookahead == 'x') ADVANCE(356);
      END_STATE();
    case 382:
      if (lookahead == 'y') ADVANCE(485);
      END_STATE();
    case 383:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(383)
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '@') ADVANCE(757);
      if (lookahead == 'A') ADVANCE(636);
      if (lookahead == 'C') ADVANCE(602);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'M') ADVANCE(542);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(618);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(736);
      if (lookahead == 'c') ADVANCE(705);
      if (lookahead == 'f') ADVANCE(533);
      if (lookahead == 'm') ADVANCE(646);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == 't') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 384:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(384)
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(757);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'f') ADVANCE(533);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 't') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 385:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(385)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(573);
      if (lookahead == 'D') ADVANCE(569);
      if (lookahead == 'F') ADVANCE(540);
      if (lookahead == 'G') ADVANCE(615);
      if (lookahead == 'J') ADVANCE(606);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'O') ADVANCE(608);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(544);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead == 'f') ADVANCE(644);
      if (lookahead == 'g') ADVANCE(718);
      if (lookahead == 'j') ADVANCE(709);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead == 't') ADVANCE(648);
      if (lookahead == '|') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 386:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(386)
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '@') ADVANCE(757);
      if (lookahead == 'A') ADVANCE(639);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(630);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(739);
      if (lookahead == 'f') ADVANCE(533);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 't') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 387:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(387)
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '@') ADVANCE(757);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(585);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'f') ADVANCE(533);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == 't') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 388:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(573);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'O') ADVANCE(608);
      if (lookahead == 'S') ADVANCE(605);
      if (lookahead == 'T') ADVANCE(544);
      if (lookahead == 'W') ADVANCE(583);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead == 't') ADVANCE(648);
      if (lookahead == 'w') ADVANCE(687);
      if (lookahead == '|') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 389:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(389)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(599);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'O') ADVANCE(608);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(702);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead == '|') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 390:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == 'A') ADVANCE(574);
      if (lookahead == 'D') ADVANCE(569);
      if (lookahead == 'F') ADVANCE(540);
      if (lookahead == 'G') ADVANCE(615);
      if (lookahead == 'J') ADVANCE(606);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(544);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead == 'f') ADVANCE(644);
      if (lookahead == 'g') ADVANCE(718);
      if (lookahead == 'j') ADVANCE(709);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead == 't') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 391:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(391)
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == 'A') ADVANCE(574);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(605);
      if (lookahead == 'T') ADVANCE(544);
      if (lookahead == 'W') ADVANCE(583);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead == 't') ADVANCE(648);
      if (lookahead == 'w') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 392:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(392)
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'f') ADVANCE(645);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 't') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 393:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(393)
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(165);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'v') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 394:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(394)
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '_') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 395:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(395)
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == ':') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 396:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(517);
      if (lookahead == '"') ADVANCE(516);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 397:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 398:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 399:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(399)
      if (lookahead == '#') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(756);
      END_STATE();
    case 400:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(400)
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '@') ADVANCE(757);
      if (lookahead == 'A') ADVANCE(639);
      if (lookahead == 'F') ADVANCE(541);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(631);
      if (lookahead == 'T') ADVANCE(611);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(739);
      if (lookahead == 'f') ADVANCE(533);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead == 't') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 401:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(758);
      END_STATE();
    case 402:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(754);
      END_STATE();
    case 403:
      if (eof) ADVANCE(412);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(573);
      if (lookahead == 'D') ADVANCE(569);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'G') ADVANCE(615);
      if (lookahead == 'J') ADVANCE(606);
      if (lookahead == 'L') ADVANCE(568);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'O') ADVANCE(608);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(544);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead == 'f') ADVANCE(643);
      if (lookahead == 'g') ADVANCE(718);
      if (lookahead == 'j') ADVANCE(709);
      if (lookahead == 'l') ADVANCE(672);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead == 't') ADVANCE(648);
      if (lookahead == '|') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(408)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 404:
      if (eof) ADVANCE(412);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(500);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'J') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(47);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(760);
      if (lookahead == 'W') ADVANCE(84);
      if (lookahead == 'Z') ADVANCE(761);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'j') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 'p') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(251);
      if (lookahead == '|') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(409)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 405:
      if (eof) ADVANCE(412);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '.') ADVANCE(532);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(500);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == 'F') ADVANCE(83);
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'J') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(760);
      if (lookahead == 'W') ADVANCE(84);
      if (lookahead == 'Z') ADVANCE(761);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == 'j') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(251);
      if (lookahead == '|') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(410)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 406:
      if (eof) ADVANCE(412);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == 'A') ADVANCE(574);
      if (lookahead == 'D') ADVANCE(569);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'G') ADVANCE(615);
      if (lookahead == 'J') ADVANCE(606);
      if (lookahead == 'L') ADVANCE(568);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(544);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead == 'f') ADVANCE(643);
      if (lookahead == 'g') ADVANCE(718);
      if (lookahead == 'j') ADVANCE(709);
      if (lookahead == 'l') ADVANCE(672);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead == 't') ADVANCE(648);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(411)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 407:
      if (eof) ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(407)
      if (lookahead == '!') ADVANCE(768);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '.') ADVANCE(532);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(500);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(757);
      if (lookahead == 'A') ADVANCE(70);
      if (lookahead == 'C') ADVANCE(123);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == 'J') ADVANCE(129);
      if (lookahead == 'L') ADVANCE(47);
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'N') ADVANCE(165);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(759);
      if (lookahead == 'V') ADVANCE(62);
      if (lookahead == 'W') ADVANCE(84);
      if (lookahead == 'Z') ADVANCE(761);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 'j') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 'p') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == 'v') ADVANCE(221);
      if (lookahead == 'w') ADVANCE(251);
      if (lookahead == '|') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 408:
      if (eof) ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(408)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(573);
      if (lookahead == 'D') ADVANCE(569);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'G') ADVANCE(615);
      if (lookahead == 'J') ADVANCE(606);
      if (lookahead == 'L') ADVANCE(568);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'O') ADVANCE(608);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(544);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead == 'f') ADVANCE(643);
      if (lookahead == 'g') ADVANCE(718);
      if (lookahead == 'j') ADVANCE(709);
      if (lookahead == 'l') ADVANCE(672);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead == 't') ADVANCE(648);
      if (lookahead == '|') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 409:
      if (eof) ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(409)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(500);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'J') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(47);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead == 'R') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(760);
      if (lookahead == 'W') ADVANCE(84);
      if (lookahead == 'Z') ADVANCE(761);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'j') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 'p') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(251);
      if (lookahead == '|') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 410:
      if (eof) ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(410)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '(') ADVANCE(501);
      if (lookahead == ')') ADVANCE(502);
      if (lookahead == '*') ADVANCE(745);
      if (lookahead == '+') ADVANCE(509);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '.') ADVANCE(532);
      if (lookahead == '/') ADVANCE(746);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == '<') ADVANCE(751);
      if (lookahead == '=') ADVANCE(500);
      if (lookahead == '>') ADVANCE(749);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == 'F') ADVANCE(83);
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'J') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(760);
      if (lookahead == 'W') ADVANCE(84);
      if (lookahead == 'Z') ADVANCE(761);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == 'j') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(251);
      if (lookahead == '|') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 411:
      if (eof) ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(411)
      if (lookahead == '"') ADVANCE(511);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '\'') ADVANCE(524);
      if (lookahead == ',') ADVANCE(505);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == ':') ADVANCE(483);
      if (lookahead == 'A') ADVANCE(574);
      if (lookahead == 'D') ADVANCE(569);
      if (lookahead == 'F') ADVANCE(539);
      if (lookahead == 'G') ADVANCE(615);
      if (lookahead == 'J') ADVANCE(606);
      if (lookahead == 'L') ADVANCE(568);
      if (lookahead == 'N') ADVANCE(634);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(544);
      if (lookahead == '[') ADVANCE(504);
      if (lookahead == '_') ADVANCE(530);
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead == 'f') ADVANCE(643);
      if (lookahead == 'g') ADVANCE(718);
      if (lookahead == 'j') ADVANCE(709);
      if (lookahead == 'l') ADVANCE(672);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead == 's') ADVANCE(674);
      if (lookahead == 't') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(160);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(360);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword_window);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_keyword_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(198);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_keyword_from_text);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_keyword_from_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_keyword_format);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_keyword_csv);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_keyword_json);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(510);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(503);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(764);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(514);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead == '#') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(514);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '"') ADVANCE(17);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(517);
      if (lookahead == '"') ADVANCE(516);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(16);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(765);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(527);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(526);
      if (lookahead == '#') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(527);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(744);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(520);
      if (lookahead == 'a') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == 'i') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == 't') ADVANCE(656);
      if (lookahead == 'u') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == 'u') ADVANCE(695);
      if (lookahead == 'w') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == 'u') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(587);
      if (lookahead == 'I') ADVANCE(590);
      if (lookahead == 'R') ADVANCE(603);
      if (lookahead == 'U') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(587);
      if (lookahead == 'I') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(641);
      if (lookahead == 'I') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(586);
      if (lookahead == 'R') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(610);
      if (lookahead == 'G') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(591);
      if (lookahead == 'O') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(577);
      if (lookahead == 'N') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(552);
      if (lookahead == 'U') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(592);
      if (lookahead == 'W') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'i') ADVANCE(693);
      if (lookahead == 'r') ADVANCE(706);
      if (lookahead == 'u') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'i') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead == 'i') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(689);
      if (lookahead == 'r') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(711);
      if (lookahead == 'g') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(694);
      if (lookahead == 'o') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(681);
      if (lookahead == 'n') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(743);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(750);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(752);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(755);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(167);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(767);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(514);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(527);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(763);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(767);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(767);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(748);
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
  [6] = {.lex_state = 403},
  [7] = {.lex_state = 404},
  [8] = {.lex_state = 404},
  [9] = {.lex_state = 404},
  [10] = {.lex_state = 404},
  [11] = {.lex_state = 405},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 404},
  [14] = {.lex_state = 404},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 405},
  [19] = {.lex_state = 405},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 404},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 405},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 404},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 405},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 405},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 405},
  [36] = {.lex_state = 404},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 405},
  [39] = {.lex_state = 405},
  [40] = {.lex_state = 405},
  [41] = {.lex_state = 405},
  [42] = {.lex_state = 405},
  [43] = {.lex_state = 405},
  [44] = {.lex_state = 404},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 405},
  [47] = {.lex_state = 405},
  [48] = {.lex_state = 405},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 405},
  [51] = {.lex_state = 405},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 405},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 404},
  [58] = {.lex_state = 405},
  [59] = {.lex_state = 405},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 405},
  [64] = {.lex_state = 405},
  [65] = {.lex_state = 404},
  [66] = {.lex_state = 405},
  [67] = {.lex_state = 405},
  [68] = {.lex_state = 405},
  [69] = {.lex_state = 405},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 405},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 404},
  [89] = {.lex_state = 404},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 404},
  [94] = {.lex_state = 404},
  [95] = {.lex_state = 404},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 404},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 404},
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
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 404},
  [148] = {.lex_state = 404},
  [149] = {.lex_state = 404},
  [150] = {.lex_state = 404},
  [151] = {.lex_state = 406},
  [152] = {.lex_state = 406},
  [153] = {.lex_state = 405},
  [154] = {.lex_state = 404},
  [155] = {.lex_state = 404},
  [156] = {.lex_state = 404},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 404},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 406},
  [161] = {.lex_state = 406},
  [162] = {.lex_state = 404},
  [163] = {.lex_state = 406},
  [164] = {.lex_state = 406},
  [165] = {.lex_state = 406},
  [166] = {.lex_state = 406},
  [167] = {.lex_state = 406},
  [168] = {.lex_state = 406},
  [169] = {.lex_state = 406},
  [170] = {.lex_state = 406},
  [171] = {.lex_state = 406},
  [172] = {.lex_state = 406},
  [173] = {.lex_state = 406},
  [174] = {.lex_state = 406},
  [175] = {.lex_state = 406},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 404},
  [198] = {.lex_state = 405},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 404},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 404},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 404},
  [215] = {.lex_state = 404},
  [216] = {.lex_state = 405},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 404},
  [219] = {.lex_state = 405},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 405},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 404},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 404},
  [229] = {.lex_state = 404},
  [230] = {.lex_state = 404},
  [231] = {.lex_state = 404},
  [232] = {.lex_state = 404},
  [233] = {.lex_state = 405},
  [234] = {.lex_state = 11},
  [235] = {.lex_state = 11},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 404},
  [238] = {.lex_state = 404},
  [239] = {.lex_state = 11},
  [240] = {.lex_state = 405},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 405},
  [243] = {.lex_state = 405},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 405},
  [246] = {.lex_state = 405},
  [247] = {.lex_state = 12},
  [248] = {.lex_state = 12},
  [249] = {.lex_state = 405},
  [250] = {.lex_state = 405},
  [251] = {.lex_state = 405},
  [252] = {.lex_state = 405},
  [253] = {.lex_state = 405},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 404},
  [257] = {.lex_state = 404},
  [258] = {.lex_state = 404},
  [259] = {.lex_state = 405},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 12},
  [262] = {.lex_state = 11},
  [263] = {.lex_state = 11},
  [264] = {.lex_state = 11},
  [265] = {.lex_state = 404},
  [266] = {.lex_state = 404},
  [267] = {.lex_state = 12},
  [268] = {.lex_state = 404},
  [269] = {.lex_state = 404},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 11},
  [276] = {.lex_state = 12},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 404},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 404},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 404},
  [285] = {.lex_state = 404},
  [286] = {.lex_state = 11},
  [287] = {.lex_state = 404},
  [288] = {.lex_state = 404},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 404},
  [291] = {.lex_state = 404},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 11},
  [294] = {.lex_state = 11},
  [295] = {.lex_state = 404},
  [296] = {.lex_state = 11},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 11},
  [299] = {.lex_state = 11},
  [300] = {.lex_state = 12},
  [301] = {.lex_state = 404},
  [302] = {.lex_state = 404},
  [303] = {.lex_state = 12},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 404},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 404},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 4},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 404},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 4},
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
  [370] = {.lex_state = 20},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 20},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 20},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 404},
  [382] = {.lex_state = 404},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 404},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 404},
  [387] = {.lex_state = 20},
  [388] = {.lex_state = 404},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 404},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 404},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 404},
  [396] = {.lex_state = 404},
  [397] = {.lex_state = 404},
  [398] = {.lex_state = 19},
  [399] = {.lex_state = 404},
  [400] = {.lex_state = 404},
  [401] = {.lex_state = 19},
  [402] = {.lex_state = 19},
  [403] = {.lex_state = 404},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 19},
  [406] = {.lex_state = 404},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 396},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 19},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 21},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 19},
  [420] = {.lex_state = 404},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 396},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 396},
  [427] = {.lex_state = 404},
  [428] = {.lex_state = 404},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 19},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 396},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 398},
  [441] = {.lex_state = 396},
  [442] = {.lex_state = 19},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 19},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 404},
  [448] = {.lex_state = 19},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 19},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 19},
  [453] = {.lex_state = 398},
  [454] = {.lex_state = 398},
  [455] = {.lex_state = 19},
  [456] = {.lex_state = 19},
  [457] = {.lex_state = 19},
  [458] = {.lex_state = 19},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 12},
  [461] = {.lex_state = 19},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 22},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 6},
  [476] = {.lex_state = 6},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 6},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 22},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 6},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 22},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 22},
  [498] = {.lex_state = 6},
  [499] = {.lex_state = 6},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 6},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 6},
  [506] = {.lex_state = 6},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 525},
  [510] = {.lex_state = 22},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 6},
  [513] = {.lex_state = 6},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 6},
  [518] = {.lex_state = 6},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 512},
  [524] = {.lex_state = 525},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 512},
  [527] = {.lex_state = 766},
  [528] = {.lex_state = 512},
  [529] = {.lex_state = 512},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 19},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 22},
  [534] = {.lex_state = 512},
  [535] = {.lex_state = 525},
  [536] = {.lex_state = 22},
  [537] = {.lex_state = 22},
  [538] = {.lex_state = 512},
  [539] = {.lex_state = 525},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 512},
  [542] = {.lex_state = 525},
  [543] = {.lex_state = 512},
  [544] = {.lex_state = 525},
  [545] = {.lex_state = 512},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 19},
  [548] = {.lex_state = 19},
  [549] = {(TSStateId)(-1)},
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
    [anon_sym__] = ACTIONS(1),
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
    [sym_program] = STATE(540),
    [sym_prql] = STATE(375),
    [sym_pipeline] = STATE(392),
    [sym_variable] = STATE(392),
    [sym_function_definition] = STATE(392),
    [sym_from_text] = STATE(176),
    [sym_from] = STATE(176),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(326),
    [aux_sym_program_repeat2] = STATE(354),
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
  [0] = 31,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(2), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(218), 1,
      sym_binary_expression,
    STATE(281), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(411), 3,
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
    STATE(41), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [113] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(229), 1,
      sym_binary_expression,
    STATE(281), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(443), 3,
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
    STATE(41), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [223] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(229), 1,
      sym_binary_expression,
    STATE(281), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(443), 3,
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
    STATE(41), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [333] = 29,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(5), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(229), 1,
      sym_binary_expression,
    STATE(281), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(443), 3,
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
    STATE(41), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [440] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym__natural_number,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(6), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym_function_call_repeat1,
    STATE(160), 1,
      aux_sym__friendly_number,
    STATE(165), 1,
      sym__double_quote_string,
    STATE(167), 1,
      sym_integer,
    STATE(170), 1,
      sym_literal,
    STATE(171), 1,
      sym__call_parameter,
    STATE(172), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(61), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(57), 11,
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
    ACTIONS(59), 16,
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
  [526] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym__friendly_number,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(79), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 35,
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
  [584] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(85), 2,
      sym__natural_number,
      anon_sym__,
    STATE(8), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(83), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(81), 35,
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
  [640] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(9), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(90), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(88), 35,
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
  [698] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(94), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(92), 37,
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
      sym__natural_number,
      anon_sym__,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [751] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(100), 1,
      anon_sym_DASH,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_Z,
    STATE(11), 1,
      sym_comment,
    STATE(64), 1,
      sym_timezone,
    STATE(533), 1,
      sym_direction,
    ACTIONS(98), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(96), 33,
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
  [814] = 32,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_PLUS,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(12), 1,
      sym_comment,
    STATE(36), 1,
      sym_integer,
    STATE(90), 1,
      sym_direction,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(421), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [922] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(118), 1,
      anon_sym_COLON,
    ACTIONS(120), 1,
      anon_sym_DOT,
    STATE(13), 1,
      sym_comment,
    ACTIONS(116), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 34,
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
  [978] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      anon_sym_COLON,
    ACTIONS(128), 1,
      anon_sym_DOT,
    STATE(14), 1,
      sym_comment,
    ACTIONS(124), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 34,
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
  [1034] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      sym__natural_number,
    ACTIONS(140), 1,
      anon_sym__,
    ACTIONS(142), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(15), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_function_call_repeat1,
    STATE(187), 1,
      aux_sym__friendly_number,
    STATE(188), 1,
      sym__double_quote_string,
    STATE(191), 1,
      sym__call_parameter,
    STATE(193), 1,
      sym_integer,
    STATE(195), 1,
      sym_literal,
    STATE(200), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(130), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(57), 11,
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
    ACTIONS(59), 12,
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
  [1116] = 31,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_PLUS,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      sym_comment,
    STATE(36), 1,
      sym_integer,
    STATE(87), 1,
      sym_direction,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(255), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1221] = 31,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_PLUS,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(17), 1,
      sym_comment,
    STATE(36), 1,
      sym_integer,
    STATE(96), 1,
      sym_direction,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(445), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1326] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(152), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(150), 35,
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
  [1377] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(158), 1,
      sym__natural_number,
    STATE(19), 1,
      sym_comment,
    ACTIONS(156), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(154), 34,
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
  [1430] = 31,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_PLUS,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(20), 1,
      sym_comment,
    STATE(36), 1,
      sym_integer,
    STATE(102), 1,
      sym_direction,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(197), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(255), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1535] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      anon_sym_DOT,
    STATE(21), 1,
      sym_comment,
    ACTIONS(152), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(150), 34,
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
  [1588] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(162), 1,
      sym_keyword_switch,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(22), 1,
      sym_comment,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(148), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(164), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(206), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1687] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(162), 1,
      sym_keyword_switch,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(23), 1,
      sym_comment,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(148), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(164), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(206), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1786] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(162), 1,
      sym_keyword_switch,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(24), 1,
      sym_comment,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(148), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(164), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(206), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1885] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(176), 6,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(174), 34,
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
  [1936] = 32,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(26), 1,
      sym_comment,
    STATE(36), 1,
      sym_integer,
    STATE(56), 1,
      aux_sym_switch_repeat1,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(222), 1,
      sym_switch_condition,
    STATE(256), 1,
      sym_literal,
    STATE(257), 1,
      sym_binary_expression,
    STATE(333), 1,
      sym__expression,
    STATE(416), 1,
      aux_sym_switch_repeat2,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2043] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(184), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(182), 35,
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
  [2094] = 31,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_PLUS,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(28), 1,
      sym_comment,
    STATE(36), 1,
      sym_integer,
    STATE(92), 1,
      sym_direction,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(162), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(255), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2199] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(188), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(186), 35,
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
  [2250] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(162), 1,
      sym_keyword_switch,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(30), 1,
      sym_comment,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(148), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(164), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(206), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2349] = 31,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_PLUS,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(31), 1,
      sym_comment,
    STATE(36), 1,
      sym_integer,
    STATE(96), 1,
      sym_direction,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(445), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2454] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(116), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 35,
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
  [2505] = 31,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_PLUS,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(33), 1,
      sym_comment,
    STATE(36), 1,
      sym_integer,
    STATE(96), 1,
      sym_direction,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(445), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2610] = 31,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(34), 1,
      sym_comment,
    STATE(36), 1,
      sym_integer,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(156), 1,
      sym_field,
    STATE(162), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(332), 1,
      sym_table_reference,
    STATE(335), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2714] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(200), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(198), 34,
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
  [2764] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      anon_sym_DOT,
    STATE(36), 1,
      sym_comment,
    ACTIONS(204), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(202), 33,
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
  [2816] = 31,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(26), 1,
      aux_sym_switch_repeat1,
    STATE(36), 1,
      sym_integer,
    STATE(37), 1,
      sym_comment,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(222), 1,
      sym_switch_condition,
    STATE(256), 1,
      sym_literal,
    STATE(257), 1,
      sym_binary_expression,
    STATE(333), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2920] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(214), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(212), 34,
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
  [2970] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(218), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(216), 34,
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
  [3020] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym__friendly_number,
    ACTIONS(220), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(90), 4,
      sym_keyword_from,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(88), 32,
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
      anon_sym_DASH,
      anon_sym_PLUS,
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
  [3074] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(224), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 34,
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
  [3124] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(228), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(226), 34,
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
  [3174] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(232), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(230), 34,
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
  [3224] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(44), 1,
      sym_comment,
    ACTIONS(59), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 33,
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
  [3276] = 31,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(45), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(214), 1,
      sym_binary_expression,
    STATE(429), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3380] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(244), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 34,
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
  [3430] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(248), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 34,
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
  [3480] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(252), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(250), 34,
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
  [3530] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(254), 1,
      sym_keyword_side,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(49), 1,
      sym_comment,
    STATE(103), 1,
      sym__join_definition,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(162), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(224), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3632] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    ACTIONS(258), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(256), 34,
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
  [3682] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(260), 2,
      sym__natural_number,
      anon_sym__,
    STATE(51), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(83), 4,
      sym_keyword_from,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(81), 32,
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
      anon_sym_DASH,
      anon_sym_PLUS,
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
  [3734] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(254), 1,
      sym_keyword_side,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(52), 1,
      sym_comment,
    STATE(101), 1,
      sym__join_definition,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(224), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3836] = 31,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(53), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(156), 1,
      sym_field,
    STATE(204), 1,
      sym_assignment,
    STATE(332), 1,
      sym_table_reference,
    STATE(335), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3940] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(54), 1,
      sym_comment,
    ACTIONS(265), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 34,
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
  [3990] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(55), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(413), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4092] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      sym__natural_number,
    ACTIONS(303), 1,
      anon_sym__,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(309), 1,
      sym_identifier,
    ACTIONS(312), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(222), 1,
      sym_switch_condition,
    STATE(256), 1,
      sym_literal,
    STATE(257), 1,
      sym_binary_expression,
    STATE(333), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(56), 2,
      sym_comment,
      aux_sym_switch_repeat1,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(271), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4192] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(315), 1,
      anon_sym_DASH_GT,
    ACTIONS(317), 1,
      anon_sym_DOT,
    STATE(57), 1,
      sym_comment,
    ACTIONS(224), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 32,
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
  [4246] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym_comment,
    ACTIONS(204), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(202), 34,
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
  [4296] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(59), 1,
      sym_comment,
    ACTIONS(321), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 34,
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
  [4346] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(60), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(418), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4448] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_PLUS,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(61), 1,
      sym_comment,
    STATE(96), 1,
      sym_direction,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(445), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4550] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(56), 1,
      aux_sym_switch_repeat1,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(62), 1,
      sym_comment,
    STATE(222), 1,
      sym_switch_condition,
    STATE(256), 1,
      sym_literal,
    STATE(257), 1,
      sym_binary_expression,
    STATE(333), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4652] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(63), 1,
      sym_comment,
    ACTIONS(156), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(154), 34,
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
  [4702] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_comment,
    ACTIONS(331), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 34,
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
  [4752] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      anon_sym_T,
    STATE(65), 1,
      sym_comment,
    ACTIONS(335), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 33,
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
  [4804] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym_comment,
    ACTIONS(341), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(339), 34,
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
  [4854] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym_comment,
    ACTIONS(345), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 34,
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
  [4904] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym_comment,
    ACTIONS(349), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(347), 34,
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
  [4954] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(51), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(79), 4,
      sym_keyword_from,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 32,
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
      anon_sym_DASH,
      anon_sym_PLUS,
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
  [5008] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(62), 1,
      aux_sym_switch_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(222), 1,
      sym_switch_condition,
    STATE(256), 1,
      sym_literal,
    STATE(257), 1,
      sym_binary_expression,
    STATE(333), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5109] = 29,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(71), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(511), 1,
      sym_term,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5208] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(72), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(155), 1,
      sym_binary_expression,
    STATE(205), 1,
      sym__expression,
    STATE(313), 1,
      sym_term,
    STATE(323), 1,
      sym_assignment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5309] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(73), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(228), 1,
      sym_binary_expression,
    STATE(451), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5410] = 29,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(74), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(449), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5509] = 29,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(75), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(449), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5608] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(76), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(155), 1,
      sym_binary_expression,
    STATE(162), 1,
      sym__expression,
    STATE(313), 1,
      sym_term,
    STATE(323), 1,
      sym_assignment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5709] = 29,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
    ACTIONS(369), 1,
      anon_sym_EQ_EQ,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(77), 1,
      sym_comment,
    STATE(230), 1,
      sym_binary_expression,
    STATE(322), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5808] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(78), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(228), 1,
      sym_binary_expression,
    STATE(451), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5909] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(79), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(228), 1,
      sym_binary_expression,
    STATE(451), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6010] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(80), 1,
      sym_comment,
    ACTIONS(94), 4,
      sym_keyword_from,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(92), 34,
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
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      sym__natural_number,
      anon_sym__,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [6059] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(375), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(62), 1,
      aux_sym_switch_repeat1,
    STATE(81), 1,
      sym_comment,
    STATE(222), 1,
      sym_switch_condition,
    STATE(256), 1,
      sym_literal,
    STATE(257), 1,
      sym_binary_expression,
    STATE(333), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6160] = 29,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(82), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(449), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6259] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(83), 1,
      sym_comment,
    STATE(266), 1,
      sym_binary_expression,
    STATE(291), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(530), 1,
      sym_function_call,
    ACTIONS(379), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6356] = 29,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(84), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(449), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6455] = 30,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(85), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(155), 1,
      sym_binary_expression,
    STATE(313), 1,
      sym_term,
    STATE(323), 1,
      sym_assignment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6556] = 26,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_comment,
    STATE(238), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6648] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(87), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(292), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6744] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(244), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 31,
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
  [6794] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    STATE(89), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(244), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 28,
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
  [6848] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(90), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(432), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6944] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(91), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(485), 1,
      sym_term,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7040] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(92), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(162), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(292), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7136] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(244), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 29,
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
  [7188] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    STATE(94), 1,
      sym_comment,
    ACTIONS(244), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(242), 22,
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
  [7250] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    STATE(95), 1,
      sym_comment,
    ACTIONS(244), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(242), 23,
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
  [7310] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(96), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(459), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7406] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    STATE(97), 1,
      sym_comment,
    ACTIONS(244), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(242), 24,
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
  [7464] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(98), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(319), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7560] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(99), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(162), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(319), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7656] = 29,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(62), 1,
      aux_sym_switch_repeat1,
    STATE(100), 1,
      sym_comment,
    STATE(222), 1,
      sym_switch_condition,
    STATE(256), 1,
      sym_literal,
    STATE(257), 1,
      sym_binary_expression,
    STATE(333), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7754] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(101), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(154), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(227), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7850] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(102), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(197), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(292), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7946] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(103), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(162), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(227), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8042] = 28,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(104), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(449), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8138] = 29,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(105), 1,
      sym_comment,
    STATE(113), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(205), 1,
      sym__expression,
    STATE(228), 1,
      sym_binary_expression,
    STATE(451), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(147), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8236] = 27,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(106), 1,
      sym_comment,
    STATE(232), 1,
      sym_binary_expression,
    STATE(322), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8329] = 27,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym_comment,
    STATE(232), 1,
      sym_binary_expression,
    STATE(322), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8422] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(405), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      anon_sym_SQUOTE,
    ACTIONS(411), 1,
      sym__natural_number,
    ACTIONS(413), 1,
      anon_sym__,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      sym_identifier,
    STATE(108), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_function_call_repeat1,
    STATE(236), 1,
      aux_sym__friendly_number,
    STATE(262), 1,
      sym__call_parameter,
    STATE(263), 1,
      sym_literal,
    STATE(275), 1,
      sym__double_quote_string,
    STATE(298), 1,
      sym_integer,
    STATE(277), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(403), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(59), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 10,
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
  [8499] = 26,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym_comment,
    STATE(158), 1,
      sym__expression,
    STATE(309), 1,
      sym__boolean_expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8590] = 26,
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
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      sym__natural_number,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      anon_sym__,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_AT,
    STATE(69), 1,
      aux_sym__friendly_number,
    STATE(110), 1,
      sym_comment,
    STATE(153), 1,
      sym_integer,
    STATE(243), 1,
      sym__double_quote_string,
    STATE(259), 1,
      sym__expression,
    STATE(260), 1,
      sym_range,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8681] = 26,
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
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      sym__natural_number,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      anon_sym__,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_AT,
    STATE(69), 1,
      aux_sym__friendly_number,
    STATE(111), 1,
      sym_comment,
    STATE(198), 1,
      sym_integer,
    STATE(243), 1,
      sym__double_quote_string,
    STATE(259), 1,
      sym__expression,
    STATE(404), 1,
      sym_range,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8772] = 25,
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
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      sym__natural_number,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      anon_sym__,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_AT,
    STATE(69), 1,
      aux_sym__friendly_number,
    STATE(112), 1,
      sym_comment,
    STATE(240), 1,
      sym_integer,
    STATE(243), 1,
      sym__double_quote_string,
    STATE(250), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8860] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(317), 1,
      anon_sym_DOT,
    ACTIONS(433), 1,
      sym_keyword_from,
    STATE(113), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 12,
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
    ACTIONS(431), 18,
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
  [8912] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(46), 1,
      sym__expression,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(114), 1,
      sym_comment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9000] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(94), 1,
      sym__expression,
    STATE(115), 1,
      sym_comment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9088] = 25,
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
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      sym__natural_number,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      anon_sym__,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_AT,
    STATE(69), 1,
      aux_sym__friendly_number,
    STATE(116), 1,
      sym_comment,
    STATE(240), 1,
      sym_integer,
    STATE(243), 1,
      sym__double_quote_string,
    STATE(251), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9176] = 26,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(117), 1,
      sym_comment,
    STATE(268), 1,
      sym_binary_expression,
    STATE(343), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9266] = 25,
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
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      sym__natural_number,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      anon_sym__,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_AT,
    STATE(69), 1,
      aux_sym__friendly_number,
    STATE(118), 1,
      sym_comment,
    STATE(240), 1,
      sym_integer,
    STATE(243), 1,
      sym__double_quote_string,
    STATE(246), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9354] = 25,
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
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      sym__natural_number,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      anon_sym__,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_AT,
    STATE(46), 1,
      sym__expression,
    STATE(69), 1,
      aux_sym__friendly_number,
    STATE(119), 1,
      sym_comment,
    STATE(240), 1,
      sym_integer,
    STATE(243), 1,
      sym__double_quote_string,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9442] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__expression,
    STATE(120), 1,
      sym_comment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9530] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(121), 1,
      sym_comment,
    STATE(231), 1,
      sym__double_quote_string,
    STATE(278), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9618] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(122), 1,
      sym_comment,
    STATE(302), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9706] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(123), 1,
      sym_comment,
    STATE(301), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9794] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(124), 1,
      sym_comment,
    STATE(231), 1,
      sym__double_quote_string,
    STATE(284), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9882] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(89), 1,
      sym__expression,
    STATE(125), 1,
      sym_comment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9970] = 26,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(126), 1,
      sym_comment,
    STATE(295), 1,
      sym_binary_expression,
    STATE(343), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [10060] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(127), 1,
      sym_comment,
    STATE(231), 1,
      sym__double_quote_string,
    STATE(285), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10148] = 26,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(128), 1,
      sym_comment,
    STATE(322), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(210), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [10238] = 25,
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
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      sym__natural_number,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      anon_sym__,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_AT,
    STATE(69), 1,
      aux_sym__friendly_number,
    STATE(129), 1,
      sym_comment,
    STATE(240), 1,
      sym_integer,
    STATE(243), 1,
      sym__double_quote_string,
    STATE(252), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10326] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    ACTIONS(441), 1,
      anon_sym_SQUOTE,
    ACTIONS(443), 1,
      sym__natural_number,
    ACTIONS(445), 1,
      anon_sym__,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(130), 1,
      sym_comment,
    STATE(180), 1,
      aux_sym_function_call_repeat1,
    STATE(270), 1,
      aux_sym__friendly_number,
    STATE(314), 1,
      sym__double_quote_string,
    STATE(316), 1,
      sym_literal,
    STATE(327), 1,
      sym__call_parameter,
    STATE(350), 1,
      sym_integer,
    STATE(318), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(435), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(59), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 13,
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
  [10402] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(88), 1,
      sym__expression,
    STATE(131), 1,
      sym_comment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10490] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(93), 1,
      sym__expression,
    STATE(132), 1,
      sym_comment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10578] = 25,
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
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      sym__natural_number,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      anon_sym__,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_AT,
    STATE(69), 1,
      aux_sym__friendly_number,
    STATE(133), 1,
      sym_comment,
    STATE(240), 1,
      sym_integer,
    STATE(243), 1,
      sym__double_quote_string,
    STATE(253), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10666] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(97), 1,
      sym__expression,
    STATE(134), 1,
      sym_comment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10754] = 26,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(135), 1,
      sym_comment,
    STATE(232), 1,
      sym_binary_expression,
    STATE(322), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [10844] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(136), 1,
      sym_comment,
    STATE(231), 1,
      sym__double_quote_string,
    STATE(287), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10932] = 26,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(137), 1,
      sym_comment,
    STATE(266), 1,
      sym_binary_expression,
    STATE(269), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [11022] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(138), 1,
      sym_comment,
    STATE(258), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11110] = 26,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(139), 1,
      sym_comment,
    STATE(265), 1,
      sym_binary_expression,
    STATE(343), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [11200] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym_comment,
    STATE(149), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11288] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(46), 1,
      sym__expression,
    STATE(141), 1,
      sym_comment,
    STATE(231), 1,
      sym__double_quote_string,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11376] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(142), 1,
      sym_comment,
    STATE(231), 1,
      sym__double_quote_string,
    STATE(288), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11464] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(143), 1,
      sym_comment,
    STATE(231), 1,
      sym__double_quote_string,
    STATE(290), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11552] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(144), 1,
      sym_comment,
    STATE(237), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11640] = 25,
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
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(57), 1,
      sym__double_quote_string,
    STATE(145), 1,
      sym_comment,
    STATE(150), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11728] = 25,
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
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      sym__natural_number,
    ACTIONS(421), 1,
      anon_sym_DASH,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      anon_sym__,
    ACTIONS(427), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_AT,
    STATE(69), 1,
      aux_sym__friendly_number,
    STATE(146), 1,
      sym_comment,
    STATE(240), 1,
      sym_integer,
    STATE(243), 1,
      sym__double_quote_string,
    STATE(249), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(38), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(39), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(41), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11816] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(433), 1,
      sym_keyword_from,
    STATE(147), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 12,
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
    ACTIONS(431), 18,
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
  [11865] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(453), 1,
      sym_keyword_from,
    ACTIONS(455), 1,
      sym_keyword_or,
    STATE(148), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(451), 18,
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
  [11925] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(455), 1,
      sym_keyword_or,
    ACTIONS(459), 1,
      sym_keyword_from,
    STATE(149), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(457), 18,
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
  [11985] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(455), 1,
      sym_keyword_or,
    ACTIONS(463), 1,
      sym_keyword_from,
    STATE(150), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(461), 18,
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
  [12045] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym__natural_number,
    ACTIONS(71), 1,
      anon_sym__,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(151), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_function_call_repeat1,
    STATE(160), 1,
      aux_sym__friendly_number,
    STATE(165), 1,
      sym__double_quote_string,
    STATE(167), 1,
      sym_integer,
    STATE(170), 1,
      sym_literal,
    STATE(171), 1,
      sym__call_parameter,
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(172), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(61), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(467), 12,
      sym_keyword_from,
      sym_keyword_filter,
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
  [12118] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(476), 1,
      anon_sym_DASH,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    ACTIONS(482), 1,
      anon_sym_SQUOTE,
    ACTIONS(485), 1,
      sym__natural_number,
    ACTIONS(488), 1,
      anon_sym__,
    ACTIONS(491), 1,
      anon_sym_DOT,
    ACTIONS(494), 1,
      sym_identifier,
    STATE(160), 1,
      aux_sym__friendly_number,
    STATE(165), 1,
      sym__double_quote_string,
    STATE(167), 1,
      sym_integer,
    STATE(170), 1,
      sym_literal,
    STATE(171), 1,
      sym__call_parameter,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(152), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(172), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(473), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(471), 12,
      sym_keyword_from,
      sym_keyword_filter,
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
  [12189] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(499), 1,
      sym_keyword_from,
    ACTIONS(501), 1,
      anon_sym_DOT,
    STATE(153), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(202), 13,
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
    ACTIONS(497), 14,
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
  [12237] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(455), 1,
      sym_keyword_or,
    ACTIONS(505), 1,
      sym_keyword_from,
    ACTIONS(507), 1,
      anon_sym_EQ,
    STATE(154), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 13,
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
  [12295] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(155), 1,
      sym_comment,
    ACTIONS(224), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 25,
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
  [12335] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_comment,
    ACTIONS(224), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 25,
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
  [12375] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      sym__natural_number,
    ACTIONS(140), 1,
      anon_sym__,
    ACTIONS(142), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(157), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym_function_call_repeat1,
    STATE(187), 1,
      aux_sym__friendly_number,
    STATE(188), 1,
      sym__double_quote_string,
    STATE(191), 1,
      sym__call_parameter,
    STATE(193), 1,
      sym_integer,
    STATE(195), 1,
      sym_literal,
    ACTIONS(465), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(200), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(130), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(467), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [12444] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(455), 1,
      sym_keyword_or,
    ACTIONS(511), 1,
      sym_keyword_from,
    STATE(158), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(509), 13,
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
  [12499] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_DASH,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      sym__natural_number,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(531), 1,
      anon_sym_DOT,
    ACTIONS(534), 1,
      sym_identifier,
    STATE(187), 1,
      aux_sym__friendly_number,
    STATE(188), 1,
      sym__double_quote_string,
    STATE(191), 1,
      sym__call_parameter,
    STATE(193), 1,
      sym_integer,
    STATE(195), 1,
      sym_literal,
    ACTIONS(469), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(159), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(200), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(513), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(471), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [12566] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    STATE(164), 1,
      aux_sym__friendly_number,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(79), 17,
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
      anon_sym__,
      sym_identifier,
  [12604] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(161), 1,
      sym_comment,
    STATE(164), 1,
      aux_sym__friendly_number,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(90), 17,
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
      anon_sym__,
      sym_identifier,
  [12642] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(455), 1,
      sym_keyword_or,
    ACTIONS(537), 1,
      anon_sym_EQ,
    STATE(162), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 10,
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
  [12694] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(543), 1,
      anon_sym_COLON,
    STATE(163), 1,
      sym_comment,
    ACTIONS(539), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(541), 17,
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
      anon_sym__,
      sym_identifier,
  [12732] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(545), 1,
      sym__natural_number,
    ACTIONS(548), 1,
      anon_sym__,
    STATE(164), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
    ACTIONS(83), 16,
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
  [12772] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(315), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(551), 17,
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
      anon_sym__,
      sym_identifier,
  [12808] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(226), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(228), 17,
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
      anon_sym__,
      sym_identifier,
  [12843] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(204), 17,
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
      anon_sym__,
      sym_identifier,
  [12878] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(94), 17,
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
      anon_sym__,
      sym_identifier,
  [12913] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(156), 17,
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
      anon_sym__,
      sym_identifier,
  [12948] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(170), 1,
      sym_comment,
    ACTIONS(539), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(541), 17,
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
      anon_sym__,
      sym_identifier,
  [12983] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(171), 1,
      sym_comment,
    ACTIONS(553), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(555), 17,
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
      anon_sym__,
      sym_identifier,
  [13018] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(172), 1,
      sym_comment,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(204), 17,
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
      anon_sym__,
      sym_identifier,
  [13053] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment,
    ACTIONS(343), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(345), 17,
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
      anon_sym__,
      sym_identifier,
  [13088] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(174), 1,
      sym_comment,
    ACTIONS(557), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(559), 17,
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
      anon_sym__,
      sym_identifier,
  [13123] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym_comment,
    ACTIONS(182), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(184), 17,
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
      anon_sym__,
      sym_identifier,
  [13158] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(563), 1,
      sym_keyword_from,
    ACTIONS(565), 1,
      sym_keyword_filter,
    ACTIONS(567), 1,
      sym_keyword_derive,
    ACTIONS(569), 1,
      sym_keyword_group,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(573), 1,
      sym_keyword_sort,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(577), 1,
      sym_keyword_join,
    ACTIONS(579), 1,
      sym_keyword_select,
    STATE(176), 1,
      sym_comment,
    STATE(183), 1,
      aux_sym_transforms_repeat1,
    STATE(379), 1,
      sym_transforms,
    ACTIONS(561), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(328), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [13214] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    ACTIONS(584), 1,
      anon_sym_DASH,
    ACTIONS(587), 1,
      anon_sym_DQUOTE,
    ACTIONS(590), 1,
      anon_sym_SQUOTE,
    ACTIONS(593), 1,
      sym__natural_number,
    ACTIONS(596), 1,
      anon_sym__,
    ACTIONS(599), 1,
      anon_sym_DOT,
    ACTIONS(602), 1,
      sym_identifier,
    STATE(236), 1,
      aux_sym__friendly_number,
    STATE(262), 1,
      sym__call_parameter,
    STATE(263), 1,
      sym_literal,
    STATE(275), 1,
      sym__double_quote_string,
    STATE(298), 1,
      sym_integer,
    STATE(177), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(277), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(581), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(471), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [13276] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(405), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      anon_sym_SQUOTE,
    ACTIONS(411), 1,
      sym__natural_number,
    ACTIONS(413), 1,
      anon_sym__,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_function_call_repeat1,
    STATE(178), 1,
      sym_comment,
    STATE(236), 1,
      aux_sym__friendly_number,
    STATE(262), 1,
      sym__call_parameter,
    STATE(263), 1,
      sym_literal,
    STATE(275), 1,
      sym__double_quote_string,
    STATE(298), 1,
      sym_integer,
    STATE(277), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(403), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(467), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [13340] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      sym_keyword_filter,
    ACTIONS(567), 1,
      sym_keyword_derive,
    ACTIONS(569), 1,
      sym_keyword_group,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(573), 1,
      sym_keyword_sort,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(577), 1,
      sym_keyword_join,
    ACTIONS(579), 1,
      sym_keyword_select,
    ACTIONS(607), 1,
      sym_keyword_from,
    STATE(179), 1,
      sym_comment,
    STATE(183), 1,
      aux_sym_transforms_repeat1,
    STATE(391), 1,
      sym_transforms,
    ACTIONS(605), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(328), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [13396] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    ACTIONS(441), 1,
      anon_sym_SQUOTE,
    ACTIONS(443), 1,
      sym__natural_number,
    ACTIONS(445), 1,
      anon_sym__,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(180), 1,
      sym_comment,
    STATE(181), 1,
      aux_sym_function_call_repeat1,
    STATE(270), 1,
      aux_sym__friendly_number,
    STATE(314), 1,
      sym__double_quote_string,
    STATE(316), 1,
      sym_literal,
    STATE(327), 1,
      sym__call_parameter,
    STATE(350), 1,
      sym_integer,
    STATE(318), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(435), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(465), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13457] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(612), 1,
      anon_sym_DASH,
    ACTIONS(615), 1,
      anon_sym_DQUOTE,
    ACTIONS(618), 1,
      anon_sym_SQUOTE,
    ACTIONS(621), 1,
      sym__natural_number,
    ACTIONS(624), 1,
      anon_sym__,
    ACTIONS(627), 1,
      anon_sym_DOT,
    ACTIONS(630), 1,
      sym_identifier,
    STATE(270), 1,
      aux_sym__friendly_number,
    STATE(314), 1,
      sym__double_quote_string,
    STATE(316), 1,
      sym_literal,
    STATE(327), 1,
      sym__call_parameter,
    STATE(350), 1,
      sym_integer,
    STATE(181), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(318), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(609), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(469), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13516] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(635), 1,
      sym_keyword_from,
    ACTIONS(637), 1,
      sym_keyword_filter,
    ACTIONS(640), 1,
      sym_keyword_derive,
    ACTIONS(643), 1,
      sym_keyword_group,
    ACTIONS(646), 1,
      sym_keyword_aggregate,
    ACTIONS(649), 1,
      sym_keyword_sort,
    ACTIONS(652), 1,
      sym_keyword_take,
    ACTIONS(655), 1,
      sym_keyword_join,
    ACTIONS(658), 1,
      sym_keyword_select,
    STATE(182), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(633), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(328), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [13567] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      sym_keyword_filter,
    ACTIONS(567), 1,
      sym_keyword_derive,
    ACTIONS(569), 1,
      sym_keyword_group,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(573), 1,
      sym_keyword_sort,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(577), 1,
      sym_keyword_join,
    ACTIONS(579), 1,
      sym_keyword_select,
    ACTIONS(663), 1,
      sym_keyword_from,
    STATE(182), 1,
      aux_sym_transforms_repeat1,
    STATE(183), 1,
      sym_comment,
    ACTIONS(661), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(328), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [13620] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      anon_sym_COLON,
    STATE(184), 1,
      sym_comment,
    ACTIONS(539), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(541), 13,
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
      anon_sym__,
      sym_identifier,
  [13654] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(667), 1,
      sym__natural_number,
    ACTIONS(670), 1,
      anon_sym__,
    STATE(185), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(81), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
    ACTIONS(83), 12,
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
  [13690] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(185), 1,
      aux_sym__friendly_number,
    STATE(186), 1,
      sym_comment,
    ACTIONS(88), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(90), 13,
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
      anon_sym__,
      sym_identifier,
  [13724] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(185), 1,
      aux_sym__friendly_number,
    STATE(187), 1,
      sym_comment,
    ACTIONS(77), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(79), 13,
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
      anon_sym__,
      sym_identifier,
  [13758] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(188), 1,
      sym_comment,
    ACTIONS(315), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(551), 13,
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
      anon_sym__,
      sym_identifier,
  [13789] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(189), 1,
      sym_comment,
    ACTIONS(154), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(156), 13,
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
      anon_sym__,
      sym_identifier,
  [13820] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(190), 1,
      sym_comment,
    ACTIONS(226), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(228), 13,
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
      anon_sym__,
      sym_identifier,
  [13851] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(191), 1,
      sym_comment,
    ACTIONS(553), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(555), 13,
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
      anon_sym__,
      sym_identifier,
  [13882] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(192), 1,
      sym_comment,
    ACTIONS(92), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(94), 13,
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
      anon_sym__,
      sym_identifier,
  [13913] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(193), 1,
      sym_comment,
    ACTIONS(202), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(204), 13,
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
      anon_sym__,
      sym_identifier,
  [13944] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(194), 1,
      sym_comment,
    ACTIONS(182), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(184), 13,
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
      anon_sym__,
      sym_identifier,
  [13975] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(195), 1,
      sym_comment,
    ACTIONS(539), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(541), 13,
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
      anon_sym__,
      sym_identifier,
  [14006] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(196), 1,
      sym_comment,
    ACTIONS(557), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(559), 13,
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
      anon_sym__,
      sym_identifier,
  [14037] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(455), 1,
      sym_keyword_or,
    ACTIONS(673), 1,
      anon_sym_EQ,
    STATE(197), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [14084] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      anon_sym_DOT,
    STATE(198), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(675), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(202), 13,
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
  [14119] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(199), 1,
      sym_comment,
    ACTIONS(343), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(345), 13,
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
      anon_sym__,
      sym_identifier,
  [14150] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(200), 1,
      sym_comment,
    ACTIONS(202), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(204), 13,
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
      anon_sym__,
      sym_identifier,
  [14181] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(679), 1,
      sym_keyword_from,
    STATE(201), 1,
      sym_comment,
    ACTIONS(677), 18,
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
  [14211] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(683), 1,
      sym_keyword_from,
    STATE(202), 1,
      sym_comment,
    ACTIONS(681), 18,
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
  [14241] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(687), 1,
      sym_keyword_from,
    STATE(203), 1,
      sym_comment,
    ACTIONS(685), 18,
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
  [14271] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(204), 1,
      sym_comment,
    ACTIONS(503), 18,
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
  [14301] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(455), 1,
      sym_keyword_or,
    ACTIONS(689), 1,
      anon_sym_EQ,
    STATE(205), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14347] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(693), 1,
      sym_keyword_from,
    STATE(206), 1,
      sym_comment,
    ACTIONS(691), 18,
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
  [14377] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(697), 1,
      sym_keyword_from,
    STATE(207), 1,
      sym_comment,
    ACTIONS(695), 18,
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
  [14407] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(565), 1,
      sym_keyword_filter,
    ACTIONS(569), 1,
      sym_keyword_group,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(699), 1,
      sym_keyword_derive,
    ACTIONS(701), 1,
      sym_keyword_sort,
    ACTIONS(703), 1,
      sym_keyword_join,
    ACTIONS(705), 1,
      sym_keyword_select,
    STATE(208), 1,
      sym_comment,
    STATE(221), 1,
      aux_sym_transforms_repeat1,
    STATE(379), 1,
      sym_transforms,
    STATE(328), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [14457] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(709), 1,
      sym_keyword_from,
    STATE(209), 1,
      sym_comment,
    ACTIONS(707), 18,
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
  [14487] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(713), 1,
      sym_keyword_from,
    STATE(210), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(711), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    ACTIONS(222), 12,
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
  [14521] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(717), 1,
      sym_keyword_from,
    STATE(211), 1,
      sym_comment,
    ACTIONS(715), 18,
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
  [14551] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(721), 1,
      sym_keyword_from,
    STATE(212), 1,
      sym_comment,
    ACTIONS(719), 18,
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
  [14581] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(213), 1,
      sym_comment,
    ACTIONS(723), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym_identifier,
    ACTIONS(725), 11,
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
  [14610] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(214), 1,
      sym_comment,
    STATE(425), 1,
      aux_sym_derives_repeat1,
    ACTIONS(224), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 14,
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
  [14641] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(215), 1,
      sym_comment,
    STATE(417), 1,
      aux_sym_derives_repeat1,
    ACTIONS(349), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(347), 14,
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
  [14672] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(727), 1,
      anon_sym_COLON,
    ACTIONS(729), 1,
      anon_sym_DOT,
    STATE(216), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 14,
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
  [14705] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    ACTIONS(637), 1,
      sym_keyword_filter,
    ACTIONS(643), 1,
      sym_keyword_group,
    ACTIONS(646), 1,
      sym_keyword_aggregate,
    ACTIONS(652), 1,
      sym_keyword_take,
    ACTIONS(731), 1,
      sym_keyword_derive,
    ACTIONS(734), 1,
      sym_keyword_sort,
    ACTIONS(737), 1,
      sym_keyword_join,
    ACTIONS(740), 1,
      sym_keyword_select,
    STATE(217), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(328), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [14750] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(745), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      sym_comment,
    STATE(437), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(224), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 12,
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
  [14785] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(747), 1,
      anon_sym_COLON,
    ACTIONS(749), 1,
      anon_sym_DOT,
    STATE(219), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 14,
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
  [14818] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(220), 1,
      sym_comment,
    ACTIONS(751), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym_identifier,
    ACTIONS(753), 11,
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
  [14847] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      sym_keyword_filter,
    ACTIONS(569), 1,
      sym_keyword_group,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    ACTIONS(699), 1,
      sym_keyword_derive,
    ACTIONS(701), 1,
      sym_keyword_sort,
    ACTIONS(703), 1,
      sym_keyword_join,
    ACTIONS(705), 1,
      sym_keyword_select,
    STATE(217), 1,
      aux_sym_transforms_repeat1,
    STATE(221), 1,
      sym_comment,
    STATE(328), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [14894] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(222), 1,
      sym_comment,
    ACTIONS(755), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym_identifier,
    ACTIONS(757), 11,
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
  [14923] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(759), 1,
      anon_sym_DOT,
    STATE(223), 1,
      sym_comment,
    ACTIONS(152), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(150), 14,
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
  [14953] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      sym_keyword_from,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    STATE(224), 1,
      sym_comment,
    STATE(308), 1,
      sym__self_join,
    STATE(310), 1,
      sym_conditions,
    ACTIONS(761), 13,
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
  [14987] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(225), 1,
      sym_comment,
    ACTIONS(767), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym_identifier,
    ACTIONS(769), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [15017] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(226), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(347), 14,
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
  [15045] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(773), 1,
      sym_keyword_from,
    STATE(227), 1,
      sym_comment,
    STATE(308), 1,
      sym__self_join,
    STATE(341), 1,
      sym_conditions,
    ACTIONS(771), 13,
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
  [15079] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(228), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 14,
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
  [15107] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(229), 1,
      sym_comment,
    ACTIONS(775), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(224), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 12,
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
  [15137] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_RBRACK,
    STATE(230), 1,
      sym_comment,
    STATE(409), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(224), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 12,
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
  [15171] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(317), 1,
      anon_sym_DOT,
    STATE(231), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 12,
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
  [15200] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(232), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(781), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(222), 12,
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
  [15229] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(783), 1,
      anon_sym_T,
    STATE(233), 1,
      sym_comment,
    ACTIONS(335), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 13,
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
  [15258] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(785), 1,
      sym__natural_number,
    ACTIONS(788), 1,
      anon_sym__,
    STATE(234), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(81), 5,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
    ACTIONS(83), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [15289] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(234), 1,
      aux_sym__friendly_number,
    STATE(235), 1,
      sym_comment,
    ACTIONS(88), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(90), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [15318] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(234), 1,
      aux_sym__friendly_number,
    STATE(236), 1,
      sym_comment,
    ACTIONS(77), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(79), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [15347] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(455), 1,
      sym_keyword_or,
    STATE(237), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(791), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15388] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(455), 1,
      sym_keyword_or,
    STATE(238), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(793), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15429] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(795), 1,
      anon_sym_COLON,
    STATE(239), 1,
      sym_comment,
    ACTIONS(539), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(541), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [15458] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      anon_sym_DOT,
    STATE(240), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(202), 13,
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
  [15487] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(241), 1,
      sym_comment,
    ACTIONS(767), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym_identifier,
    ACTIONS(769), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [15514] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(242), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(182), 13,
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
  [15541] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(797), 1,
      anon_sym_DOT,
    STATE(243), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 13,
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
  [15570] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(244), 1,
      sym_comment,
    ACTIONS(799), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym_identifier,
    ACTIONS(801), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [15597] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(803), 1,
      anon_sym_DOT,
    STATE(245), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 13,
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
  [15626] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      anon_sym_PIPE,
    STATE(246), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(805), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(807), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(242), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15658] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      anon_sym_DASH,
    ACTIONS(815), 1,
      anon_sym_DQUOTE,
    ACTIONS(817), 1,
      anon_sym_SQUOTE,
    ACTIONS(821), 1,
      anon_sym_DOT,
    STATE(247), 1,
      sym_comment,
    STATE(377), 1,
      aux_sym__friendly_number,
    STATE(410), 1,
      sym_integer,
    STATE(442), 1,
      sym_literal,
    STATE(452), 1,
      sym__double_quote_string,
    ACTIONS(819), 2,
      sym__natural_number,
      anon_sym__,
    STATE(458), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(811), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15702] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      anon_sym_DASH,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DOT,
    STATE(187), 1,
      aux_sym__friendly_number,
    STATE(188), 1,
      sym__double_quote_string,
    STATE(193), 1,
      sym_integer,
    STATE(196), 1,
      sym_literal,
    STATE(248), 1,
      sym_comment,
    ACTIONS(138), 2,
      sym__natural_number,
      anon_sym__,
    STATE(200), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(823), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15746] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      anon_sym_PIPE,
    STATE(249), 1,
      sym_comment,
    ACTIONS(805), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(807), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(827), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(825), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15780] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(250), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(805), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(807), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(242), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15810] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(251), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(805), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(242), 11,
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
  [15838] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      anon_sym_PIPE,
    ACTIONS(829), 1,
      sym_keyword_and,
    ACTIONS(831), 1,
      anon_sym_QMARK_QMARK,
    STATE(252), 1,
      sym_comment,
    ACTIONS(242), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(805), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(807), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(827), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(825), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15876] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      anon_sym_PIPE,
    ACTIONS(831), 1,
      anon_sym_QMARK_QMARK,
    STATE(253), 1,
      sym_comment,
    ACTIONS(805), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(807), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(827), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(825), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15912] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(835), 1,
      sym_keyword_from,
    STATE(254), 1,
      sym_comment,
    ACTIONS(833), 14,
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
  [15938] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(839), 1,
      sym_keyword_from,
    STATE(255), 1,
      sym_comment,
    ACTIONS(837), 14,
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
  [15964] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(841), 1,
      anon_sym_DASH_GT,
    STATE(256), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 11,
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
  [15992] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(843), 1,
      anon_sym_DASH_GT,
    STATE(257), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 11,
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
  [16020] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(455), 1,
      sym_keyword_or,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16060] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      anon_sym_PIPE,
    ACTIONS(829), 1,
      sym_keyword_and,
    ACTIONS(831), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(847), 1,
      sym_keyword_or,
    ACTIONS(849), 1,
      anon_sym_DOT_DOT,
    STATE(259), 1,
      sym_comment,
    ACTIONS(805), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(807), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(827), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(825), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16100] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(499), 1,
      sym_keyword_from,
    STATE(260), 1,
      sym_comment,
    ACTIONS(497), 14,
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
  [16126] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_DOT,
    STATE(160), 1,
      aux_sym__friendly_number,
    STATE(165), 1,
      sym__double_quote_string,
    STATE(167), 1,
      sym_integer,
    STATE(174), 1,
      sym_literal,
    STATE(261), 1,
      sym_comment,
    ACTIONS(69), 2,
      sym__natural_number,
      anon_sym__,
    STATE(172), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(851), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [16170] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(262), 1,
      sym_comment,
    ACTIONS(553), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(555), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [16196] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(263), 1,
      sym_comment,
    ACTIONS(539), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(541), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [16222] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(264), 1,
      sym_comment,
    ACTIONS(557), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(559), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [16248] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 12,
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
  [16276] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(266), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 13,
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
  [16302] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(405), 1,
      anon_sym_DASH,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    ACTIONS(409), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      anon_sym_DOT,
    STATE(236), 1,
      aux_sym__friendly_number,
    STATE(264), 1,
      sym_literal,
    STATE(267), 1,
      sym_comment,
    STATE(275), 1,
      sym__double_quote_string,
    STATE(298), 1,
      sym_integer,
    ACTIONS(411), 2,
      sym__natural_number,
      anon_sym__,
    STATE(277), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(855), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [16346] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 12,
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
  [16374] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(859), 1,
      sym_keyword_and,
    ACTIONS(861), 1,
      sym_keyword_or,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16414] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(270), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym__friendly_number,
    ACTIONS(79), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(77), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [16442] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(867), 1,
      sym_keyword_from,
    STATE(271), 1,
      sym_comment,
    ACTIONS(865), 14,
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
  [16468] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(272), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym__friendly_number,
    ACTIONS(90), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(88), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [16496] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(869), 1,
      anon_sym_COLON,
    STATE(273), 1,
      sym_comment,
    ACTIONS(541), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(539), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [16524] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(871), 1,
      sym__natural_number,
    ACTIONS(874), 1,
      anon_sym__,
    STATE(274), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(83), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(81), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
  [16554] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(275), 1,
      sym_comment,
    ACTIONS(315), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(551), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [16580] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    ACTIONS(441), 1,
      anon_sym_SQUOTE,
    ACTIONS(447), 1,
      anon_sym_DOT,
    STATE(270), 1,
      aux_sym__friendly_number,
    STATE(276), 1,
      sym_comment,
    STATE(306), 1,
      sym_literal,
    STATE(314), 1,
      sym__double_quote_string,
    STATE(350), 1,
      sym_integer,
    ACTIONS(443), 2,
      sym__natural_number,
      anon_sym__,
    STATE(318), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(877), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [16624] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(277), 1,
      sym_comment,
    ACTIONS(202), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(204), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [16650] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      anon_sym_DASH,
    ACTIONS(881), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_PIPE,
    STATE(278), 1,
      sym_comment,
    ACTIONS(885), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(889), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_QMARK_QMARK,
    ACTIONS(883), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16686] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      sym_keyword_from,
    STATE(279), 1,
      sym_comment,
    ACTIONS(891), 14,
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
  [16712] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(897), 1,
      sym_keyword_from,
    STATE(280), 1,
      sym_comment,
    ACTIONS(895), 14,
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
  [16738] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(455), 1,
      sym_keyword_or,
    ACTIONS(689), 1,
      anon_sym_EQ,
    STATE(281), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16778] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(901), 1,
      sym_keyword_from,
    STATE(282), 1,
      sym_comment,
    ACTIONS(899), 14,
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
  [16804] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(905), 1,
      sym_keyword_from,
    STATE(283), 1,
      sym_comment,
    ACTIONS(903), 14,
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
  [16830] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      anon_sym_DASH,
    ACTIONS(881), 1,
      anon_sym_PLUS,
    STATE(284), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(885), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(242), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_EQ_EQ,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [16862] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      anon_sym_DASH,
    ACTIONS(881), 1,
      anon_sym_PLUS,
    STATE(285), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 11,
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
  [16892] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(286), 1,
      sym_comment,
    ACTIONS(154), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(156), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [16918] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      anon_sym_DASH,
    ACTIONS(881), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_PIPE,
    STATE(287), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(885), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(242), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [16952] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      anon_sym_DASH,
    ACTIONS(881), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_PIPE,
    ACTIONS(907), 1,
      sym_keyword_and,
    ACTIONS(909), 1,
      anon_sym_QMARK_QMARK,
    STATE(288), 1,
      sym_comment,
    ACTIONS(242), 2,
      sym_keyword_or,
      anon_sym_DASH_GT,
    ACTIONS(885), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(889), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(883), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16992] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(913), 1,
      sym_keyword_from,
    STATE(289), 1,
      sym_comment,
    ACTIONS(911), 14,
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
  [17018] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      anon_sym_DASH,
    ACTIONS(881), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      anon_sym_PIPE,
    ACTIONS(909), 1,
      anon_sym_QMARK_QMARK,
    STATE(290), 1,
      sym_comment,
    ACTIONS(885), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(889), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
    ACTIONS(883), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [17056] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(859), 1,
      sym_keyword_and,
    ACTIONS(861), 1,
      sym_keyword_or,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [17096] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(919), 1,
      sym_keyword_from,
    STATE(292), 1,
      sym_comment,
    ACTIONS(917), 14,
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
  [17122] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(293), 1,
      sym_comment,
    ACTIONS(343), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(345), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [17148] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(294), 1,
      sym_comment,
    ACTIONS(226), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(228), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [17174] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(222), 12,
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
  [17202] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(296), 1,
      sym_comment,
    ACTIONS(92), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(94), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [17228] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      sym_keyword_from,
    STATE(297), 1,
      sym_comment,
    ACTIONS(923), 14,
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
  [17254] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(298), 1,
      sym_comment,
    ACTIONS(202), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(204), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [17280] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(299), 1,
      sym_comment,
    ACTIONS(182), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(184), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [17306] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(165), 1,
      sym__double_quote_string,
    STATE(300), 1,
      sym_comment,
    STATE(467), 1,
      sym_literal,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(927), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17350] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    STATE(301), 1,
      sym_comment,
    ACTIONS(242), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [17388] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    STATE(302), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [17424] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_integer,
    STATE(165), 1,
      sym__double_quote_string,
    STATE(303), 1,
      sym_comment,
    STATE(468), 1,
      sym_literal,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    STATE(58), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(927), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17468] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(931), 1,
      sym_keyword_from,
    STATE(304), 1,
      sym_comment,
    ACTIONS(929), 13,
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
  [17493] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(935), 1,
      sym_keyword_from,
    STATE(305), 1,
      sym_comment,
    ACTIONS(933), 13,
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
  [17518] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(306), 1,
      sym_comment,
    ACTIONS(559), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(557), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17543] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(939), 1,
      sym_keyword_from,
    STATE(307), 1,
      sym_comment,
    ACTIONS(937), 13,
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
  [17568] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(943), 1,
      sym_keyword_from,
    STATE(308), 1,
      sym_comment,
    ACTIONS(941), 13,
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
  [17593] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(947), 1,
      sym_keyword_from,
    STATE(309), 1,
      sym_comment,
    ACTIONS(945), 13,
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
  [17618] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      sym_keyword_from,
    STATE(310), 1,
      sym_comment,
    ACTIONS(771), 13,
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
  [17643] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(951), 1,
      sym_keyword_from,
    STATE(311), 1,
      sym_comment,
    ACTIONS(949), 13,
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
  [17668] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(955), 1,
      sym_keyword_from,
    STATE(312), 1,
      sym_comment,
    ACTIONS(953), 13,
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
  [17693] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(959), 1,
      sym_keyword_from,
    STATE(313), 1,
      sym_comment,
    ACTIONS(957), 13,
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
  [17718] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(314), 1,
      sym_comment,
    ACTIONS(551), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(315), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17743] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(963), 1,
      sym_keyword_from,
    STATE(315), 1,
      sym_comment,
    ACTIONS(961), 13,
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
  [17768] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(316), 1,
      sym_comment,
    ACTIONS(541), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(539), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17793] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(967), 1,
      sym_keyword_from,
    STATE(317), 1,
      sym_comment,
    ACTIONS(965), 13,
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
  [17818] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(318), 1,
      sym_comment,
    ACTIONS(204), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(202), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17843] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(971), 1,
      sym_keyword_from,
    STATE(319), 1,
      sym_comment,
    ACTIONS(969), 13,
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
  [17868] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(975), 1,
      sym_keyword_from,
    STATE(320), 1,
      sym_comment,
    ACTIONS(973), 13,
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
  [17893] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(979), 1,
      sym_keyword_from,
    STATE(321), 1,
      sym_comment,
    ACTIONS(977), 13,
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
  [17918] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      sym_keyword_and,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(455), 1,
      sym_keyword_or,
    STATE(322), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [17955] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(323), 1,
      sym_comment,
    ACTIONS(503), 13,
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
  [17980] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      sym_keyword_from,
    STATE(324), 1,
      sym_comment,
    ACTIONS(981), 13,
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
  [18005] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(987), 1,
      sym_keyword_from,
    STATE(325), 1,
      sym_comment,
    ACTIONS(985), 13,
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
  [18030] = 13,
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
    ACTIONS(989), 1,
      ts_builtin_sym_end,
    STATE(326), 1,
      sym_comment,
    STATE(355), 1,
      aux_sym_program_repeat2,
    STATE(368), 1,
      aux_sym_program_repeat1,
    STATE(375), 1,
      sym_prql,
    STATE(176), 2,
      sym_from_text,
      sym_from,
    STATE(392), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [18073] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(327), 1,
      sym_comment,
    ACTIONS(555), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(553), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [18098] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(993), 1,
      sym_keyword_from,
    STATE(328), 1,
      sym_comment,
    ACTIONS(991), 13,
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
  [18123] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(329), 1,
      sym_comment,
    ACTIONS(156), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(154), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [18148] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(330), 1,
      sym_comment,
    ACTIONS(94), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(92), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [18173] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(997), 1,
      sym_keyword_from,
    STATE(331), 1,
      sym_comment,
    ACTIONS(995), 13,
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
  [18198] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1001), 1,
      sym_keyword_from,
    STATE(332), 1,
      sym_comment,
    ACTIONS(999), 13,
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
  [18223] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(887), 1,
      anon_sym_PIPE,
    ACTIONS(907), 1,
      sym_keyword_and,
    ACTIONS(909), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(1003), 1,
      sym_keyword_or,
    STATE(333), 1,
      sym_comment,
    ACTIONS(881), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(885), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(889), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(883), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [18260] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1007), 1,
      sym_keyword_from,
    STATE(334), 1,
      sym_comment,
    ACTIONS(1005), 13,
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
  [18285] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1011), 1,
      sym_keyword_from,
    STATE(335), 1,
      sym_comment,
    ACTIONS(1009), 13,
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
  [18310] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(336), 1,
      sym_comment,
    ACTIONS(345), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(343), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [18335] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(337), 1,
      sym_comment,
    ACTIONS(228), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(226), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [18360] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1015), 1,
      sym_keyword_from,
    STATE(338), 1,
      sym_comment,
    ACTIONS(1013), 13,
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
  [18385] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(339), 1,
      sym_comment,
    ACTIONS(184), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(182), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [18410] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1019), 1,
      sym_keyword_from,
    STATE(340), 1,
      sym_comment,
    ACTIONS(1017), 13,
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
  [18435] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1023), 1,
      sym_keyword_from,
    STATE(341), 1,
      sym_comment,
    ACTIONS(1021), 13,
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
  [18460] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1027), 1,
      sym_keyword_from,
    STATE(342), 1,
      sym_comment,
    ACTIONS(1025), 13,
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
  [18485] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(859), 1,
      sym_keyword_and,
    ACTIONS(861), 1,
      sym_keyword_or,
    STATE(343), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(387), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(393), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [18522] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1031), 1,
      sym_keyword_from,
    STATE(344), 1,
      sym_comment,
    ACTIONS(1029), 13,
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
  [18547] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1035), 1,
      sym_keyword_from,
    STATE(345), 1,
      sym_comment,
    ACTIONS(1033), 13,
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
  [18572] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1039), 1,
      sym_keyword_from,
    STATE(346), 1,
      sym_comment,
    ACTIONS(1037), 13,
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
  [18597] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1043), 1,
      sym_keyword_from,
    STATE(347), 1,
      sym_comment,
    ACTIONS(1041), 13,
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
  [18622] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1047), 1,
      sym_keyword_from,
    STATE(348), 1,
      sym_comment,
    ACTIONS(1045), 13,
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
  [18647] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1051), 1,
      sym_keyword_from,
    STATE(349), 1,
      sym_comment,
    ACTIONS(1049), 13,
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
  [18672] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(350), 1,
      sym_comment,
    ACTIONS(204), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(202), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [18697] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1055), 1,
      sym_keyword_from,
    STATE(351), 1,
      sym_comment,
    ACTIONS(1053), 13,
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
  [18722] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1059), 1,
      sym_keyword_from,
    STATE(352), 1,
      sym_comment,
    ACTIONS(1057), 13,
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
  [18747] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(353), 1,
      sym_comment,
    STATE(376), 1,
      sym_target,
    ACTIONS(1061), 11,
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
  [18770] = 10,
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
    ACTIONS(989), 1,
      ts_builtin_sym_end,
    STATE(354), 1,
      sym_comment,
    STATE(356), 1,
      aux_sym_program_repeat2,
    STATE(176), 2,
      sym_from_text,
      sym_from,
    STATE(392), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [18804] = 10,
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
    ACTIONS(1063), 1,
      ts_builtin_sym_end,
    STATE(355), 1,
      sym_comment,
    STATE(356), 1,
      aux_sym_program_repeat2,
    STATE(176), 2,
      sym_from_text,
      sym_from,
    STATE(392), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [18838] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1065), 1,
      ts_builtin_sym_end,
    ACTIONS(1067), 1,
      sym_keyword_from,
    ACTIONS(1070), 1,
      sym_keyword_func,
    ACTIONS(1073), 1,
      sym_keyword_let,
    ACTIONS(1076), 1,
      sym_keyword_from_text,
    STATE(176), 2,
      sym_from_text,
      sym_from,
    STATE(356), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(392), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [18870] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(1079), 1,
      sym_keyword_sort,
    ACTIONS(1081), 1,
      sym_keyword_window,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      sym_comment,
    STATE(359), 1,
      aux_sym_group_repeat2,
    STATE(383), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [18901] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(1079), 1,
      sym_keyword_sort,
    ACTIONS(1081), 1,
      sym_keyword_window,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      sym_comment,
    STATE(359), 1,
      aux_sym_group_repeat2,
    STATE(383), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [18932] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1087), 1,
      sym_keyword_aggregate,
    ACTIONS(1090), 1,
      sym_keyword_sort,
    ACTIONS(1093), 1,
      sym_keyword_take,
    ACTIONS(1096), 1,
      sym_keyword_window,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(359), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(383), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [18961] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(1079), 1,
      sym_keyword_sort,
    ACTIONS(1081), 1,
      sym_keyword_window,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_group_repeat2,
    STATE(360), 1,
      sym_comment,
    STATE(383), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [18992] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(1079), 1,
      sym_keyword_sort,
    ACTIONS(1081), 1,
      sym_keyword_window,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_group_repeat2,
    STATE(361), 1,
      sym_comment,
    STATE(383), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19023] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(1079), 1,
      sym_keyword_sort,
    ACTIONS(1081), 1,
      sym_keyword_window,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(359), 1,
      aux_sym_group_repeat2,
    STATE(362), 1,
      sym_comment,
    STATE(383), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19054] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(1079), 1,
      sym_keyword_sort,
    ACTIONS(1081), 1,
      sym_keyword_window,
    STATE(358), 1,
      aux_sym_group_repeat2,
    STATE(363), 1,
      sym_comment,
    STATE(383), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19082] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(1079), 1,
      sym_keyword_sort,
    ACTIONS(1081), 1,
      sym_keyword_window,
    STATE(357), 1,
      aux_sym_group_repeat2,
    STATE(364), 1,
      sym_comment,
    STATE(383), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19110] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(1079), 1,
      sym_keyword_sort,
    ACTIONS(1081), 1,
      sym_keyword_window,
    STATE(361), 1,
      aux_sym_group_repeat2,
    STATE(365), 1,
      sym_comment,
    STATE(383), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19138] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(1079), 1,
      sym_keyword_sort,
    ACTIONS(1081), 1,
      sym_keyword_window,
    STATE(360), 1,
      aux_sym_group_repeat2,
    STATE(366), 1,
      sym_comment,
    STATE(383), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19166] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      sym_keyword_aggregate,
    ACTIONS(575), 1,
      sym_keyword_take,
    ACTIONS(1079), 1,
      sym_keyword_sort,
    ACTIONS(1081), 1,
      sym_keyword_window,
    STATE(362), 1,
      aux_sym_group_repeat2,
    STATE(367), 1,
      sym_comment,
    STATE(383), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19194] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1109), 1,
      sym_keyword_from,
    ACTIONS(1111), 1,
      sym_keyword_prql,
    STATE(375), 1,
      sym_prql,
    STATE(368), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1107), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [19217] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1116), 1,
      sym_keyword_from,
    STATE(369), 1,
      sym_comment,
    ACTIONS(1114), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [19234] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(1118), 1,
      sym__natural_number,
    ACTIONS(1121), 1,
      anon_sym__,
    ACTIONS(81), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    STATE(370), 2,
      aux_sym__friendly_number,
      sym_comment,
  [19255] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
    STATE(394), 1,
      sym__window_definition,
    STATE(371), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1124), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [19274] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(372), 1,
      sym_comment,
    STATE(378), 1,
      aux_sym_window_definitions_repeat1,
    STATE(394), 1,
      sym__window_definition,
    STATE(494), 1,
      sym_window_definitions,
    ACTIONS(1129), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [19295] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(819), 1,
      sym__natural_number,
    ACTIONS(1131), 1,
      anon_sym__,
    STATE(370), 1,
      aux_sym__friendly_number,
    STATE(373), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [19318] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1135), 1,
      sym_keyword_from,
    STATE(374), 1,
      sym_comment,
    ACTIONS(1133), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [19335] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1139), 1,
      sym_keyword_from,
    STATE(375), 1,
      sym_comment,
    ACTIONS(1137), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [19352] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1143), 1,
      sym_keyword_from,
    STATE(376), 1,
      sym_comment,
    ACTIONS(1141), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [19369] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(819), 1,
      sym__natural_number,
    ACTIONS(1131), 1,
      anon_sym__,
    STATE(370), 1,
      aux_sym__friendly_number,
    STATE(377), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [19392] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(371), 1,
      aux_sym_window_definitions_repeat1,
    STATE(378), 1,
      sym_comment,
    STATE(394), 1,
      sym__window_definition,
    ACTIONS(1129), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [19413] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1149), 1,
      sym_keyword_from,
    STATE(379), 1,
      sym_comment,
    ACTIONS(1147), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [19430] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(1151), 1,
      sym_keyword_from,
    STATE(380), 1,
      sym_comment,
    STATE(492), 1,
      sym_pipeline,
    STATE(208), 2,
      sym_from_text,
      sym_from,
  [19450] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1153), 1,
      anon_sym_DASH,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(32), 1,
      sym_integer,
    STATE(381), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [19470] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    STATE(29), 1,
      sym_integer,
    STATE(69), 1,
      aux_sym__friendly_number,
    STATE(382), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym__natural_number,
      anon_sym__,
  [19490] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(383), 1,
      sym_comment,
    ACTIONS(1157), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [19504] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    STATE(18), 1,
      sym_integer,
    STATE(69), 1,
      aux_sym__friendly_number,
    STATE(384), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym__natural_number,
      anon_sym__,
  [19524] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(385), 1,
      sym_comment,
    ACTIONS(1159), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [19538] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1155), 1,
      anon_sym_DASH,
    STATE(32), 1,
      sym_integer,
    STATE(69), 1,
      aux_sym__friendly_number,
    STATE(386), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym__natural_number,
      anon_sym__,
  [19558] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(387), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(92), 3,
      anon_sym_DASH_GT,
      sym__natural_number,
      anon_sym_DOT,
  [19574] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1153), 1,
      anon_sym_DASH,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(18), 1,
      sym_integer,
    STATE(388), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [19594] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_keyword_from,
    STATE(389), 1,
      sym_comment,
    ACTIONS(1161), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [19610] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1153), 1,
      anon_sym_DASH,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(29), 1,
      sym_integer,
    STATE(390), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [19630] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      sym_keyword_from,
    STATE(391), 1,
      sym_comment,
    ACTIONS(1165), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [19646] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1171), 1,
      sym_keyword_from,
    STATE(392), 1,
      sym_comment,
    ACTIONS(1169), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [19662] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1173), 1,
      anon_sym_DOT,
    STATE(272), 1,
      aux_sym__friendly_number,
    STATE(393), 1,
      sym_comment,
    ACTIONS(443), 2,
      sym__natural_number,
      anon_sym__,
  [19679] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(394), 1,
      sym_comment,
    ACTIONS(1175), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [19692] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_DOT,
    STATE(235), 1,
      aux_sym__friendly_number,
    STATE(395), 1,
      sym_comment,
    ACTIONS(411), 2,
      sym__natural_number,
      anon_sym__,
  [19709] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1179), 1,
      anon_sym_DOT,
    STATE(186), 1,
      aux_sym__friendly_number,
    STATE(396), 1,
      sym_comment,
    ACTIONS(138), 2,
      sym__natural_number,
      anon_sym__,
  [19726] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1181), 1,
      anon_sym_DOT,
    STATE(161), 1,
      aux_sym__friendly_number,
    STATE(397), 1,
      sym_comment,
    ACTIONS(69), 2,
      sym__natural_number,
      anon_sym__,
  [19743] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1183), 1,
      anon_sym_DASH_GT,
    ACTIONS(1185), 1,
      sym_identifier,
    STATE(456), 1,
      sym_parameter,
    STATE(398), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [19760] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1188), 1,
      anon_sym_DOT,
    STATE(373), 1,
      aux_sym__friendly_number,
    STATE(399), 1,
      sym_comment,
    ACTIONS(819), 2,
      sym__natural_number,
      anon_sym__,
  [19777] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(400), 1,
      sym_comment,
    ACTIONS(1190), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [19790] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1192), 1,
      aux_sym__date_token1,
    ACTIONS(1194), 1,
      aux_sym__time_token1,
    STATE(66), 1,
      sym__time,
    STATE(233), 1,
      sym__date,
    STATE(401), 1,
      sym_comment,
  [19809] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1196), 1,
      anon_sym_DASH_GT,
    ACTIONS(1198), 1,
      sym_identifier,
    STATE(398), 1,
      aux_sym_function_definition_repeat1,
    STATE(402), 1,
      sym_comment,
    STATE(456), 1,
      sym_parameter,
  [19828] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1200), 1,
      anon_sym_DOT,
    STATE(40), 1,
      aux_sym__friendly_number,
    STATE(403), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym__natural_number,
      anon_sym__,
  [19845] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(404), 1,
      sym_comment,
    ACTIONS(1202), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [19858] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1192), 1,
      aux_sym__date_token1,
    ACTIONS(1204), 1,
      aux_sym__time_token1,
    STATE(65), 1,
      sym__date,
    STATE(66), 1,
      sym__time,
    STATE(405), 1,
      sym_comment,
  [19877] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1200), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(406), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [19894] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      sym_comment,
    STATE(433), 1,
      aux_sym_sorts_repeat1,
  [19910] = 5,
    ACTIONS(1208), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1210), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    STATE(408), 1,
      sym_comment,
    STATE(436), 1,
      aux_sym__inner_triple_quotes,
  [19926] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    ACTIONS(1214), 1,
      anon_sym_COMMA,
    STATE(409), 1,
      sym_comment,
    STATE(414), 1,
      aux_sym_conditions_repeat1,
  [19942] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1216), 1,
      anon_sym_DOT,
    STATE(410), 1,
      sym_comment,
    ACTIONS(202), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [19956] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(745), 1,
      anon_sym_RBRACK,
    STATE(411), 1,
      sym_comment,
    STATE(437), 1,
      aux_sym_aggregate_repeat1,
  [19972] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_from_text,
    STATE(412), 1,
      sym_comment,
  [19988] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    ACTIONS(1222), 1,
      anon_sym_RBRACK,
    STATE(413), 1,
      sym_comment,
    STATE(434), 1,
      aux_sym_group_repeat1,
  [20004] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(781), 1,
      anon_sym_RBRACK,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(414), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [20018] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1227), 1,
      sym__natural_number,
    STATE(415), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20032] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(1229), 1,
      anon_sym_COMMA,
    STATE(416), 1,
      sym_comment,
    STATE(422), 1,
      aux_sym_switch_repeat2,
  [20048] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    ACTIONS(1233), 1,
      anon_sym_RBRACK,
    STATE(417), 1,
      sym_comment,
    STATE(430), 1,
      aux_sym_derives_repeat1,
  [20064] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1235), 1,
      anon_sym_COMMA,
    ACTIONS(1237), 1,
      anon_sym_RBRACK,
    STATE(418), 1,
      sym_comment,
    STATE(435), 1,
      aux_sym_group_repeat1,
  [20080] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1239), 1,
      anon_sym_COLON,
    STATE(419), 1,
      sym_comment,
    ACTIONS(1241), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20094] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1243), 1,
      sym_keyword_format,
    ACTIONS(1245), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(321), 1,
      sym__triple_quote_string,
    STATE(420), 1,
      sym_comment,
  [20110] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1247), 1,
      anon_sym_COMMA,
    ACTIONS(1249), 1,
      anon_sym_RBRACK,
    STATE(407), 1,
      aux_sym_sorts_repeat1,
    STATE(421), 1,
      sym_comment,
  [20126] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    ACTIONS(1251), 1,
      anon_sym_COMMA,
    STATE(422), 2,
      sym_comment,
      aux_sym_switch_repeat2,
  [20140] = 5,
    ACTIONS(1208), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1254), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(423), 1,
      sym_comment,
    STATE(436), 1,
      aux_sym__inner_triple_quotes,
  [20156] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    ACTIONS(1256), 1,
      anon_sym_COMMA,
    STATE(424), 1,
      sym_comment,
    STATE(433), 1,
      aux_sym_sorts_repeat1,
  [20172] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    STATE(425), 1,
      sym_comment,
    STATE(430), 1,
      aux_sym_derives_repeat1,
  [20188] = 5,
    ACTIONS(1208), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1260), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(426), 1,
      sym_comment,
    STATE(436), 1,
      aux_sym__inner_triple_quotes,
  [20204] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(427), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [20218] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
      aux_sym__friendly_number,
    STATE(428), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym__natural_number,
      anon_sym__,
  [20232] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1264), 1,
      anon_sym_RBRACK,
    STATE(425), 1,
      aux_sym_derives_repeat1,
    STATE(429), 1,
      sym_comment,
  [20248] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1269), 1,
      anon_sym_RBRACK,
    STATE(430), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [20262] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1198), 1,
      sym_identifier,
    STATE(402), 1,
      aux_sym_function_definition_repeat1,
    STATE(431), 1,
      sym_comment,
    STATE(456), 1,
      sym_parameter,
  [20278] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(424), 1,
      aux_sym_sorts_repeat1,
    STATE(432), 1,
      sym_comment,
  [20294] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1271), 1,
      anon_sym_COMMA,
    ACTIONS(1274), 1,
      anon_sym_RBRACK,
    STATE(433), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [20308] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
    ACTIONS(1276), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      sym_comment,
    STATE(438), 1,
      aux_sym_group_repeat1,
  [20324] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    ACTIONS(1278), 1,
      anon_sym_COMMA,
    STATE(435), 1,
      sym_comment,
    STATE(438), 1,
      aux_sym_group_repeat1,
  [20340] = 4,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1280), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1283), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(436), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [20354] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    STATE(437), 1,
      sym_comment,
    STATE(439), 1,
      aux_sym_aggregate_repeat1,
  [20370] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1287), 1,
      anon_sym_COMMA,
    ACTIONS(1290), 1,
      anon_sym_RBRACK,
    STATE(438), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [20384] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
    ACTIONS(1292), 1,
      anon_sym_COMMA,
    STATE(439), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [20398] = 4,
    ACTIONS(1208), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    STATE(426), 1,
      aux_sym__inner_triple_quotes,
    STATE(440), 1,
      sym_comment,
  [20411] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    STATE(441), 1,
      sym_comment,
    ACTIONS(1295), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [20422] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(442), 1,
      sym_comment,
    ACTIONS(1297), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20433] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(443), 1,
      sym_comment,
    ACTIONS(775), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [20444] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1299), 1,
      aux_sym__time_token1,
    STATE(11), 1,
      sym__time,
    STATE(444), 1,
      sym_comment,
  [20457] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(445), 1,
      sym_comment,
    ACTIONS(1274), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [20468] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(446), 1,
      sym_comment,
    ACTIONS(1301), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [20479] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1245), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(311), 1,
      sym__triple_quote_string,
    STATE(447), 1,
      sym_comment,
  [20492] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(448), 1,
      sym_comment,
    ACTIONS(182), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20503] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(449), 1,
      sym_comment,
    ACTIONS(1290), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [20514] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1303), 1,
      aux_sym__time_token1,
    STATE(11), 1,
      sym__time,
    STATE(450), 1,
      sym_comment,
  [20527] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(451), 1,
      sym_comment,
    ACTIONS(1269), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [20538] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(452), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20549] = 4,
    ACTIONS(1208), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    STATE(408), 1,
      aux_sym__inner_triple_quotes,
    STATE(453), 1,
      sym_comment,
  [20562] = 4,
    ACTIONS(1208), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    STATE(423), 1,
      aux_sym__inner_triple_quotes,
    STATE(454), 1,
      sym_comment,
  [20575] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(455), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20586] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(456), 1,
      sym_comment,
    ACTIONS(1305), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20597] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(457), 1,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20608] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(458), 1,
      sym_comment,
    ACTIONS(202), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20619] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(459), 1,
      sym_comment,
    ACTIONS(1307), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [20630] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1309), 1,
      sym_keyword_version,
    ACTIONS(1311), 1,
      sym_keyword_target,
    STATE(460), 1,
      sym_comment,
  [20643] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(461), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20654] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1313), 1,
      sym_keyword_derive,
    STATE(462), 1,
      sym_comment,
    STATE(486), 1,
      sym_derives,
  [20667] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(369), 1,
      sym__double_quote_string,
    STATE(463), 1,
      sym_comment,
  [20680] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1315), 1,
      aux_sym__date_token2,
    STATE(464), 1,
      sym_comment,
  [20690] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1317), 1,
      anon_sym_DQUOTE,
    STATE(465), 1,
      sym_comment,
  [20700] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
    STATE(466), 1,
      sym_comment,
  [20710] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1321), 1,
      anon_sym_COMMA,
    STATE(467), 1,
      sym_comment,
  [20720] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1323), 1,
      anon_sym_COMMA,
    STATE(468), 1,
      sym_comment,
  [20730] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(745), 1,
      anon_sym_RBRACK,
    STATE(469), 1,
      sym_comment,
  [20740] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1325), 1,
      anon_sym_LBRACK,
    STATE(470), 1,
      sym_comment,
  [20750] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1249), 1,
      anon_sym_RBRACK,
    STATE(471), 1,
      sym_comment,
  [20760] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1327), 1,
      anon_sym_LPAREN,
    STATE(472), 1,
      sym_comment,
  [20770] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1222), 1,
      anon_sym_RBRACK,
    STATE(473), 1,
      sym_comment,
  [20780] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1329), 1,
      anon_sym_DASH,
    STATE(474), 1,
      sym_comment,
  [20790] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1331), 1,
      sym__natural_number,
    STATE(475), 1,
      sym_comment,
  [20800] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1333), 1,
      sym__natural_number,
    STATE(476), 1,
      sym_comment,
  [20810] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1335), 1,
      anon_sym_DQUOTE,
    STATE(477), 1,
      sym_comment,
  [20820] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1337), 1,
      anon_sym_SQUOTE,
    STATE(478), 1,
      sym_comment,
  [20830] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1339), 1,
      anon_sym_COLON,
    STATE(479), 1,
      sym_comment,
  [20840] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1341), 1,
      anon_sym_COLON,
    STATE(480), 1,
      sym_comment,
  [20850] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1343), 1,
      anon_sym_COLON,
    STATE(481), 1,
      sym_comment,
  [20860] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1345), 1,
      anon_sym_EQ,
    STATE(482), 1,
      sym_comment,
  [20870] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1347), 1,
      anon_sym_COLON,
    STATE(483), 1,
      sym_comment,
  [20880] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1349), 1,
      anon_sym_DOT,
    STATE(484), 1,
      sym_comment,
  [20890] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1351), 1,
      anon_sym_RBRACK,
    STATE(485), 1,
      sym_comment,
  [20900] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
    STATE(486), 1,
      sym_comment,
  [20910] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1355), 1,
      aux_sym__date_token2,
    STATE(487), 1,
      sym_comment,
  [20920] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1264), 1,
      anon_sym_RBRACK,
    STATE(488), 1,
      sym_comment,
  [20930] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1357), 1,
      anon_sym_LBRACK,
    STATE(489), 1,
      sym_comment,
  [20940] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(158), 1,
      sym__natural_number,
    STATE(490), 1,
      sym_comment,
  [20950] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1359), 1,
      anon_sym_DQUOTE,
    STATE(491), 1,
      sym_comment,
  [20960] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      sym_comment,
  [20970] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    STATE(493), 1,
      sym_comment,
  [20980] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1365), 1,
      anon_sym_LPAREN,
    STATE(494), 1,
      sym_comment,
  [20990] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1367), 1,
      aux_sym__date_token2,
    STATE(495), 1,
      sym_comment,
  [21000] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1369), 1,
      anon_sym_COLON,
    STATE(496), 1,
      sym_comment,
  [21010] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1371), 1,
      aux_sym__date_token2,
    STATE(497), 1,
      sym_comment,
  [21020] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1373), 1,
      sym__natural_number,
    STATE(498), 1,
      sym_comment,
  [21030] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1227), 1,
      sym__natural_number,
    STATE(499), 1,
      sym_comment,
  [21040] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1375), 1,
      anon_sym_DQUOTE,
    STATE(500), 1,
      sym_comment,
  [21050] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1377), 1,
      anon_sym_SQUOTE,
    STATE(501), 1,
      sym_comment,
  [21060] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1379), 1,
      sym__natural_number,
    STATE(502), 1,
      sym_comment,
  [21070] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1381), 1,
      anon_sym_SQUOTE,
    STATE(503), 1,
      sym_comment,
  [21080] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1383), 1,
      anon_sym_LPAREN,
    STATE(504), 1,
      sym_comment,
  [21090] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1385), 1,
      sym__natural_number,
    STATE(505), 1,
      sym_comment,
  [21100] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1387), 1,
      sym__natural_number,
    STATE(506), 1,
      sym_comment,
  [21110] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1237), 1,
      anon_sym_RBRACK,
    STATE(507), 1,
      sym_comment,
  [21120] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1389), 1,
      anon_sym_SQUOTE,
    STATE(508), 1,
      sym_comment,
  [21130] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1391), 1,
      aux_sym__literal_string_token1,
    STATE(509), 1,
      sym_comment,
  [21140] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(769), 1,
      aux_sym__date_token2,
    STATE(510), 1,
      sym_comment,
  [21150] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1393), 1,
      anon_sym_LPAREN,
    STATE(511), 1,
      sym_comment,
  [21160] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1395), 1,
      sym__natural_number,
    STATE(512), 1,
      sym_comment,
  [21170] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1397), 1,
      sym__natural_number,
    STATE(513), 1,
      sym_comment,
  [21180] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1399), 1,
      anon_sym_DQUOTE,
    STATE(514), 1,
      sym_comment,
  [21190] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1401), 1,
      anon_sym_SQUOTE,
    STATE(515), 1,
      sym_comment,
  [21200] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(779), 1,
      anon_sym_RBRACK,
    STATE(516), 1,
      sym_comment,
  [21210] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1403), 1,
      sym__natural_number,
    STATE(517), 1,
      sym_comment,
  [21220] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1405), 1,
      sym__natural_number,
    STATE(518), 1,
      sym_comment,
  [21230] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1407), 1,
      anon_sym_DQUOTE,
    STATE(519), 1,
      sym_comment,
  [21240] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1409), 1,
      anon_sym_SQUOTE,
    STATE(520), 1,
      sym_comment,
  [21250] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1411), 1,
      anon_sym_LPAREN,
    STATE(521), 1,
      sym_comment,
  [21260] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1413), 1,
      anon_sym_DQUOTE,
    STATE(522), 1,
      sym_comment,
  [21270] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1415), 1,
      aux_sym__double_quote_string_token1,
    STATE(523), 1,
      sym_comment,
  [21280] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1417), 1,
      aux_sym__literal_string_token1,
    STATE(524), 1,
      sym_comment,
  [21290] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1419), 1,
      anon_sym_DQUOTE,
    STATE(525), 1,
      sym_comment,
  [21300] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1421), 1,
      aux_sym__double_quote_string_token1,
    STATE(526), 1,
      sym_comment,
  [21310] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1423), 1,
      aux_sym_comment_token1,
    STATE(527), 1,
      sym_comment,
  [21320] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1425), 1,
      aux_sym__double_quote_string_token1,
    STATE(528), 1,
      sym_comment,
  [21330] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1427), 1,
      aux_sym__double_quote_string_token1,
    STATE(529), 1,
      sym_comment,
  [21340] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1429), 1,
      anon_sym_RPAREN,
    STATE(530), 1,
      sym_comment,
  [21350] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1431), 1,
      sym_identifier,
    STATE(531), 1,
      sym_comment,
  [21360] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    STATE(532), 1,
      sym_comment,
  [21370] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1433), 1,
      aux_sym__date_token2,
    STATE(533), 1,
      sym_comment,
  [21380] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1435), 1,
      aux_sym__double_quote_string_token1,
    STATE(534), 1,
      sym_comment,
  [21390] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1437), 1,
      aux_sym__literal_string_token1,
    STATE(535), 1,
      sym_comment,
  [21400] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1439), 1,
      aux_sym__date_token2,
    STATE(536), 1,
      sym_comment,
  [21410] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1441), 1,
      aux_sym__date_token2,
    STATE(537), 1,
      sym_comment,
  [21420] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1443), 1,
      aux_sym__double_quote_string_token1,
    STATE(538), 1,
      sym_comment,
  [21430] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1445), 1,
      aux_sym__literal_string_token1,
    STATE(539), 1,
      sym_comment,
  [21440] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1447), 1,
      ts_builtin_sym_end,
    STATE(540), 1,
      sym_comment,
  [21450] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1449), 1,
      aux_sym__double_quote_string_token1,
    STATE(541), 1,
      sym_comment,
  [21460] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1451), 1,
      aux_sym__literal_string_token1,
    STATE(542), 1,
      sym_comment,
  [21470] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1453), 1,
      aux_sym__double_quote_string_token1,
    STATE(543), 1,
      sym_comment,
  [21480] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1455), 1,
      aux_sym__literal_string_token1,
    STATE(544), 1,
      sym_comment,
  [21490] = 3,
    ACTIONS(1212), 1,
      anon_sym_POUND,
    ACTIONS(1457), 1,
      aux_sym__double_quote_string_token1,
    STATE(545), 1,
      sym_comment,
  [21500] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1459), 1,
      anon_sym_DASH,
    STATE(546), 1,
      sym_comment,
  [21510] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1461), 1,
      sym_identifier,
    STATE(547), 1,
      sym_comment,
  [21520] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1463), 1,
      sym_identifier,
    STATE(548), 1,
      sym_comment,
  [21530] = 1,
    ACTIONS(1465), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 113,
  [SMALL_STATE(4)] = 223,
  [SMALL_STATE(5)] = 333,
  [SMALL_STATE(6)] = 440,
  [SMALL_STATE(7)] = 526,
  [SMALL_STATE(8)] = 584,
  [SMALL_STATE(9)] = 640,
  [SMALL_STATE(10)] = 698,
  [SMALL_STATE(11)] = 751,
  [SMALL_STATE(12)] = 814,
  [SMALL_STATE(13)] = 922,
  [SMALL_STATE(14)] = 978,
  [SMALL_STATE(15)] = 1034,
  [SMALL_STATE(16)] = 1116,
  [SMALL_STATE(17)] = 1221,
  [SMALL_STATE(18)] = 1326,
  [SMALL_STATE(19)] = 1377,
  [SMALL_STATE(20)] = 1430,
  [SMALL_STATE(21)] = 1535,
  [SMALL_STATE(22)] = 1588,
  [SMALL_STATE(23)] = 1687,
  [SMALL_STATE(24)] = 1786,
  [SMALL_STATE(25)] = 1885,
  [SMALL_STATE(26)] = 1936,
  [SMALL_STATE(27)] = 2043,
  [SMALL_STATE(28)] = 2094,
  [SMALL_STATE(29)] = 2199,
  [SMALL_STATE(30)] = 2250,
  [SMALL_STATE(31)] = 2349,
  [SMALL_STATE(32)] = 2454,
  [SMALL_STATE(33)] = 2505,
  [SMALL_STATE(34)] = 2610,
  [SMALL_STATE(35)] = 2714,
  [SMALL_STATE(36)] = 2764,
  [SMALL_STATE(37)] = 2816,
  [SMALL_STATE(38)] = 2920,
  [SMALL_STATE(39)] = 2970,
  [SMALL_STATE(40)] = 3020,
  [SMALL_STATE(41)] = 3074,
  [SMALL_STATE(42)] = 3124,
  [SMALL_STATE(43)] = 3174,
  [SMALL_STATE(44)] = 3224,
  [SMALL_STATE(45)] = 3276,
  [SMALL_STATE(46)] = 3380,
  [SMALL_STATE(47)] = 3430,
  [SMALL_STATE(48)] = 3480,
  [SMALL_STATE(49)] = 3530,
  [SMALL_STATE(50)] = 3632,
  [SMALL_STATE(51)] = 3682,
  [SMALL_STATE(52)] = 3734,
  [SMALL_STATE(53)] = 3836,
  [SMALL_STATE(54)] = 3940,
  [SMALL_STATE(55)] = 3990,
  [SMALL_STATE(56)] = 4092,
  [SMALL_STATE(57)] = 4192,
  [SMALL_STATE(58)] = 4246,
  [SMALL_STATE(59)] = 4296,
  [SMALL_STATE(60)] = 4346,
  [SMALL_STATE(61)] = 4448,
  [SMALL_STATE(62)] = 4550,
  [SMALL_STATE(63)] = 4652,
  [SMALL_STATE(64)] = 4702,
  [SMALL_STATE(65)] = 4752,
  [SMALL_STATE(66)] = 4804,
  [SMALL_STATE(67)] = 4854,
  [SMALL_STATE(68)] = 4904,
  [SMALL_STATE(69)] = 4954,
  [SMALL_STATE(70)] = 5008,
  [SMALL_STATE(71)] = 5109,
  [SMALL_STATE(72)] = 5208,
  [SMALL_STATE(73)] = 5309,
  [SMALL_STATE(74)] = 5410,
  [SMALL_STATE(75)] = 5509,
  [SMALL_STATE(76)] = 5608,
  [SMALL_STATE(77)] = 5709,
  [SMALL_STATE(78)] = 5808,
  [SMALL_STATE(79)] = 5909,
  [SMALL_STATE(80)] = 6010,
  [SMALL_STATE(81)] = 6059,
  [SMALL_STATE(82)] = 6160,
  [SMALL_STATE(83)] = 6259,
  [SMALL_STATE(84)] = 6356,
  [SMALL_STATE(85)] = 6455,
  [SMALL_STATE(86)] = 6556,
  [SMALL_STATE(87)] = 6648,
  [SMALL_STATE(88)] = 6744,
  [SMALL_STATE(89)] = 6794,
  [SMALL_STATE(90)] = 6848,
  [SMALL_STATE(91)] = 6944,
  [SMALL_STATE(92)] = 7040,
  [SMALL_STATE(93)] = 7136,
  [SMALL_STATE(94)] = 7188,
  [SMALL_STATE(95)] = 7250,
  [SMALL_STATE(96)] = 7310,
  [SMALL_STATE(97)] = 7406,
  [SMALL_STATE(98)] = 7464,
  [SMALL_STATE(99)] = 7560,
  [SMALL_STATE(100)] = 7656,
  [SMALL_STATE(101)] = 7754,
  [SMALL_STATE(102)] = 7850,
  [SMALL_STATE(103)] = 7946,
  [SMALL_STATE(104)] = 8042,
  [SMALL_STATE(105)] = 8138,
  [SMALL_STATE(106)] = 8236,
  [SMALL_STATE(107)] = 8329,
  [SMALL_STATE(108)] = 8422,
  [SMALL_STATE(109)] = 8499,
  [SMALL_STATE(110)] = 8590,
  [SMALL_STATE(111)] = 8681,
  [SMALL_STATE(112)] = 8772,
  [SMALL_STATE(113)] = 8860,
  [SMALL_STATE(114)] = 8912,
  [SMALL_STATE(115)] = 9000,
  [SMALL_STATE(116)] = 9088,
  [SMALL_STATE(117)] = 9176,
  [SMALL_STATE(118)] = 9266,
  [SMALL_STATE(119)] = 9354,
  [SMALL_STATE(120)] = 9442,
  [SMALL_STATE(121)] = 9530,
  [SMALL_STATE(122)] = 9618,
  [SMALL_STATE(123)] = 9706,
  [SMALL_STATE(124)] = 9794,
  [SMALL_STATE(125)] = 9882,
  [SMALL_STATE(126)] = 9970,
  [SMALL_STATE(127)] = 10060,
  [SMALL_STATE(128)] = 10148,
  [SMALL_STATE(129)] = 10238,
  [SMALL_STATE(130)] = 10326,
  [SMALL_STATE(131)] = 10402,
  [SMALL_STATE(132)] = 10490,
  [SMALL_STATE(133)] = 10578,
  [SMALL_STATE(134)] = 10666,
  [SMALL_STATE(135)] = 10754,
  [SMALL_STATE(136)] = 10844,
  [SMALL_STATE(137)] = 10932,
  [SMALL_STATE(138)] = 11022,
  [SMALL_STATE(139)] = 11110,
  [SMALL_STATE(140)] = 11200,
  [SMALL_STATE(141)] = 11288,
  [SMALL_STATE(142)] = 11376,
  [SMALL_STATE(143)] = 11464,
  [SMALL_STATE(144)] = 11552,
  [SMALL_STATE(145)] = 11640,
  [SMALL_STATE(146)] = 11728,
  [SMALL_STATE(147)] = 11816,
  [SMALL_STATE(148)] = 11865,
  [SMALL_STATE(149)] = 11925,
  [SMALL_STATE(150)] = 11985,
  [SMALL_STATE(151)] = 12045,
  [SMALL_STATE(152)] = 12118,
  [SMALL_STATE(153)] = 12189,
  [SMALL_STATE(154)] = 12237,
  [SMALL_STATE(155)] = 12295,
  [SMALL_STATE(156)] = 12335,
  [SMALL_STATE(157)] = 12375,
  [SMALL_STATE(158)] = 12444,
  [SMALL_STATE(159)] = 12499,
  [SMALL_STATE(160)] = 12566,
  [SMALL_STATE(161)] = 12604,
  [SMALL_STATE(162)] = 12642,
  [SMALL_STATE(163)] = 12694,
  [SMALL_STATE(164)] = 12732,
  [SMALL_STATE(165)] = 12772,
  [SMALL_STATE(166)] = 12808,
  [SMALL_STATE(167)] = 12843,
  [SMALL_STATE(168)] = 12878,
  [SMALL_STATE(169)] = 12913,
  [SMALL_STATE(170)] = 12948,
  [SMALL_STATE(171)] = 12983,
  [SMALL_STATE(172)] = 13018,
  [SMALL_STATE(173)] = 13053,
  [SMALL_STATE(174)] = 13088,
  [SMALL_STATE(175)] = 13123,
  [SMALL_STATE(176)] = 13158,
  [SMALL_STATE(177)] = 13214,
  [SMALL_STATE(178)] = 13276,
  [SMALL_STATE(179)] = 13340,
  [SMALL_STATE(180)] = 13396,
  [SMALL_STATE(181)] = 13457,
  [SMALL_STATE(182)] = 13516,
  [SMALL_STATE(183)] = 13567,
  [SMALL_STATE(184)] = 13620,
  [SMALL_STATE(185)] = 13654,
  [SMALL_STATE(186)] = 13690,
  [SMALL_STATE(187)] = 13724,
  [SMALL_STATE(188)] = 13758,
  [SMALL_STATE(189)] = 13789,
  [SMALL_STATE(190)] = 13820,
  [SMALL_STATE(191)] = 13851,
  [SMALL_STATE(192)] = 13882,
  [SMALL_STATE(193)] = 13913,
  [SMALL_STATE(194)] = 13944,
  [SMALL_STATE(195)] = 13975,
  [SMALL_STATE(196)] = 14006,
  [SMALL_STATE(197)] = 14037,
  [SMALL_STATE(198)] = 14084,
  [SMALL_STATE(199)] = 14119,
  [SMALL_STATE(200)] = 14150,
  [SMALL_STATE(201)] = 14181,
  [SMALL_STATE(202)] = 14211,
  [SMALL_STATE(203)] = 14241,
  [SMALL_STATE(204)] = 14271,
  [SMALL_STATE(205)] = 14301,
  [SMALL_STATE(206)] = 14347,
  [SMALL_STATE(207)] = 14377,
  [SMALL_STATE(208)] = 14407,
  [SMALL_STATE(209)] = 14457,
  [SMALL_STATE(210)] = 14487,
  [SMALL_STATE(211)] = 14521,
  [SMALL_STATE(212)] = 14551,
  [SMALL_STATE(213)] = 14581,
  [SMALL_STATE(214)] = 14610,
  [SMALL_STATE(215)] = 14641,
  [SMALL_STATE(216)] = 14672,
  [SMALL_STATE(217)] = 14705,
  [SMALL_STATE(218)] = 14750,
  [SMALL_STATE(219)] = 14785,
  [SMALL_STATE(220)] = 14818,
  [SMALL_STATE(221)] = 14847,
  [SMALL_STATE(222)] = 14894,
  [SMALL_STATE(223)] = 14923,
  [SMALL_STATE(224)] = 14953,
  [SMALL_STATE(225)] = 14987,
  [SMALL_STATE(226)] = 15017,
  [SMALL_STATE(227)] = 15045,
  [SMALL_STATE(228)] = 15079,
  [SMALL_STATE(229)] = 15107,
  [SMALL_STATE(230)] = 15137,
  [SMALL_STATE(231)] = 15171,
  [SMALL_STATE(232)] = 15200,
  [SMALL_STATE(233)] = 15229,
  [SMALL_STATE(234)] = 15258,
  [SMALL_STATE(235)] = 15289,
  [SMALL_STATE(236)] = 15318,
  [SMALL_STATE(237)] = 15347,
  [SMALL_STATE(238)] = 15388,
  [SMALL_STATE(239)] = 15429,
  [SMALL_STATE(240)] = 15458,
  [SMALL_STATE(241)] = 15487,
  [SMALL_STATE(242)] = 15514,
  [SMALL_STATE(243)] = 15541,
  [SMALL_STATE(244)] = 15570,
  [SMALL_STATE(245)] = 15597,
  [SMALL_STATE(246)] = 15626,
  [SMALL_STATE(247)] = 15658,
  [SMALL_STATE(248)] = 15702,
  [SMALL_STATE(249)] = 15746,
  [SMALL_STATE(250)] = 15780,
  [SMALL_STATE(251)] = 15810,
  [SMALL_STATE(252)] = 15838,
  [SMALL_STATE(253)] = 15876,
  [SMALL_STATE(254)] = 15912,
  [SMALL_STATE(255)] = 15938,
  [SMALL_STATE(256)] = 15964,
  [SMALL_STATE(257)] = 15992,
  [SMALL_STATE(258)] = 16020,
  [SMALL_STATE(259)] = 16060,
  [SMALL_STATE(260)] = 16100,
  [SMALL_STATE(261)] = 16126,
  [SMALL_STATE(262)] = 16170,
  [SMALL_STATE(263)] = 16196,
  [SMALL_STATE(264)] = 16222,
  [SMALL_STATE(265)] = 16248,
  [SMALL_STATE(266)] = 16276,
  [SMALL_STATE(267)] = 16302,
  [SMALL_STATE(268)] = 16346,
  [SMALL_STATE(269)] = 16374,
  [SMALL_STATE(270)] = 16414,
  [SMALL_STATE(271)] = 16442,
  [SMALL_STATE(272)] = 16468,
  [SMALL_STATE(273)] = 16496,
  [SMALL_STATE(274)] = 16524,
  [SMALL_STATE(275)] = 16554,
  [SMALL_STATE(276)] = 16580,
  [SMALL_STATE(277)] = 16624,
  [SMALL_STATE(278)] = 16650,
  [SMALL_STATE(279)] = 16686,
  [SMALL_STATE(280)] = 16712,
  [SMALL_STATE(281)] = 16738,
  [SMALL_STATE(282)] = 16778,
  [SMALL_STATE(283)] = 16804,
  [SMALL_STATE(284)] = 16830,
  [SMALL_STATE(285)] = 16862,
  [SMALL_STATE(286)] = 16892,
  [SMALL_STATE(287)] = 16918,
  [SMALL_STATE(288)] = 16952,
  [SMALL_STATE(289)] = 16992,
  [SMALL_STATE(290)] = 17018,
  [SMALL_STATE(291)] = 17056,
  [SMALL_STATE(292)] = 17096,
  [SMALL_STATE(293)] = 17122,
  [SMALL_STATE(294)] = 17148,
  [SMALL_STATE(295)] = 17174,
  [SMALL_STATE(296)] = 17202,
  [SMALL_STATE(297)] = 17228,
  [SMALL_STATE(298)] = 17254,
  [SMALL_STATE(299)] = 17280,
  [SMALL_STATE(300)] = 17306,
  [SMALL_STATE(301)] = 17350,
  [SMALL_STATE(302)] = 17388,
  [SMALL_STATE(303)] = 17424,
  [SMALL_STATE(304)] = 17468,
  [SMALL_STATE(305)] = 17493,
  [SMALL_STATE(306)] = 17518,
  [SMALL_STATE(307)] = 17543,
  [SMALL_STATE(308)] = 17568,
  [SMALL_STATE(309)] = 17593,
  [SMALL_STATE(310)] = 17618,
  [SMALL_STATE(311)] = 17643,
  [SMALL_STATE(312)] = 17668,
  [SMALL_STATE(313)] = 17693,
  [SMALL_STATE(314)] = 17718,
  [SMALL_STATE(315)] = 17743,
  [SMALL_STATE(316)] = 17768,
  [SMALL_STATE(317)] = 17793,
  [SMALL_STATE(318)] = 17818,
  [SMALL_STATE(319)] = 17843,
  [SMALL_STATE(320)] = 17868,
  [SMALL_STATE(321)] = 17893,
  [SMALL_STATE(322)] = 17918,
  [SMALL_STATE(323)] = 17955,
  [SMALL_STATE(324)] = 17980,
  [SMALL_STATE(325)] = 18005,
  [SMALL_STATE(326)] = 18030,
  [SMALL_STATE(327)] = 18073,
  [SMALL_STATE(328)] = 18098,
  [SMALL_STATE(329)] = 18123,
  [SMALL_STATE(330)] = 18148,
  [SMALL_STATE(331)] = 18173,
  [SMALL_STATE(332)] = 18198,
  [SMALL_STATE(333)] = 18223,
  [SMALL_STATE(334)] = 18260,
  [SMALL_STATE(335)] = 18285,
  [SMALL_STATE(336)] = 18310,
  [SMALL_STATE(337)] = 18335,
  [SMALL_STATE(338)] = 18360,
  [SMALL_STATE(339)] = 18385,
  [SMALL_STATE(340)] = 18410,
  [SMALL_STATE(341)] = 18435,
  [SMALL_STATE(342)] = 18460,
  [SMALL_STATE(343)] = 18485,
  [SMALL_STATE(344)] = 18522,
  [SMALL_STATE(345)] = 18547,
  [SMALL_STATE(346)] = 18572,
  [SMALL_STATE(347)] = 18597,
  [SMALL_STATE(348)] = 18622,
  [SMALL_STATE(349)] = 18647,
  [SMALL_STATE(350)] = 18672,
  [SMALL_STATE(351)] = 18697,
  [SMALL_STATE(352)] = 18722,
  [SMALL_STATE(353)] = 18747,
  [SMALL_STATE(354)] = 18770,
  [SMALL_STATE(355)] = 18804,
  [SMALL_STATE(356)] = 18838,
  [SMALL_STATE(357)] = 18870,
  [SMALL_STATE(358)] = 18901,
  [SMALL_STATE(359)] = 18932,
  [SMALL_STATE(360)] = 18961,
  [SMALL_STATE(361)] = 18992,
  [SMALL_STATE(362)] = 19023,
  [SMALL_STATE(363)] = 19054,
  [SMALL_STATE(364)] = 19082,
  [SMALL_STATE(365)] = 19110,
  [SMALL_STATE(366)] = 19138,
  [SMALL_STATE(367)] = 19166,
  [SMALL_STATE(368)] = 19194,
  [SMALL_STATE(369)] = 19217,
  [SMALL_STATE(370)] = 19234,
  [SMALL_STATE(371)] = 19255,
  [SMALL_STATE(372)] = 19274,
  [SMALL_STATE(373)] = 19295,
  [SMALL_STATE(374)] = 19318,
  [SMALL_STATE(375)] = 19335,
  [SMALL_STATE(376)] = 19352,
  [SMALL_STATE(377)] = 19369,
  [SMALL_STATE(378)] = 19392,
  [SMALL_STATE(379)] = 19413,
  [SMALL_STATE(380)] = 19430,
  [SMALL_STATE(381)] = 19450,
  [SMALL_STATE(382)] = 19470,
  [SMALL_STATE(383)] = 19490,
  [SMALL_STATE(384)] = 19504,
  [SMALL_STATE(385)] = 19524,
  [SMALL_STATE(386)] = 19538,
  [SMALL_STATE(387)] = 19558,
  [SMALL_STATE(388)] = 19574,
  [SMALL_STATE(389)] = 19594,
  [SMALL_STATE(390)] = 19610,
  [SMALL_STATE(391)] = 19630,
  [SMALL_STATE(392)] = 19646,
  [SMALL_STATE(393)] = 19662,
  [SMALL_STATE(394)] = 19679,
  [SMALL_STATE(395)] = 19692,
  [SMALL_STATE(396)] = 19709,
  [SMALL_STATE(397)] = 19726,
  [SMALL_STATE(398)] = 19743,
  [SMALL_STATE(399)] = 19760,
  [SMALL_STATE(400)] = 19777,
  [SMALL_STATE(401)] = 19790,
  [SMALL_STATE(402)] = 19809,
  [SMALL_STATE(403)] = 19828,
  [SMALL_STATE(404)] = 19845,
  [SMALL_STATE(405)] = 19858,
  [SMALL_STATE(406)] = 19877,
  [SMALL_STATE(407)] = 19894,
  [SMALL_STATE(408)] = 19910,
  [SMALL_STATE(409)] = 19926,
  [SMALL_STATE(410)] = 19942,
  [SMALL_STATE(411)] = 19956,
  [SMALL_STATE(412)] = 19972,
  [SMALL_STATE(413)] = 19988,
  [SMALL_STATE(414)] = 20004,
  [SMALL_STATE(415)] = 20018,
  [SMALL_STATE(416)] = 20032,
  [SMALL_STATE(417)] = 20048,
  [SMALL_STATE(418)] = 20064,
  [SMALL_STATE(419)] = 20080,
  [SMALL_STATE(420)] = 20094,
  [SMALL_STATE(421)] = 20110,
  [SMALL_STATE(422)] = 20126,
  [SMALL_STATE(423)] = 20140,
  [SMALL_STATE(424)] = 20156,
  [SMALL_STATE(425)] = 20172,
  [SMALL_STATE(426)] = 20188,
  [SMALL_STATE(427)] = 20204,
  [SMALL_STATE(428)] = 20218,
  [SMALL_STATE(429)] = 20232,
  [SMALL_STATE(430)] = 20248,
  [SMALL_STATE(431)] = 20262,
  [SMALL_STATE(432)] = 20278,
  [SMALL_STATE(433)] = 20294,
  [SMALL_STATE(434)] = 20308,
  [SMALL_STATE(435)] = 20324,
  [SMALL_STATE(436)] = 20340,
  [SMALL_STATE(437)] = 20354,
  [SMALL_STATE(438)] = 20370,
  [SMALL_STATE(439)] = 20384,
  [SMALL_STATE(440)] = 20398,
  [SMALL_STATE(441)] = 20411,
  [SMALL_STATE(442)] = 20422,
  [SMALL_STATE(443)] = 20433,
  [SMALL_STATE(444)] = 20444,
  [SMALL_STATE(445)] = 20457,
  [SMALL_STATE(446)] = 20468,
  [SMALL_STATE(447)] = 20479,
  [SMALL_STATE(448)] = 20492,
  [SMALL_STATE(449)] = 20503,
  [SMALL_STATE(450)] = 20514,
  [SMALL_STATE(451)] = 20527,
  [SMALL_STATE(452)] = 20538,
  [SMALL_STATE(453)] = 20549,
  [SMALL_STATE(454)] = 20562,
  [SMALL_STATE(455)] = 20575,
  [SMALL_STATE(456)] = 20586,
  [SMALL_STATE(457)] = 20597,
  [SMALL_STATE(458)] = 20608,
  [SMALL_STATE(459)] = 20619,
  [SMALL_STATE(460)] = 20630,
  [SMALL_STATE(461)] = 20643,
  [SMALL_STATE(462)] = 20654,
  [SMALL_STATE(463)] = 20667,
  [SMALL_STATE(464)] = 20680,
  [SMALL_STATE(465)] = 20690,
  [SMALL_STATE(466)] = 20700,
  [SMALL_STATE(467)] = 20710,
  [SMALL_STATE(468)] = 20720,
  [SMALL_STATE(469)] = 20730,
  [SMALL_STATE(470)] = 20740,
  [SMALL_STATE(471)] = 20750,
  [SMALL_STATE(472)] = 20760,
  [SMALL_STATE(473)] = 20770,
  [SMALL_STATE(474)] = 20780,
  [SMALL_STATE(475)] = 20790,
  [SMALL_STATE(476)] = 20800,
  [SMALL_STATE(477)] = 20810,
  [SMALL_STATE(478)] = 20820,
  [SMALL_STATE(479)] = 20830,
  [SMALL_STATE(480)] = 20840,
  [SMALL_STATE(481)] = 20850,
  [SMALL_STATE(482)] = 20860,
  [SMALL_STATE(483)] = 20870,
  [SMALL_STATE(484)] = 20880,
  [SMALL_STATE(485)] = 20890,
  [SMALL_STATE(486)] = 20900,
  [SMALL_STATE(487)] = 20910,
  [SMALL_STATE(488)] = 20920,
  [SMALL_STATE(489)] = 20930,
  [SMALL_STATE(490)] = 20940,
  [SMALL_STATE(491)] = 20950,
  [SMALL_STATE(492)] = 20960,
  [SMALL_STATE(493)] = 20970,
  [SMALL_STATE(494)] = 20980,
  [SMALL_STATE(495)] = 20990,
  [SMALL_STATE(496)] = 21000,
  [SMALL_STATE(497)] = 21010,
  [SMALL_STATE(498)] = 21020,
  [SMALL_STATE(499)] = 21030,
  [SMALL_STATE(500)] = 21040,
  [SMALL_STATE(501)] = 21050,
  [SMALL_STATE(502)] = 21060,
  [SMALL_STATE(503)] = 21070,
  [SMALL_STATE(504)] = 21080,
  [SMALL_STATE(505)] = 21090,
  [SMALL_STATE(506)] = 21100,
  [SMALL_STATE(507)] = 21110,
  [SMALL_STATE(508)] = 21120,
  [SMALL_STATE(509)] = 21130,
  [SMALL_STATE(510)] = 21140,
  [SMALL_STATE(511)] = 21150,
  [SMALL_STATE(512)] = 21160,
  [SMALL_STATE(513)] = 21170,
  [SMALL_STATE(514)] = 21180,
  [SMALL_STATE(515)] = 21190,
  [SMALL_STATE(516)] = 21200,
  [SMALL_STATE(517)] = 21210,
  [SMALL_STATE(518)] = 21220,
  [SMALL_STATE(519)] = 21230,
  [SMALL_STATE(520)] = 21240,
  [SMALL_STATE(521)] = 21250,
  [SMALL_STATE(522)] = 21260,
  [SMALL_STATE(523)] = 21270,
  [SMALL_STATE(524)] = 21280,
  [SMALL_STATE(525)] = 21290,
  [SMALL_STATE(526)] = 21300,
  [SMALL_STATE(527)] = 21310,
  [SMALL_STATE(528)] = 21320,
  [SMALL_STATE(529)] = 21330,
  [SMALL_STATE(530)] = 21340,
  [SMALL_STATE(531)] = 21350,
  [SMALL_STATE(532)] = 21360,
  [SMALL_STATE(533)] = 21370,
  [SMALL_STATE(534)] = 21380,
  [SMALL_STATE(535)] = 21390,
  [SMALL_STATE(536)] = 21400,
  [SMALL_STATE(537)] = 21410,
  [SMALL_STATE(538)] = 21420,
  [SMALL_STATE(539)] = 21430,
  [SMALL_STATE(540)] = 21440,
  [SMALL_STATE(541)] = 21450,
  [SMALL_STATE(542)] = 21460,
  [SMALL_STATE(543)] = 21470,
  [SMALL_STATE(544)] = 21480,
  [SMALL_STATE(545)] = 21490,
  [SMALL_STATE(546)] = 21500,
  [SMALL_STATE(547)] = 21510,
  [SMALL_STATE(548)] = 21520,
  [SMALL_STATE(549)] = 21530,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 9),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 9),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(80),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(58),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(117),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(406),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(529),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(528),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(440),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(526),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(453),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(509),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(10),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(10),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(502),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(44),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(405),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 13),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 13),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 18),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 18),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(172),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(397),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(534),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(524),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(168),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(168),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(475),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(163),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(200),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(396),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(543),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(542),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(192),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(192),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(512),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(184),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(168),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(168),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 14),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 14),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 23),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 23),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(277),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(395),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(545),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(544),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(296),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(296),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(517),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(239),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 10),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 10),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(318),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(393),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(541),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(539),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(330),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(330),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(505),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(273),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(109),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(85),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(71),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(470),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(16),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(110),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(52),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(53),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(192),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(192),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 24),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 6),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 6),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 4),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 22),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 6, .production_id = 22),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 7),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 7),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 5),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 5),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 20),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 20),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 21),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 21),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 26),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 26),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(76),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(28),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(49),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(34),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 25),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 25),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 1),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(296),
  [788] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(296),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_definition, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 7),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(330),
  [874] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(330),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 4),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 1),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 6),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 3),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [1001] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 5),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 4),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 5),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 7),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [1031] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [1035] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [1039] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 3),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 8),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__self_join, 4),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 5),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [1067] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(98),
  [1070] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(531),
  [1073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(548),
  [1076] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(420),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1087] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(470),
  [1090] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(20),
  [1093] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(110),
  [1096] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(372),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(460),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 11),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 11),
  [1118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(387),
  [1121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(387),
  [1124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(496),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 10),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 10),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 10),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 10),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(419),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(135),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2), SHIFT_REPEAT(100),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(105),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [1271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(61),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(441),
  [1283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(104),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(5),
  [1295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [1437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [1445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [1447] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
