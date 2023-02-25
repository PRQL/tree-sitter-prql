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
          lookahead == ' ') SKIP(384)
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
          lookahead == ' ') SKIP(385)
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
    case 385:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(385)
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
  [10] = {.lex_state = 405},
  [11] = {.lex_state = 404},
  [12] = {.lex_state = 404},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 404},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 405},
  [19] = {.lex_state = 405},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 404},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 405},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 405},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 405},
  [33] = {.lex_state = 404},
  [34] = {.lex_state = 405},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 405},
  [39] = {.lex_state = 405},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 405},
  [42] = {.lex_state = 405},
  [43] = {.lex_state = 404},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 405},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 405},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 405},
  [50] = {.lex_state = 405},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 405},
  [53] = {.lex_state = 405},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 405},
  [57] = {.lex_state = 404},
  [58] = {.lex_state = 405},
  [59] = {.lex_state = 405},
  [60] = {.lex_state = 405},
  [61] = {.lex_state = 405},
  [62] = {.lex_state = 404},
  [63] = {.lex_state = 405},
  [64] = {.lex_state = 405},
  [65] = {.lex_state = 404},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 8},
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
  [90] = {.lex_state = 404},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 404},
  [94] = {.lex_state = 404},
  [95] = {.lex_state = 404},
  [96] = {.lex_state = 404},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 404},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 3},
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
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 404},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 404},
  [144] = {.lex_state = 404},
  [145] = {.lex_state = 404},
  [146] = {.lex_state = 405},
  [147] = {.lex_state = 404},
  [148] = {.lex_state = 406},
  [149] = {.lex_state = 406},
  [150] = {.lex_state = 404},
  [151] = {.lex_state = 404},
  [152] = {.lex_state = 404},
  [153] = {.lex_state = 404},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 406},
  [157] = {.lex_state = 406},
  [158] = {.lex_state = 404},
  [159] = {.lex_state = 406},
  [160] = {.lex_state = 406},
  [161] = {.lex_state = 406},
  [162] = {.lex_state = 406},
  [163] = {.lex_state = 405},
  [164] = {.lex_state = 406},
  [165] = {.lex_state = 406},
  [166] = {.lex_state = 406},
  [167] = {.lex_state = 406},
  [168] = {.lex_state = 405},
  [169] = {.lex_state = 406},
  [170] = {.lex_state = 406},
  [171] = {.lex_state = 405},
  [172] = {.lex_state = 406},
  [173] = {.lex_state = 406},
  [174] = {.lex_state = 406},
  [175] = {.lex_state = 405},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 404},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 405},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 404},
  [212] = {.lex_state = 404},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 405},
  [216] = {.lex_state = 404},
  [217] = {.lex_state = 405},
  [218] = {.lex_state = 404},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 404},
  [223] = {.lex_state = 404},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 404},
  [226] = {.lex_state = 404},
  [227] = {.lex_state = 405},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 404},
  [231] = {.lex_state = 404},
  [232] = {.lex_state = 404},
  [233] = {.lex_state = 11},
  [234] = {.lex_state = 11},
  [235] = {.lex_state = 404},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 404},
  [238] = {.lex_state = 405},
  [239] = {.lex_state = 405},
  [240] = {.lex_state = 405},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 405},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 405},
  [246] = {.lex_state = 11},
  [247] = {.lex_state = 404},
  [248] = {.lex_state = 404},
  [249] = {.lex_state = 11},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 405},
  [252] = {.lex_state = 405},
  [253] = {.lex_state = 405},
  [254] = {.lex_state = 12},
  [255] = {.lex_state = 404},
  [256] = {.lex_state = 404},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 404},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 405},
  [261] = {.lex_state = 12},
  [262] = {.lex_state = 405},
  [263] = {.lex_state = 405},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 405},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 404},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 404},
  [272] = {.lex_state = 404},
  [273] = {.lex_state = 404},
  [274] = {.lex_state = 404},
  [275] = {.lex_state = 11},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 11},
  [281] = {.lex_state = 11},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 404},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 404},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 404},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 404},
  [291] = {.lex_state = 11},
  [292] = {.lex_state = 404},
  [293] = {.lex_state = 12},
  [294] = {.lex_state = 12},
  [295] = {.lex_state = 12},
  [296] = {.lex_state = 12},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 11},
  [299] = {.lex_state = 404},
  [300] = {.lex_state = 12},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 404},
  [303] = {.lex_state = 404},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 404},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 4},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 404},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 404},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 4},
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
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 20},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 20},
  [378] = {.lex_state = 20},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 404},
  [382] = {.lex_state = 404},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 404},
  [385] = {.lex_state = 404},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 20},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 404},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 404},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 19},
  [394] = {.lex_state = 19},
  [395] = {.lex_state = 19},
  [396] = {.lex_state = 404},
  [397] = {.lex_state = 404},
  [398] = {.lex_state = 404},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 404},
  [401] = {.lex_state = 404},
  [402] = {.lex_state = 404},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 19},
  [405] = {.lex_state = 404},
  [406] = {.lex_state = 404},
  [407] = {.lex_state = 19},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 396},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 404},
  [416] = {.lex_state = 404},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 21},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 404},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 19},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 396},
  [434] = {.lex_state = 19},
  [435] = {.lex_state = 396},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 396},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 19},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 396},
  [444] = {.lex_state = 19},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 404},
  [448] = {.lex_state = 19},
  [449] = {.lex_state = 19},
  [450] = {.lex_state = 398},
  [451] = {.lex_state = 19},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 19},
  [454] = {.lex_state = 398},
  [455] = {.lex_state = 19},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 398},
  [460] = {.lex_state = 12},
  [461] = {.lex_state = 19},
  [462] = {.lex_state = 19},
  [463] = {.lex_state = 19},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 22},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 766},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 6},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 6},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 6},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 6},
  [482] = {.lex_state = 525},
  [483] = {.lex_state = 22},
  [484] = {.lex_state = 512},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 512},
  [487] = {.lex_state = 22},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 6},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 22},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 6},
  [499] = {.lex_state = 6},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 512},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 6},
  [506] = {.lex_state = 6},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 19},
  [510] = {.lex_state = 0},
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
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 22},
  [531] = {.lex_state = 22},
  [532] = {.lex_state = 22},
  [533] = {.lex_state = 512},
  [534] = {.lex_state = 525},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 512},
  [538] = {.lex_state = 525},
  [539] = {.lex_state = 22},
  [540] = {.lex_state = 512},
  [541] = {.lex_state = 525},
  [542] = {.lex_state = 512},
  [543] = {.lex_state = 525},
  [544] = {.lex_state = 512},
  [545] = {.lex_state = 0},
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
    [sym_program] = STATE(535),
    [sym_prql] = STATE(375),
    [sym_pipeline] = STATE(392),
    [sym_variable] = STATE(392),
    [sym_function_definition] = STATE(392),
    [sym_from_text] = STATE(179),
    [sym_from] = STATE(179),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(307),
    [aux_sym_program_repeat2] = STATE(355),
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(222), 1,
      sym_binary_expression,
    STATE(303), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(422), 3,
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
    STATE(38), 7,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(230), 1,
      sym_binary_expression,
    STATE(303), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(441), 3,
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
    STATE(38), 7,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(230), 1,
      sym_binary_expression,
    STATE(303), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(441), 3,
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
    STATE(38), 7,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(230), 1,
      sym_binary_expression,
    STATE(303), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(441), 3,
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
    STATE(38), 7,
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
    STATE(149), 1,
      aux_sym_function_call_repeat1,
    STATE(156), 1,
      sym__double_quote_string,
    STATE(159), 1,
      aux_sym__friendly_number,
    STATE(162), 1,
      sym_integer,
    STATE(166), 1,
      sym_literal,
    STATE(172), 1,
      sym__call_parameter,
    STATE(173), 2,
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
  [526] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(81), 2,
      sym__natural_number,
      anon_sym__,
    STATE(7), 2,
      aux_sym__friendly_number,
      sym_comment,
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
  [582] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(7), 1,
      aux_sym__friendly_number,
    STATE(8), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(86), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(84), 35,
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
    STATE(7), 1,
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
  [698] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(96), 1,
      anon_sym_DASH,
    ACTIONS(98), 1,
      anon_sym_PLUS,
    ACTIONS(100), 1,
      anon_sym_Z,
    STATE(10), 1,
      sym_comment,
    STATE(34), 1,
      sym_timezone,
    STATE(530), 1,
      sym_direction,
    ACTIONS(94), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(92), 33,
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
  [761] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(104), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(102), 37,
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
  [814] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_COLON,
    ACTIONS(112), 1,
      anon_sym_DOT,
    STATE(12), 1,
      sym_comment,
    ACTIONS(108), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 34,
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
  [870] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      sym__natural_number,
    ACTIONS(124), 1,
      anon_sym__,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(13), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_function_call_repeat1,
    STATE(184), 1,
      aux_sym__friendly_number,
    STATE(190), 1,
      sym__call_parameter,
    STATE(191), 1,
      sym_literal,
    STATE(193), 1,
      sym__double_quote_string,
    STATE(199), 1,
      sym_integer,
    STATE(194), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(114), 3,
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
  [952] = 32,
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
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      anon_sym_PLUS,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(14), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(98), 1,
      sym_direction,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(423), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1060] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_comment,
    ACTIONS(140), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(138), 34,
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
  [1116] = 32,
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
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(48), 1,
      aux_sym_switch_repeat1,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(220), 1,
      sym_switch_condition,
    STATE(255), 1,
      sym_literal,
    STATE(256), 1,
      sym_binary_expression,
    STATE(336), 1,
      sym__expression,
    STATE(408), 1,
      aux_sym_switch_repeat2,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1223] = 28,
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
    ACTIONS(150), 1,
      sym_keyword_switch,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(17), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(147), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    ACTIONS(152), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(206), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1322] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(160), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 35,
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
  [1373] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(166), 1,
      sym__natural_number,
    STATE(19), 1,
      sym_comment,
    ACTIONS(164), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(162), 34,
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
  [1426] = 31,
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
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(20), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(88), 1,
      sym_direction,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(158), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(265), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1531] = 28,
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
    ACTIONS(150), 1,
      sym_keyword_switch,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(21), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(147), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    ACTIONS(152), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(206), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1630] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(172), 1,
      anon_sym_DOT,
    STATE(22), 1,
      sym_comment,
    ACTIONS(160), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 34,
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
  [1683] = 28,
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
    ACTIONS(150), 1,
      sym_keyword_switch,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(23), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(147), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    ACTIONS(152), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(206), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1782] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(178), 6,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(176), 34,
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
  [1833] = 28,
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
    ACTIONS(150), 1,
      sym_keyword_switch,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(25), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(147), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    ACTIONS(152), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(206), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1932] = 31,
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
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      anon_sym_PLUS,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(26), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(92), 1,
      sym_direction,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(446), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2037] = 31,
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
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      anon_sym_PLUS,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(27), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(92), 1,
      sym_direction,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(446), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2142] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(108), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 35,
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
  [2193] = 31,
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
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(29), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(101), 1,
      sym_direction,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(152), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(265), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2298] = 31,
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
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      anon_sym_PLUS,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(30), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(82), 1,
      sym_direction,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(189), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(265), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2403] = 31,
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
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      anon_sym_PLUS,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(31), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(92), 1,
      sym_direction,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(446), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2508] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(190), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(188), 35,
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
  [2559] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(194), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(192), 35,
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
  [2610] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(198), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(196), 34,
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
  [2660] = 30,
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
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(136), 1,
      anon_sym_PLUS,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(35), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(92), 1,
      sym_direction,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(446), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2762] = 31,
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
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      aux_sym_switch_repeat1,
    STATE(36), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(220), 1,
      sym_switch_condition,
    STATE(255), 1,
      sym_literal,
    STATE(256), 1,
      sym_binary_expression,
    STATE(336), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2866] = 31,
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
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(37), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(150), 1,
      sym_field,
    STATE(158), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(326), 1,
      sym_table_reference,
    STATE(337), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2970] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(208), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 34,
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
  [3020] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(212), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 34,
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
  [3070] = 30,
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
    ACTIONS(214), 1,
      sym_keyword_side,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(40), 1,
      sym_comment,
    STATE(43), 1,
      sym_integer,
    STATE(86), 1,
      sym__join_definition,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(158), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(224), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3172] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(41), 1,
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
  [3222] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(222), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(220), 34,
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
  [3272] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(43), 1,
      sym_comment,
    ACTIONS(226), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(224), 33,
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
  [3324] = 30,
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
    ACTIONS(230), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(44), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(414), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3426] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(226), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(224), 34,
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
  [3476] = 31,
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
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(46), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(216), 1,
      sym_binary_expression,
    STATE(419), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3580] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(242), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(240), 34,
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
  [3630] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_DASH,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    ACTIONS(273), 1,
      sym__natural_number,
    ACTIONS(276), 1,
      anon_sym__,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_AT,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(220), 1,
      sym_switch_condition,
    STATE(255), 1,
      sym_literal,
    STATE(256), 1,
      sym_binary_expression,
    STATE(336), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(48), 2,
      sym_comment,
      aux_sym_switch_repeat1,
    ACTIONS(244), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3730] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    ACTIONS(290), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 34,
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
  [3780] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    ACTIONS(294), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 34,
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
  [3830] = 30,
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
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(51), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(409), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3932] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_comment,
    ACTIONS(302), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 34,
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
  [3982] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(53), 1,
      sym_comment,
    ACTIONS(306), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 34,
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
  [4032] = 30,
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
    ACTIONS(214), 1,
      sym_keyword_side,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(54), 1,
      sym_comment,
    STATE(83), 1,
      sym__join_definition,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(152), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(224), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4134] = 31,
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
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(55), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(150), 1,
      sym_field,
    STATE(152), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(326), 1,
      sym_table_reference,
    STATE(337), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 5,
      sym_literal,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4238] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(56), 1,
      sym_comment,
    ACTIONS(310), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 34,
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
  [4288] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(316), 1,
      anon_sym_T,
    STATE(57), 1,
      sym_comment,
    ACTIONS(314), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 33,
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
  [4340] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym_comment,
    ACTIONS(320), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(318), 34,
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
  [4390] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(59), 1,
      sym_comment,
    ACTIONS(324), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(322), 34,
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
  [4440] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym_comment,
    ACTIONS(328), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(326), 34,
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
  [4490] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_comment,
    ACTIONS(332), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 34,
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
  [4540] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(334), 1,
      anon_sym_DASH_GT,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(62), 1,
      sym_comment,
    ACTIONS(208), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 32,
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
  [4594] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(63), 1,
      sym_comment,
    ACTIONS(340), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(338), 34,
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
  [4644] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_comment,
    ACTIONS(164), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(162), 34,
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
  [4694] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(342), 1,
      anon_sym_DOT,
    STATE(65), 1,
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
  [4746] = 30,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(48), 1,
      aux_sym_switch_repeat1,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(66), 1,
      sym_comment,
    STATE(220), 1,
      sym_switch_condition,
    STATE(255), 1,
      sym_literal,
    STATE(256), 1,
      sym_binary_expression,
    STATE(336), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    ACTIONS(344), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4848] = 29,
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
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(67), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(516), 1,
      sym_term,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4947] = 29,
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
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(68), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(456), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5046] = 30,
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
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(69), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(225), 1,
      sym_binary_expression,
    STATE(445), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5147] = 29,
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
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(70), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(456), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5246] = 30,
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
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(71), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(151), 1,
      sym_binary_expression,
    STATE(158), 1,
      sym__expression,
    STATE(344), 1,
      sym_term,
    STATE(351), 1,
      sym_assignment,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5347] = 30,
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
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(66), 1,
      aux_sym_switch_repeat1,
    STATE(72), 1,
      sym_comment,
    STATE(220), 1,
      sym_switch_condition,
    STATE(255), 1,
      sym_literal,
    STATE(256), 1,
      sym_binary_expression,
    STATE(336), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5448] = 30,
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
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(73), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(225), 1,
      sym_binary_expression,
    STATE(445), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5549] = 29,
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
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(74), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(456), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5648] = 30,
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
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(75), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(225), 1,
      sym_binary_expression,
    STATE(445), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5749] = 29,
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
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    ACTIONS(370), 1,
      anon_sym_EQ_EQ,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(76), 1,
      sym_comment,
    STATE(226), 1,
      sym_binary_expression,
    STATE(306), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5848] = 30,
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
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(77), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(151), 1,
      sym_binary_expression,
    STATE(212), 1,
      sym__expression,
    STATE(344), 1,
      sym_term,
    STATE(351), 1,
      sym_assignment,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5949] = 29,
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
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(78), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(456), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6048] = 28,
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
    ACTIONS(174), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(79), 1,
      sym_comment,
    STATE(247), 1,
      sym_binary_expression,
    STATE(299), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(489), 1,
      sym_function_call,
    ACTIONS(374), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6145] = 30,
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
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(66), 1,
      aux_sym_switch_repeat1,
    STATE(80), 1,
      sym_comment,
    STATE(220), 1,
      sym_switch_condition,
    STATE(255), 1,
      sym_literal,
    STATE(256), 1,
      sym_binary_expression,
    STATE(336), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6246] = 30,
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
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(81), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(151), 1,
      sym_binary_expression,
    STATE(152), 1,
      sym__expression,
    STATE(344), 1,
      sym_term,
    STATE(351), 1,
      sym_assignment,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6347] = 28,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(82), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(189), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(278), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6443] = 28,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(83), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(152), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(228), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6539] = 26,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(84), 1,
      sym_comment,
    STATE(237), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6631] = 28,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(85), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(456), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6727] = 28,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(86), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(158), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(228), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6823] = 29,
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
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(87), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(225), 1,
      sym_binary_expression,
    STATE(445), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 5,
      sym_literal,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6921] = 28,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(88), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(158), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(278), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7017] = 28,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(89), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(152), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(314), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7113] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    STATE(90), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 28,
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
  [7167] = 28,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(91), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(511), 1,
      sym_term,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7263] = 28,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(92), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(457), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7359] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(290), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 31,
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
  [7409] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    STATE(94), 1,
      sym_comment,
    ACTIONS(290), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(288), 22,
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
  [7471] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    STATE(95), 1,
      sym_comment,
    ACTIONS(290), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(288), 23,
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
  [7531] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(96), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(290), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 29,
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
  [7583] = 29,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(66), 1,
      aux_sym_switch_repeat1,
    STATE(97), 1,
      sym_comment,
    STATE(220), 1,
      sym_switch_condition,
    STATE(255), 1,
      sym_literal,
    STATE(256), 1,
      sym_binary_expression,
    STATE(336), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7681] = 28,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(98), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(204), 1,
      sym_assignment,
    STATE(212), 1,
      sym__expression,
    STATE(438), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7777] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    STATE(99), 1,
      sym_comment,
    ACTIONS(290), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(288), 24,
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
  [7835] = 28,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(100), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(158), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(314), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7931] = 28,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(101), 1,
      sym_comment,
    STATE(141), 1,
      sym__double_quote_string,
    STATE(152), 1,
      sym__expression,
    STATE(204), 1,
      sym_assignment,
    STATE(278), 1,
      sym_term,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(143), 2,
      sym_f_string,
      sym_s_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8027] = 26,
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
    ACTIONS(394), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym__natural_number,
    ACTIONS(400), 1,
      anon_sym__,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_AT,
    STATE(102), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym__friendly_number,
    STATE(196), 1,
      sym_integer,
    STATE(240), 1,
      sym__double_quote_string,
    STATE(262), 1,
      sym__expression,
    STATE(399), 1,
      sym_range,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8118] = 19,
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
      anon_sym__,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(103), 1,
      sym_comment,
    STATE(177), 1,
      aux_sym_function_call_repeat1,
    STATE(236), 1,
      aux_sym__friendly_number,
    STATE(246), 1,
      sym__double_quote_string,
    STATE(275), 1,
      sym__call_parameter,
    STATE(277), 1,
      sym_literal,
    STATE(291), 1,
      sym_integer,
    STATE(270), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(406), 3,
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
  [8195] = 26,
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
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(104), 1,
      sym_comment,
    STATE(153), 1,
      sym__expression,
    STATE(327), 1,
      sym__boolean_expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8286] = 27,
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
    ACTIONS(424), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(105), 1,
      sym_comment,
    STATE(235), 1,
      sym_binary_expression,
    STATE(306), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8379] = 26,
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
    ACTIONS(394), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(400), 1,
      anon_sym__,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_AT,
    ACTIONS(426), 1,
      sym__natural_number,
    STATE(106), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym__friendly_number,
    STATE(239), 1,
      sym_integer,
    STATE(240), 1,
      sym__double_quote_string,
    STATE(257), 1,
      sym_range,
    STATE(262), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8470] = 27,
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
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym_comment,
    STATE(235), 1,
      sym_binary_expression,
    STATE(306), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8563] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(108), 1,
      sym_comment,
    STATE(232), 1,
      sym__double_quote_string,
    STATE(273), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8651] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(109), 1,
      sym_comment,
    STATE(232), 1,
      sym__double_quote_string,
    STATE(290), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8739] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(110), 1,
      sym_comment,
    STATE(232), 1,
      sym__double_quote_string,
    STATE(287), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8827] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(99), 1,
      sym__expression,
    STATE(111), 1,
      sym_comment,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8915] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(96), 1,
      sym__expression,
    STATE(112), 1,
      sym_comment,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9003] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(93), 1,
      sym__expression,
    STATE(113), 1,
      sym_comment,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9091] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(90), 1,
      sym__expression,
    STATE(114), 1,
      sym_comment,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9179] = 26,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(115), 1,
      sym_comment,
    STATE(274), 1,
      sym_binary_expression,
    STATE(341), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9269] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(116), 1,
      sym_comment,
    STATE(231), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9357] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(117), 1,
      sym_comment,
    STATE(248), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9445] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(118), 1,
      sym_comment,
    STATE(271), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9533] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(49), 1,
      sym__expression,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(119), 1,
      sym_comment,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9621] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(49), 1,
      sym__expression,
    STATE(120), 1,
      sym_comment,
    STATE(232), 1,
      sym__double_quote_string,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9709] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(94), 1,
      sym__expression,
    STATE(121), 1,
      sym_comment,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9797] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__expression,
    STATE(122), 1,
      sym_comment,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9885] = 26,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(123), 1,
      sym_comment,
    STATE(283), 1,
      sym_binary_expression,
    STATE(341), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9975] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(124), 1,
      sym_comment,
    STATE(232), 1,
      sym__double_quote_string,
    STATE(285), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10063] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(125), 1,
      sym_comment,
    STATE(232), 1,
      sym__double_quote_string,
    STATE(292), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10151] = 26,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(126), 1,
      sym_comment,
    STATE(235), 1,
      sym_binary_expression,
    STATE(306), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [10241] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(127), 1,
      sym_comment,
    STATE(232), 1,
      sym__double_quote_string,
    STATE(269), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10329] = 25,
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
    ACTIONS(394), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym__natural_number,
    ACTIONS(400), 1,
      anon_sym__,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_AT,
    STATE(128), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym__friendly_number,
    STATE(239), 1,
      sym_integer,
    STATE(240), 1,
      sym__double_quote_string,
    STATE(266), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10417] = 25,
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
    ACTIONS(394), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym__natural_number,
    ACTIONS(400), 1,
      anon_sym__,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_AT,
    STATE(129), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym__friendly_number,
    STATE(239), 1,
      sym_integer,
    STATE(240), 1,
      sym__double_quote_string,
    STATE(263), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10505] = 25,
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
    ACTIONS(394), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym__natural_number,
    ACTIONS(400), 1,
      anon_sym__,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_AT,
    STATE(49), 1,
      sym__expression,
    STATE(130), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym__friendly_number,
    STATE(239), 1,
      sym_integer,
    STATE(240), 1,
      sym__double_quote_string,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10593] = 25,
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
    ACTIONS(394), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym__natural_number,
    ACTIONS(400), 1,
      anon_sym__,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_AT,
    STATE(131), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym__friendly_number,
    STATE(239), 1,
      sym_integer,
    STATE(240), 1,
      sym__double_quote_string,
    STATE(260), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10681] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(132), 1,
      sym_comment,
    STATE(145), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10769] = 25,
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
    ACTIONS(394), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym__natural_number,
    ACTIONS(400), 1,
      anon_sym__,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_AT,
    STATE(133), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym__friendly_number,
    STATE(239), 1,
      sym_integer,
    STATE(240), 1,
      sym__double_quote_string,
    STATE(253), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10857] = 26,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(134), 1,
      sym_comment,
    STATE(247), 1,
      sym_binary_expression,
    STATE(272), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [10947] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(135), 1,
      sym_comment,
    STATE(258), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11035] = 25,
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
    ACTIONS(394), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym__natural_number,
    ACTIONS(400), 1,
      anon_sym__,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_AT,
    STATE(136), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym__friendly_number,
    STATE(239), 1,
      sym_integer,
    STATE(240), 1,
      sym__double_quote_string,
    STATE(252), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11123] = 26,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(137), 1,
      sym_comment,
    STATE(302), 1,
      sym_binary_expression,
    STATE(341), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [11213] = 25,
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
    ACTIONS(394), 1,
      anon_sym_DASH,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      sym__natural_number,
    ACTIONS(400), 1,
      anon_sym__,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(404), 1,
      anon_sym_AT,
    STATE(138), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym__friendly_number,
    STATE(239), 1,
      sym_integer,
    STATE(240), 1,
      sym__double_quote_string,
    STATE(251), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11301] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(432), 1,
      anon_sym_DASH,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    ACTIONS(436), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      sym__natural_number,
    ACTIONS(440), 1,
      anon_sym__,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(139), 1,
      sym_comment,
    STATE(182), 1,
      aux_sym_function_call_repeat1,
    STATE(268), 1,
      aux_sym__friendly_number,
    STATE(304), 1,
      sym__call_parameter,
    STATE(318), 1,
      sym_integer,
    STATE(320), 1,
      sym_literal,
    STATE(350), 1,
      sym__double_quote_string,
    STATE(343), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(430), 3,
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
  [11377] = 25,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(140), 1,
      sym_comment,
    STATE(144), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [11465] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOT,
    ACTIONS(448), 1,
      sym_keyword_from,
    STATE(141), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 12,
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
    ACTIONS(446), 18,
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
  [11517] = 26,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(62), 1,
      sym__double_quote_string,
    STATE(142), 1,
      sym_comment,
    STATE(306), 1,
      sym__expression,
    STATE(470), 1,
      sym__alias_identifier,
    STATE(41), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(42), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(211), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(38), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [11607] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(448), 1,
      sym_keyword_from,
    STATE(143), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 12,
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
    ACTIONS(446), 18,
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
  [11656] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(452), 1,
      sym_keyword_from,
    ACTIONS(454), 1,
      sym_keyword_or,
    STATE(144), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(450), 18,
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
  [11716] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_or,
    ACTIONS(458), 1,
      sym_keyword_from,
    STATE(145), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(456), 18,
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
  [11776] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(462), 1,
      sym_keyword_from,
    STATE(146), 1,
      sym_comment,
    ACTIONS(104), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(460), 14,
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
    ACTIONS(102), 15,
      sym_keyword_and,
      sym_keyword_or,
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
  [11824] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_or,
    ACTIONS(466), 1,
      sym_keyword_from,
    STATE(147), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 18,
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
  [11884] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(475), 1,
      anon_sym_DASH,
    ACTIONS(478), 1,
      anon_sym_DQUOTE,
    ACTIONS(481), 1,
      anon_sym_SQUOTE,
    ACTIONS(484), 1,
      sym__natural_number,
    ACTIONS(487), 1,
      anon_sym__,
    ACTIONS(490), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      sym_identifier,
    STATE(156), 1,
      sym__double_quote_string,
    STATE(159), 1,
      aux_sym__friendly_number,
    STATE(162), 1,
      sym_integer,
    STATE(166), 1,
      sym_literal,
    STATE(172), 1,
      sym__call_parameter,
    ACTIONS(468), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(148), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(173), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(472), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(470), 12,
      sym_keyword_from,
      sym_keyword_filter,
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
  [11955] = 19,
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
    STATE(148), 1,
      aux_sym_function_call_repeat1,
    STATE(149), 1,
      sym_comment,
    STATE(156), 1,
      sym__double_quote_string,
    STATE(159), 1,
      aux_sym__friendly_number,
    STATE(162), 1,
      sym_integer,
    STATE(166), 1,
      sym_literal,
    STATE(172), 1,
      sym__call_parameter,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(173), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(61), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(498), 12,
      sym_keyword_from,
      sym_keyword_filter,
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
  [12028] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_comment,
    ACTIONS(208), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 25,
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
  [12068] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(151), 1,
      sym_comment,
    ACTIONS(208), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 25,
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
  [12108] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_or,
    ACTIONS(502), 1,
      sym_keyword_from,
    ACTIONS(504), 1,
      anon_sym_EQ,
    STATE(152), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(500), 13,
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
  [12166] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_or,
    ACTIONS(508), 1,
      sym_keyword_from,
    STATE(153), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(506), 13,
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
  [12221] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      sym__natural_number,
    ACTIONS(124), 1,
      anon_sym__,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(154), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_function_call_repeat1,
    STATE(184), 1,
      aux_sym__friendly_number,
    STATE(190), 1,
      sym__call_parameter,
    STATE(191), 1,
      sym_literal,
    STATE(193), 1,
      sym__double_quote_string,
    STATE(199), 1,
      sym_integer,
    ACTIONS(496), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(194), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(114), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(498), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [12290] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(513), 1,
      anon_sym_DASH,
    ACTIONS(516), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      sym__natural_number,
    ACTIONS(525), 1,
      anon_sym__,
    ACTIONS(528), 1,
      anon_sym_DOT,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(184), 1,
      aux_sym__friendly_number,
    STATE(190), 1,
      sym__call_parameter,
    STATE(191), 1,
      sym_literal,
    STATE(193), 1,
      sym__double_quote_string,
    STATE(199), 1,
      sym_integer,
    ACTIONS(468), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    STATE(155), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(194), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(510), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(470), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [12357] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_comment,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(534), 17,
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
  [12393] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(540), 1,
      anon_sym_COLON,
    STATE(157), 1,
      sym_comment,
    ACTIONS(536), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(538), 17,
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
  [12431] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_or,
    ACTIONS(542), 1,
      anon_sym_EQ,
    STATE(158), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(500), 10,
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
  [12483] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_comment,
    STATE(161), 1,
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
  [12521] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    STATE(161), 1,
      aux_sym__friendly_number,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(86), 17,
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
  [12559] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(544), 1,
      sym__natural_number,
    ACTIONS(547), 1,
      anon_sym__,
    STATE(161), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
    ACTIONS(79), 16,
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
  [12599] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(162), 1,
      sym_comment,
    ACTIONS(224), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(226), 17,
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
  [12634] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym__friendly_number,
    ACTIONS(398), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(90), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(88), 18,
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
  [12673] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_comment,
    ACTIONS(326), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(328), 17,
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
  [12708] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(102), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(104), 17,
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
  [12743] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(536), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(538), 17,
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
  [12778] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(192), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(194), 17,
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
  [12813] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(550), 2,
      sym__natural_number,
      anon_sym__,
    STATE(168), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(79), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 18,
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
  [12850] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
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
  [12885] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(170), 1,
      sym_comment,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(164), 17,
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
  [12920] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      aux_sym__friendly_number,
    STATE(171), 1,
      sym_comment,
    ACTIONS(398), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(86), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(84), 18,
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
  [12959] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(172), 1,
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
  [12994] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(173), 1,
      sym_comment,
    ACTIONS(224), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(226), 17,
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
  [13029] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(174), 1,
      sym_comment,
    ACTIONS(304), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(306), 17,
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
  [13064] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(175), 1,
      sym_comment,
    ACTIONS(104), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(102), 20,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
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
  [13098] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    ACTIONS(564), 1,
      anon_sym_DASH,
    ACTIONS(567), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      sym__natural_number,
    ACTIONS(576), 1,
      anon_sym__,
    ACTIONS(579), 1,
      anon_sym_DOT,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(236), 1,
      aux_sym__friendly_number,
    STATE(246), 1,
      sym__double_quote_string,
    STATE(275), 1,
      sym__call_parameter,
    STATE(277), 1,
      sym_literal,
    STATE(291), 1,
      sym_integer,
    STATE(176), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(270), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(561), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(470), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [13160] = 19,
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
      anon_sym__,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_function_call_repeat1,
    STATE(177), 1,
      sym_comment,
    STATE(236), 1,
      aux_sym__friendly_number,
    STATE(246), 1,
      sym__double_quote_string,
    STATE(275), 1,
      sym__call_parameter,
    STATE(277), 1,
      sym_literal,
    STATE(291), 1,
      sym_integer,
    STATE(270), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(406), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(498), 4,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
  [13224] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(587), 1,
      sym_keyword_from,
    ACTIONS(589), 1,
      sym_keyword_filter,
    ACTIONS(591), 1,
      sym_keyword_derive,
    ACTIONS(593), 1,
      sym_keyword_group,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(597), 1,
      sym_keyword_sort,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(601), 1,
      sym_keyword_join,
    ACTIONS(603), 1,
      sym_keyword_select,
    STATE(178), 1,
      sym_comment,
    STATE(180), 1,
      aux_sym_transforms_repeat1,
    STATE(390), 1,
      sym_transforms,
    ACTIONS(585), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(324), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [13280] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      sym_keyword_filter,
    ACTIONS(591), 1,
      sym_keyword_derive,
    ACTIONS(593), 1,
      sym_keyword_group,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(597), 1,
      sym_keyword_sort,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(601), 1,
      sym_keyword_join,
    ACTIONS(603), 1,
      sym_keyword_select,
    ACTIONS(607), 1,
      sym_keyword_from,
    STATE(179), 1,
      sym_comment,
    STATE(180), 1,
      aux_sym_transforms_repeat1,
    STATE(379), 1,
      sym_transforms,
    ACTIONS(605), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(324), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [13336] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      sym_keyword_filter,
    ACTIONS(591), 1,
      sym_keyword_derive,
    ACTIONS(593), 1,
      sym_keyword_group,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(597), 1,
      sym_keyword_sort,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(601), 1,
      sym_keyword_join,
    ACTIONS(603), 1,
      sym_keyword_select,
    ACTIONS(611), 1,
      sym_keyword_from,
    STATE(180), 1,
      sym_comment,
    STATE(183), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(609), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(324), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [13389] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(616), 1,
      anon_sym_DASH,
    ACTIONS(619), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      sym__natural_number,
    ACTIONS(628), 1,
      anon_sym__,
    ACTIONS(631), 1,
      anon_sym_DOT,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(268), 1,
      aux_sym__friendly_number,
    STATE(304), 1,
      sym__call_parameter,
    STATE(318), 1,
      sym_integer,
    STATE(320), 1,
      sym_literal,
    STATE(350), 1,
      sym__double_quote_string,
    STATE(181), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(343), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(613), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(468), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13448] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(432), 1,
      anon_sym_DASH,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    ACTIONS(436), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      sym__natural_number,
    ACTIONS(440), 1,
      anon_sym__,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      sym_identifier,
    STATE(181), 1,
      aux_sym_function_call_repeat1,
    STATE(182), 1,
      sym_comment,
    STATE(268), 1,
      aux_sym__friendly_number,
    STATE(304), 1,
      sym__call_parameter,
    STATE(318), 1,
      sym_integer,
    STATE(320), 1,
      sym_literal,
    STATE(350), 1,
      sym__double_quote_string,
    STATE(343), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(430), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(496), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13509] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(639), 1,
      sym_keyword_from,
    ACTIONS(641), 1,
      sym_keyword_filter,
    ACTIONS(644), 1,
      sym_keyword_derive,
    ACTIONS(647), 1,
      sym_keyword_group,
    ACTIONS(650), 1,
      sym_keyword_aggregate,
    ACTIONS(653), 1,
      sym_keyword_sort,
    ACTIONS(656), 1,
      sym_keyword_take,
    ACTIONS(659), 1,
      sym_keyword_join,
    ACTIONS(662), 1,
      sym_keyword_select,
    STATE(183), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(637), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(324), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [13560] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(184), 1,
      sym_comment,
    STATE(187), 1,
      aux_sym__friendly_number,
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
  [13594] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(185), 1,
      sym_comment,
    STATE(187), 1,
      aux_sym__friendly_number,
    ACTIONS(84), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(86), 13,
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
  [13628] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      anon_sym_COLON,
    STATE(186), 1,
      sym_comment,
    ACTIONS(536), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(538), 13,
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
  [13662] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(667), 1,
      sym__natural_number,
    ACTIONS(670), 1,
      anon_sym__,
    STATE(187), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(77), 6,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
    ACTIONS(79), 12,
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
  [13698] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(188), 1,
      sym_comment,
    ACTIONS(326), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(328), 13,
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
  [13729] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_or,
    ACTIONS(673), 1,
      anon_sym_EQ,
    STATE(189), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(500), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [13776] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(190), 1,
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
  [13807] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(191), 1,
      sym_comment,
    ACTIONS(536), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(538), 13,
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
  [13838] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(192), 1,
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
  [13869] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(193), 1,
      sym_comment,
    ACTIONS(334), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(534), 13,
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
  [13900] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(194), 1,
      sym_comment,
    ACTIONS(224), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(226), 13,
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
  [13931] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(195), 1,
      sym_comment,
    ACTIONS(162), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(164), 13,
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
  [13962] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(677), 1,
      anon_sym_DOT,
    STATE(196), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(675), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(224), 13,
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
  [13997] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(197), 1,
      sym_comment,
    ACTIONS(304), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(306), 13,
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
  [14028] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(198), 1,
      sym_comment,
    ACTIONS(102), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(104), 13,
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
  [14059] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(199), 1,
      sym_comment,
    ACTIONS(224), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(226), 13,
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
  [14090] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(200), 1,
      sym_comment,
    ACTIONS(192), 7,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(194), 13,
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
  [14121] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(681), 1,
      sym_keyword_from,
    STATE(201), 1,
      sym_comment,
    ACTIONS(679), 18,
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
  [14151] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(685), 1,
      sym_keyword_from,
    STATE(202), 1,
      sym_comment,
    ACTIONS(683), 18,
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
  [14181] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(689), 1,
      sym_keyword_from,
    STATE(203), 1,
      sym_comment,
    ACTIONS(687), 18,
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
    ACTIONS(502), 1,
      sym_keyword_from,
    STATE(204), 1,
      sym_comment,
    ACTIONS(500), 18,
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
    ACTIONS(693), 1,
      sym_keyword_from,
    STATE(205), 1,
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
  [14271] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(697), 1,
      sym_keyword_from,
    STATE(206), 1,
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
  [14301] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      sym_keyword_filter,
    ACTIONS(593), 1,
      sym_keyword_group,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    ACTIONS(699), 1,
      sym_keyword_derive,
    ACTIONS(701), 1,
      sym_keyword_sort,
    ACTIONS(703), 1,
      sym_keyword_join,
    ACTIONS(705), 1,
      sym_keyword_select,
    STATE(207), 1,
      sym_comment,
    STATE(219), 1,
      aux_sym_transforms_repeat1,
    STATE(379), 1,
      sym_transforms,
    STATE(324), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [14351] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(709), 1,
      sym_keyword_from,
    STATE(208), 1,
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
  [14381] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(713), 1,
      sym_keyword_from,
    STATE(209), 1,
      sym_comment,
    ACTIONS(711), 18,
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
  [14411] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(717), 1,
      sym_keyword_from,
    STATE(210), 1,
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
  [14441] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(721), 1,
      sym_keyword_from,
    STATE(211), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(719), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    ACTIONS(206), 12,
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
  [14475] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_or,
    ACTIONS(723), 1,
      anon_sym_EQ,
    STATE(212), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(500), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14521] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(213), 1,
      sym_comment,
    ACTIONS(725), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym_identifier,
    ACTIONS(727), 11,
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
  [14550] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(214), 1,
      sym_comment,
    ACTIONS(729), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym_identifier,
    ACTIONS(731), 11,
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
  [14579] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(733), 1,
      anon_sym_COLON,
    ACTIONS(735), 1,
      anon_sym_DOT,
    STATE(215), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(106), 14,
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
  [14612] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(216), 1,
      sym_comment,
    STATE(417), 1,
      aux_sym_derives_repeat1,
    ACTIONS(208), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 14,
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
  [14643] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(737), 1,
      anon_sym_COLON,
    ACTIONS(739), 1,
      anon_sym_DOT,
    STATE(217), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(138), 14,
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
  [14676] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(218), 1,
      sym_comment,
    STATE(420), 1,
      aux_sym_derives_repeat1,
    ACTIONS(302), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 14,
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
  [14707] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      sym_keyword_filter,
    ACTIONS(593), 1,
      sym_keyword_group,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    ACTIONS(699), 1,
      sym_keyword_derive,
    ACTIONS(701), 1,
      sym_keyword_sort,
    ACTIONS(703), 1,
      sym_keyword_join,
    ACTIONS(705), 1,
      sym_keyword_select,
    STATE(219), 1,
      sym_comment,
    STATE(221), 1,
      aux_sym_transforms_repeat1,
    STATE(324), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [14754] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(220), 1,
      sym_comment,
    ACTIONS(741), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym_identifier,
    ACTIONS(743), 11,
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
  [14783] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    ACTIONS(641), 1,
      sym_keyword_filter,
    ACTIONS(647), 1,
      sym_keyword_group,
    ACTIONS(650), 1,
      sym_keyword_aggregate,
    ACTIONS(656), 1,
      sym_keyword_take,
    ACTIONS(745), 1,
      sym_keyword_derive,
    ACTIONS(748), 1,
      sym_keyword_sort,
    ACTIONS(751), 1,
      sym_keyword_join,
    ACTIONS(754), 1,
      sym_keyword_select,
    STATE(221), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(324), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [14828] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      sym_comment,
    STATE(439), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(208), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 12,
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
  [14863] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym_comment,
    ACTIONS(302), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 14,
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
  [14891] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      sym_keyword_from,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    STATE(224), 1,
      sym_comment,
    STATE(322), 1,
      sym__self_join,
    STATE(325), 1,
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
  [14925] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(225), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 14,
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
  [14953] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      anon_sym_RBRACK,
    STATE(226), 1,
      sym_comment,
    STATE(410), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(208), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 12,
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
  [14987] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(771), 1,
      anon_sym_DOT,
    STATE(227), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(158), 14,
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
  [15017] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(775), 1,
      sym_keyword_from,
    STATE(228), 1,
      sym_comment,
    STATE(305), 1,
      sym_conditions,
    STATE(322), 1,
      sym__self_join,
    ACTIONS(773), 13,
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
  [15051] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(229), 1,
      sym_comment,
    ACTIONS(777), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym_identifier,
    ACTIONS(779), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [15081] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(230), 1,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(208), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 12,
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
  [15111] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_or,
    STATE(231), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(783), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15152] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(232), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 12,
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
  [15181] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(785), 1,
      sym__natural_number,
    ACTIONS(788), 1,
      anon_sym__,
    STATE(233), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
    ACTIONS(79), 8,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
  [15212] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(233), 1,
      aux_sym__friendly_number,
    STATE(234), 1,
      sym_comment,
    ACTIONS(84), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(86), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [15241] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(235), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(791), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(206), 12,
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
  [15270] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(233), 1,
      aux_sym__friendly_number,
    STATE(236), 1,
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
  [15299] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_or,
    STATE(237), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(793), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15340] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(795), 1,
      anon_sym_DOT,
    STATE(238), 1,
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
  [15369] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(677), 1,
      anon_sym_DOT,
    STATE(239), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(224), 13,
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
  [15398] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(797), 1,
      anon_sym_DOT,
    STATE(240), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 13,
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
  [15427] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(241), 1,
      sym_comment,
    ACTIONS(777), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym_identifier,
    ACTIONS(779), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [15454] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(799), 1,
      anon_sym_T,
    STATE(242), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 13,
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
  [15483] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(801), 1,
      anon_sym_COLON,
    STATE(243), 1,
      sym_comment,
    ACTIONS(536), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(538), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [15512] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(244), 1,
      sym_comment,
    ACTIONS(803), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym_identifier,
    ACTIONS(805), 9,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_AT,
  [15539] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(245), 1,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(192), 13,
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
  [15566] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(246), 1,
      sym_comment,
    ACTIONS(334), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(534), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [15592] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(247), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 13,
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
  [15618] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    STATE(248), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15654] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(249), 1,
      sym_comment,
    ACTIONS(192), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(194), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [15680] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(807), 1,
      anon_sym_COLON,
    STATE(250), 1,
      sym_comment,
    ACTIONS(538), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(536), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [15708] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      anon_sym_PIPE,
    STATE(251), 1,
      sym_comment,
    ACTIONS(809), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(813), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(817), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(811), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15742] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(252), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(809), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(813), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(288), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15772] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(253), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(809), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(288), 11,
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
  [15800] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(821), 1,
      anon_sym_DASH,
    ACTIONS(823), 1,
      anon_sym_DQUOTE,
    ACTIONS(825), 1,
      anon_sym_SQUOTE,
    ACTIONS(829), 1,
      anon_sym_DOT,
    STATE(254), 1,
      sym_comment,
    STATE(377), 1,
      aux_sym__friendly_number,
    STATE(407), 1,
      sym_integer,
    STATE(461), 1,
      sym__double_quote_string,
    STATE(462), 1,
      sym_literal,
    ACTIONS(827), 2,
      sym__natural_number,
      anon_sym__,
    STATE(455), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(819), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15844] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(831), 1,
      anon_sym_DASH_GT,
    STATE(255), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 11,
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
  [15872] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(833), 1,
      anon_sym_DASH_GT,
    STATE(256), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 11,
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
  [15900] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(837), 1,
      sym_keyword_from,
    STATE(257), 1,
      sym_comment,
    ACTIONS(835), 14,
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
  [15926] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_or,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15966] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(841), 1,
      sym__natural_number,
    ACTIONS(844), 1,
      anon_sym__,
    STATE(259), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(79), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_identifier,
    ACTIONS(77), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
  [15996] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      anon_sym_PIPE,
    STATE(260), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(809), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(813), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(288), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [16028] = 13,
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
    STATE(156), 1,
      sym__double_quote_string,
    STATE(159), 1,
      aux_sym__friendly_number,
    STATE(162), 1,
      sym_integer,
    STATE(169), 1,
      sym_literal,
    STATE(261), 1,
      sym_comment,
    ACTIONS(69), 2,
      sym__natural_number,
      anon_sym__,
    STATE(173), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(847), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [16072] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      anon_sym_PIPE,
    ACTIONS(849), 1,
      sym_keyword_and,
    ACTIONS(851), 1,
      sym_keyword_or,
    ACTIONS(853), 1,
      anon_sym_DOT_DOT,
    ACTIONS(855), 1,
      anon_sym_QMARK_QMARK,
    STATE(262), 1,
      sym_comment,
    ACTIONS(809), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(813), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(817), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(811), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16112] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      anon_sym_PIPE,
    ACTIONS(849), 1,
      sym_keyword_and,
    ACTIONS(855), 1,
      anon_sym_QMARK_QMARK,
    STATE(263), 1,
      sym_comment,
    ACTIONS(288), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(809), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(813), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(817), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(811), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16150] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_keyword_from,
    STATE(264), 1,
      sym_comment,
    ACTIONS(857), 14,
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
  [16176] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_keyword_from,
    STATE(265), 1,
      sym_comment,
    ACTIONS(861), 14,
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
  [16202] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      anon_sym_PIPE,
    ACTIONS(855), 1,
      anon_sym_QMARK_QMARK,
    STATE(266), 1,
      sym_comment,
    ACTIONS(809), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(813), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(817), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(811), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16238] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(259), 1,
      aux_sym__friendly_number,
    STATE(267), 1,
      sym_comment,
    ACTIONS(86), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(84), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [16266] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(259), 1,
      aux_sym__friendly_number,
    STATE(268), 1,
      sym_comment,
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
  [16294] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(865), 1,
      anon_sym_DASH,
    ACTIONS(867), 1,
      anon_sym_PLUS,
    ACTIONS(873), 1,
      anon_sym_PIPE,
    ACTIONS(877), 1,
      anon_sym_QMARK_QMARK,
    STATE(269), 1,
      sym_comment,
    ACTIONS(871), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(875), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
    ACTIONS(869), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16332] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(270), 1,
      sym_comment,
    ACTIONS(224), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(226), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [16358] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    STATE(271), 1,
      sym_comment,
    ACTIONS(288), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16396] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(879), 1,
      sym_keyword_and,
    ACTIONS(881), 1,
      sym_keyword_or,
    ACTIONS(883), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16436] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(865), 1,
      anon_sym_DASH,
    ACTIONS(867), 1,
      anon_sym_PLUS,
    ACTIONS(873), 1,
      anon_sym_PIPE,
    ACTIONS(877), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(885), 1,
      sym_keyword_and,
    STATE(273), 1,
      sym_comment,
    ACTIONS(288), 2,
      sym_keyword_or,
      anon_sym_DASH_GT,
    ACTIONS(871), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(875), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(869), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16476] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 12,
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
  [16504] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(275), 1,
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
  [16530] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(891), 1,
      sym_keyword_from,
    STATE(276), 1,
      sym_comment,
    ACTIONS(889), 14,
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
  [16556] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(277), 1,
      sym_comment,
    ACTIONS(536), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(538), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [16582] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(895), 1,
      sym_keyword_from,
    STATE(278), 1,
      sym_comment,
    ACTIONS(893), 14,
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
  [16608] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(279), 1,
      sym_comment,
    ACTIONS(162), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(164), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [16634] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(280), 1,
      sym_comment,
    ACTIONS(304), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(306), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [16660] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(281), 1,
      sym_comment,
    ACTIONS(326), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(328), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [16686] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(899), 1,
      sym_keyword_from,
    STATE(282), 1,
      sym_comment,
    ACTIONS(897), 14,
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
  [16712] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 12,
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
  [16740] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(284), 1,
      sym_comment,
    ACTIONS(102), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(104), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [16766] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(865), 1,
      anon_sym_DASH,
    ACTIONS(867), 1,
      anon_sym_PLUS,
    ACTIONS(873), 1,
      anon_sym_PIPE,
    STATE(285), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(871), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(288), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [16800] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(905), 1,
      sym_keyword_from,
    STATE(286), 1,
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
  [16826] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(865), 1,
      anon_sym_DASH,
    ACTIONS(867), 1,
      anon_sym_PLUS,
    STATE(287), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 11,
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
  [16856] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      sym_keyword_from,
    STATE(288), 1,
      sym_comment,
    ACTIONS(907), 14,
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
  [16882] = 4,
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
  [16908] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(865), 1,
      anon_sym_DASH,
    ACTIONS(867), 1,
      anon_sym_PLUS,
    STATE(290), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(871), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(288), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_EQ_EQ,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [16940] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(291), 1,
      sym_comment,
    ACTIONS(224), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
    ACTIONS(226), 9,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
  [16966] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(865), 1,
      anon_sym_DASH,
    ACTIONS(867), 1,
      anon_sym_PLUS,
    ACTIONS(873), 1,
      anon_sym_PIPE,
    STATE(292), 1,
      sym_comment,
    ACTIONS(871), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(875), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH_GT,
      anon_sym_QMARK_QMARK,
    ACTIONS(869), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [17002] = 13,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(156), 1,
      sym__double_quote_string,
    STATE(293), 1,
      sym_comment,
    STATE(494), 1,
      sym_literal,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(915), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17046] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(408), 1,
      anon_sym_DASH,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
    ACTIONS(418), 1,
      anon_sym_DOT,
    STATE(236), 1,
      aux_sym__friendly_number,
    STATE(246), 1,
      sym__double_quote_string,
    STATE(291), 1,
      sym_integer,
    STATE(294), 1,
      sym_comment,
    STATE(298), 1,
      sym_literal,
    ACTIONS(414), 2,
      sym__natural_number,
      anon_sym__,
    STATE(270), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(917), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17090] = 13,
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
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_integer,
    STATE(156), 1,
      sym__double_quote_string,
    STATE(295), 1,
      sym_comment,
    STATE(472), 1,
      sym_literal,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    STATE(45), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(915), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17134] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(184), 1,
      aux_sym__friendly_number,
    STATE(192), 1,
      sym_literal,
    STATE(193), 1,
      sym__double_quote_string,
    STATE(199), 1,
      sym_integer,
    STATE(296), 1,
      sym_comment,
    ACTIONS(122), 2,
      sym__natural_number,
      anon_sym__,
    STATE(194), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(919), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17178] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(923), 1,
      sym_keyword_from,
    STATE(297), 1,
      sym_comment,
    ACTIONS(921), 14,
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
  [17204] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(298), 1,
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
  [17230] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(879), 1,
      sym_keyword_and,
    ACTIONS(881), 1,
      sym_keyword_or,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [17270] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(432), 1,
      anon_sym_DASH,
    ACTIONS(434), 1,
      anon_sym_DQUOTE,
    ACTIONS(436), 1,
      anon_sym_SQUOTE,
    ACTIONS(442), 1,
      anon_sym_DOT,
    STATE(268), 1,
      aux_sym__friendly_number,
    STATE(300), 1,
      sym_comment,
    STATE(318), 1,
      sym_integer,
    STATE(332), 1,
      sym_literal,
    STATE(350), 1,
      sym__double_quote_string,
    ACTIONS(438), 2,
      sym__natural_number,
      anon_sym__,
    STATE(343), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(927), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17314] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(931), 1,
      sym_keyword_from,
    STATE(301), 1,
      sym_comment,
    ACTIONS(929), 14,
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
  [17340] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(206), 12,
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
  [17368] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_or,
    ACTIONS(723), 1,
      anon_sym_EQ,
    STATE(303), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [17408] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(304), 1,
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
  [17433] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(937), 1,
      sym_keyword_from,
    STATE(305), 1,
      sym_comment,
    ACTIONS(935), 13,
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
  [17458] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      sym_keyword_and,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_or,
    STATE(306), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [17495] = 13,
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
    ACTIONS(939), 1,
      ts_builtin_sym_end,
    STATE(307), 1,
      sym_comment,
    STATE(354), 1,
      aux_sym_program_repeat2,
    STATE(368), 1,
      aux_sym_program_repeat1,
    STATE(375), 1,
      sym_prql,
    STATE(179), 2,
      sym_from_text,
      sym_from,
    STATE(392), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [17538] = 4,
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
  [17563] = 4,
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
  [17588] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(951), 1,
      sym_keyword_from,
    STATE(310), 1,
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
  [17613] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(955), 1,
      sym_keyword_from,
    STATE(311), 1,
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
  [17638] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(959), 1,
      sym_keyword_from,
    STATE(312), 1,
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
  [17663] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(963), 1,
      sym_keyword_from,
    STATE(313), 1,
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
  [17688] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(967), 1,
      sym_keyword_from,
    STATE(314), 1,
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
  [17713] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(315), 1,
      sym_comment,
    ACTIONS(194), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(192), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17738] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(971), 1,
      sym_keyword_from,
    STATE(316), 1,
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
  [17763] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(975), 1,
      sym_keyword_from,
    STATE(317), 1,
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
  [17788] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(318), 1,
      sym_comment,
    ACTIONS(226), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(224), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17813] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(979), 1,
      sym_keyword_from,
    STATE(319), 1,
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
  [17838] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(320), 1,
      sym_comment,
    ACTIONS(538), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(536), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17863] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      sym_keyword_from,
    STATE(321), 1,
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
  [17888] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(987), 1,
      sym_keyword_from,
    STATE(322), 1,
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
  [17913] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(323), 1,
      sym_comment,
    ACTIONS(104), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(102), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [17938] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(991), 1,
      sym_keyword_from,
    STATE(324), 1,
      sym_comment,
    ACTIONS(989), 13,
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
  [17963] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(775), 1,
      sym_keyword_from,
    STATE(325), 1,
      sym_comment,
    ACTIONS(773), 13,
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
  [17988] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(995), 1,
      sym_keyword_from,
    STATE(326), 1,
      sym_comment,
    ACTIONS(993), 13,
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
  [18013] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(999), 1,
      sym_keyword_from,
    STATE(327), 1,
      sym_comment,
    ACTIONS(997), 13,
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
  [18038] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(328), 1,
      sym_comment,
    ACTIONS(328), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(326), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [18063] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(329), 1,
      sym_comment,
    ACTIONS(306), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(304), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [18088] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1003), 1,
      sym_keyword_from,
    STATE(330), 1,
      sym_comment,
    ACTIONS(1001), 13,
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
  [18113] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1007), 1,
      sym_keyword_from,
    STATE(331), 1,
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
  [18138] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(332), 1,
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
  [18163] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(333), 1,
      sym_comment,
    ACTIONS(164), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(162), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [18188] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1011), 1,
      sym_keyword_from,
    STATE(334), 1,
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
  [18213] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1015), 1,
      sym_keyword_from,
    STATE(335), 1,
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
  [18238] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(873), 1,
      anon_sym_PIPE,
    ACTIONS(877), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(885), 1,
      sym_keyword_and,
    ACTIONS(1017), 1,
      sym_keyword_or,
    STATE(336), 1,
      sym_comment,
    ACTIONS(867), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(871), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(875), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(869), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [18275] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1021), 1,
      sym_keyword_from,
    STATE(337), 1,
      sym_comment,
    ACTIONS(1019), 13,
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
  [18300] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1025), 1,
      sym_keyword_from,
    STATE(338), 1,
      sym_comment,
    ACTIONS(1023), 13,
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
  [18325] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1029), 1,
      sym_keyword_from,
    STATE(339), 1,
      sym_comment,
    ACTIONS(1027), 13,
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
  [18350] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1033), 1,
      sym_keyword_from,
    STATE(340), 1,
      sym_comment,
    ACTIONS(1031), 13,
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
  [18375] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    ACTIONS(392), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(879), 1,
      sym_keyword_and,
    ACTIONS(881), 1,
      sym_keyword_or,
    STATE(341), 1,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(382), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [18412] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1037), 1,
      sym_keyword_from,
    STATE(342), 1,
      sym_comment,
    ACTIONS(1035), 13,
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
  [18437] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(343), 1,
      sym_comment,
    ACTIONS(226), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(224), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [18462] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1041), 1,
      sym_keyword_from,
    STATE(344), 1,
      sym_comment,
    ACTIONS(1039), 13,
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
  [18487] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1045), 1,
      sym_keyword_from,
    STATE(345), 1,
      sym_comment,
    ACTIONS(1043), 13,
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
  [18512] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1049), 1,
      sym_keyword_from,
    STATE(346), 1,
      sym_comment,
    ACTIONS(1047), 13,
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
  [18537] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1053), 1,
      sym_keyword_from,
    STATE(347), 1,
      sym_comment,
    ACTIONS(1051), 13,
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
  [18562] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1057), 1,
      sym_keyword_from,
    STATE(348), 1,
      sym_comment,
    ACTIONS(1055), 13,
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
  [18587] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1061), 1,
      sym_keyword_from,
    STATE(349), 1,
      sym_comment,
    ACTIONS(1059), 13,
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
  [18612] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(350), 1,
      sym_comment,
    ACTIONS(534), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym_identifier,
    ACTIONS(334), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
  [18637] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      sym_keyword_from,
    STATE(351), 1,
      sym_comment,
    ACTIONS(500), 13,
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
  [18662] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1065), 1,
      sym_keyword_from,
    STATE(352), 1,
      sym_comment,
    ACTIONS(1063), 13,
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
  [18687] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(353), 1,
      sym_comment,
    STATE(372), 1,
      sym_target,
    ACTIONS(1067), 11,
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
  [18710] = 10,
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
    ACTIONS(1069), 1,
      ts_builtin_sym_end,
    STATE(354), 1,
      sym_comment,
    STATE(356), 1,
      aux_sym_program_repeat2,
    STATE(179), 2,
      sym_from_text,
      sym_from,
    STATE(392), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [18744] = 10,
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
    ACTIONS(939), 1,
      ts_builtin_sym_end,
    STATE(355), 1,
      sym_comment,
    STATE(356), 1,
      aux_sym_program_repeat2,
    STATE(179), 2,
      sym_from_text,
      sym_from,
    STATE(392), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [18778] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1071), 1,
      ts_builtin_sym_end,
    ACTIONS(1073), 1,
      sym_keyword_from,
    ACTIONS(1076), 1,
      sym_keyword_func,
    ACTIONS(1079), 1,
      sym_keyword_let,
    ACTIONS(1082), 1,
      sym_keyword_from_text,
    STATE(179), 2,
      sym_from_text,
      sym_from,
    STATE(356), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(392), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [18810] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1085), 1,
      sym_keyword_aggregate,
    ACTIONS(1088), 1,
      sym_keyword_sort,
    ACTIONS(1091), 1,
      sym_keyword_take,
    ACTIONS(1094), 1,
      sym_keyword_window,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
    STATE(357), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(380), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [18839] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(1099), 1,
      sym_keyword_sort,
    ACTIONS(1101), 1,
      sym_keyword_window,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_group_repeat2,
    STATE(358), 1,
      sym_comment,
    STATE(380), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [18870] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(1099), 1,
      sym_keyword_sort,
    ACTIONS(1101), 1,
      sym_keyword_window,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_group_repeat2,
    STATE(359), 1,
      sym_comment,
    STATE(380), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [18901] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(1099), 1,
      sym_keyword_sort,
    ACTIONS(1101), 1,
      sym_keyword_window,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_group_repeat2,
    STATE(360), 1,
      sym_comment,
    STATE(380), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [18932] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(1099), 1,
      sym_keyword_sort,
    ACTIONS(1101), 1,
      sym_keyword_window,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_group_repeat2,
    STATE(361), 1,
      sym_comment,
    STATE(380), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [18963] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(1099), 1,
      sym_keyword_sort,
    ACTIONS(1101), 1,
      sym_keyword_window,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_group_repeat2,
    STATE(362), 1,
      sym_comment,
    STATE(380), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [18994] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(1099), 1,
      sym_keyword_sort,
    ACTIONS(1101), 1,
      sym_keyword_window,
    STATE(362), 1,
      aux_sym_group_repeat2,
    STATE(363), 1,
      sym_comment,
    STATE(380), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19022] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(1099), 1,
      sym_keyword_sort,
    ACTIONS(1101), 1,
      sym_keyword_window,
    STATE(358), 1,
      aux_sym_group_repeat2,
    STATE(364), 1,
      sym_comment,
    STATE(380), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19050] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(1099), 1,
      sym_keyword_sort,
    ACTIONS(1101), 1,
      sym_keyword_window,
    STATE(361), 1,
      aux_sym_group_repeat2,
    STATE(365), 1,
      sym_comment,
    STATE(380), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19078] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(1099), 1,
      sym_keyword_sort,
    ACTIONS(1101), 1,
      sym_keyword_window,
    STATE(360), 1,
      aux_sym_group_repeat2,
    STATE(366), 1,
      sym_comment,
    STATE(380), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19106] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      sym_keyword_aggregate,
    ACTIONS(599), 1,
      sym_keyword_take,
    ACTIONS(1099), 1,
      sym_keyword_sort,
    ACTIONS(1101), 1,
      sym_keyword_window,
    STATE(359), 1,
      aux_sym_group_repeat2,
    STATE(367), 1,
      sym_comment,
    STATE(380), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19134] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1115), 1,
      sym_keyword_from,
    ACTIONS(1117), 1,
      sym_keyword_prql,
    STATE(375), 1,
      sym_prql,
    STATE(368), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1113), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [19157] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1122), 1,
      sym_keyword_from,
    STATE(369), 1,
      sym_comment,
    ACTIONS(1120), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [19174] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
    STATE(370), 1,
      sym_comment,
    STATE(374), 1,
      aux_sym_window_definitions_repeat1,
    STATE(403), 1,
      sym__window_definition,
    ACTIONS(1124), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [19195] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1130), 1,
      sym_keyword_from,
    STATE(371), 1,
      sym_comment,
    ACTIONS(1128), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [19212] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      sym_keyword_from,
    STATE(372), 1,
      sym_comment,
    ACTIONS(1132), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [19229] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(1136), 1,
      sym__natural_number,
    ACTIONS(1139), 1,
      anon_sym__,
    ACTIONS(77), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
    STATE(373), 2,
      aux_sym__friendly_number,
      sym_comment,
  [19250] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym__window_definition,
    STATE(374), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1142), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [19269] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1149), 1,
      sym_keyword_from,
    STATE(375), 1,
      sym_comment,
    ACTIONS(1147), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [19286] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(370), 1,
      aux_sym_window_definitions_repeat1,
    STATE(376), 1,
      sym_comment,
    STATE(403), 1,
      sym__window_definition,
    STATE(521), 1,
      sym_window_definitions,
    ACTIONS(1124), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [19307] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym__natural_number,
    ACTIONS(1151), 1,
      anon_sym__,
    STATE(373), 1,
      aux_sym__friendly_number,
    STATE(377), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [19330] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(827), 1,
      sym__natural_number,
    ACTIONS(1151), 1,
      anon_sym__,
    STATE(373), 1,
      aux_sym__friendly_number,
    STATE(378), 1,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_DASH_GT,
      anon_sym_DOT,
  [19353] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1155), 1,
      sym_keyword_from,
    STATE(379), 1,
      sym_comment,
    ACTIONS(1153), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [19370] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(380), 1,
      sym_comment,
    ACTIONS(1157), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [19384] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1159), 1,
      anon_sym_DASH,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(32), 1,
      sym_integer,
    STATE(381), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [19404] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    STATE(18), 1,
      sym_integer,
    STATE(163), 1,
      aux_sym__friendly_number,
    STATE(382), 1,
      sym_comment,
    ACTIONS(398), 2,
      sym__natural_number,
      anon_sym__,
  [19424] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(383), 1,
      sym_comment,
    ACTIONS(1163), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [19438] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1159), 1,
      anon_sym_DASH,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(28), 1,
      sym_integer,
    STATE(384), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [19458] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    STATE(28), 1,
      sym_integer,
    STATE(163), 1,
      aux_sym__friendly_number,
    STATE(385), 1,
      sym_comment,
    ACTIONS(398), 2,
      sym__natural_number,
      anon_sym__,
  [19478] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(1165), 1,
      sym_keyword_from,
    STATE(386), 1,
      sym_comment,
    STATE(546), 1,
      sym_pipeline,
    STATE(207), 2,
      sym_from_text,
      sym_from,
  [19498] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(387), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(102), 3,
      anon_sym_DASH_GT,
      sym__natural_number,
      anon_sym_DOT,
  [19514] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1169), 1,
      sym_keyword_from,
    STATE(388), 1,
      sym_comment,
    ACTIONS(1167), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [19530] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1161), 1,
      anon_sym_DASH,
    STATE(32), 1,
      sym_integer,
    STATE(163), 1,
      aux_sym__friendly_number,
    STATE(389), 1,
      sym_comment,
    ACTIONS(398), 2,
      sym__natural_number,
      anon_sym__,
  [19550] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1173), 1,
      sym_keyword_from,
    STATE(390), 1,
      sym_comment,
    ACTIONS(1171), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [19566] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1159), 1,
      anon_sym_DASH,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(18), 1,
      sym_integer,
    STATE(391), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [19586] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      sym_keyword_from,
    STATE(392), 1,
      sym_comment,
    ACTIONS(1175), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [19602] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1179), 1,
      aux_sym__date_token1,
    ACTIONS(1181), 1,
      aux_sym__time_token1,
    STATE(56), 1,
      sym__time,
    STATE(57), 1,
      sym__date,
    STATE(393), 1,
      sym_comment,
  [19621] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1179), 1,
      aux_sym__date_token1,
    ACTIONS(1183), 1,
      aux_sym__time_token1,
    STATE(56), 1,
      sym__time,
    STATE(242), 1,
      sym__date,
    STATE(394), 1,
      sym_comment,
  [19640] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1185), 1,
      anon_sym_DASH_GT,
    ACTIONS(1187), 1,
      sym_identifier,
    STATE(395), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_function_definition_repeat1,
    STATE(453), 1,
      sym_parameter,
  [19659] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1189), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(396), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [19676] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1191), 1,
      anon_sym_DOT,
    STATE(378), 1,
      aux_sym__friendly_number,
    STATE(397), 1,
      sym_comment,
    ACTIONS(827), 2,
      sym__natural_number,
      anon_sym__,
  [19693] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1193), 1,
      anon_sym_DOT,
    STATE(160), 1,
      aux_sym__friendly_number,
    STATE(398), 1,
      sym_comment,
    ACTIONS(69), 2,
      sym__natural_number,
      anon_sym__,
  [19710] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(399), 1,
      sym_comment,
    ACTIONS(1195), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [19723] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1197), 1,
      anon_sym_DOT,
    STATE(234), 1,
      aux_sym__friendly_number,
    STATE(400), 1,
      sym_comment,
    ACTIONS(414), 2,
      sym__natural_number,
      anon_sym__,
  [19740] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1199), 1,
      anon_sym_DOT,
    STATE(267), 1,
      aux_sym__friendly_number,
    STATE(401), 1,
      sym_comment,
    ACTIONS(438), 2,
      sym__natural_number,
      anon_sym__,
  [19757] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1201), 1,
      anon_sym_DOT,
    STATE(185), 1,
      aux_sym__friendly_number,
    STATE(402), 1,
      sym_comment,
    ACTIONS(122), 2,
      sym__natural_number,
      anon_sym__,
  [19774] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(403), 1,
      sym_comment,
    ACTIONS(1203), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [19787] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1205), 1,
      anon_sym_DASH_GT,
    ACTIONS(1207), 1,
      sym_identifier,
    STATE(453), 1,
      sym_parameter,
    STATE(404), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [19804] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1189), 1,
      anon_sym_DOT,
    STATE(171), 1,
      aux_sym__friendly_number,
    STATE(405), 1,
      sym_comment,
    ACTIONS(398), 2,
      sym__natural_number,
      anon_sym__,
  [19821] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(406), 1,
      sym_comment,
    ACTIONS(1210), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [19834] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1212), 1,
      anon_sym_DOT,
    STATE(407), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [19848] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    ACTIONS(1214), 1,
      anon_sym_COMMA,
    STATE(408), 1,
      sym_comment,
    STATE(428), 1,
      aux_sym_switch_repeat2,
  [19864] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1218), 1,
      anon_sym_RBRACK,
    STATE(409), 1,
      sym_comment,
    STATE(430), 1,
      aux_sym_group_repeat1,
  [19880] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    STATE(410), 1,
      sym_comment,
    STATE(432), 1,
      aux_sym_conditions_repeat1,
  [19896] = 5,
    ACTIONS(1222), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1224), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    STATE(411), 1,
      sym_comment,
    STATE(437), 1,
      aux_sym__inner_triple_quotes,
  [19912] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(1228), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_from_text,
    STATE(412), 1,
      sym_comment,
  [19928] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    ACTIONS(1233), 1,
      anon_sym_RBRACK,
    STATE(413), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [19942] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1235), 1,
      anon_sym_COMMA,
    ACTIONS(1237), 1,
      anon_sym_RBRACK,
    STATE(414), 1,
      sym_comment,
    STATE(427), 1,
      aux_sym_group_repeat1,
  [19958] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(171), 1,
      aux_sym__friendly_number,
    STATE(415), 1,
      sym_comment,
    ACTIONS(398), 2,
      sym__natural_number,
      anon_sym__,
  [19972] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(416), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [19986] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    ACTIONS(1239), 1,
      anon_sym_COMMA,
    STATE(417), 1,
      sym_comment,
    STATE(426), 1,
      aux_sym_derives_repeat1,
  [20002] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1241), 1,
      sym__natural_number,
    STATE(418), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20016] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    ACTIONS(1245), 1,
      anon_sym_RBRACK,
    STATE(417), 1,
      aux_sym_derives_repeat1,
    STATE(419), 1,
      sym_comment,
  [20032] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1247), 1,
      anon_sym_COMMA,
    ACTIONS(1249), 1,
      anon_sym_RBRACK,
    STATE(420), 1,
      sym_comment,
    STATE(426), 1,
      aux_sym_derives_repeat1,
  [20048] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1251), 1,
      sym_keyword_format,
    ACTIONS(1253), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(311), 1,
      sym__triple_quote_string,
    STATE(421), 1,
      sym_comment,
  [20064] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RBRACK,
    STATE(422), 1,
      sym_comment,
    STATE(439), 1,
      aux_sym_aggregate_repeat1,
  [20080] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1255), 1,
      anon_sym_COMMA,
    ACTIONS(1257), 1,
      anon_sym_RBRACK,
    STATE(423), 1,
      sym_comment,
    STATE(436), 1,
      aux_sym_sorts_repeat1,
  [20096] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(781), 1,
      anon_sym_RBRACK,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    STATE(424), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [20110] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    STATE(425), 1,
      sym_comment,
    STATE(431), 1,
      aux_sym_sorts_repeat1,
  [20126] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1264), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RBRACK,
    STATE(426), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [20140] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    ACTIONS(1269), 1,
      anon_sym_COMMA,
    STATE(413), 1,
      aux_sym_group_repeat1,
    STATE(427), 1,
      sym_comment,
  [20156] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    ACTIONS(1271), 1,
      anon_sym_COMMA,
    STATE(428), 2,
      sym_comment,
      aux_sym_switch_repeat2,
  [20170] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1274), 1,
      anon_sym_COLON,
    STATE(429), 1,
      sym_comment,
    ACTIONS(1276), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20184] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    ACTIONS(1278), 1,
      anon_sym_COMMA,
    STATE(413), 1,
      aux_sym_group_repeat1,
    STATE(430), 1,
      sym_comment,
  [20200] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1280), 1,
      anon_sym_COMMA,
    ACTIONS(1283), 1,
      anon_sym_RBRACK,
    STATE(431), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [20214] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    STATE(432), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [20228] = 5,
    ACTIONS(1222), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1288), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(433), 1,
      sym_comment,
    STATE(437), 1,
      aux_sym__inner_triple_quotes,
  [20244] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1187), 1,
      sym_identifier,
    STATE(395), 1,
      aux_sym_function_definition_repeat1,
    STATE(434), 1,
      sym_comment,
    STATE(453), 1,
      sym_parameter,
  [20260] = 5,
    ACTIONS(1222), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1290), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(435), 1,
      sym_comment,
    STATE(437), 1,
      aux_sym__inner_triple_quotes,
  [20276] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    ACTIONS(1292), 1,
      anon_sym_COMMA,
    STATE(431), 1,
      aux_sym_sorts_repeat1,
    STATE(436), 1,
      sym_comment,
  [20292] = 4,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1294), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1297), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(437), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [20306] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    ACTIONS(1292), 1,
      anon_sym_COMMA,
    STATE(425), 1,
      aux_sym_sorts_repeat1,
    STATE(438), 1,
      sym_comment,
  [20322] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    STATE(424), 1,
      aux_sym_aggregate_repeat1,
    STATE(439), 1,
      sym_comment,
  [20338] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(440), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20349] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(441), 1,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [20360] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1301), 1,
      sym_keyword_derive,
    STATE(442), 1,
      sym_comment,
    STATE(492), 1,
      sym_derives,
  [20373] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    STATE(443), 1,
      sym_comment,
    ACTIONS(1303), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [20384] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1305), 1,
      aux_sym__time_token1,
    STATE(10), 1,
      sym__time,
    STATE(444), 1,
      sym_comment,
  [20397] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(445), 1,
      sym_comment,
    ACTIONS(1267), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [20408] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(446), 1,
      sym_comment,
    ACTIONS(1283), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [20419] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1253), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(309), 1,
      sym__triple_quote_string,
    STATE(447), 1,
      sym_comment,
  [20432] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(448), 1,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20443] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(449), 1,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20454] = 4,
    ACTIONS(1222), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    STATE(435), 1,
      aux_sym__inner_triple_quotes,
    STATE(450), 1,
      sym_comment,
  [20467] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(451), 1,
      sym_comment,
    ACTIONS(192), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20478] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(369), 1,
      sym__double_quote_string,
    STATE(452), 1,
      sym_comment,
  [20491] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(453), 1,
      sym_comment,
    ACTIONS(1307), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20502] = 4,
    ACTIONS(1222), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    STATE(411), 1,
      aux_sym__inner_triple_quotes,
    STATE(454), 1,
      sym_comment,
  [20515] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(455), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20526] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(456), 1,
      sym_comment,
    ACTIONS(1233), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [20537] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(457), 1,
      sym_comment,
    ACTIONS(1309), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [20548] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(458), 1,
      sym_comment,
    ACTIONS(1311), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [20559] = 4,
    ACTIONS(1222), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    STATE(433), 1,
      aux_sym__inner_triple_quotes,
    STATE(459), 1,
      sym_comment,
  [20572] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1313), 1,
      sym_keyword_version,
    ACTIONS(1315), 1,
      sym_keyword_target,
    STATE(460), 1,
      sym_comment,
  [20585] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(461), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20596] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(462), 1,
      sym_comment,
    ACTIONS(1317), 2,
      anon_sym_DASH_GT,
      sym_identifier,
  [20607] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1319), 1,
      aux_sym__time_token1,
    STATE(10), 1,
      sym__time,
    STATE(463), 1,
      sym_comment,
  [20620] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1321), 1,
      anon_sym_DQUOTE,
    STATE(464), 1,
      sym_comment,
  [20630] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1323), 1,
      aux_sym__date_token2,
    STATE(465), 1,
      sym_comment,
  [20640] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(759), 1,
      anon_sym_RBRACK,
    STATE(466), 1,
      sym_comment,
  [20650] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      anon_sym_RBRACK,
    STATE(467), 1,
      sym_comment,
  [20660] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1325), 1,
      aux_sym_comment_token1,
    STATE(468), 1,
      sym_comment,
  [20670] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1327), 1,
      anon_sym_LPAREN,
    STATE(469), 1,
      sym_comment,
  [20680] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1329), 1,
      anon_sym_DOT,
    STATE(470), 1,
      sym_comment,
  [20690] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1237), 1,
      anon_sym_RBRACK,
    STATE(471), 1,
      sym_comment,
  [20700] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1331), 1,
      anon_sym_COMMA,
    STATE(472), 1,
      sym_comment,
  [20710] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1333), 1,
      sym__natural_number,
    STATE(473), 1,
      sym_comment,
  [20720] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1335), 1,
      anon_sym_EQ,
    STATE(474), 1,
      sym_comment,
  [20730] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1337), 1,
      sym__natural_number,
    STATE(475), 1,
      sym_comment,
  [20740] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1339), 1,
      anon_sym_COLON,
    STATE(476), 1,
      sym_comment,
  [20750] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1341), 1,
      anon_sym_SQUOTE,
    STATE(477), 1,
      sym_comment,
  [20760] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1343), 1,
      anon_sym_COLON,
    STATE(478), 1,
      sym_comment,
  [20770] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1345), 1,
      anon_sym_COLON,
    STATE(479), 1,
      sym_comment,
  [20780] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1218), 1,
      anon_sym_RBRACK,
    STATE(480), 1,
      sym_comment,
  [20790] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1347), 1,
      sym__natural_number,
    STATE(481), 1,
      sym_comment,
  [20800] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1349), 1,
      aux_sym__literal_string_token1,
    STATE(482), 1,
      sym_comment,
  [20810] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(779), 1,
      aux_sym__date_token2,
    STATE(483), 1,
      sym_comment,
  [20820] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1351), 1,
      aux_sym__double_quote_string_token1,
    STATE(484), 1,
      sym_comment,
  [20830] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1353), 1,
      anon_sym_LBRACK,
    STATE(485), 1,
      sym_comment,
  [20840] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1355), 1,
      aux_sym__double_quote_string_token1,
    STATE(486), 1,
      sym_comment,
  [20850] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1357), 1,
      aux_sym__date_token2,
    STATE(487), 1,
      sym_comment,
  [20860] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1359), 1,
      anon_sym_DQUOTE,
    STATE(488), 1,
      sym_comment,
  [20870] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
    STATE(489), 1,
      sym_comment,
  [20880] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1363), 1,
      anon_sym_DASH,
    STATE(490), 1,
      sym_comment,
  [20890] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(166), 1,
      sym__natural_number,
    STATE(491), 1,
      sym_comment,
  [20900] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    STATE(492), 1,
      sym_comment,
  [20910] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1367), 1,
      anon_sym_DQUOTE,
    STATE(493), 1,
      sym_comment,
  [20920] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    STATE(494), 1,
      sym_comment,
  [20930] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1371), 1,
      aux_sym__date_token2,
    STATE(495), 1,
      sym_comment,
  [20940] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1373), 1,
      anon_sym_LBRACK,
    STATE(496), 1,
      sym_comment,
  [20950] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1375), 1,
      anon_sym_DQUOTE,
    STATE(497), 1,
      sym_comment,
  [20960] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1377), 1,
      sym__natural_number,
    STATE(498), 1,
      sym_comment,
  [20970] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1241), 1,
      sym__natural_number,
    STATE(499), 1,
      sym_comment,
  [20980] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1379), 1,
      anon_sym_DQUOTE,
    STATE(500), 1,
      sym_comment,
  [20990] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1381), 1,
      anon_sym_SQUOTE,
    STATE(501), 1,
      sym_comment,
  [21000] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1383), 1,
      aux_sym__double_quote_string_token1,
    STATE(502), 1,
      sym_comment,
  [21010] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1385), 1,
      anon_sym_SQUOTE,
    STATE(503), 1,
      sym_comment,
  [21020] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1387), 1,
      anon_sym_DASH,
    STATE(504), 1,
      sym_comment,
  [21030] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1389), 1,
      sym__natural_number,
    STATE(505), 1,
      sym_comment,
  [21040] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1391), 1,
      sym__natural_number,
    STATE(506), 1,
      sym_comment,
  [21050] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1393), 1,
      anon_sym_DQUOTE,
    STATE(507), 1,
      sym_comment,
  [21060] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1395), 1,
      anon_sym_SQUOTE,
    STATE(508), 1,
      sym_comment,
  [21070] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1397), 1,
      sym_identifier,
    STATE(509), 1,
      sym_comment,
  [21080] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1399), 1,
      anon_sym_LPAREN,
    STATE(510), 1,
      sym_comment,
  [21090] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1401), 1,
      anon_sym_RBRACK,
    STATE(511), 1,
      sym_comment,
  [21100] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1403), 1,
      sym__natural_number,
    STATE(512), 1,
      sym_comment,
  [21110] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1405), 1,
      sym__natural_number,
    STATE(513), 1,
      sym_comment,
  [21120] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1407), 1,
      anon_sym_DQUOTE,
    STATE(514), 1,
      sym_comment,
  [21130] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1409), 1,
      anon_sym_SQUOTE,
    STATE(515), 1,
      sym_comment,
  [21140] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1411), 1,
      anon_sym_LPAREN,
    STATE(516), 1,
      sym_comment,
  [21150] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1413), 1,
      sym__natural_number,
    STATE(517), 1,
      sym_comment,
  [21160] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1415), 1,
      sym__natural_number,
    STATE(518), 1,
      sym_comment,
  [21170] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1417), 1,
      anon_sym_DQUOTE,
    STATE(519), 1,
      sym_comment,
  [21180] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1419), 1,
      anon_sym_SQUOTE,
    STATE(520), 1,
      sym_comment,
  [21190] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1421), 1,
      anon_sym_LPAREN,
    STATE(521), 1,
      sym_comment,
  [21200] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1423), 1,
      anon_sym_DQUOTE,
    STATE(522), 1,
      sym_comment,
  [21210] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1425), 1,
      aux_sym__double_quote_string_token1,
    STATE(523), 1,
      sym_comment,
  [21220] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1427), 1,
      aux_sym__literal_string_token1,
    STATE(524), 1,
      sym_comment,
  [21230] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1429), 1,
      anon_sym_COLON,
    STATE(525), 1,
      sym_comment,
  [21240] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1431), 1,
      anon_sym_LPAREN,
    STATE(526), 1,
      sym_comment,
  [21250] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1245), 1,
      anon_sym_RBRACK,
    STATE(527), 1,
      sym_comment,
  [21260] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(528), 1,
      sym_comment,
  [21270] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1433), 1,
      anon_sym_COLON,
    STATE(529), 1,
      sym_comment,
  [21280] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1435), 1,
      aux_sym__date_token2,
    STATE(530), 1,
      sym_comment,
  [21290] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1437), 1,
      aux_sym__date_token2,
    STATE(531), 1,
      sym_comment,
  [21300] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1439), 1,
      aux_sym__date_token2,
    STATE(532), 1,
      sym_comment,
  [21310] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1441), 1,
      aux_sym__double_quote_string_token1,
    STATE(533), 1,
      sym_comment,
  [21320] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1443), 1,
      aux_sym__literal_string_token1,
    STATE(534), 1,
      sym_comment,
  [21330] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1445), 1,
      ts_builtin_sym_end,
    STATE(535), 1,
      sym_comment,
  [21340] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(769), 1,
      anon_sym_RBRACK,
    STATE(536), 1,
      sym_comment,
  [21350] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1447), 1,
      aux_sym__double_quote_string_token1,
    STATE(537), 1,
      sym_comment,
  [21360] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1449), 1,
      aux_sym__literal_string_token1,
    STATE(538), 1,
      sym_comment,
  [21370] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1451), 1,
      aux_sym__date_token2,
    STATE(539), 1,
      sym_comment,
  [21380] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1453), 1,
      aux_sym__double_quote_string_token1,
    STATE(540), 1,
      sym_comment,
  [21390] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1455), 1,
      aux_sym__literal_string_token1,
    STATE(541), 1,
      sym_comment,
  [21400] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1457), 1,
      aux_sym__double_quote_string_token1,
    STATE(542), 1,
      sym_comment,
  [21410] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1459), 1,
      aux_sym__literal_string_token1,
    STATE(543), 1,
      sym_comment,
  [21420] = 3,
    ACTIONS(1226), 1,
      anon_sym_POUND,
    ACTIONS(1461), 1,
      aux_sym__double_quote_string_token1,
    STATE(544), 1,
      sym_comment,
  [21430] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1463), 1,
      anon_sym_LPAREN,
    STATE(545), 1,
      sym_comment,
  [21440] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1465), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      sym_comment,
  [21450] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(547), 1,
      sym_comment,
  [21460] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1469), 1,
      sym_identifier,
    STATE(548), 1,
      sym_comment,
  [21470] = 1,
    ACTIONS(1471), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 113,
  [SMALL_STATE(4)] = 223,
  [SMALL_STATE(5)] = 333,
  [SMALL_STATE(6)] = 440,
  [SMALL_STATE(7)] = 526,
  [SMALL_STATE(8)] = 582,
  [SMALL_STATE(9)] = 640,
  [SMALL_STATE(10)] = 698,
  [SMALL_STATE(11)] = 761,
  [SMALL_STATE(12)] = 814,
  [SMALL_STATE(13)] = 870,
  [SMALL_STATE(14)] = 952,
  [SMALL_STATE(15)] = 1060,
  [SMALL_STATE(16)] = 1116,
  [SMALL_STATE(17)] = 1223,
  [SMALL_STATE(18)] = 1322,
  [SMALL_STATE(19)] = 1373,
  [SMALL_STATE(20)] = 1426,
  [SMALL_STATE(21)] = 1531,
  [SMALL_STATE(22)] = 1630,
  [SMALL_STATE(23)] = 1683,
  [SMALL_STATE(24)] = 1782,
  [SMALL_STATE(25)] = 1833,
  [SMALL_STATE(26)] = 1932,
  [SMALL_STATE(27)] = 2037,
  [SMALL_STATE(28)] = 2142,
  [SMALL_STATE(29)] = 2193,
  [SMALL_STATE(30)] = 2298,
  [SMALL_STATE(31)] = 2403,
  [SMALL_STATE(32)] = 2508,
  [SMALL_STATE(33)] = 2559,
  [SMALL_STATE(34)] = 2610,
  [SMALL_STATE(35)] = 2660,
  [SMALL_STATE(36)] = 2762,
  [SMALL_STATE(37)] = 2866,
  [SMALL_STATE(38)] = 2970,
  [SMALL_STATE(39)] = 3020,
  [SMALL_STATE(40)] = 3070,
  [SMALL_STATE(41)] = 3172,
  [SMALL_STATE(42)] = 3222,
  [SMALL_STATE(43)] = 3272,
  [SMALL_STATE(44)] = 3324,
  [SMALL_STATE(45)] = 3426,
  [SMALL_STATE(46)] = 3476,
  [SMALL_STATE(47)] = 3580,
  [SMALL_STATE(48)] = 3630,
  [SMALL_STATE(49)] = 3730,
  [SMALL_STATE(50)] = 3780,
  [SMALL_STATE(51)] = 3830,
  [SMALL_STATE(52)] = 3932,
  [SMALL_STATE(53)] = 3982,
  [SMALL_STATE(54)] = 4032,
  [SMALL_STATE(55)] = 4134,
  [SMALL_STATE(56)] = 4238,
  [SMALL_STATE(57)] = 4288,
  [SMALL_STATE(58)] = 4340,
  [SMALL_STATE(59)] = 4390,
  [SMALL_STATE(60)] = 4440,
  [SMALL_STATE(61)] = 4490,
  [SMALL_STATE(62)] = 4540,
  [SMALL_STATE(63)] = 4594,
  [SMALL_STATE(64)] = 4644,
  [SMALL_STATE(65)] = 4694,
  [SMALL_STATE(66)] = 4746,
  [SMALL_STATE(67)] = 4848,
  [SMALL_STATE(68)] = 4947,
  [SMALL_STATE(69)] = 5046,
  [SMALL_STATE(70)] = 5147,
  [SMALL_STATE(71)] = 5246,
  [SMALL_STATE(72)] = 5347,
  [SMALL_STATE(73)] = 5448,
  [SMALL_STATE(74)] = 5549,
  [SMALL_STATE(75)] = 5648,
  [SMALL_STATE(76)] = 5749,
  [SMALL_STATE(77)] = 5848,
  [SMALL_STATE(78)] = 5949,
  [SMALL_STATE(79)] = 6048,
  [SMALL_STATE(80)] = 6145,
  [SMALL_STATE(81)] = 6246,
  [SMALL_STATE(82)] = 6347,
  [SMALL_STATE(83)] = 6443,
  [SMALL_STATE(84)] = 6539,
  [SMALL_STATE(85)] = 6631,
  [SMALL_STATE(86)] = 6727,
  [SMALL_STATE(87)] = 6823,
  [SMALL_STATE(88)] = 6921,
  [SMALL_STATE(89)] = 7017,
  [SMALL_STATE(90)] = 7113,
  [SMALL_STATE(91)] = 7167,
  [SMALL_STATE(92)] = 7263,
  [SMALL_STATE(93)] = 7359,
  [SMALL_STATE(94)] = 7409,
  [SMALL_STATE(95)] = 7471,
  [SMALL_STATE(96)] = 7531,
  [SMALL_STATE(97)] = 7583,
  [SMALL_STATE(98)] = 7681,
  [SMALL_STATE(99)] = 7777,
  [SMALL_STATE(100)] = 7835,
  [SMALL_STATE(101)] = 7931,
  [SMALL_STATE(102)] = 8027,
  [SMALL_STATE(103)] = 8118,
  [SMALL_STATE(104)] = 8195,
  [SMALL_STATE(105)] = 8286,
  [SMALL_STATE(106)] = 8379,
  [SMALL_STATE(107)] = 8470,
  [SMALL_STATE(108)] = 8563,
  [SMALL_STATE(109)] = 8651,
  [SMALL_STATE(110)] = 8739,
  [SMALL_STATE(111)] = 8827,
  [SMALL_STATE(112)] = 8915,
  [SMALL_STATE(113)] = 9003,
  [SMALL_STATE(114)] = 9091,
  [SMALL_STATE(115)] = 9179,
  [SMALL_STATE(116)] = 9269,
  [SMALL_STATE(117)] = 9357,
  [SMALL_STATE(118)] = 9445,
  [SMALL_STATE(119)] = 9533,
  [SMALL_STATE(120)] = 9621,
  [SMALL_STATE(121)] = 9709,
  [SMALL_STATE(122)] = 9797,
  [SMALL_STATE(123)] = 9885,
  [SMALL_STATE(124)] = 9975,
  [SMALL_STATE(125)] = 10063,
  [SMALL_STATE(126)] = 10151,
  [SMALL_STATE(127)] = 10241,
  [SMALL_STATE(128)] = 10329,
  [SMALL_STATE(129)] = 10417,
  [SMALL_STATE(130)] = 10505,
  [SMALL_STATE(131)] = 10593,
  [SMALL_STATE(132)] = 10681,
  [SMALL_STATE(133)] = 10769,
  [SMALL_STATE(134)] = 10857,
  [SMALL_STATE(135)] = 10947,
  [SMALL_STATE(136)] = 11035,
  [SMALL_STATE(137)] = 11123,
  [SMALL_STATE(138)] = 11213,
  [SMALL_STATE(139)] = 11301,
  [SMALL_STATE(140)] = 11377,
  [SMALL_STATE(141)] = 11465,
  [SMALL_STATE(142)] = 11517,
  [SMALL_STATE(143)] = 11607,
  [SMALL_STATE(144)] = 11656,
  [SMALL_STATE(145)] = 11716,
  [SMALL_STATE(146)] = 11776,
  [SMALL_STATE(147)] = 11824,
  [SMALL_STATE(148)] = 11884,
  [SMALL_STATE(149)] = 11955,
  [SMALL_STATE(150)] = 12028,
  [SMALL_STATE(151)] = 12068,
  [SMALL_STATE(152)] = 12108,
  [SMALL_STATE(153)] = 12166,
  [SMALL_STATE(154)] = 12221,
  [SMALL_STATE(155)] = 12290,
  [SMALL_STATE(156)] = 12357,
  [SMALL_STATE(157)] = 12393,
  [SMALL_STATE(158)] = 12431,
  [SMALL_STATE(159)] = 12483,
  [SMALL_STATE(160)] = 12521,
  [SMALL_STATE(161)] = 12559,
  [SMALL_STATE(162)] = 12599,
  [SMALL_STATE(163)] = 12634,
  [SMALL_STATE(164)] = 12673,
  [SMALL_STATE(165)] = 12708,
  [SMALL_STATE(166)] = 12743,
  [SMALL_STATE(167)] = 12778,
  [SMALL_STATE(168)] = 12813,
  [SMALL_STATE(169)] = 12850,
  [SMALL_STATE(170)] = 12885,
  [SMALL_STATE(171)] = 12920,
  [SMALL_STATE(172)] = 12959,
  [SMALL_STATE(173)] = 12994,
  [SMALL_STATE(174)] = 13029,
  [SMALL_STATE(175)] = 13064,
  [SMALL_STATE(176)] = 13098,
  [SMALL_STATE(177)] = 13160,
  [SMALL_STATE(178)] = 13224,
  [SMALL_STATE(179)] = 13280,
  [SMALL_STATE(180)] = 13336,
  [SMALL_STATE(181)] = 13389,
  [SMALL_STATE(182)] = 13448,
  [SMALL_STATE(183)] = 13509,
  [SMALL_STATE(184)] = 13560,
  [SMALL_STATE(185)] = 13594,
  [SMALL_STATE(186)] = 13628,
  [SMALL_STATE(187)] = 13662,
  [SMALL_STATE(188)] = 13698,
  [SMALL_STATE(189)] = 13729,
  [SMALL_STATE(190)] = 13776,
  [SMALL_STATE(191)] = 13807,
  [SMALL_STATE(192)] = 13838,
  [SMALL_STATE(193)] = 13869,
  [SMALL_STATE(194)] = 13900,
  [SMALL_STATE(195)] = 13931,
  [SMALL_STATE(196)] = 13962,
  [SMALL_STATE(197)] = 13997,
  [SMALL_STATE(198)] = 14028,
  [SMALL_STATE(199)] = 14059,
  [SMALL_STATE(200)] = 14090,
  [SMALL_STATE(201)] = 14121,
  [SMALL_STATE(202)] = 14151,
  [SMALL_STATE(203)] = 14181,
  [SMALL_STATE(204)] = 14211,
  [SMALL_STATE(205)] = 14241,
  [SMALL_STATE(206)] = 14271,
  [SMALL_STATE(207)] = 14301,
  [SMALL_STATE(208)] = 14351,
  [SMALL_STATE(209)] = 14381,
  [SMALL_STATE(210)] = 14411,
  [SMALL_STATE(211)] = 14441,
  [SMALL_STATE(212)] = 14475,
  [SMALL_STATE(213)] = 14521,
  [SMALL_STATE(214)] = 14550,
  [SMALL_STATE(215)] = 14579,
  [SMALL_STATE(216)] = 14612,
  [SMALL_STATE(217)] = 14643,
  [SMALL_STATE(218)] = 14676,
  [SMALL_STATE(219)] = 14707,
  [SMALL_STATE(220)] = 14754,
  [SMALL_STATE(221)] = 14783,
  [SMALL_STATE(222)] = 14828,
  [SMALL_STATE(223)] = 14863,
  [SMALL_STATE(224)] = 14891,
  [SMALL_STATE(225)] = 14925,
  [SMALL_STATE(226)] = 14953,
  [SMALL_STATE(227)] = 14987,
  [SMALL_STATE(228)] = 15017,
  [SMALL_STATE(229)] = 15051,
  [SMALL_STATE(230)] = 15081,
  [SMALL_STATE(231)] = 15111,
  [SMALL_STATE(232)] = 15152,
  [SMALL_STATE(233)] = 15181,
  [SMALL_STATE(234)] = 15212,
  [SMALL_STATE(235)] = 15241,
  [SMALL_STATE(236)] = 15270,
  [SMALL_STATE(237)] = 15299,
  [SMALL_STATE(238)] = 15340,
  [SMALL_STATE(239)] = 15369,
  [SMALL_STATE(240)] = 15398,
  [SMALL_STATE(241)] = 15427,
  [SMALL_STATE(242)] = 15454,
  [SMALL_STATE(243)] = 15483,
  [SMALL_STATE(244)] = 15512,
  [SMALL_STATE(245)] = 15539,
  [SMALL_STATE(246)] = 15566,
  [SMALL_STATE(247)] = 15592,
  [SMALL_STATE(248)] = 15618,
  [SMALL_STATE(249)] = 15654,
  [SMALL_STATE(250)] = 15680,
  [SMALL_STATE(251)] = 15708,
  [SMALL_STATE(252)] = 15742,
  [SMALL_STATE(253)] = 15772,
  [SMALL_STATE(254)] = 15800,
  [SMALL_STATE(255)] = 15844,
  [SMALL_STATE(256)] = 15872,
  [SMALL_STATE(257)] = 15900,
  [SMALL_STATE(258)] = 15926,
  [SMALL_STATE(259)] = 15966,
  [SMALL_STATE(260)] = 15996,
  [SMALL_STATE(261)] = 16028,
  [SMALL_STATE(262)] = 16072,
  [SMALL_STATE(263)] = 16112,
  [SMALL_STATE(264)] = 16150,
  [SMALL_STATE(265)] = 16176,
  [SMALL_STATE(266)] = 16202,
  [SMALL_STATE(267)] = 16238,
  [SMALL_STATE(268)] = 16266,
  [SMALL_STATE(269)] = 16294,
  [SMALL_STATE(270)] = 16332,
  [SMALL_STATE(271)] = 16358,
  [SMALL_STATE(272)] = 16396,
  [SMALL_STATE(273)] = 16436,
  [SMALL_STATE(274)] = 16476,
  [SMALL_STATE(275)] = 16504,
  [SMALL_STATE(276)] = 16530,
  [SMALL_STATE(277)] = 16556,
  [SMALL_STATE(278)] = 16582,
  [SMALL_STATE(279)] = 16608,
  [SMALL_STATE(280)] = 16634,
  [SMALL_STATE(281)] = 16660,
  [SMALL_STATE(282)] = 16686,
  [SMALL_STATE(283)] = 16712,
  [SMALL_STATE(284)] = 16740,
  [SMALL_STATE(285)] = 16766,
  [SMALL_STATE(286)] = 16800,
  [SMALL_STATE(287)] = 16826,
  [SMALL_STATE(288)] = 16856,
  [SMALL_STATE(289)] = 16882,
  [SMALL_STATE(290)] = 16908,
  [SMALL_STATE(291)] = 16940,
  [SMALL_STATE(292)] = 16966,
  [SMALL_STATE(293)] = 17002,
  [SMALL_STATE(294)] = 17046,
  [SMALL_STATE(295)] = 17090,
  [SMALL_STATE(296)] = 17134,
  [SMALL_STATE(297)] = 17178,
  [SMALL_STATE(298)] = 17204,
  [SMALL_STATE(299)] = 17230,
  [SMALL_STATE(300)] = 17270,
  [SMALL_STATE(301)] = 17314,
  [SMALL_STATE(302)] = 17340,
  [SMALL_STATE(303)] = 17368,
  [SMALL_STATE(304)] = 17408,
  [SMALL_STATE(305)] = 17433,
  [SMALL_STATE(306)] = 17458,
  [SMALL_STATE(307)] = 17495,
  [SMALL_STATE(308)] = 17538,
  [SMALL_STATE(309)] = 17563,
  [SMALL_STATE(310)] = 17588,
  [SMALL_STATE(311)] = 17613,
  [SMALL_STATE(312)] = 17638,
  [SMALL_STATE(313)] = 17663,
  [SMALL_STATE(314)] = 17688,
  [SMALL_STATE(315)] = 17713,
  [SMALL_STATE(316)] = 17738,
  [SMALL_STATE(317)] = 17763,
  [SMALL_STATE(318)] = 17788,
  [SMALL_STATE(319)] = 17813,
  [SMALL_STATE(320)] = 17838,
  [SMALL_STATE(321)] = 17863,
  [SMALL_STATE(322)] = 17888,
  [SMALL_STATE(323)] = 17913,
  [SMALL_STATE(324)] = 17938,
  [SMALL_STATE(325)] = 17963,
  [SMALL_STATE(326)] = 17988,
  [SMALL_STATE(327)] = 18013,
  [SMALL_STATE(328)] = 18038,
  [SMALL_STATE(329)] = 18063,
  [SMALL_STATE(330)] = 18088,
  [SMALL_STATE(331)] = 18113,
  [SMALL_STATE(332)] = 18138,
  [SMALL_STATE(333)] = 18163,
  [SMALL_STATE(334)] = 18188,
  [SMALL_STATE(335)] = 18213,
  [SMALL_STATE(336)] = 18238,
  [SMALL_STATE(337)] = 18275,
  [SMALL_STATE(338)] = 18300,
  [SMALL_STATE(339)] = 18325,
  [SMALL_STATE(340)] = 18350,
  [SMALL_STATE(341)] = 18375,
  [SMALL_STATE(342)] = 18412,
  [SMALL_STATE(343)] = 18437,
  [SMALL_STATE(344)] = 18462,
  [SMALL_STATE(345)] = 18487,
  [SMALL_STATE(346)] = 18512,
  [SMALL_STATE(347)] = 18537,
  [SMALL_STATE(348)] = 18562,
  [SMALL_STATE(349)] = 18587,
  [SMALL_STATE(350)] = 18612,
  [SMALL_STATE(351)] = 18637,
  [SMALL_STATE(352)] = 18662,
  [SMALL_STATE(353)] = 18687,
  [SMALL_STATE(354)] = 18710,
  [SMALL_STATE(355)] = 18744,
  [SMALL_STATE(356)] = 18778,
  [SMALL_STATE(357)] = 18810,
  [SMALL_STATE(358)] = 18839,
  [SMALL_STATE(359)] = 18870,
  [SMALL_STATE(360)] = 18901,
  [SMALL_STATE(361)] = 18932,
  [SMALL_STATE(362)] = 18963,
  [SMALL_STATE(363)] = 18994,
  [SMALL_STATE(364)] = 19022,
  [SMALL_STATE(365)] = 19050,
  [SMALL_STATE(366)] = 19078,
  [SMALL_STATE(367)] = 19106,
  [SMALL_STATE(368)] = 19134,
  [SMALL_STATE(369)] = 19157,
  [SMALL_STATE(370)] = 19174,
  [SMALL_STATE(371)] = 19195,
  [SMALL_STATE(372)] = 19212,
  [SMALL_STATE(373)] = 19229,
  [SMALL_STATE(374)] = 19250,
  [SMALL_STATE(375)] = 19269,
  [SMALL_STATE(376)] = 19286,
  [SMALL_STATE(377)] = 19307,
  [SMALL_STATE(378)] = 19330,
  [SMALL_STATE(379)] = 19353,
  [SMALL_STATE(380)] = 19370,
  [SMALL_STATE(381)] = 19384,
  [SMALL_STATE(382)] = 19404,
  [SMALL_STATE(383)] = 19424,
  [SMALL_STATE(384)] = 19438,
  [SMALL_STATE(385)] = 19458,
  [SMALL_STATE(386)] = 19478,
  [SMALL_STATE(387)] = 19498,
  [SMALL_STATE(388)] = 19514,
  [SMALL_STATE(389)] = 19530,
  [SMALL_STATE(390)] = 19550,
  [SMALL_STATE(391)] = 19566,
  [SMALL_STATE(392)] = 19586,
  [SMALL_STATE(393)] = 19602,
  [SMALL_STATE(394)] = 19621,
  [SMALL_STATE(395)] = 19640,
  [SMALL_STATE(396)] = 19659,
  [SMALL_STATE(397)] = 19676,
  [SMALL_STATE(398)] = 19693,
  [SMALL_STATE(399)] = 19710,
  [SMALL_STATE(400)] = 19723,
  [SMALL_STATE(401)] = 19740,
  [SMALL_STATE(402)] = 19757,
  [SMALL_STATE(403)] = 19774,
  [SMALL_STATE(404)] = 19787,
  [SMALL_STATE(405)] = 19804,
  [SMALL_STATE(406)] = 19821,
  [SMALL_STATE(407)] = 19834,
  [SMALL_STATE(408)] = 19848,
  [SMALL_STATE(409)] = 19864,
  [SMALL_STATE(410)] = 19880,
  [SMALL_STATE(411)] = 19896,
  [SMALL_STATE(412)] = 19912,
  [SMALL_STATE(413)] = 19928,
  [SMALL_STATE(414)] = 19942,
  [SMALL_STATE(415)] = 19958,
  [SMALL_STATE(416)] = 19972,
  [SMALL_STATE(417)] = 19986,
  [SMALL_STATE(418)] = 20002,
  [SMALL_STATE(419)] = 20016,
  [SMALL_STATE(420)] = 20032,
  [SMALL_STATE(421)] = 20048,
  [SMALL_STATE(422)] = 20064,
  [SMALL_STATE(423)] = 20080,
  [SMALL_STATE(424)] = 20096,
  [SMALL_STATE(425)] = 20110,
  [SMALL_STATE(426)] = 20126,
  [SMALL_STATE(427)] = 20140,
  [SMALL_STATE(428)] = 20156,
  [SMALL_STATE(429)] = 20170,
  [SMALL_STATE(430)] = 20184,
  [SMALL_STATE(431)] = 20200,
  [SMALL_STATE(432)] = 20214,
  [SMALL_STATE(433)] = 20228,
  [SMALL_STATE(434)] = 20244,
  [SMALL_STATE(435)] = 20260,
  [SMALL_STATE(436)] = 20276,
  [SMALL_STATE(437)] = 20292,
  [SMALL_STATE(438)] = 20306,
  [SMALL_STATE(439)] = 20322,
  [SMALL_STATE(440)] = 20338,
  [SMALL_STATE(441)] = 20349,
  [SMALL_STATE(442)] = 20360,
  [SMALL_STATE(443)] = 20373,
  [SMALL_STATE(444)] = 20384,
  [SMALL_STATE(445)] = 20397,
  [SMALL_STATE(446)] = 20408,
  [SMALL_STATE(447)] = 20419,
  [SMALL_STATE(448)] = 20432,
  [SMALL_STATE(449)] = 20443,
  [SMALL_STATE(450)] = 20454,
  [SMALL_STATE(451)] = 20467,
  [SMALL_STATE(452)] = 20478,
  [SMALL_STATE(453)] = 20491,
  [SMALL_STATE(454)] = 20502,
  [SMALL_STATE(455)] = 20515,
  [SMALL_STATE(456)] = 20526,
  [SMALL_STATE(457)] = 20537,
  [SMALL_STATE(458)] = 20548,
  [SMALL_STATE(459)] = 20559,
  [SMALL_STATE(460)] = 20572,
  [SMALL_STATE(461)] = 20585,
  [SMALL_STATE(462)] = 20596,
  [SMALL_STATE(463)] = 20607,
  [SMALL_STATE(464)] = 20620,
  [SMALL_STATE(465)] = 20630,
  [SMALL_STATE(466)] = 20640,
  [SMALL_STATE(467)] = 20650,
  [SMALL_STATE(468)] = 20660,
  [SMALL_STATE(469)] = 20670,
  [SMALL_STATE(470)] = 20680,
  [SMALL_STATE(471)] = 20690,
  [SMALL_STATE(472)] = 20700,
  [SMALL_STATE(473)] = 20710,
  [SMALL_STATE(474)] = 20720,
  [SMALL_STATE(475)] = 20730,
  [SMALL_STATE(476)] = 20740,
  [SMALL_STATE(477)] = 20750,
  [SMALL_STATE(478)] = 20760,
  [SMALL_STATE(479)] = 20770,
  [SMALL_STATE(480)] = 20780,
  [SMALL_STATE(481)] = 20790,
  [SMALL_STATE(482)] = 20800,
  [SMALL_STATE(483)] = 20810,
  [SMALL_STATE(484)] = 20820,
  [SMALL_STATE(485)] = 20830,
  [SMALL_STATE(486)] = 20840,
  [SMALL_STATE(487)] = 20850,
  [SMALL_STATE(488)] = 20860,
  [SMALL_STATE(489)] = 20870,
  [SMALL_STATE(490)] = 20880,
  [SMALL_STATE(491)] = 20890,
  [SMALL_STATE(492)] = 20900,
  [SMALL_STATE(493)] = 20910,
  [SMALL_STATE(494)] = 20920,
  [SMALL_STATE(495)] = 20930,
  [SMALL_STATE(496)] = 20940,
  [SMALL_STATE(497)] = 20950,
  [SMALL_STATE(498)] = 20960,
  [SMALL_STATE(499)] = 20970,
  [SMALL_STATE(500)] = 20980,
  [SMALL_STATE(501)] = 20990,
  [SMALL_STATE(502)] = 21000,
  [SMALL_STATE(503)] = 21010,
  [SMALL_STATE(504)] = 21020,
  [SMALL_STATE(505)] = 21030,
  [SMALL_STATE(506)] = 21040,
  [SMALL_STATE(507)] = 21050,
  [SMALL_STATE(508)] = 21060,
  [SMALL_STATE(509)] = 21070,
  [SMALL_STATE(510)] = 21080,
  [SMALL_STATE(511)] = 21090,
  [SMALL_STATE(512)] = 21100,
  [SMALL_STATE(513)] = 21110,
  [SMALL_STATE(514)] = 21120,
  [SMALL_STATE(515)] = 21130,
  [SMALL_STATE(516)] = 21140,
  [SMALL_STATE(517)] = 21150,
  [SMALL_STATE(518)] = 21160,
  [SMALL_STATE(519)] = 21170,
  [SMALL_STATE(520)] = 21180,
  [SMALL_STATE(521)] = 21190,
  [SMALL_STATE(522)] = 21200,
  [SMALL_STATE(523)] = 21210,
  [SMALL_STATE(524)] = 21220,
  [SMALL_STATE(525)] = 21230,
  [SMALL_STATE(526)] = 21240,
  [SMALL_STATE(527)] = 21250,
  [SMALL_STATE(528)] = 21260,
  [SMALL_STATE(529)] = 21270,
  [SMALL_STATE(530)] = 21280,
  [SMALL_STATE(531)] = 21290,
  [SMALL_STATE(532)] = 21300,
  [SMALL_STATE(533)] = 21310,
  [SMALL_STATE(534)] = 21320,
  [SMALL_STATE(535)] = 21330,
  [SMALL_STATE(536)] = 21340,
  [SMALL_STATE(537)] = 21350,
  [SMALL_STATE(538)] = 21360,
  [SMALL_STATE(539)] = 21370,
  [SMALL_STATE(540)] = 21380,
  [SMALL_STATE(541)] = 21390,
  [SMALL_STATE(542)] = 21400,
  [SMALL_STATE(543)] = 21410,
  [SMALL_STATE(544)] = 21420,
  [SMALL_STATE(545)] = 21430,
  [SMALL_STATE(546)] = 21440,
  [SMALL_STATE(547)] = 21450,
  [SMALL_STATE(548)] = 21460,
  [SMALL_STATE(549)] = 21470,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 10),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 10),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(45),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(123),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(396),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(502),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(486),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(459),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(484),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(450),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(482),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(11),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(11),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(481),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(65),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(393),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 19),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 19),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 14),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 14),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2, .production_id = 6),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(173),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(398),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(533),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(524),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(165),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(165),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(473),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(157),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 2),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(194),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(402),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(542),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(541),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(198),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(198),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(512),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(186),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(165),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(165),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(175),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 24),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 24),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 15),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 15),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(270),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(400),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(544),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(543),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(284),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(284),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(517),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(243),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 11),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 11),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(343),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(401),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(540),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(538),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(323),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(323),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(505),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(250),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(104),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(81),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(67),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(485),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(29),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(106),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(54),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(55),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(198),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(198),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 25),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 22),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 22),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 6),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 6),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 4),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 4),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 23),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 6, .production_id = 23),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 5),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 5),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 21),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 21),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 17),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 17),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 26),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 26),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 27),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 27),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 1),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(71),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(20),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(40),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(37),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(284),
  [788] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(284),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__join_definition, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(323),
  [844] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(323),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 7),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 4),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 18),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 18),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 4),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 5),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 2),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 6),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__self_join, 4),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 5),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 3),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_reference, 1),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 8),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [1037] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 7),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [1041] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [1045] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [1049] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [1057] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 3),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [1065] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 5),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [1073] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(89),
  [1076] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(548),
  [1079] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(547),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(421),
  [1085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(485),
  [1088] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(30),
  [1091] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(106),
  [1094] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(376),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(460),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(387),
  [1139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(387),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(525),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(429),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(85),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(5),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(87),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2), SHIFT_REPEAT(97),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(35),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(126),
  [1288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(443),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 16),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [1443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1445] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [1455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
