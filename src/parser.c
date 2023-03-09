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
#define STATE_COUNT 504
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 196
#define ALIAS_COUNT 0
#define TOKEN_COUNT 114
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 32

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
  sym_keyword_case = 13,
  sym_keyword_append = 14,
  sym_keyword_remove = 15,
  sym_keyword_intersect = 16,
  sym_keyword_average = 17,
  sym_keyword_min = 18,
  sym_keyword_max = 19,
  sym_keyword_count = 20,
  sym_keyword_stddev = 21,
  sym_keyword_avg = 22,
  sym_keyword_sum = 23,
  sym_keyword_count_distinct = 24,
  sym_keyword_lag = 25,
  sym_keyword_lead = 26,
  sym_keyword_first = 27,
  sym_keyword_last = 28,
  sym_keyword_rank = 29,
  sym_keyword_row_number = 30,
  sym_keyword_round = 31,
  sym_keyword_all = 32,
  sym_keyword_map = 33,
  sym_keyword_side = 34,
  sym_keyword_inner = 35,
  sym_keyword_left = 36,
  sym_keyword_right = 37,
  sym_keyword_full = 38,
  sym_keyword_and = 39,
  sym_keyword_or = 40,
  sym_keyword_in = 41,
  sym_keyword_rolling = 42,
  sym_keyword_rows = 43,
  sym_keyword_expanding = 44,
  sym_keyword_null = 45,
  sym_keyword_loop = 46,
  sym_keyword_func = 47,
  sym_keyword_let = 48,
  sym_keyword_prql = 49,
  sym_keyword_version = 50,
  sym_keyword_target = 51,
  anon_sym_COLON = 52,
  anon_sym_sql_DOTansi = 53,
  anon_sym_sql_DOTbigquery = 54,
  anon_sym_sql_DOTclickhouse = 55,
  anon_sym_sql_DOTgeneric = 56,
  anon_sym_sql_DOThive = 57,
  anon_sym_sql_DOTmssql = 58,
  anon_sym_sql_DOTmysql = 59,
  anon_sym_sql_DOTpostgres = 60,
  anon_sym_sql_DOTsqlite = 61,
  anon_sym_sql_DOTsnowflake = 62,
  anon_sym_sql_DOTduckdb = 63,
  sym_keyword_from_text = 64,
  sym_keyword_format = 65,
  sym_keyword_csv = 66,
  sym_keyword_json = 67,
  anon_sym_EQ = 68,
  anon_sym_LPAREN = 69,
  anon_sym_RPAREN = 70,
  anon_sym_DASH_GT = 71,
  anon_sym_LBRACK = 72,
  anon_sym_COMMA = 73,
  anon_sym_RBRACK = 74,
  anon_sym_EQ_GT = 75,
  anon_sym_DASH = 76,
  anon_sym_PLUS = 77,
  anon_sym_EQ_EQ = 78,
  anon_sym_DQUOTE = 79,
  aux_sym__double_quote_string_token1 = 80,
  anon_sym_SQUOTE = 81,
  aux_sym__single_quote_string_token1 = 82,
  aux_sym__inner_triple_quotes_token1 = 83,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 84,
  anon_sym_f_DQUOTE = 85,
  anon_sym_f_DQUOTE_DQUOTE_DQUOTE = 86,
  anon_sym_s_DQUOTE = 87,
  anon_sym_s_DQUOTE_DQUOTE_DQUOTE = 88,
  sym__natural_number = 89,
  anon_sym__ = 90,
  anon_sym_DOT = 91,
  anon_sym_BQUOTE = 92,
  sym__identifier = 93,
  sym__identifier_dot = 94,
  anon_sym_DOT_DOT = 95,
  anon_sym_STAR = 96,
  anon_sym_SLASH = 97,
  anon_sym_BANG_EQ = 98,
  anon_sym_GT = 99,
  anon_sym_GT_EQ = 100,
  anon_sym_LT = 101,
  anon_sym_LT_EQ = 102,
  anon_sym_QMARK_QMARK = 103,
  aux_sym__date_token1 = 104,
  aux_sym__date_token2 = 105,
  anon_sym_AT = 106,
  aux_sym__time_token1 = 107,
  anon_sym_T = 108,
  anon_sym_Z = 109,
  anon_sym_POUND = 110,
  aux_sym_comment_token1 = 111,
  sym_bang = 112,
  sym_pipe = 113,
  sym_program = 114,
  sym_prql = 115,
  sym_target = 116,
  sym_pipeline = 117,
  sym_variable = 118,
  sym_function_definition = 119,
  sym_parameter = 120,
  sym__call_parameter = 121,
  sym_function_call = 122,
  sym_from_text = 123,
  sym_transforms = 124,
  sym_from = 125,
  sym__table_selection = 126,
  sym__table_reference = 127,
  sym_derives = 128,
  sym_append = 129,
  sym_filter = 130,
  sym__boolean_expression = 131,
  sym_case = 132,
  sym_case_condition = 133,
  sym_aggregate = 134,
  sym__agg_keywords = 135,
  sym_aggregate_operation = 136,
  sym__aggregate_func = 137,
  sym_sorts = 138,
  sym__sort_instruction = 139,
  sym_direction = 140,
  sym_takes = 141,
  sym_window = 142,
  sym_window_definitions = 143,
  sym__window_definition = 144,
  sym_group = 145,
  sym_joins = 146,
  sym__join_definition = 147,
  sym_conditions = 148,
  sym__self_join = 149,
  sym_select = 150,
  sym_term = 151,
  sym__expression = 152,
  sym_literal = 153,
  sym_f_string = 154,
  sym_s_string = 155,
  sym__double_quote_string = 156,
  sym__single_quote_string = 157,
  aux_sym__inner_triple_quotes = 158,
  sym__triple_quote_string = 159,
  sym__double_f_string = 160,
  sym__triple_f_string = 161,
  sym__double_s_string = 162,
  sym__triple_s_string = 163,
  sym_literal_string = 164,
  aux_sym__friendly_number = 165,
  sym_integer = 166,
  sym_decimal_number = 167,
  sym_field = 168,
  sym__alias_identifier = 169,
  sym_identifier = 170,
  sym_range = 171,
  sym__agg_rhs_assignment = 172,
  sym_assignment = 173,
  sym_binary_expression = 174,
  sym__date = 175,
  sym_date = 176,
  sym__time = 177,
  sym_time = 178,
  sym_timestamp = 179,
  sym_timezone = 180,
  sym_comment = 181,
  aux_sym_program_repeat1 = 182,
  aux_sym_program_repeat2 = 183,
  aux_sym_function_definition_repeat1 = 184,
  aux_sym_function_call_repeat1 = 185,
  aux_sym_transforms_repeat1 = 186,
  aux_sym_derives_repeat1 = 187,
  aux_sym_case_repeat1 = 188,
  aux_sym_case_repeat2 = 189,
  aux_sym_aggregate_repeat1 = 190,
  aux_sym_sorts_repeat1 = 191,
  aux_sym_window_definitions_repeat1 = 192,
  aux_sym_group_repeat1 = 193,
  aux_sym_group_repeat2 = 194,
  aux_sym_conditions_repeat1 = 195,
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
  [sym_keyword_case] = "keyword_case",
  [sym_keyword_append] = "keyword_append",
  [sym_keyword_remove] = "keyword_remove",
  [sym_keyword_intersect] = "keyword_intersect",
  [sym_keyword_average] = "keyword_average",
  [sym_keyword_min] = "keyword_min",
  [sym_keyword_max] = "keyword_max",
  [sym_keyword_count] = "keyword_count",
  [sym_keyword_stddev] = "keyword_stddev",
  [sym_keyword_avg] = "keyword_avg",
  [sym_keyword_sum] = "keyword_sum",
  [sym_keyword_count_distinct] = "keyword_count_distinct",
  [sym_keyword_lag] = "keyword_lag",
  [sym_keyword_lead] = "keyword_lead",
  [sym_keyword_first] = "keyword_first",
  [sym_keyword_last] = "keyword_last",
  [sym_keyword_rank] = "keyword_rank",
  [sym_keyword_row_number] = "keyword_row_number",
  [sym_keyword_round] = "keyword_round",
  [sym_keyword_all] = "keyword_all",
  [sym_keyword_map] = "keyword_map",
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
  [sym_keyword_loop] = "keyword_loop",
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
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__single_quote_string_token1] = "_single_quote_string_token1",
  [aux_sym__inner_triple_quotes_token1] = "_inner_triple_quotes_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_f_DQUOTE] = "f\"",
  [anon_sym_f_DQUOTE_DQUOTE_DQUOTE] = "f\"\"\"",
  [anon_sym_s_DQUOTE] = "s\"",
  [anon_sym_s_DQUOTE_DQUOTE_DQUOTE] = "s\"\"\"",
  [sym__natural_number] = "_natural_number",
  [anon_sym__] = "_",
  [anon_sym_DOT] = ".",
  [anon_sym_BQUOTE] = "`",
  [sym__identifier] = "_identifier",
  [sym__identifier_dot] = "_identifier_dot",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
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
  [sym_pipe] = "pipe",
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
  [sym__table_selection] = "_table_selection",
  [sym__table_reference] = "_table_reference",
  [sym_derives] = "derives",
  [sym_append] = "append",
  [sym_filter] = "filter",
  [sym__boolean_expression] = "_boolean_expression",
  [sym_case] = "case",
  [sym_case_condition] = "case_condition",
  [sym_aggregate] = "aggregate",
  [sym__agg_keywords] = "_agg_keywords",
  [sym_aggregate_operation] = "aggregate_operation",
  [sym__aggregate_func] = "aggregate_operation",
  [sym_sorts] = "sorts",
  [sym__sort_instruction] = "_sort_instruction",
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
  [sym_term] = "term",
  [sym__expression] = "_expression",
  [sym_literal] = "literal",
  [sym_f_string] = "f_string",
  [sym_s_string] = "s_string",
  [sym__double_quote_string] = "_double_quote_string",
  [sym__single_quote_string] = "_single_quote_string",
  [aux_sym__inner_triple_quotes] = "_inner_triple_quotes",
  [sym__triple_quote_string] = "literal",
  [sym__double_f_string] = "_double_f_string",
  [sym__triple_f_string] = "_triple_f_string",
  [sym__double_s_string] = "_double_s_string",
  [sym__triple_s_string] = "_triple_s_string",
  [sym_literal_string] = "literal_string",
  [aux_sym__friendly_number] = "_friendly_number",
  [sym_integer] = "integer",
  [sym_decimal_number] = "decimal_number",
  [sym_field] = "field",
  [sym__alias_identifier] = "_alias_identifier",
  [sym_identifier] = "identifier",
  [sym_range] = "range",
  [sym__agg_rhs_assignment] = "_agg_rhs_assignment",
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
  [aux_sym_case_repeat1] = "case_repeat1",
  [aux_sym_case_repeat2] = "case_repeat2",
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
  [sym_keyword_case] = sym_keyword_case,
  [sym_keyword_append] = sym_keyword_append,
  [sym_keyword_remove] = sym_keyword_remove,
  [sym_keyword_intersect] = sym_keyword_intersect,
  [sym_keyword_average] = sym_keyword_average,
  [sym_keyword_min] = sym_keyword_min,
  [sym_keyword_max] = sym_keyword_max,
  [sym_keyword_count] = sym_keyword_count,
  [sym_keyword_stddev] = sym_keyword_stddev,
  [sym_keyword_avg] = sym_keyword_avg,
  [sym_keyword_sum] = sym_keyword_sum,
  [sym_keyword_count_distinct] = sym_keyword_count_distinct,
  [sym_keyword_lag] = sym_keyword_lag,
  [sym_keyword_lead] = sym_keyword_lead,
  [sym_keyword_first] = sym_keyword_first,
  [sym_keyword_last] = sym_keyword_last,
  [sym_keyword_rank] = sym_keyword_rank,
  [sym_keyword_row_number] = sym_keyword_row_number,
  [sym_keyword_round] = sym_keyword_round,
  [sym_keyword_all] = sym_keyword_all,
  [sym_keyword_map] = sym_keyword_map,
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
  [sym_keyword_loop] = sym_keyword_loop,
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
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__single_quote_string_token1] = aux_sym__single_quote_string_token1,
  [aux_sym__inner_triple_quotes_token1] = aux_sym__inner_triple_quotes_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_f_DQUOTE] = anon_sym_f_DQUOTE,
  [anon_sym_f_DQUOTE_DQUOTE_DQUOTE] = anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_s_DQUOTE] = anon_sym_s_DQUOTE,
  [anon_sym_s_DQUOTE_DQUOTE_DQUOTE] = anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
  [sym__natural_number] = sym__natural_number,
  [anon_sym__] = anon_sym__,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym__identifier] = sym__identifier,
  [sym__identifier_dot] = sym__identifier_dot,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [sym_pipe] = sym_pipe,
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
  [sym__table_selection] = sym__table_selection,
  [sym__table_reference] = sym__table_reference,
  [sym_derives] = sym_derives,
  [sym_append] = sym_append,
  [sym_filter] = sym_filter,
  [sym__boolean_expression] = sym__boolean_expression,
  [sym_case] = sym_case,
  [sym_case_condition] = sym_case_condition,
  [sym_aggregate] = sym_aggregate,
  [sym__agg_keywords] = sym__agg_keywords,
  [sym_aggregate_operation] = sym_aggregate_operation,
  [sym__aggregate_func] = sym_aggregate_operation,
  [sym_sorts] = sym_sorts,
  [sym__sort_instruction] = sym__sort_instruction,
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
  [sym_term] = sym_term,
  [sym__expression] = sym__expression,
  [sym_literal] = sym_literal,
  [sym_f_string] = sym_f_string,
  [sym_s_string] = sym_s_string,
  [sym__double_quote_string] = sym__double_quote_string,
  [sym__single_quote_string] = sym__single_quote_string,
  [aux_sym__inner_triple_quotes] = aux_sym__inner_triple_quotes,
  [sym__triple_quote_string] = sym_literal,
  [sym__double_f_string] = sym__double_f_string,
  [sym__triple_f_string] = sym__triple_f_string,
  [sym__double_s_string] = sym__double_s_string,
  [sym__triple_s_string] = sym__triple_s_string,
  [sym_literal_string] = sym_literal_string,
  [aux_sym__friendly_number] = aux_sym__friendly_number,
  [sym_integer] = sym_integer,
  [sym_decimal_number] = sym_decimal_number,
  [sym_field] = sym_field,
  [sym__alias_identifier] = sym__alias_identifier,
  [sym_identifier] = sym_identifier,
  [sym_range] = sym_range,
  [sym__agg_rhs_assignment] = sym__agg_rhs_assignment,
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
  [aux_sym_case_repeat1] = aux_sym_case_repeat1,
  [aux_sym_case_repeat2] = aux_sym_case_repeat2,
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
  [sym_keyword_case] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_append] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_remove] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_intersect] = {
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
  [sym_keyword_lag] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_lead] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_first] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_last] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_rank] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_row_number] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_round] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_all] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_map] = {
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
  [sym_keyword_loop] = {
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
  [anon_sym_EQ_GT] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__single_quote_string_token1] = {
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
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier_dot] = {
    .visible = false,
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
  [sym_pipe] = {
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
  [sym__table_selection] = {
    .visible = false,
    .named = true,
  },
  [sym__table_reference] = {
    .visible = false,
    .named = true,
  },
  [sym_derives] = {
    .visible = true,
    .named = true,
  },
  [sym_append] = {
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
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym_case_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate] = {
    .visible = true,
    .named = true,
  },
  [sym__agg_keywords] = {
    .visible = false,
    .named = true,
  },
  [sym_aggregate_operation] = {
    .visible = true,
    .named = true,
  },
  [sym__aggregate_func] = {
    .visible = true,
    .named = true,
  },
  [sym_sorts] = {
    .visible = true,
    .named = true,
  },
  [sym__sort_instruction] = {
    .visible = false,
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
  [sym__single_quote_string] = {
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
  [sym_literal_string] = {
    .visible = true,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym__agg_rhs_assignment] = {
    .visible = false,
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
  [aux_sym_case_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_repeat2] = {
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
  field_table_reference = 13,
  field_target = 14,
  field_till = 15,
  field_value = 16,
  field_version = 17,
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
  [field_table_reference] = "table_reference",
  [field_target] = "target",
  [field_till] = "till",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 3},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 1},
  [13] = {.index = 15, .length = 1},
  [14] = {.index = 16, .length = 3},
  [15] = {.index = 19, .length = 1},
  [16] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 1},
  [18] = {.index = 23, .length = 3},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 3},
  [21] = {.index = 31, .length = 1},
  [22] = {.index = 32, .length = 3},
  [23] = {.index = 35, .length = 3},
  [24] = {.index = 38, .length = 2},
  [25] = {.index = 40, .length = 1},
  [26] = {.index = 41, .length = 3},
  [27] = {.index = 44, .length = 3},
  [28] = {.index = 47, .length = 3},
  [29] = {.index = 50, .length = 1},
  [30] = {.index = 51, .length = 2},
  [31] = {.index = 53, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alias, 1, .inherited = true},
    {field_table_reference, 1, .inherited = true},
  [2] =
    {field_table_reference, 0, .inherited = true},
  [3] =
    {field_table_reference, 0},
  [4] =
    {field_predicate, 1, .inherited = true},
  [5] =
    {field_predicate, 0},
  [6] =
    {field_name, 0},
  [7] =
    {field_value, 0},
  [8] =
    {field_alias, 1, .inherited = true},
    {field_table, 1},
    {field_table_reference, 1, .inherited = true},
  [11] =
    {field_alias, 0},
    {field_table_reference, 2, .inherited = true},
  [13] =
    {field_name, 1},
  [14] =
    {field_version, 3},
  [15] =
    {field_target, 3},
  [16] =
    {field_alias, 2, .inherited = true},
    {field_table, 2},
    {field_table_reference, 2, .inherited = true},
  [19] =
    {field_default, 2},
  [20] =
    {field_logic, 4},
    {field_name, 1},
  [22] =
    {field_predicate, 1},
  [23] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [26] =
    {field_name, 2},
    {field_table, 0},
  [28] =
    {field_alias, 0},
    {field_operator, 1},
    {field_operator, 2},
  [31] =
    {field_operation, 0},
  [32] =
    {field_alias, 0},
    {field_operation, 2, .inherited = true},
    {field_operator, 1},
  [35] =
    {field_from, 0},
    {field_operator, 1},
    {field_till, 2},
  [38] =
    {field_operation, 0},
    {field_operation, 1},
  [40] =
    {field_value, 0, .inherited = true},
  [41] =
    {field_left, 1},
    {field_operator, 2},
    {field_right, 3},
  [44] =
    {field_alias, 0},
    {field_operator, 1},
    {field_operator, 3},
  [47] =
    {field_alias, 0},
    {field_operation, 3, .inherited = true},
    {field_operator, 1},
  [50] =
    {field_value, 2},
  [51] =
    {field_default, 0},
    {field_result, 2},
  [53] =
    {field_result, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [0] = sym_identifier,
  },
  [9] = {
    [1] = sym_term,
  },
  [12] = {
    [3] = sym_literal,
  },
  [14] = {
    [2] = sym_term,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__table_selection, 2,
    sym__table_selection,
    sym_term,
  sym__double_quote_string, 3,
    sym__double_quote_string,
    sym_identifier,
    sym_literal,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(489);
      if (lookahead == '!') ADVANCE(893);
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == 'C') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(212);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'G') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'J') ADVANCE(155);
      if (lookahead == 'L') ADVANCE(29);
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'N') ADVANCE(202);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'P') ADVANCE(164);
      if (lookahead == 'R') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(883);
      if (lookahead == 'V') ADVANCE(75);
      if (lookahead == 'W') ADVANCE(98);
      if (lookahead == 'Z') ADVANCE(885);
      if (lookahead == '[') ADVANCE(599);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead == 'j') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'v') ADVANCE(273);
      if (lookahead == 'w') ADVANCE(304);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(483)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(699);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'O') ADVANCE(711);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(818);
      if (lookahead == 'f') ADVANCE(753);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(830);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(464)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(673);
      if (lookahead == 'D') ADVANCE(665);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'G') ADVANCE(718);
      if (lookahead == 'I') ADVANCE(702);
      if (lookahead == 'J') ADVANCE(707);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'O') ADVANCE(711);
      if (lookahead == 'R') ADVANCE(663);
      if (lookahead == 'S') ADVANCE(666);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'f') ADVANCE(752);
      if (lookahead == 'g') ADVANCE(837);
      if (lookahead == 'i') ADVANCE(821);
      if (lookahead == 'j') ADVANCE(826);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(830);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == 's') ADVANCE(785);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(462)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(467)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(892);
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == '[') ADVANCE(599);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'f') ADVANCE(629);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(463)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'f') ADVANCE(753);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(466)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '=') ADVANCE(593);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'A') ADVANCE(743);
      if (lookahead == 'C') ADVANCE(703);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'M') ADVANCE(635);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'R') ADVANCE(637);
      if (lookahead == 'S') ADVANCE(724);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(861);
      if (lookahead == 'c') ADVANCE(822);
      if (lookahead == 'f') ADVANCE(629);
      if (lookahead == 'm') ADVANCE(754);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(756);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(460)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'A') ADVANCE(743);
      if (lookahead == 'C') ADVANCE(639);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'M') ADVANCE(635);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'S') ADVANCE(724);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(861);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(629);
      if (lookahead == 'm') ADVANCE(754);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(461)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'A') ADVANCE(743);
      if (lookahead == 'C') ADVANCE(706);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'M') ADVANCE(635);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'S') ADVANCE(724);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(861);
      if (lookahead == 'c') ADVANCE(825);
      if (lookahead == 'f') ADVANCE(629);
      if (lookahead == 'm') ADVANCE(754);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(475)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == 'A') ADVANCE(674);
      if (lookahead == 'D') ADVANCE(665);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'G') ADVANCE(718);
      if (lookahead == 'I') ADVANCE(702);
      if (lookahead == 'J') ADVANCE(707);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'R') ADVANCE(663);
      if (lookahead == 'S') ADVANCE(666);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(793);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'f') ADVANCE(752);
      if (lookahead == 'g') ADVANCE(837);
      if (lookahead == 'i') ADVANCE(821);
      if (lookahead == 'j') ADVANCE(826);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == 's') ADVANCE(785);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(465)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(622);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == 'q') ADVANCE(327);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(621);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(623);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(619);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '[') ADVANCE(599);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(468)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(880);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(471)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(470)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == 'S') ADVANCE(682);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(469)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(474)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(868);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(224);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(869);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(872);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(606);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(606);
      if (lookahead == '>') ADVANCE(602);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(598);
      END_STATE();
    case 27:
      if (lookahead == '?') ADVANCE(877);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(178);
      if (lookahead == 'O') ADVANCE(204);
      if (lookahead == 'S') ADVANCE(207);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'E') ADVANCE(35);
      if (lookahead == 'O') ADVANCE(149);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(158);
      if (lookahead == 'I') ADVANCE(131);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'R') ADVANCE(206);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(117);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(130);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(119);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'F') ADVANCE(186);
      if (lookahead == 'T') ADVANCE(571);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(191);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(94);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(198);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(144);
      END_STATE();
    case 40:
      if (lookahead == 'B') ADVANCE(81);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(569);
      END_STATE();
    case 42:
      if (lookahead == 'C') ADVANCE(192);
      END_STATE();
    case 43:
      if (lookahead == 'C') ADVANCE(195);
      END_STATE();
    case 44:
      if (lookahead == 'C') ADVANCE(196);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(557);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(542);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(548);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(517);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(105);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(148);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(70);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(103);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(127);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(515);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(551);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(504);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(511);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(513);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(496);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(519);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(523);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(500);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(213);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(208);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(50);
      if (lookahead == 'O') ADVANCE(173);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == 'U') ADVANCE(123);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(173);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(171);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(170);
      if (lookahead == 'G') ADVANCE(535);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(175);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(143);
      END_STATE();
    case 85:
      if (lookahead == 'F') ADVANCE(186);
      if (lookahead == 'T') ADVANCE(571);
      END_STATE();
    case 86:
      if (lookahead == 'G') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == 'P') ADVANCE(161);
      if (lookahead == 'V') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'G') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == 'P') ADVANCE(161);
      END_STATE();
    case 88:
      if (lookahead == 'G') ADVANCE(541);
      if (lookahead == 'S') ADVANCE(185);
      END_STATE();
    case 89:
      if (lookahead == 'G') ADVANCE(96);
      END_STATE();
    case 90:
      if (lookahead == 'G') ADVANCE(563);
      END_STATE();
    case 91:
      if (lookahead == 'G') ADVANCE(565);
      END_STATE();
    case 92:
      if (lookahead == 'G') ADVANCE(174);
      END_STATE();
    case 93:
      if (lookahead == 'G') ADVANCE(79);
      END_STATE();
    case 94:
      if (lookahead == 'G') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 'G') ADVANCE(38);
      END_STATE();
    case 96:
      if (lookahead == 'H') ADVANCE(190);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(209);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(133);
      END_STATE();
    case 100:
      if (lookahead == 'I') ADVANCE(138);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == 'O') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(130);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(141);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(182);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(153);
      END_STATE();
    case 107:
      if (lookahead == 'K') ADVANCE(545);
      END_STATE();
    case 108:
      if (lookahead == 'K') ADVANCE(60);
      END_STATE();
    case 109:
      if (lookahead == 'K') ADVANCE(60);
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 110:
      if (lookahead == 'L') ADVANCE(549);
      END_STATE();
    case 111:
      if (lookahead == 'L') ADVANCE(200);
      END_STATE();
    case 112:
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'R') ADVANCE(180);
      END_STATE();
    case 113:
      if (lookahead == 'L') ADVANCE(556);
      END_STATE();
    case 114:
      if (lookahead == 'L') ADVANCE(566);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(573);
      END_STATE();
    case 116:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(113);
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(114);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(142);
      if (lookahead == 'W') ADVANCE(177);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(122);
      if (lookahead == 'W') ADVANCE(176);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(181);
      END_STATE();
    case 122:
      if (lookahead == 'L') ADVANCE(100);
      END_STATE();
    case 123:
      if (lookahead == 'M') ADVANCE(537);
      END_STATE();
    case 124:
      if (lookahead == 'M') ADVANCE(490);
      END_STATE();
    case 125:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 126:
      if (lookahead == 'M') ADVANCE(36);
      END_STATE();
    case 127:
      if (lookahead == 'M') ADVANCE(156);
      END_STATE();
    case 128:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(561);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(525);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(107);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(507);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(592);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(574);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(145);
      END_STATE();
    case 137:
      if (lookahead == 'N') ADVANCE(205);
      END_STATE();
    case 138:
      if (lookahead == 'N') ADVANCE(90);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 140:
      if (lookahead == 'N') ADVANCE(188);
      END_STATE();
    case 141:
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 142:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(54);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(199);
      END_STATE();
    case 148:
      if (lookahead == 'O') ADVANCE(211);
      END_STATE();
    case 149:
      if (lookahead == 'O') ADVANCE(159);
      END_STATE();
    case 150:
      if (lookahead == 'O') ADVANCE(203);
      END_STATE();
    case 151:
      if (lookahead == 'O') ADVANCE(124);
      END_STATE();
    case 152:
      if (lookahead == 'O') ADVANCE(134);
      END_STATE();
    case 153:
      if (lookahead == 'O') ADVANCE(135);
      END_STATE();
    case 154:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 155:
      if (lookahead == 'O') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(152);
      END_STATE();
    case 156:
      if (lookahead == 'O') ADVANCE(210);
      END_STATE();
    case 157:
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 158:
      if (lookahead == 'P') ADVANCE(550);
      if (lookahead == 'X') ADVANCE(527);
      END_STATE();
    case 159:
      if (lookahead == 'P') ADVANCE(568);
      END_STATE();
    case 160:
      if (lookahead == 'P') ADVANCE(498);
      END_STATE();
    case 161:
      if (lookahead == 'P') ADVANCE(84);
      END_STATE();
    case 162:
      if (lookahead == 'Q') ADVANCE(115);
      END_STATE();
    case 163:
      if (lookahead == 'R') ADVANCE(559);
      END_STATE();
    case 164:
      if (lookahead == 'R') ADVANCE(162);
      END_STATE();
    case 165:
      if (lookahead == 'R') ADVANCE(553);
      END_STATE();
    case 166:
      if (lookahead == 'R') ADVANCE(494);
      END_STATE();
    case 167:
      if (lookahead == 'R') ADVANCE(547);
      END_STATE();
    case 168:
      if (lookahead == 'R') ADVANCE(97);
      END_STATE();
    case 169:
      if (lookahead == 'R') ADVANCE(150);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 171:
      if (lookahead == 'R') ADVANCE(179);
      END_STATE();
    case 172:
      if (lookahead == 'R') ADVANCE(126);
      END_STATE();
    case 173:
      if (lookahead == 'R') ADVANCE(187);
      END_STATE();
    case 174:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 175:
      if (lookahead == 'R') ADVANCE(183);
      END_STATE();
    case 176:
      if (lookahead == 'S') ADVANCE(564);
      END_STATE();
    case 177:
      if (lookahead == 'S') ADVANCE(564);
      if (lookahead == '_') ADVANCE(137);
      END_STATE();
    case 178:
      if (lookahead == 'S') ADVANCE(58);
      END_STATE();
    case 179:
      if (lookahead == 'S') ADVANCE(106);
      END_STATE();
    case 180:
      if (lookahead == 'S') ADVANCE(189);
      END_STATE();
    case 181:
      if (lookahead == 'S') ADVANCE(62);
      END_STATE();
    case 182:
      if (lookahead == 'S') ADVANCE(201);
      END_STATE();
    case 183:
      if (lookahead == 'S') ADVANCE(83);
      END_STATE();
    case 184:
      if (lookahead == 'T') ADVANCE(571);
      END_STATE();
    case 185:
      if (lookahead == 'T') ADVANCE(544);
      END_STATE();
    case 186:
      if (lookahead == 'T') ADVANCE(554);
      END_STATE();
    case 187:
      if (lookahead == 'T') ADVANCE(502);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(531);
      END_STATE();
    case 189:
      if (lookahead == 'T') ADVANCE(543);
      END_STATE();
    case 190:
      if (lookahead == 'T') ADVANCE(555);
      END_STATE();
    case 191:
      if (lookahead == 'T') ADVANCE(590);
      END_STATE();
    case 192:
      if (lookahead == 'T') ADVANCE(509);
      END_STATE();
    case 193:
      if (lookahead == 'T') ADVANCE(575);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(588);
      END_STATE();
    case 195:
      if (lookahead == 'T') ADVANCE(521);
      END_STATE();
    case 196:
      if (lookahead == 'T') ADVANCE(539);
      END_STATE();
    case 197:
      if (lookahead == 'T') ADVANCE(68);
      END_STATE();
    case 198:
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 199:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 200:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 201:
      if (lookahead == 'T') ADVANCE(104);
      END_STATE();
    case 202:
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 203:
      if (lookahead == 'U') ADVANCE(160);
      END_STATE();
    case 204:
      if (lookahead == 'U') ADVANCE(140);
      END_STATE();
    case 205:
      if (lookahead == 'U') ADVANCE(125);
      END_STATE();
    case 206:
      if (lookahead == 'U') ADVANCE(61);
      END_STATE();
    case 207:
      if (lookahead == 'V') ADVANCE(591);
      END_STATE();
    case 208:
      if (lookahead == 'V') ADVANCE(533);
      END_STATE();
    case 209:
      if (lookahead == 'V') ADVANCE(63);
      END_STATE();
    case 210:
      if (lookahead == 'V') ADVANCE(64);
      END_STATE();
    case 211:
      if (lookahead == 'W') ADVANCE(506);
      END_STATE();
    case 212:
      if (lookahead == 'X') ADVANCE(157);
      END_STATE();
    case 213:
      if (lookahead == 'X') ADVANCE(194);
      END_STATE();
    case 214:
      if (lookahead == '_') ADVANCE(358);
      if (lookahead == 's') ADVANCE(564);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(428);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(308);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(443);
      if (lookahead == 'g') ADVANCE(277);
      if (lookahead == 'h') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(412);
      if (lookahead == 'p') ADVANCE(381);
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 229:
      if (lookahead == 'b') ADVANCE(587);
      END_STATE();
    case 230:
      if (lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(569);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(580);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(322);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(319);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 237:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(557);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(542);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(548);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(517);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(371);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(400);
      if (lookahead == 'g') ADVANCE(535);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 286:
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 287:
      if (lookahead == 'f') ADVANCE(334);
      END_STATE();
    case 288:
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 'p') ADVANCE(387);
      if (lookahead == 'v') ADVANCE(274);
      END_STATE();
    case 289:
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 'p') ADVANCE(387);
      END_STATE();
    case 290:
      if (lookahead == 'g') ADVANCE(541);
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 291:
      if (lookahead == 'g') ADVANCE(300);
      END_STATE();
    case 292:
      if (lookahead == 'g') ADVANCE(563);
      END_STATE();
    case 293:
      if (lookahead == 'g') ADVANCE(565);
      END_STATE();
    case 294:
      if (lookahead == 'g') ADVANCE(388);
      END_STATE();
    case 295:
      if (lookahead == 'g') ADVANCE(404);
      END_STATE();
    case 296:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 297:
      if (lookahead == 'g') ADVANCE(259);
      END_STATE();
    case 298:
      if (lookahead == 'g') ADVANCE(406);
      END_STATE();
    case 299:
      if (lookahead == 'g') ADVANCE(227);
      END_STATE();
    case 300:
      if (lookahead == 'h') ADVANCE(427);
      END_STATE();
    case 301:
      if (lookahead == 'h') ADVANCE(377);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(452);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(359);
      END_STATE();
    case 310:
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 311:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 312:
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 313:
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 314:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(454);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(437);
      END_STATE();
    case 318:
      if (lookahead == 'k') ADVANCE(545);
      END_STATE();
    case 319:
      if (lookahead == 'k') ADVANCE(301);
      END_STATE();
    case 320:
      if (lookahead == 'k') ADVANCE(254);
      END_STATE();
    case 321:
      if (lookahead == 'k') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 322:
      if (lookahead == 'k') ADVANCE(242);
      END_STATE();
    case 323:
      if (lookahead == 'k') ADVANCE(263);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(549);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(556);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(566);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(573);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(582);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 333:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 336:
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 337:
      if (lookahead == 'l') ADVANCE(329);
      END_STATE();
    case 338:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(342);
      if (lookahead == 'u') ADVANCE(362);
      if (lookahead == 'w') ADVANCE(214);
      END_STATE();
    case 340:
      if (lookahead == 'l') ADVANCE(342);
      if (lookahead == 'w') ADVANCE(408);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(415);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 343:
      if (lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 344:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 345:
      if (lookahead == 'm') ADVANCE(491);
      END_STATE();
    case 346:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 347:
      if (lookahead == 'm') ADVANCE(382);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(562);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(525);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(507);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(592);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(574);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(434);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'q') ADVANCE(338);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 383:
      if (lookahead == 'p') ADVANCE(550);
      if (lookahead == 'x') ADVANCE(527);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 385:
      if (lookahead == 'p') ADVANCE(568);
      END_STATE();
    case 386:
      if (lookahead == 'p') ADVANCE(498);
      END_STATE();
    case 387:
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 388:
      if (lookahead == 'q') ADVANCE(449);
      END_STATE();
    case 389:
      if (lookahead == 'q') ADVANCE(330);
      END_STATE();
    case 390:
      if (lookahead == 'q') ADVANCE(331);
      END_STATE();
    case 391:
      if (lookahead == 'q') ADVANCE(332);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(494);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(420);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(564);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(584);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(419);
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(391);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(544);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(575);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 442:
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 443:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 445:
      if (lookahead == 'u') ADVANCE(361);
      END_STATE();
    case 446:
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 447:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 448:
      if (lookahead == 'u') ADVANCE(418);
      END_STATE();
    case 449:
      if (lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 450:
      if (lookahead == 'v') ADVANCE(591);
      END_STATE();
    case 451:
      if (lookahead == 'v') ADVANCE(533);
      END_STATE();
    case 452:
      if (lookahead == 'v') ADVANCE(257);
      END_STATE();
    case 453:
      if (lookahead == 'v') ADVANCE(258);
      END_STATE();
    case 454:
      if (lookahead == 'v') ADVANCE(260);
      END_STATE();
    case 455:
      if (lookahead == 'w') ADVANCE(506);
      END_STATE();
    case 456:
      if (lookahead == 'w') ADVANCE(287);
      END_STATE();
    case 457:
      if (lookahead == 'x') ADVANCE(384);
      END_STATE();
    case 458:
      if (lookahead == 'x') ADVANCE(431);
      END_STATE();
    case 459:
      if (lookahead == 'y') ADVANCE(578);
      END_STATE();
    case 460:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(460)
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '=') ADVANCE(593);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'A') ADVANCE(743);
      if (lookahead == 'C') ADVANCE(703);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'M') ADVANCE(635);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'R') ADVANCE(637);
      if (lookahead == 'S') ADVANCE(724);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(861);
      if (lookahead == 'c') ADVANCE(822);
      if (lookahead == 'f') ADVANCE(629);
      if (lookahead == 'm') ADVANCE(754);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(756);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 461:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(461)
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'A') ADVANCE(743);
      if (lookahead == 'C') ADVANCE(639);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'M') ADVANCE(635);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'S') ADVANCE(724);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(861);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(629);
      if (lookahead == 'm') ADVANCE(754);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 462:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(462)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(673);
      if (lookahead == 'D') ADVANCE(665);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'G') ADVANCE(718);
      if (lookahead == 'I') ADVANCE(702);
      if (lookahead == 'J') ADVANCE(707);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'O') ADVANCE(711);
      if (lookahead == 'R') ADVANCE(663);
      if (lookahead == 'S') ADVANCE(666);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'f') ADVANCE(752);
      if (lookahead == 'g') ADVANCE(837);
      if (lookahead == 'i') ADVANCE(821);
      if (lookahead == 'j') ADVANCE(826);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(830);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == 's') ADVANCE(785);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 463:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(463)
      if (lookahead == '!') ADVANCE(892);
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == '[') ADVANCE(599);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'f') ADVANCE(629);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 464:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(464)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(699);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'O') ADVANCE(711);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(818);
      if (lookahead == 'f') ADVANCE(753);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(830);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 465:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(465)
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == 'A') ADVANCE(674);
      if (lookahead == 'D') ADVANCE(665);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'G') ADVANCE(718);
      if (lookahead == 'I') ADVANCE(702);
      if (lookahead == 'J') ADVANCE(707);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'R') ADVANCE(663);
      if (lookahead == 'S') ADVANCE(666);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(793);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'f') ADVANCE(752);
      if (lookahead == 'g') ADVANCE(837);
      if (lookahead == 'i') ADVANCE(821);
      if (lookahead == 'j') ADVANCE(826);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == 's') ADVANCE(785);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 466:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(466)
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'f') ADVANCE(753);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 467:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(467)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      END_STATE();
    case 468:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(468)
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '[') ADVANCE(599);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(880);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 469:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(469)
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == 'S') ADVANCE(682);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == '|') ADVANCE(894);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 470:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(470)
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 471:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(471)
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 472:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(617);
      if (lookahead == '"') ADVANCE(616);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead != 0) ADVANCE(615);
      END_STATE();
    case 473:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(618);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead != 0) ADVANCE(615);
      END_STATE();
    case 474:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(474)
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(868);
      END_STATE();
    case 475:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(475)
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'A') ADVANCE(743);
      if (lookahead == 'C') ADVANCE(706);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'M') ADVANCE(635);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'S') ADVANCE(724);
      if (lookahead == 'T') ADVANCE(714);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(861);
      if (lookahead == 'c') ADVANCE(825);
      if (lookahead == 'f') ADVANCE(629);
      if (lookahead == 'm') ADVANCE(754);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 476:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(882);
      END_STATE();
    case 477:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(878);
      END_STATE();
    case 478:
      if (eof) ADVANCE(489);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(594);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'G') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'J') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(202);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'V') ADVANCE(75);
      if (lookahead == '[') ADVANCE(599);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'f') ADVANCE(219);
      if (lookahead == 'g') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'j') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'v') ADVANCE(273);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(488)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      END_STATE();
    case 479:
      if (eof) ADVANCE(489);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(673);
      if (lookahead == 'D') ADVANCE(665);
      if (lookahead == 'F') ADVANCE(632);
      if (lookahead == 'G') ADVANCE(718);
      if (lookahead == 'I') ADVANCE(702);
      if (lookahead == 'J') ADVANCE(707);
      if (lookahead == 'L') ADVANCE(667);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'O') ADVANCE(711);
      if (lookahead == 'R') ADVANCE(663);
      if (lookahead == 'S') ADVANCE(666);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'f') ADVANCE(751);
      if (lookahead == 'g') ADVANCE(837);
      if (lookahead == 'i') ADVANCE(821);
      if (lookahead == 'j') ADVANCE(826);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(830);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == 's') ADVANCE(785);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(484)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 480:
      if (eof) ADVANCE(489);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(212);
      if (lookahead == 'F') ADVANCE(101);
      if (lookahead == 'G') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'J') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'P') ADVANCE(164);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(884);
      if (lookahead == 'W') ADVANCE(98);
      if (lookahead == 'Z') ADVANCE(885);
      if (lookahead == '[') ADVANCE(599);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 'g') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'j') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == 'w') ADVANCE(304);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(485)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      END_STATE();
    case 481:
      if (eof) ADVANCE(489);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(212);
      if (lookahead == 'F') ADVANCE(102);
      if (lookahead == 'G') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'J') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(884);
      if (lookahead == 'W') ADVANCE(98);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'g') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'j') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == 'w') ADVANCE(304);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(486)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      END_STATE();
    case 482:
      if (eof) ADVANCE(489);
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == 'A') ADVANCE(674);
      if (lookahead == 'D') ADVANCE(665);
      if (lookahead == 'F') ADVANCE(632);
      if (lookahead == 'G') ADVANCE(718);
      if (lookahead == 'I') ADVANCE(702);
      if (lookahead == 'J') ADVANCE(707);
      if (lookahead == 'L') ADVANCE(667);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'R') ADVANCE(663);
      if (lookahead == 'S') ADVANCE(666);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(793);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'f') ADVANCE(751);
      if (lookahead == 'g') ADVANCE(837);
      if (lookahead == 'i') ADVANCE(821);
      if (lookahead == 'j') ADVANCE(826);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == 's') ADVANCE(785);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(487)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 483:
      if (eof) ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(483)
      if (lookahead == '!') ADVANCE(893);
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == 'C') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(212);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'G') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'J') ADVANCE(155);
      if (lookahead == 'L') ADVANCE(29);
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'N') ADVANCE(202);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'P') ADVANCE(164);
      if (lookahead == 'R') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(883);
      if (lookahead == 'V') ADVANCE(75);
      if (lookahead == 'W') ADVANCE(98);
      if (lookahead == 'Z') ADVANCE(885);
      if (lookahead == '[') ADVANCE(599);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead == 'j') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'v') ADVANCE(273);
      if (lookahead == 'w') ADVANCE(304);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      END_STATE();
    case 484:
      if (eof) ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(484)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(673);
      if (lookahead == 'D') ADVANCE(665);
      if (lookahead == 'F') ADVANCE(632);
      if (lookahead == 'G') ADVANCE(718);
      if (lookahead == 'I') ADVANCE(702);
      if (lookahead == 'J') ADVANCE(707);
      if (lookahead == 'L') ADVANCE(667);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'O') ADVANCE(711);
      if (lookahead == 'R') ADVANCE(663);
      if (lookahead == 'S') ADVANCE(666);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(792);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'f') ADVANCE(751);
      if (lookahead == 'g') ADVANCE(837);
      if (lookahead == 'i') ADVANCE(821);
      if (lookahead == 'j') ADVANCE(826);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(830);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == 's') ADVANCE(785);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 485:
      if (eof) ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(485)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(212);
      if (lookahead == 'F') ADVANCE(101);
      if (lookahead == 'G') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'J') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'P') ADVANCE(164);
      if (lookahead == 'R') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(884);
      if (lookahead == 'W') ADVANCE(98);
      if (lookahead == 'Z') ADVANCE(885);
      if (lookahead == '[') ADVANCE(599);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 'g') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'j') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == 'w') ADVANCE(304);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      END_STATE();
    case 486:
      if (eof) ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(486)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(212);
      if (lookahead == 'F') ADVANCE(102);
      if (lookahead == 'G') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'J') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(884);
      if (lookahead == 'W') ADVANCE(98);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'g') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'j') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == 'w') ADVANCE(304);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      END_STATE();
    case 487:
      if (eof) ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(487)
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == ':') ADVANCE(576);
      if (lookahead == 'A') ADVANCE(674);
      if (lookahead == 'D') ADVANCE(665);
      if (lookahead == 'F') ADVANCE(632);
      if (lookahead == 'G') ADVANCE(718);
      if (lookahead == 'I') ADVANCE(702);
      if (lookahead == 'J') ADVANCE(707);
      if (lookahead == 'L') ADVANCE(667);
      if (lookahead == 'N') ADVANCE(739);
      if (lookahead == 'R') ADVANCE(663);
      if (lookahead == 'S') ADVANCE(666);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(628);
      if (lookahead == 'a') ADVANCE(793);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'f') ADVANCE(751);
      if (lookahead == 'g') ADVANCE(837);
      if (lookahead == 'i') ADVANCE(821);
      if (lookahead == 'j') ADVANCE(826);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == 's') ADVANCE(785);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 488:
      if (eof) ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(488)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(607);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\'') ADVANCE(611);
      if (lookahead == '(') ADVANCE(596);
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '*') ADVANCE(870);
      if (lookahead == '+') ADVANCE(605);
      if (lookahead == ',') ADVANCE(600);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '<') ADVANCE(875);
      if (lookahead == '=') ADVANCE(594);
      if (lookahead == '>') ADVANCE(873);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'G') ADVANCE(169);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'J') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(202);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'V') ADVANCE(75);
      if (lookahead == '[') ADVANCE(599);
      if (lookahead == ']') ADVANCE(601);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'f') ADVANCE(219);
      if (lookahead == 'g') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'j') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'v') ADVANCE(273);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(197);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(435);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_keyword_case);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_keyword_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_keyword_append);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_keyword_append);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_keyword_remove);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_keyword_remove);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_keyword_intersect);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_keyword_intersect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(244);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_keyword_lag);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_keyword_lead);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_keyword_first);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_keyword_last);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_keyword_rank);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_keyword_rank);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_keyword_row_number);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_keyword_round);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_keyword_all);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_keyword_map);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_keyword_loop);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_keyword_from_text);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_keyword_from_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_keyword_format);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_keyword_csv);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_keyword_json);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(606);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(606);
      if (lookahead == '>') ADVANCE(602);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(598);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(888);
      if (lookahead == '|') ADVANCE(896);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(610);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(609);
      if (lookahead == '#') ADVANCE(888);
      if (lookahead == '|') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(610);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(610);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '#') ADVANCE(889);
      if (lookahead == '|') ADVANCE(897);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(614);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(613);
      if (lookahead == '#') ADVANCE(889);
      if (lookahead == '|') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(614);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(617);
      if (lookahead == '"') ADVANCE(616);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead != 0) ADVANCE(615);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(618);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead != 0) ADVANCE(615);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == 'a') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(622);
      if (lookahead == 't') ADVANCE(767);
      if (lookahead == 'u') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(685);
      if (lookahead == 'I') ADVANCE(689);
      if (lookahead == 'R') ADVANCE(704);
      if (lookahead == 'U') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(685);
      if (lookahead == 'I') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(747);
      if (lookahead == 'I') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(684);
      if (lookahead == 'R') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(722);
      if (lookahead == 'O') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(713);
      if (lookahead == 'G') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(688);
      if (lookahead == 'O') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(677);
      if (lookahead == 'N') ADVANCE(646);
      if (lookahead == 'P') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(677);
      if (lookahead == 'P') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(648);
      if (lookahead == 'U') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(804);
      if (lookahead == 'i') ADVANCE(808);
      if (lookahead == 'r') ADVANCE(823);
      if (lookahead == 'u') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(804);
      if (lookahead == 'i') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(865);
      if (lookahead == 'i') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead == 'r') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(841);
      if (lookahead == 'o') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(832);
      if (lookahead == 'g') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(807);
      if (lookahead == 'o') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(796);
      if (lookahead == 'n') ADVANCE(765);
      if (lookahead == 'p') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(796);
      if (lookahead == 'p') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(867);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__identifier_dot);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(868);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(874);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(876);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(879);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'R') ADVANCE(206);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(108);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(891);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(610);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(614);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(887);
      if (lookahead == '|') ADVANCE(895);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(891);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(891);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_bang);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(872);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_pipe);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(891);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(610);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(614);
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
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 479},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 480},
  [13] = {.lex_state = 480},
  [14] = {.lex_state = 480},
  [15] = {.lex_state = 480},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 481},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 479},
  [52] = {.lex_state = 479},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 480},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 480},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 480},
  [71] = {.lex_state = 480},
  [72] = {.lex_state = 480},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 482},
  [75] = {.lex_state = 480},
  [76] = {.lex_state = 482},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 480},
  [79] = {.lex_state = 480},
  [80] = {.lex_state = 480},
  [81] = {.lex_state = 480},
  [82] = {.lex_state = 480},
  [83] = {.lex_state = 480},
  [84] = {.lex_state = 480},
  [85] = {.lex_state = 480},
  [86] = {.lex_state = 480},
  [87] = {.lex_state = 480},
  [88] = {.lex_state = 480},
  [89] = {.lex_state = 480},
  [90] = {.lex_state = 480},
  [91] = {.lex_state = 480},
  [92] = {.lex_state = 480},
  [93] = {.lex_state = 480},
  [94] = {.lex_state = 480},
  [95] = {.lex_state = 480},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 480},
  [98] = {.lex_state = 480},
  [99] = {.lex_state = 480},
  [100] = {.lex_state = 480},
  [101] = {.lex_state = 480},
  [102] = {.lex_state = 480},
  [103] = {.lex_state = 480},
  [104] = {.lex_state = 480},
  [105] = {.lex_state = 480},
  [106] = {.lex_state = 480},
  [107] = {.lex_state = 480},
  [108] = {.lex_state = 480},
  [109] = {.lex_state = 480},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 480},
  [112] = {.lex_state = 480},
  [113] = {.lex_state = 480},
  [114] = {.lex_state = 480},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 480},
  [118] = {.lex_state = 478},
  [119] = {.lex_state = 482},
  [120] = {.lex_state = 482},
  [121] = {.lex_state = 482},
  [122] = {.lex_state = 482},
  [123] = {.lex_state = 482},
  [124] = {.lex_state = 482},
  [125] = {.lex_state = 482},
  [126] = {.lex_state = 482},
  [127] = {.lex_state = 482},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 482},
  [130] = {.lex_state = 482},
  [131] = {.lex_state = 482},
  [132] = {.lex_state = 482},
  [133] = {.lex_state = 480},
  [134] = {.lex_state = 482},
  [135] = {.lex_state = 482},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 482},
  [138] = {.lex_state = 480},
  [139] = {.lex_state = 482},
  [140] = {.lex_state = 481},
  [141] = {.lex_state = 481},
  [142] = {.lex_state = 480},
  [143] = {.lex_state = 480},
  [144] = {.lex_state = 478},
  [145] = {.lex_state = 481},
  [146] = {.lex_state = 481},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 480},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 481},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 480},
  [169] = {.lex_state = 480},
  [170] = {.lex_state = 480},
  [171] = {.lex_state = 480},
  [172] = {.lex_state = 480},
  [173] = {.lex_state = 480},
  [174] = {.lex_state = 480},
  [175] = {.lex_state = 480},
  [176] = {.lex_state = 480},
  [177] = {.lex_state = 480},
  [178] = {.lex_state = 480},
  [179] = {.lex_state = 480},
  [180] = {.lex_state = 480},
  [181] = {.lex_state = 480},
  [182] = {.lex_state = 480},
  [183] = {.lex_state = 480},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 478},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 481},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 480},
  [190] = {.lex_state = 480},
  [191] = {.lex_state = 480},
  [192] = {.lex_state = 480},
  [193] = {.lex_state = 480},
  [194] = {.lex_state = 480},
  [195] = {.lex_state = 480},
  [196] = {.lex_state = 478},
  [197] = {.lex_state = 480},
  [198] = {.lex_state = 480},
  [199] = {.lex_state = 480},
  [200] = {.lex_state = 480},
  [201] = {.lex_state = 480},
  [202] = {.lex_state = 480},
  [203] = {.lex_state = 480},
  [204] = {.lex_state = 480},
  [205] = {.lex_state = 480},
  [206] = {.lex_state = 480},
  [207] = {.lex_state = 480},
  [208] = {.lex_state = 480},
  [209] = {.lex_state = 480},
  [210] = {.lex_state = 480},
  [211] = {.lex_state = 480},
  [212] = {.lex_state = 480},
  [213] = {.lex_state = 480},
  [214] = {.lex_state = 480},
  [215] = {.lex_state = 480},
  [216] = {.lex_state = 480},
  [217] = {.lex_state = 480},
  [218] = {.lex_state = 480},
  [219] = {.lex_state = 480},
  [220] = {.lex_state = 480},
  [221] = {.lex_state = 480},
  [222] = {.lex_state = 480},
  [223] = {.lex_state = 480},
  [224] = {.lex_state = 480},
  [225] = {.lex_state = 480},
  [226] = {.lex_state = 480},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 480},
  [229] = {.lex_state = 480},
  [230] = {.lex_state = 480},
  [231] = {.lex_state = 480},
  [232] = {.lex_state = 480},
  [233] = {.lex_state = 480},
  [234] = {.lex_state = 480},
  [235] = {.lex_state = 480},
  [236] = {.lex_state = 480},
  [237] = {.lex_state = 480},
  [238] = {.lex_state = 480},
  [239] = {.lex_state = 478},
  [240] = {.lex_state = 478},
  [241] = {.lex_state = 480},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 478},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 478},
  [246] = {.lex_state = 478},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 478},
  [249] = {.lex_state = 478},
  [250] = {.lex_state = 478},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 478},
  [254] = {.lex_state = 480},
  [255] = {.lex_state = 478},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 480},
  [263] = {.lex_state = 480},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 480},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 480},
  [272] = {.lex_state = 480},
  [273] = {.lex_state = 480},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 3},
  [277] = {.lex_state = 480},
  [278] = {.lex_state = 480},
  [279] = {.lex_state = 480},
  [280] = {.lex_state = 478},
  [281] = {.lex_state = 480},
  [282] = {.lex_state = 480},
  [283] = {.lex_state = 480},
  [284] = {.lex_state = 480},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 16},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 480},
  [302] = {.lex_state = 16},
  [303] = {.lex_state = 480},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 16},
  [307] = {.lex_state = 16},
  [308] = {.lex_state = 19},
  [309] = {.lex_state = 18},
  [310] = {.lex_state = 18},
  [311] = {.lex_state = 18},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 18},
  [318] = {.lex_state = 17},
  [319] = {.lex_state = 17},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 481},
  [324] = {.lex_state = 16},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 480},
  [328] = {.lex_state = 480},
  [329] = {.lex_state = 480},
  [330] = {.lex_state = 16},
  [331] = {.lex_state = 480},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 16},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 16},
  [338] = {.lex_state = 17},
  [339] = {.lex_state = 3},
  [340] = {.lex_state = 480},
  [341] = {.lex_state = 480},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 480},
  [344] = {.lex_state = 17},
  [345] = {.lex_state = 480},
  [346] = {.lex_state = 17},
  [347] = {.lex_state = 17},
  [348] = {.lex_state = 480},
  [349] = {.lex_state = 16},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 17},
  [352] = {.lex_state = 480},
  [353] = {.lex_state = 472},
  [354] = {.lex_state = 17},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 17},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 472},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 16},
  [365] = {.lex_state = 16},
  [366] = {.lex_state = 480},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 17},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 16},
  [372] = {.lex_state = 17},
  [373] = {.lex_state = 472},
  [374] = {.lex_state = 480},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 480},
  [378] = {.lex_state = 16},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 17},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 16},
  [384] = {.lex_state = 17},
  [385] = {.lex_state = 17},
  [386] = {.lex_state = 17},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 472},
  [395] = {.lex_state = 480},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 478},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 16},
  [402] = {.lex_state = 473},
  [403] = {.lex_state = 473},
  [404] = {.lex_state = 3},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 472},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 3},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 473},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 16},
  [415] = {.lex_state = 16},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 890},
  [424] = {.lex_state = 6},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 6},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 481},
  [433] = {.lex_state = 16},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 6},
  [439] = {.lex_state = 608},
  [440] = {.lex_state = 608},
  [441] = {.lex_state = 612},
  [442] = {.lex_state = 608},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 16},
  [445] = {.lex_state = 16},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 6},
  [453] = {.lex_state = 6},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 6},
  [461] = {.lex_state = 6},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 6},
  [469] = {.lex_state = 6},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 6},
  [475] = {.lex_state = 6},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 20},
  [482] = {.lex_state = 608},
  [483] = {.lex_state = 612},
  [484] = {.lex_state = 6},
  [485] = {.lex_state = 20},
  [486] = {.lex_state = 608},
  [487] = {.lex_state = 612},
  [488] = {.lex_state = 20},
  [489] = {.lex_state = 20},
  [490] = {.lex_state = 608},
  [491] = {.lex_state = 612},
  [492] = {.lex_state = 20},
  [493] = {.lex_state = 608},
  [494] = {.lex_state = 612},
  [495] = {.lex_state = 20},
  [496] = {.lex_state = 20},
  [497] = {.lex_state = 20},
  [498] = {.lex_state = 6},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {(TSStateId)(-1)},
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
    [sym_keyword_case] = ACTIONS(1),
    [sym_keyword_append] = ACTIONS(1),
    [sym_keyword_remove] = ACTIONS(1),
    [sym_keyword_intersect] = ACTIONS(1),
    [sym_keyword_average] = ACTIONS(1),
    [sym_keyword_min] = ACTIONS(1),
    [sym_keyword_max] = ACTIONS(1),
    [sym_keyword_count] = ACTIONS(1),
    [sym_keyword_stddev] = ACTIONS(1),
    [sym_keyword_avg] = ACTIONS(1),
    [sym_keyword_sum] = ACTIONS(1),
    [sym_keyword_count_distinct] = ACTIONS(1),
    [sym_keyword_lag] = ACTIONS(1),
    [sym_keyword_lead] = ACTIONS(1),
    [sym_keyword_first] = ACTIONS(1),
    [sym_keyword_last] = ACTIONS(1),
    [sym_keyword_rank] = ACTIONS(1),
    [sym_keyword_row_number] = ACTIONS(1),
    [sym_keyword_round] = ACTIONS(1),
    [sym_keyword_all] = ACTIONS(1),
    [sym_keyword_map] = ACTIONS(1),
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
    [sym_keyword_loop] = ACTIONS(1),
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
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_f_DQUOTE] = ACTIONS(1),
    [anon_sym_f_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_s_DQUOTE] = ACTIONS(1),
    [anon_sym_s_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym__natural_number] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
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
    [sym_pipe] = ACTIONS(5),
  },
  [1] = {
    [sym_program] = STATE(499),
    [sym_prql] = STATE(322),
    [sym_pipeline] = STATE(332),
    [sym_variable] = STATE(332),
    [sym_function_definition] = STATE(332),
    [sym_from_text] = STATE(133),
    [sym_from] = STATE(133),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(274),
    [aux_sym_program_repeat2] = STATE(288),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_keyword_from] = ACTIONS(9),
    [sym_keyword_func] = ACTIONS(11),
    [sym_keyword_let] = ACTIONS(13),
    [sym_keyword_prql] = ACTIONS(15),
    [sym_keyword_from_text] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_pipe] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 37,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      sym_keyword_count_distinct,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(2), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym__agg_keywords,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(240), 1,
      sym_binary_expression,
    STATE(280), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(23), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(393), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(21), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(87), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [131] = 36,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      sym_keyword_count_distinct,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym__agg_keywords,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(253), 1,
      sym_binary_expression,
    STATE(280), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(23), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(405), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(21), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(87), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [259] = 36,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      sym_keyword_count_distinct,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym__agg_keywords,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(253), 1,
      sym_binary_expression,
    STATE(280), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(23), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(405), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(21), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(87), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [387] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      sym_keyword_count_distinct,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(5), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym__agg_keywords,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(253), 1,
      sym_binary_expression,
    STATE(280), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(23), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(405), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(21), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(87), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [512] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      sym_keyword_case,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_BQUOTE,
    ACTIONS(69), 1,
      sym__identifier,
    STATE(6), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym__agg_keywords,
    STATE(77), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym__expression,
    STATE(182), 1,
      sym__agg_rhs_assignment,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(180), 2,
      sym_function_call,
      sym_case,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(21), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [634] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      sym_keyword_case,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_BQUOTE,
    ACTIONS(73), 1,
      sym__identifier,
    STATE(7), 1,
      sym_comment,
    STATE(11), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym__agg_keywords,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym__expression,
    STATE(182), 1,
      sym__agg_rhs_assignment,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(180), 2,
      sym_function_call,
      sym_case,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(21), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [756] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      sym_keyword_case,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_BQUOTE,
    ACTIONS(77), 1,
      sym__identifier,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym__agg_keywords,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym__expression,
    STATE(182), 1,
      sym__agg_rhs_assignment,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(180), 2,
      sym_function_call,
      sym_case,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(21), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [878] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      sym__natural_number,
    ACTIONS(91), 1,
      anon_sym__,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    STATE(9), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_function_call_repeat1,
    STATE(119), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym__friendly_number,
    STATE(125), 1,
      sym_integer,
    STATE(135), 1,
      sym__call_parameter,
    STATE(137), 1,
      sym_literal,
    STATE(129), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(134), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(83), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(79), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
    ACTIONS(81), 19,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_GT,
      anon_sym_LT,
  [973] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      anon_sym_BQUOTE,
    ACTIONS(69), 1,
      sym__identifier,
    STATE(10), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym__agg_keywords,
    STATE(77), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(271), 1,
      sym_binary_expression,
    STATE(281), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(451), 1,
      sym__agg_rhs_assignment,
    STATE(456), 1,
      sym_function_call,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(21), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(87), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1093] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__natural_number,
    ACTIONS(107), 1,
      anon_sym__,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__identifier,
    STATE(11), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_function_call_repeat1,
    STATE(152), 1,
      aux_sym__friendly_number,
    STATE(154), 1,
      sym_identifier,
    STATE(156), 1,
      sym__call_parameter,
    STATE(162), 1,
      sym_literal,
    STATE(164), 1,
      sym_integer,
    STATE(157), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(161), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(99), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(79), 10,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
    ACTIONS(81), 15,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
  [1184] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(119), 2,
      sym__natural_number,
      anon_sym__,
    STATE(12), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(117), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 37,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [1244] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(13), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(124), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(122), 37,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [1306] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(14), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(128), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(126), 37,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [1368] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(15), 1,
      sym_comment,
    ACTIONS(132), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(130), 39,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      sym__natural_number,
      anon_sym__,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [1425] = 36,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_case_repeat1,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_case_condition,
    STATE(275), 1,
      sym_literal,
    STATE(276), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(376), 1,
      aux_sym_case_repeat2,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1544] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(17), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_case_repeat1,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_case_condition,
    STATE(275), 1,
      sym_literal,
    STATE(276), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1658] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(18), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(382), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1770] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(175), 1,
      sym__natural_number,
    ACTIONS(178), 1,
      anon_sym__,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_BQUOTE,
    ACTIONS(187), 1,
      sym__identifier,
    ACTIONS(190), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_case_condition,
    STATE(275), 1,
      sym_literal,
    STATE(276), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(19), 2,
      sym_comment,
      aux_sym_case_repeat1,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(146), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1882] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      aux_sym_case_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_case_condition,
    STATE(275), 1,
      sym_literal,
    STATE(276), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1998] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      sym_bang,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(21), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(144), 1,
      sym__expression,
    STATE(178), 1,
      sym_assignment,
    STATE(232), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2110] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      sym_bang,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(22), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(178), 1,
      sym_assignment,
    STATE(232), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2222] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(23), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(367), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2334] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(24), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(375), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2446] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(25), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(370), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2558] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(26), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2667] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(27), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(144), 1,
      sym__expression,
    STATE(210), 1,
      sym_assignment,
    STATE(211), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2776] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(28), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(210), 1,
      sym_assignment,
    STATE(211), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2885] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(29), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(435), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2994] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    ACTIONS(223), 1,
      anon_sym_EQ_EQ,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(30), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(254), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3105] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(31), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3214] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(32), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(398), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3323] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(33), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(196), 1,
      sym__expression,
    STATE(210), 1,
      sym_assignment,
    STATE(211), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3432] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(34), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3541] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(35), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3650] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(17), 1,
      aux_sym_case_repeat1,
    STATE(36), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_case_condition,
    STATE(275), 1,
      sym_literal,
    STATE(276), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3763] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(17), 1,
      aux_sym_case_repeat1,
    STATE(37), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_case_condition,
    STATE(275), 1,
      sym_literal,
    STATE(276), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3876] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(38), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(398), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3985] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(39), 1,
      sym_comment,
    ACTIONS(243), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(241), 36,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [4040] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(40), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(398), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4149] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(41), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4258] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(42), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(263), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4362] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(459), 1,
      sym_term,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4468] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(17), 1,
      aux_sym_case_repeat1,
    STATE(44), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_case_condition,
    STATE(275), 1,
      sym_literal,
    STATE(276), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4578] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(45), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4684] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(46), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(263), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4788] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(47), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(196), 1,
      sym__expression,
    STATE(398), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4894] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(48), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(265), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4999] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(49), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(265), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5104] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(50), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(117), 1,
      sym__expression,
    STATE(213), 1,
      sym__boolean_expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5207] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(51), 1,
      sym_comment,
    ACTIONS(257), 15,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
    ACTIONS(259), 24,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
  [5260] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(52), 1,
      sym_comment,
    ACTIONS(261), 15,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
    ACTIONS(263), 24,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
  [5313] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(53), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(277), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5415] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(189), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5517] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(55), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(272), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5617] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(56), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(265), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5719] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(271), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5821] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(101), 1,
      sym__expression,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5921] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(113), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6021] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(60), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__expression,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6121] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(61), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(273), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6223] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(62), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(104), 1,
      sym__expression,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6323] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(63), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(105), 1,
      sym__expression,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6423] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(64), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(112), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6523] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(65), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(106), 1,
      sym__expression,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6623] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(271), 1,
      anon_sym_Z,
    STATE(66), 1,
      sym_comment,
    STATE(98), 1,
      sym_timezone,
    STATE(433), 1,
      sym_direction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(267), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(265), 29,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6683] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(279), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6783] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(277), 1,
      anon_sym_COLON,
    ACTIONS(279), 1,
      anon_sym_DOT,
    STATE(68), 1,
      sym_comment,
    ACTIONS(275), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [6839] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(262), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6939] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(285), 1,
      anon_sym_COLON,
    ACTIONS(287), 1,
      anon_sym_DOT,
    STATE(70), 1,
      sym_comment,
    ACTIONS(283), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(281), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [6995] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(71), 1,
      sym_comment,
    ACTIONS(263), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(261), 34,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7047] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(72), 1,
      sym_comment,
    ACTIONS(259), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(257), 34,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7099] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      sym__natural_number,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(73), 1,
      sym_comment,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(109), 1,
      sym__single_quote_string,
    STATE(278), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(108), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(87), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7201] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      sym__natural_number,
    ACTIONS(91), 1,
      anon_sym__,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 1,
      anon_sym_DASH,
    STATE(74), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_function_call_repeat1,
    STATE(119), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym__friendly_number,
    STATE(125), 1,
      sym_integer,
    STATE(135), 1,
      sym__call_parameter,
    STATE(137), 1,
      sym_literal,
    STATE(129), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(134), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(83), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(291), 15,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [7286] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(299), 1,
      anon_sym_DOT,
    STATE(75), 1,
      sym_comment,
    ACTIONS(297), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(295), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [7339] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      anon_sym_DASH,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      anon_sym_SQUOTE,
    ACTIONS(317), 1,
      sym__natural_number,
    ACTIONS(320), 1,
      anon_sym__,
    ACTIONS(323), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_BQUOTE,
    ACTIONS(329), 1,
      sym__identifier,
    STATE(119), 1,
      sym_identifier,
    STATE(122), 1,
      aux_sym__friendly_number,
    STATE(125), 1,
      sym_integer,
    STATE(135), 1,
      sym__call_parameter,
    STATE(137), 1,
      sym_literal,
    STATE(76), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(129), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(134), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(305), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(303), 15,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [7422] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
    ACTIONS(338), 1,
      sym__natural_number,
    ACTIONS(340), 1,
      anon_sym__,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_BQUOTE,
    ACTIONS(346), 1,
      sym__identifier,
    STATE(77), 1,
      sym_comment,
    STATE(147), 1,
      aux_sym_function_call_repeat1,
    STATE(242), 1,
      aux_sym__friendly_number,
    STATE(251), 1,
      sym_identifier,
    STATE(258), 1,
      sym_integer,
    STATE(269), 1,
      sym__call_parameter,
    STATE(270), 1,
      sym_literal,
    STATE(259), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(261), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(332), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(81), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7505] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(78), 1,
      sym_comment,
    ACTIONS(350), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(348), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7556] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(356), 1,
      anon_sym_T,
    STATE(79), 1,
      sym_comment,
    ACTIONS(354), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7608] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(358), 1,
      anon_sym_DOT,
    STATE(80), 1,
      sym_comment,
    ACTIONS(81), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7660] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(364), 1,
      anon_sym_DOT,
    STATE(81), 1,
      sym_comment,
    ACTIONS(362), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7712] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(82), 1,
      sym_comment,
    ACTIONS(297), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(295), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [7762] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(83), 1,
      sym_comment,
    ACTIONS(283), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(281), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [7812] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(370), 1,
      anon_sym_DOT,
    STATE(84), 1,
      sym_comment,
    ACTIONS(368), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7864] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(376), 1,
      sym__natural_number,
    STATE(85), 1,
      sym_comment,
    ACTIONS(374), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7916] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(86), 1,
      sym_comment,
    ACTIONS(380), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [7966] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(87), 1,
      sym_comment,
    ACTIONS(384), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8015] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(88), 1,
      sym_comment,
    ACTIONS(388), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8064] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(89), 1,
      sym_comment,
    ACTIONS(392), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8113] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(90), 1,
      sym_comment,
    ACTIONS(396), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8162] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(91), 1,
      sym_comment,
    ACTIONS(374), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(372), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8211] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(92), 1,
      sym_comment,
    ACTIONS(400), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8260] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(93), 1,
      sym_comment,
    ACTIONS(404), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8309] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(94), 1,
      sym_comment,
    ACTIONS(362), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8358] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(95), 1,
      sym_comment,
    ACTIONS(408), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8407] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(96), 1,
      sym_comment,
    ACTIONS(257), 15,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
    ACTIONS(259), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
  [8456] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(97), 1,
      sym_comment,
    ACTIONS(412), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8505] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(98), 1,
      sym_comment,
    ACTIONS(416), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8554] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(99), 1,
      sym_comment,
    ACTIONS(420), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8603] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(100), 1,
      sym_comment,
    ACTIONS(424), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8652] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    STATE(101), 1,
      sym_comment,
    ACTIONS(428), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(426), 22,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [8711] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(440), 1,
      sym_keyword_and,
    STATE(102), 1,
      sym_comment,
    ACTIONS(428), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(426), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [8772] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(103), 1,
      sym_comment,
    ACTIONS(444), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8821] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(104), 1,
      sym_comment,
    ACTIONS(428), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8870] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(105), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(428), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 27,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8923] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(106), 1,
      sym_comment,
    ACTIONS(428), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(426), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK_QMARK,
  [8980] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(107), 1,
      sym_comment,
    ACTIONS(448), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [9029] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(108), 1,
      sym_comment,
    ACTIONS(452), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [9078] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(109), 1,
      sym_comment,
    ACTIONS(368), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [9127] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(110), 1,
      sym_comment,
    ACTIONS(261), 15,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
    ACTIONS(263), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
  [9176] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(111), 1,
      sym_comment,
    ACTIONS(456), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(454), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [9225] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(112), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(428), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 29,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [9276] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(440), 1,
      sym_keyword_and,
    ACTIONS(460), 1,
      sym_keyword_from,
    ACTIONS(462), 1,
      sym_keyword_or,
    STATE(113), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(458), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9337] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(440), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    ACTIONS(466), 1,
      sym_keyword_from,
    STATE(114), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(464), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9398] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(471), 1,
      anon_sym_DASH,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    ACTIONS(477), 1,
      anon_sym_SQUOTE,
    ACTIONS(480), 1,
      sym__natural_number,
    ACTIONS(483), 1,
      anon_sym__,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(492), 1,
      sym__identifier,
    STATE(152), 1,
      aux_sym__friendly_number,
    STATE(154), 1,
      sym_identifier,
    STATE(156), 1,
      sym__call_parameter,
    STATE(162), 1,
      sym_literal,
    STATE(164), 1,
      sym_integer,
    STATE(115), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(157), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(161), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(468), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(303), 11,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
  [9477] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__natural_number,
    ACTIONS(107), 1,
      anon_sym__,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__identifier,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(115), 1,
      aux_sym_function_call_repeat1,
    STATE(116), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym__friendly_number,
    STATE(154), 1,
      sym_identifier,
    STATE(156), 1,
      sym__call_parameter,
    STATE(162), 1,
      sym_literal,
    STATE(164), 1,
      sym_integer,
    STATE(157), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(161), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(99), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(291), 11,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
  [9558] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(440), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    ACTIONS(499), 1,
      sym_keyword_from,
    STATE(117), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(497), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [9616] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(440), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    ACTIONS(503), 1,
      sym_keyword_from,
    ACTIONS(505), 1,
      anon_sym_EQ,
    STATE(118), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(501), 15,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [9676] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(511), 1,
      anon_sym_COLON,
    STATE(119), 1,
      sym_comment,
    ACTIONS(507), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(509), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [9720] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(120), 1,
      sym_comment,
    ACTIONS(261), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(263), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [9762] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(121), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym__friendly_number,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(128), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [9806] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(122), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym__friendly_number,
    ACTIONS(122), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(124), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [9850] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(513), 1,
      sym__natural_number,
    ACTIONS(516), 1,
      anon_sym__,
    STATE(123), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(117), 19,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      sym__identifier,
  [9896] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(124), 1,
      sym_comment,
    ACTIONS(257), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(259), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [9938] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(125), 1,
      sym_comment,
    ACTIONS(360), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(362), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [9979] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(126), 1,
      sym_comment,
    ACTIONS(372), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(374), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10020] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(127), 1,
      sym_comment,
    ACTIONS(394), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(396), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10061] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(128), 1,
      sym_comment,
    ACTIONS(259), 9,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(257), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [10102] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(129), 1,
      sym_comment,
    ACTIONS(360), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(362), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10143] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(130), 1,
      sym_comment,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(132), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10184] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(131), 1,
      sym_comment,
    ACTIONS(398), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(400), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10225] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(132), 1,
      sym_comment,
    ACTIONS(519), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(521), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10266] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_from,
    ACTIONS(527), 1,
      sym_keyword_filter,
    ACTIONS(529), 1,
      sym_keyword_derive,
    ACTIONS(531), 1,
      sym_keyword_group,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(539), 1,
      sym_keyword_join,
    ACTIONS(541), 1,
      sym_keyword_select,
    STATE(133), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_transforms_repeat1,
    STATE(314), 1,
      sym_transforms,
    ACTIONS(543), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(523), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(225), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10331] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(134), 1,
      sym_comment,
    ACTIONS(366), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(368), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10372] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(135), 1,
      sym_comment,
    ACTIONS(545), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(547), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10413] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(136), 1,
      sym_comment,
    ACTIONS(263), 9,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(261), 18,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [10454] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(137), 1,
      sym_comment,
    ACTIONS(507), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(509), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10495] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(527), 1,
      sym_keyword_filter,
    ACTIONS(529), 1,
      sym_keyword_derive,
    ACTIONS(531), 1,
      sym_keyword_group,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(539), 1,
      sym_keyword_join,
    ACTIONS(541), 1,
      sym_keyword_select,
    ACTIONS(551), 1,
      sym_keyword_from,
    STATE(138), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_transforms_repeat1,
    STATE(334), 1,
      sym_transforms,
    ACTIONS(543), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(549), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(225), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10560] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(139), 1,
      sym_comment,
    ACTIONS(348), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(350), 20,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10601] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(124), 1,
      sym_keyword_from,
    STATE(140), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym__friendly_number,
    ACTIONS(553), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(122), 22,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [10645] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(128), 1,
      sym_keyword_from,
    STATE(141), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym__friendly_number,
    ACTIONS(553), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(126), 22,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [10689] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(557), 1,
      sym_keyword_from,
    ACTIONS(559), 1,
      sym_keyword_filter,
    ACTIONS(562), 1,
      sym_keyword_derive,
    ACTIONS(565), 1,
      sym_keyword_group,
    ACTIONS(568), 1,
      sym_keyword_aggregate,
    ACTIONS(571), 1,
      sym_keyword_sort,
    ACTIONS(574), 1,
      sym_keyword_take,
    ACTIONS(577), 1,
      sym_keyword_join,
    ACTIONS(580), 1,
      sym_keyword_select,
    STATE(142), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(583), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(555), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(225), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10749] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(527), 1,
      sym_keyword_filter,
    ACTIONS(529), 1,
      sym_keyword_derive,
    ACTIONS(531), 1,
      sym_keyword_group,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(539), 1,
      sym_keyword_join,
    ACTIONS(541), 1,
      sym_keyword_select,
    ACTIONS(588), 1,
      sym_keyword_from,
    STATE(142), 1,
      aux_sym_transforms_repeat1,
    STATE(143), 1,
      sym_comment,
    ACTIONS(543), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(586), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(225), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10811] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(440), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    ACTIONS(590), 1,
      anon_sym_EQ,
    STATE(144), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(501), 12,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      anon_sym_RPAREN,
  [10865] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(117), 1,
      sym_keyword_from,
    ACTIONS(592), 2,
      sym__natural_number,
      anon_sym__,
    STATE(145), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(115), 22,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [10907] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(132), 1,
      sym_keyword_from,
    STATE(146), 1,
      sym_comment,
    ACTIONS(130), 24,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__natural_number,
      anon_sym__,
      anon_sym_DOT_DOT,
  [10946] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
    ACTIONS(338), 1,
      sym__natural_number,
    ACTIONS(340), 1,
      anon_sym__,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_BQUOTE,
    ACTIONS(346), 1,
      sym__identifier,
    ACTIONS(595), 1,
      anon_sym_DASH,
    STATE(147), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_function_call_repeat1,
    STATE(242), 1,
      aux_sym__friendly_number,
    STATE(251), 1,
      sym_identifier,
    STATE(258), 1,
      sym_integer,
    STATE(269), 1,
      sym__call_parameter,
    STATE(270), 1,
      sym_literal,
    STATE(259), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(261), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(332), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(289), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11017] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(600), 1,
      anon_sym_DASH,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      sym__natural_number,
    ACTIONS(612), 1,
      anon_sym__,
    ACTIONS(615), 1,
      anon_sym_DOT,
    ACTIONS(618), 1,
      anon_sym_BQUOTE,
    ACTIONS(621), 1,
      sym__identifier,
    STATE(242), 1,
      aux_sym__friendly_number,
    STATE(251), 1,
      sym_identifier,
    STATE(258), 1,
      sym_integer,
    STATE(269), 1,
      sym__call_parameter,
    STATE(270), 1,
      sym_literal,
    STATE(148), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(259), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(261), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(597), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(301), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11086] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(149), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym__friendly_number,
    ACTIONS(126), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(128), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11126] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(150), 1,
      sym_comment,
    ACTIONS(257), 8,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(259), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11164] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(624), 1,
      sym__natural_number,
    ACTIONS(627), 1,
      anon_sym__,
    STATE(151), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(115), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(117), 15,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      sym__identifier,
  [11206] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(151), 1,
      aux_sym__friendly_number,
    STATE(152), 1,
      sym_comment,
    ACTIONS(122), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(124), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11246] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(153), 1,
      sym_comment,
    ACTIONS(261), 8,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(263), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11284] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(630), 1,
      anon_sym_COLON,
    STATE(154), 1,
      sym_comment,
    ACTIONS(507), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(509), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11324] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(155), 1,
      sym_comment,
    ACTIONS(348), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(350), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11361] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(156), 1,
      sym_comment,
    ACTIONS(545), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(547), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11398] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(157), 1,
      sym_comment,
    ACTIONS(366), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(368), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11435] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(158), 1,
      sym_comment,
    ACTIONS(519), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(521), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11472] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(159), 1,
      sym_comment,
    ACTIONS(372), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(374), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11509] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      sym_keyword_filter,
    ACTIONS(531), 1,
      sym_keyword_group,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(539), 1,
      sym_keyword_join,
    ACTIONS(632), 1,
      sym_keyword_derive,
    ACTIONS(634), 1,
      sym_keyword_select,
    STATE(160), 1,
      sym_comment,
    STATE(169), 1,
      aux_sym_transforms_repeat1,
    STATE(314), 1,
      sym_transforms,
    ACTIONS(543), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(225), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11568] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(161), 1,
      sym_comment,
    ACTIONS(360), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(362), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11605] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(162), 1,
      sym_comment,
    ACTIONS(507), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(509), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11642] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(163), 1,
      sym_comment,
    ACTIONS(130), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(132), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11679] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(164), 1,
      sym_comment,
    ACTIONS(360), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(362), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11716] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(354), 1,
      sym_keyword_from,
    STATE(165), 1,
      sym_comment,
    ACTIONS(352), 22,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [11753] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(166), 1,
      sym_comment,
    ACTIONS(398), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(400), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11790] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(167), 1,
      sym_comment,
    ACTIONS(394), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(396), 16,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
  [11827] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(638), 1,
      sym_keyword_from,
    STATE(168), 1,
      sym_comment,
    ACTIONS(636), 21,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [11863] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(527), 1,
      sym_keyword_filter,
    ACTIONS(531), 1,
      sym_keyword_group,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(539), 1,
      sym_keyword_join,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(632), 1,
      sym_keyword_derive,
    ACTIONS(634), 1,
      sym_keyword_select,
    STATE(169), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(543), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(225), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11919] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(559), 1,
      sym_keyword_filter,
    ACTIONS(565), 1,
      sym_keyword_group,
    ACTIONS(568), 1,
      sym_keyword_aggregate,
    ACTIONS(571), 1,
      sym_keyword_sort,
    ACTIONS(574), 1,
      sym_keyword_take,
    ACTIONS(577), 1,
      sym_keyword_join,
    ACTIONS(640), 1,
      sym_keyword_derive,
    ACTIONS(643), 1,
      sym_keyword_select,
    STATE(170), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(583), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(225), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11973] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(648), 1,
      sym_keyword_from,
    STATE(171), 1,
      sym_comment,
    ACTIONS(646), 19,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12007] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(652), 1,
      sym_keyword_from,
    STATE(172), 1,
      sym_comment,
    ACTIONS(650), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12041] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(656), 1,
      sym_keyword_from,
    ACTIONS(658), 1,
      anon_sym_LBRACK,
    STATE(173), 1,
      sym_comment,
    STATE(219), 1,
      sym__self_join,
    STATE(236), 1,
      sym_conditions,
    ACTIONS(654), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12081] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(662), 1,
      sym_keyword_from,
    STATE(174), 1,
      sym_comment,
    ACTIONS(660), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12115] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(666), 1,
      sym_keyword_from,
    STATE(175), 1,
      sym_comment,
    ACTIONS(664), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12149] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(670), 1,
      sym_keyword_from,
    STATE(176), 1,
      sym_comment,
    ACTIONS(668), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12183] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(674), 1,
      sym_keyword_from,
    STATE(177), 1,
      sym_comment,
    ACTIONS(672), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12217] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(503), 1,
      sym_keyword_from,
    STATE(178), 1,
      sym_comment,
    ACTIONS(501), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12251] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(678), 1,
      sym_keyword_from,
    STATE(179), 1,
      sym_comment,
    ACTIONS(676), 19,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12285] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(682), 1,
      sym_keyword_from,
    STATE(180), 1,
      sym_comment,
    ACTIONS(680), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12319] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(658), 1,
      anon_sym_LBRACK,
    ACTIONS(686), 1,
      sym_keyword_from,
    STATE(181), 1,
      sym_comment,
    STATE(219), 1,
      sym__self_join,
    STATE(224), 1,
      sym_conditions,
    ACTIONS(684), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12359] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(690), 1,
      sym_keyword_from,
    STATE(182), 1,
      sym_comment,
    ACTIONS(688), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12393] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(694), 1,
      sym_keyword_from,
    STATE(183), 1,
      sym_comment,
    ACTIONS(692), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12427] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(184), 1,
      sym_comment,
    ACTIONS(696), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(698), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [12460] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(702), 1,
      sym_keyword_from,
    ACTIONS(704), 1,
      anon_sym_EQ,
    STATE(185), 1,
      sym_comment,
    ACTIONS(700), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [12495] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(186), 1,
      sym_comment,
    ACTIONS(706), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(708), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [12528] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(712), 1,
      sym_keyword_from,
    ACTIONS(714), 1,
      anon_sym_DOT_DOT,
    STATE(187), 1,
      sym_comment,
    ACTIONS(710), 17,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12563] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(188), 1,
      sym_comment,
    ACTIONS(716), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(718), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [12596] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(722), 1,
      sym_keyword_from,
    STATE(189), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(720), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    ACTIONS(382), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [12632] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(726), 1,
      sym_keyword_from,
    STATE(190), 1,
      sym_comment,
    ACTIONS(724), 17,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12664] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(730), 1,
      sym_keyword_from,
    STATE(191), 1,
      sym_comment,
    ACTIONS(728), 17,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12696] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(734), 1,
      sym_keyword_from,
    STATE(192), 1,
      sym_comment,
    ACTIONS(732), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [12728] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(738), 1,
      sym_keyword_from,
    STATE(193), 1,
      sym_comment,
    ACTIONS(736), 17,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12760] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(702), 1,
      sym_keyword_from,
    STATE(194), 1,
      sym_comment,
    ACTIONS(700), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [12792] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(742), 1,
      sym_keyword_from,
    STATE(195), 1,
      sym_comment,
    ACTIONS(740), 17,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12824] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(440), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    ACTIONS(744), 1,
      anon_sym_EQ,
    STATE(196), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(501), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12870] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(748), 1,
      sym_keyword_from,
    STATE(197), 1,
      sym_comment,
    ACTIONS(746), 17,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12902] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(752), 1,
      sym_keyword_from,
    STATE(198), 1,
      sym_comment,
    ACTIONS(750), 17,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12934] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(756), 1,
      sym_keyword_from,
    STATE(199), 1,
      sym_comment,
    ACTIONS(754), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [12966] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(760), 1,
      sym_keyword_from,
    STATE(200), 1,
      sym_comment,
    ACTIONS(758), 17,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12998] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(764), 1,
      sym_keyword_from,
    STATE(201), 1,
      sym_comment,
    ACTIONS(762), 17,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13030] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(712), 1,
      sym_keyword_from,
    STATE(202), 1,
      sym_comment,
    ACTIONS(710), 17,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13062] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(768), 1,
      sym_keyword_from,
    STATE(203), 1,
      sym_comment,
    ACTIONS(766), 17,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13094] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(772), 1,
      sym_keyword_from,
    STATE(204), 1,
      sym_comment,
    ACTIONS(770), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13125] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(776), 1,
      sym_keyword_from,
    STATE(205), 1,
      sym_comment,
    ACTIONS(774), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13156] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(780), 1,
      sym_keyword_from,
    STATE(206), 1,
      sym_comment,
    ACTIONS(778), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13187] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(784), 1,
      sym_keyword_from,
    STATE(207), 1,
      sym_comment,
    ACTIONS(782), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13218] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(788), 1,
      sym_keyword_from,
    STATE(208), 1,
      sym_comment,
    ACTIONS(786), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13249] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(792), 1,
      sym_keyword_from,
    STATE(209), 1,
      sym_comment,
    ACTIONS(790), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13280] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(503), 1,
      sym_keyword_from,
    STATE(210), 1,
      sym_comment,
    ACTIONS(501), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13311] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(796), 1,
      sym_keyword_from,
    STATE(211), 1,
      sym_comment,
    ACTIONS(794), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13342] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(800), 1,
      sym_keyword_from,
    STATE(212), 1,
      sym_comment,
    ACTIONS(798), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13373] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(804), 1,
      sym_keyword_from,
    STATE(213), 1,
      sym_comment,
    ACTIONS(802), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13404] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(808), 1,
      sym_keyword_from,
    STATE(214), 1,
      sym_comment,
    ACTIONS(806), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13435] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(812), 1,
      sym_keyword_from,
    STATE(215), 1,
      sym_comment,
    ACTIONS(810), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13466] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(816), 1,
      sym_keyword_from,
    STATE(216), 1,
      sym_comment,
    ACTIONS(814), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13497] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(820), 1,
      sym_keyword_from,
    STATE(217), 1,
      sym_comment,
    ACTIONS(818), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13528] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(824), 1,
      sym_keyword_from,
    STATE(218), 1,
      sym_comment,
    ACTIONS(822), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13559] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(828), 1,
      sym_keyword_from,
    STATE(219), 1,
      sym_comment,
    ACTIONS(826), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13590] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(832), 1,
      sym_keyword_from,
    STATE(220), 1,
      sym_comment,
    ACTIONS(830), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13621] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(836), 1,
      sym_keyword_from,
    STATE(221), 1,
      sym_comment,
    ACTIONS(834), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13652] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(840), 1,
      sym_keyword_from,
    STATE(222), 1,
      sym_comment,
    ACTIONS(838), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13683] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(844), 1,
      sym_keyword_from,
    STATE(223), 1,
      sym_comment,
    ACTIONS(842), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13714] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(848), 1,
      sym_keyword_from,
    STATE(224), 1,
      sym_comment,
    ACTIONS(846), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13745] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(852), 1,
      sym_keyword_from,
    STATE(225), 1,
      sym_comment,
    ACTIONS(850), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13776] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(856), 1,
      sym_keyword_from,
    STATE(226), 1,
      sym_comment,
    ACTIONS(854), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13807] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(227), 1,
      sym_comment,
    ACTIONS(858), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(860), 10,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [13838] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(864), 1,
      sym_keyword_from,
    STATE(228), 1,
      sym_comment,
    ACTIONS(862), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13869] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(868), 1,
      sym_keyword_from,
    STATE(229), 1,
      sym_comment,
    ACTIONS(866), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13900] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(872), 1,
      sym_keyword_from,
    STATE(230), 1,
      sym_comment,
    ACTIONS(870), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13931] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(876), 1,
      sym_keyword_from,
    STATE(231), 1,
      sym_comment,
    ACTIONS(874), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13962] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(880), 1,
      sym_keyword_from,
    STATE(232), 1,
      sym_comment,
    ACTIONS(878), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13993] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(884), 1,
      sym_keyword_from,
    STATE(233), 1,
      sym_comment,
    ACTIONS(882), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14024] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(888), 1,
      sym_keyword_from,
    STATE(234), 1,
      sym_comment,
    ACTIONS(886), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14055] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(892), 1,
      sym_keyword_from,
    STATE(235), 1,
      sym_comment,
    ACTIONS(890), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14086] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(896), 1,
      sym_keyword_from,
    STATE(236), 1,
      sym_comment,
    ACTIONS(894), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14117] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(900), 1,
      sym_keyword_from,
    STATE(237), 1,
      sym_comment,
    ACTIONS(898), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14148] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(904), 1,
      sym_keyword_from,
    STATE(238), 1,
      sym_comment,
    ACTIONS(902), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14179] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(239), 1,
      sym_comment,
    STATE(380), 1,
      aux_sym_derives_repeat1,
    ACTIONS(404), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14212] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(908), 1,
      anon_sym_RBRACK,
    STATE(240), 1,
      sym_comment,
    STATE(388), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(384), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14249] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(912), 1,
      sym_keyword_from,
    STATE(241), 1,
      sym_comment,
    ACTIONS(910), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14280] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(242), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym__friendly_number,
    ACTIONS(124), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(122), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14312] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(916), 1,
      anon_sym_DASH,
    ACTIONS(918), 1,
      anon_sym_DQUOTE,
    ACTIONS(920), 1,
      anon_sym_SQUOTE,
    ACTIONS(924), 1,
      anon_sym_DOT,
    STATE(243), 1,
      sym_comment,
    STATE(311), 1,
      aux_sym__friendly_number,
    STATE(346), 1,
      sym_integer,
    STATE(368), 1,
      sym_literal,
    ACTIONS(922), 2,
      sym__natural_number,
      anon_sym__,
    STATE(354), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(372), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(914), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14360] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(244), 1,
      sym_comment,
    STATE(252), 1,
      aux_sym__friendly_number,
    ACTIONS(128), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(126), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14392] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(495), 1,
      anon_sym_DASH,
    STATE(152), 1,
      aux_sym__friendly_number,
    STATE(158), 1,
      sym_literal,
    STATE(164), 1,
      sym_integer,
    STATE(245), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym__natural_number,
      anon_sym__,
    STATE(157), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(161), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(926), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14440] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(81), 1,
      sym_integer,
    STATE(246), 1,
      sym_comment,
    STATE(446), 1,
      sym_literal,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(928), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14488] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(247), 1,
      sym_comment,
    ACTIONS(263), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(261), 11,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14518] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(81), 1,
      sym_integer,
    STATE(248), 1,
      sym_comment,
    STATE(447), 1,
      sym_literal,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
    STATE(94), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(928), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14566] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(595), 1,
      anon_sym_DASH,
    STATE(242), 1,
      aux_sym__friendly_number,
    STATE(249), 1,
      sym_comment,
    STATE(258), 1,
      sym_integer,
    STATE(268), 1,
      sym_literal,
    ACTIONS(338), 2,
      sym__natural_number,
      anon_sym__,
    STATE(259), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(261), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(930), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14614] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    STATE(122), 1,
      aux_sym__friendly_number,
    STATE(125), 1,
      sym_integer,
    STATE(132), 1,
      sym_literal,
    STATE(250), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__natural_number,
      anon_sym__,
    STATE(129), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(134), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(932), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14662] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(934), 1,
      anon_sym_COLON,
    STATE(251), 1,
      sym_comment,
    ACTIONS(509), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(507), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14694] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(936), 1,
      sym__natural_number,
    ACTIONS(939), 1,
      anon_sym__,
    STATE(252), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(117), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym__identifier,
    ACTIONS(115), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14728] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(253), 1,
      sym_comment,
    ACTIONS(942), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(384), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14760] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(944), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_RBRACK,
    STATE(254), 1,
      sym_comment,
    STATE(357), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14796] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(255), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [14826] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(256), 1,
      sym_comment,
    ACTIONS(259), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(257), 11,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14856] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(257), 1,
      sym_comment,
    ACTIONS(132), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(130), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14885] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(258), 1,
      sym_comment,
    ACTIONS(362), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(360), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14914] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(259), 1,
      sym_comment,
    ACTIONS(368), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(366), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14943] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(260), 1,
      sym_comment,
    ACTIONS(374), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(372), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14972] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(261), 1,
      sym_comment,
    ACTIONS(362), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(360), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15001] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(440), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    STATE(262), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(948), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15042] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(440), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    STATE(263), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(950), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15083] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(264), 1,
      sym_comment,
    ACTIONS(400), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(398), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15112] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(265), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(952), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(382), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15143] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(266), 1,
      sym_comment,
    ACTIONS(350), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(348), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15172] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(267), 1,
      sym_comment,
    ACTIONS(396), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(394), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15201] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(268), 1,
      sym_comment,
    ACTIONS(521), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(519), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15230] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(269), 1,
      sym_comment,
    ACTIONS(547), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(545), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15259] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(270), 1,
      sym_comment,
    ACTIONS(509), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(507), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15288] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(271), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 12,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15316] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    STATE(272), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15352] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15382] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      sym_keyword_func,
    ACTIONS(13), 1,
      sym_keyword_let,
    ACTIONS(15), 1,
      sym_keyword_prql,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(956), 1,
      ts_builtin_sym_end,
    STATE(274), 1,
      sym_comment,
    STATE(287), 1,
      aux_sym_program_repeat2,
    STATE(304), 1,
      aux_sym_program_repeat1,
    STATE(322), 1,
      sym_prql,
    STATE(133), 2,
      sym_from_text,
      sym_from,
    STATE(332), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15428] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(958), 1,
      anon_sym_EQ_GT,
    STATE(275), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15458] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(960), 1,
      anon_sym_EQ_GT,
    STATE(276), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15488] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15518] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15548] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(440), 1,
      sym_keyword_and,
    STATE(279), 1,
      sym_comment,
    ACTIONS(426), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15586] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(440), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    ACTIONS(744), 1,
      anon_sym_EQ,
    STATE(280), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15626] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(966), 1,
      sym_keyword_and,
    ACTIONS(968), 1,
      sym_keyword_or,
    STATE(281), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15666] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(966), 1,
      sym_keyword_and,
    ACTIONS(968), 1,
      sym_keyword_or,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15706] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(966), 1,
      sym_keyword_and,
    ACTIONS(968), 1,
      sym_keyword_or,
    STATE(283), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15743] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(438), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(440), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    STATE(284), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15780] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(285), 1,
      sym_comment,
    STATE(313), 1,
      sym_target,
    ACTIONS(972), 11,
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
  [15806] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(974), 1,
      ts_builtin_sym_end,
    ACTIONS(976), 1,
      sym_keyword_from,
    ACTIONS(979), 1,
      sym_keyword_func,
    ACTIONS(982), 1,
      sym_keyword_let,
    ACTIONS(985), 1,
      sym_keyword_from_text,
    STATE(133), 2,
      sym_from_text,
      sym_from,
    STATE(286), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(332), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15841] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      sym_keyword_func,
    ACTIONS(13), 1,
      sym_keyword_let,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(988), 1,
      ts_builtin_sym_end,
    STATE(286), 1,
      aux_sym_program_repeat2,
    STATE(287), 1,
      sym_comment,
    STATE(133), 2,
      sym_from_text,
      sym_from,
    STATE(332), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15878] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      sym_keyword_func,
    ACTIONS(13), 1,
      sym_keyword_let,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(956), 1,
      ts_builtin_sym_end,
    STATE(286), 1,
      aux_sym_program_repeat2,
    STATE(288), 1,
      sym_comment,
    STATE(133), 2,
      sym_from_text,
      sym_from,
    STATE(332), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15915] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_comment,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(326), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15949] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_comment,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(326), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15983] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(996), 1,
      sym_keyword_aggregate,
    ACTIONS(999), 1,
      sym_keyword_sort,
    ACTIONS(1002), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(291), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(326), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16015] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(292), 1,
      sym_comment,
    STATE(326), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16049] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(293), 1,
      sym_comment,
    STATE(326), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16083] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(294), 1,
      sym_comment,
    STATE(326), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16117] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    STATE(289), 1,
      aux_sym_group_repeat2,
    STATE(295), 1,
      sym_comment,
    STATE(326), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16148] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    STATE(290), 1,
      aux_sym_group_repeat2,
    STATE(296), 1,
      sym_comment,
    STATE(326), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16179] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1018), 1,
      anon_sym_RBRACK,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(171), 1,
      sym_identifier,
    STATE(297), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    STATE(390), 1,
      sym__sort_instruction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16214] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(298), 1,
      sym_comment,
    STATE(326), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16245] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    STATE(294), 1,
      aux_sym_group_repeat2,
    STATE(299), 1,
      sym_comment,
    STATE(326), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16276] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(533), 1,
      sym_keyword_aggregate,
    ACTIONS(535), 1,
      sym_keyword_sort,
    ACTIONS(537), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(300), 1,
      sym_comment,
    STATE(326), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16307] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1022), 1,
      anon_sym_DASH,
    ACTIONS(1024), 1,
      anon_sym_AT,
    STATE(140), 1,
      aux_sym__friendly_number,
    STATE(301), 1,
      sym_comment,
    STATE(323), 1,
      sym_integer,
    STATE(342), 1,
      sym_range,
    STATE(432), 1,
      sym_date,
    ACTIONS(553), 2,
      sym__natural_number,
      anon_sym__,
  [16339] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    ACTIONS(1026), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      sym_identifier,
    STATE(302), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    STATE(397), 1,
      sym__sort_instruction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16371] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1022), 1,
      anon_sym_DASH,
    ACTIONS(1024), 1,
      anon_sym_AT,
    STATE(140), 1,
      aux_sym__friendly_number,
    STATE(187), 1,
      sym_integer,
    STATE(202), 1,
      sym_range,
    STATE(303), 1,
      sym_comment,
    STATE(432), 1,
      sym_date,
    ACTIONS(553), 2,
      sym__natural_number,
      anon_sym__,
  [16403] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1030), 1,
      sym_keyword_from,
    ACTIONS(1032), 1,
      sym_keyword_prql,
    STATE(322), 1,
      sym_prql,
    STATE(304), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1028), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [16429] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    ACTIONS(1035), 1,
      anon_sym_LBRACK,
    STATE(171), 1,
      sym_identifier,
    STATE(203), 1,
      sym__sort_instruction,
    STATE(305), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16461] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    ACTIONS(1037), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      sym_identifier,
    STATE(306), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    STATE(397), 1,
      sym__sort_instruction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16493] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(171), 1,
      sym_identifier,
    STATE(307), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    STATE(397), 1,
      sym__sort_instruction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16522] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(1039), 1,
      sym_keyword_side,
    STATE(181), 1,
      sym__table_selection,
    STATE(185), 1,
      sym_identifier,
    STATE(199), 1,
      sym__table_reference,
    STATE(308), 1,
      sym_comment,
    STATE(333), 1,
      sym__join_definition,
  [16553] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(128), 1,
      sym__identifier,
    ACTIONS(922), 1,
      sym__natural_number,
    ACTIONS(1041), 1,
      anon_sym__,
    STATE(309), 1,
      sym_comment,
    STATE(310), 1,
      aux_sym__friendly_number,
    ACTIONS(126), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16580] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(117), 1,
      sym__identifier,
    ACTIONS(1043), 1,
      sym__natural_number,
    ACTIONS(1046), 1,
      anon_sym__,
    STATE(310), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16605] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(124), 1,
      sym__identifier,
    ACTIONS(922), 1,
      sym__natural_number,
    ACTIONS(1041), 1,
      anon_sym__,
    STATE(310), 1,
      aux_sym__friendly_number,
    STATE(311), 1,
      sym_comment,
    ACTIONS(122), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16632] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1051), 1,
      sym_keyword_from,
    STATE(312), 1,
      sym_comment,
    ACTIONS(1049), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [16652] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1055), 1,
      sym_keyword_from,
    STATE(313), 1,
      sym_comment,
    ACTIONS(1053), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [16672] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1059), 1,
      sym_keyword_from,
    STATE(314), 1,
      sym_comment,
    ACTIONS(1057), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16692] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1064), 1,
      anon_sym_LPAREN,
    STATE(350), 1,
      sym__window_definition,
    STATE(315), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1061), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [16714] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1068), 1,
      sym_keyword_from,
    STATE(316), 1,
      sym_comment,
    ACTIONS(1066), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [16734] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(317), 1,
      sym_comment,
    ACTIONS(132), 2,
      anon_sym__,
      sym__identifier,
    ACTIONS(130), 4,
      anon_sym_DASH_GT,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16754] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1070), 1,
      anon_sym_DASH_GT,
    ACTIONS(1072), 1,
      anon_sym_BQUOTE,
    ACTIONS(1074), 1,
      sym__identifier,
    STATE(318), 1,
      sym_comment,
    STATE(319), 1,
      aux_sym_function_definition_repeat1,
    STATE(351), 1,
      sym_identifier,
    STATE(359), 1,
      sym_parameter,
  [16782] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1076), 1,
      anon_sym_DASH_GT,
    ACTIONS(1078), 1,
      anon_sym_BQUOTE,
    ACTIONS(1081), 1,
      sym__identifier,
    STATE(351), 1,
      sym_identifier,
    STATE(359), 1,
      sym_parameter,
    STATE(319), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [16808] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(320), 1,
      sym_comment,
    STATE(321), 1,
      aux_sym_window_definitions_repeat1,
    STATE(350), 1,
      sym__window_definition,
    STATE(437), 1,
      sym_window_definitions,
    ACTIONS(1084), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [16832] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1086), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      aux_sym_window_definitions_repeat1,
    STATE(321), 1,
      sym_comment,
    STATE(350), 1,
      sym__window_definition,
    ACTIONS(1084), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [16856] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1090), 1,
      sym_keyword_from,
    STATE(322), 1,
      sym_comment,
    ACTIONS(1088), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [16876] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(714), 1,
      anon_sym_DOT_DOT,
    STATE(323), 1,
      sym_comment,
    ACTIONS(1092), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [16895] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(199), 1,
      sym__table_reference,
    STATE(231), 1,
      sym__table_selection,
    STATE(324), 1,
      sym_comment,
  [16920] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    STATE(325), 1,
      sym_comment,
    STATE(416), 1,
      sym_pipeline,
    STATE(160), 2,
      sym_from_text,
      sym_from,
  [16943] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(326), 1,
      sym_comment,
    ACTIONS(1094), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [16960] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1096), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(82), 1,
      sym_integer,
    STATE(327), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
  [16983] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1096), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(168), 1,
      sym_integer,
    STATE(328), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
  [17006] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1096), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(86), 1,
      sym_integer,
    STATE(329), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
  [17029] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1072), 1,
      anon_sym_BQUOTE,
    ACTIONS(1074), 1,
      sym__identifier,
    STATE(318), 1,
      aux_sym_function_definition_repeat1,
    STATE(330), 1,
      sym_comment,
    STATE(351), 1,
      sym_identifier,
    STATE(359), 1,
      sym_parameter,
  [17054] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1096), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(83), 1,
      sym_integer,
    STATE(331), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
  [17077] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1100), 1,
      sym_keyword_from,
    STATE(332), 1,
      sym_comment,
    ACTIONS(1098), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17096] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(173), 1,
      sym__table_selection,
    STATE(185), 1,
      sym_identifier,
    STATE(199), 1,
      sym__table_reference,
    STATE(333), 1,
      sym_comment,
  [17121] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1104), 1,
      sym_keyword_from,
    STATE(334), 1,
      sym_comment,
    ACTIONS(1102), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17140] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1108), 1,
      sym_keyword_from,
    STATE(335), 1,
      sym_comment,
    ACTIONS(1106), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17159] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(336), 1,
      sym_comment,
    ACTIONS(1110), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [17176] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(199), 1,
      sym__table_reference,
    STATE(228), 1,
      sym__table_selection,
    STATE(337), 1,
      sym_comment,
  [17201] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(338), 1,
      sym_comment,
    ACTIONS(261), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17217] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1112), 1,
      aux_sym__date_token1,
    ACTIONS(1114), 1,
      aux_sym__time_token1,
    STATE(79), 1,
      sym__date,
    STATE(99), 1,
      sym__time,
    STATE(339), 1,
      sym_comment,
  [17239] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1116), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym__friendly_number,
    STATE(340), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym__natural_number,
      anon_sym__,
  [17259] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1118), 1,
      anon_sym_DOT,
    STATE(244), 1,
      aux_sym__friendly_number,
    STATE(341), 1,
      sym_comment,
    ACTIONS(338), 2,
      sym__natural_number,
      anon_sym__,
  [17279] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(342), 1,
      sym_comment,
    ACTIONS(1092), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17295] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_DOT,
    STATE(121), 1,
      aux_sym__friendly_number,
    STATE(343), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__natural_number,
      anon_sym__,
  [17315] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1122), 1,
      sym__natural_number,
    STATE(344), 1,
      sym_comment,
    ACTIONS(372), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17333] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(345), 1,
      sym_comment,
    ACTIONS(1124), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [17349] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1126), 1,
      anon_sym_DOT,
    STATE(346), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17367] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(347), 1,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17383] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1128), 1,
      anon_sym_DOT,
    STATE(309), 1,
      aux_sym__friendly_number,
    STATE(348), 1,
      sym_comment,
    ACTIONS(922), 2,
      sym__natural_number,
      anon_sym__,
  [17403] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(192), 1,
      sym__table_reference,
    STATE(194), 1,
      sym_identifier,
    STATE(349), 1,
      sym_comment,
  [17425] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(350), 1,
      sym_comment,
    ACTIONS(1130), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17441] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1132), 1,
      anon_sym_COLON,
    STATE(351), 1,
      sym_comment,
    ACTIONS(1134), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17459] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1136), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym__friendly_number,
    STATE(352), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
  [17479] = 5,
    ACTIONS(1138), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1141), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    STATE(353), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [17496] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(354), 1,
      sym_comment,
    ACTIONS(366), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17511] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RBRACK,
    STATE(355), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [17528] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(952), 1,
      anon_sym_RBRACK,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    STATE(356), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [17545] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_conditions_repeat1,
    STATE(357), 1,
      sym_comment,
  [17564] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1157), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_RBRACK,
    STATE(358), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [17581] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(359), 1,
      sym_comment,
    ACTIONS(1162), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17596] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(1164), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_from_text,
    STATE(360), 1,
      sym_comment,
  [17615] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_group_repeat1,
    STATE(361), 1,
      sym_comment,
  [17634] = 6,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1168), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1170), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(353), 1,
      aux_sym__inner_triple_quotes,
    STATE(362), 1,
      sym_comment,
  [17653] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    STATE(363), 2,
      sym_comment,
      aux_sym_case_repeat2,
  [17670] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(364), 1,
      sym_comment,
    ACTIONS(1175), 3,
      anon_sym_BQUOTE,
      sym__identifier,
      aux_sym__date_token2,
  [17685] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(179), 1,
      sym_identifier,
    STATE(365), 1,
      sym_comment,
  [17704] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(141), 1,
      aux_sym__friendly_number,
    STATE(366), 1,
      sym_comment,
    ACTIONS(553), 2,
      sym__natural_number,
      anon_sym__,
  [17721] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      anon_sym_RBRACK,
    STATE(367), 1,
      sym_comment,
    STATE(389), 1,
      aux_sym_group_repeat1,
  [17740] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(368), 1,
      sym_comment,
    ACTIONS(1181), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17755] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    ACTIONS(1186), 1,
      anon_sym_RBRACK,
    STATE(369), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [17772] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      sym_comment,
    STATE(379), 1,
      aux_sym_group_repeat1,
  [17791] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(371), 1,
      sym_comment,
    STATE(484), 1,
      sym_identifier,
  [17810] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(372), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17825] = 6,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1168), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1190), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(353), 1,
      aux_sym__inner_triple_quotes,
    STATE(373), 1,
      sym_comment,
  [17844] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1192), 1,
      sym_keyword_format,
    ACTIONS(1194), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(214), 1,
      sym__triple_quote_string,
    STATE(374), 1,
      sym_comment,
  [17863] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    STATE(361), 1,
      aux_sym_group_repeat1,
    STATE(375), 1,
      sym_comment,
  [17882] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym_case_repeat2,
    STATE(376), 1,
      sym_comment,
  [17901] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(14), 1,
      aux_sym__friendly_number,
    STATE(377), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
  [17918] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(88), 1,
      sym_identifier,
    STATE(378), 1,
      sym_comment,
  [17937] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_group_repeat1,
    STATE(379), 1,
      sym_comment,
  [17956] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_derives_repeat1,
    STATE(380), 1,
      sym_comment,
  [17975] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(381), 1,
      sym_comment,
    ACTIONS(372), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17990] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 1,
      anon_sym_RBRACK,
    STATE(382), 1,
      sym_comment,
    STATE(392), 1,
      aux_sym_derives_repeat1,
  [18009] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1072), 1,
      anon_sym_BQUOTE,
    ACTIONS(1074), 1,
      sym__identifier,
    STATE(330), 1,
      sym_identifier,
    STATE(383), 1,
      sym_comment,
  [18028] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(384), 1,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18043] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(385), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18058] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(386), 1,
      sym_comment,
    ACTIONS(394), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18073] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1026), 1,
      anon_sym_RBRACK,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_sorts_repeat1,
    STATE(387), 1,
      sym_comment,
  [18092] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      sym_comment,
    STATE(391), 1,
      aux_sym_aggregate_repeat1,
  [18111] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    ACTIONS(1212), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_group_repeat1,
    STATE(389), 1,
      sym_comment,
  [18130] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1214), 1,
      anon_sym_COMMA,
    ACTIONS(1216), 1,
      anon_sym_RBRACK,
    STATE(387), 1,
      aux_sym_sorts_repeat1,
    STATE(390), 1,
      sym_comment,
  [18149] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(942), 1,
      anon_sym_RBRACK,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(391), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [18166] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_derives_repeat1,
    STATE(392), 1,
      sym_comment,
  [18185] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(908), 1,
      anon_sym_RBRACK,
    STATE(388), 1,
      aux_sym_aggregate_repeat1,
    STATE(393), 1,
      sym_comment,
  [18204] = 6,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1168), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1223), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(353), 1,
      aux_sym__inner_triple_quotes,
    STATE(394), 1,
      sym_comment,
  [18223] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1194), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(226), 1,
      sym__triple_quote_string,
    STATE(395), 1,
      sym_comment,
  [18239] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(316), 1,
      sym__double_quote_string,
    STATE(396), 1,
      sym_comment,
  [18255] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(397), 1,
      sym_comment,
    ACTIONS(1150), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18269] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(398), 1,
      sym_comment,
    ACTIONS(1186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18283] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1225), 1,
      sym_keyword_version,
    ACTIONS(1227), 1,
      sym_keyword_target,
    STATE(399), 1,
      sym_comment,
  [18299] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(400), 1,
      sym_comment,
    ACTIONS(1160), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18313] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(401), 1,
      sym_comment,
    ACTIONS(1229), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [18327] = 5,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1168), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(362), 1,
      aux_sym__inner_triple_quotes,
    STATE(402), 1,
      sym_comment,
  [18343] = 5,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1168), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(394), 1,
      aux_sym__inner_triple_quotes,
    STATE(403), 1,
      sym_comment,
  [18359] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1231), 1,
      aux_sym__time_token1,
    STATE(66), 1,
      sym__time,
    STATE(404), 1,
      sym_comment,
  [18375] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(405), 1,
      sym_comment,
    ACTIONS(942), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18389] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    STATE(406), 1,
      sym_comment,
    ACTIONS(1233), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [18403] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(407), 1,
      sym_comment,
    ACTIONS(1235), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [18417] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1112), 1,
      aux_sym__date_token1,
    STATE(165), 1,
      sym__date,
    STATE(408), 1,
      sym_comment,
  [18433] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1024), 1,
      anon_sym_AT,
    STATE(168), 1,
      sym_date,
    STATE(409), 1,
      sym_comment,
  [18449] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1237), 1,
      sym_keyword_derive,
    STATE(410), 1,
      sym_comment,
    STATE(467), 1,
      sym_derives,
  [18465] = 5,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1168), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(373), 1,
      aux_sym__inner_triple_quotes,
    STATE(411), 1,
      sym_comment,
  [18481] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1239), 1,
      anon_sym_BQUOTE,
    STATE(412), 1,
      sym_comment,
  [18494] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1241), 1,
      anon_sym_COLON,
    STATE(413), 1,
      sym_comment,
  [18507] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1243), 1,
      aux_sym__date_token2,
    STATE(414), 1,
      sym_comment,
  [18520] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1245), 1,
      aux_sym__date_token2,
    STATE(415), 1,
      sym_comment,
  [18533] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    STATE(416), 1,
      sym_comment,
  [18546] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(417), 1,
      sym_comment,
  [18559] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1216), 1,
      anon_sym_RBRACK,
    STATE(418), 1,
      sym_comment,
  [18572] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(908), 1,
      anon_sym_RBRACK,
    STATE(419), 1,
      sym_comment,
  [18585] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1249), 1,
      anon_sym_LPAREN,
    STATE(420), 1,
      sym_comment,
  [18598] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1179), 1,
      anon_sym_RBRACK,
    STATE(421), 1,
      sym_comment,
  [18611] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1206), 1,
      anon_sym_RBRACK,
    STATE(422), 1,
      sym_comment,
  [18624] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1251), 1,
      aux_sym_comment_token1,
    STATE(423), 1,
      sym_comment,
  [18637] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1253), 1,
      anon_sym_DASH,
    STATE(424), 1,
      sym_comment,
  [18650] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1255), 1,
      anon_sym_DQUOTE,
    STATE(425), 1,
      sym_comment,
  [18663] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1257), 1,
      anon_sym_DQUOTE,
    STATE(426), 1,
      sym_comment,
  [18676] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1259), 1,
      anon_sym_SQUOTE,
    STATE(427), 1,
      sym_comment,
  [18689] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1261), 1,
      anon_sym_DQUOTE,
    STATE(428), 1,
      sym_comment,
  [18702] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(376), 1,
      sym__natural_number,
    STATE(429), 1,
      sym_comment,
  [18715] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1263), 1,
      anon_sym_LBRACK,
    STATE(430), 1,
      sym_comment,
  [18728] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1265), 1,
      anon_sym_COLON,
    STATE(431), 1,
      sym_comment,
  [18741] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1267), 1,
      anon_sym_DOT_DOT,
    STATE(432), 1,
      sym_comment,
  [18754] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1269), 1,
      aux_sym__date_token2,
    STATE(433), 1,
      sym_comment,
  [18767] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1271), 1,
      anon_sym_LPAREN,
    STATE(434), 1,
      sym_comment,
  [18780] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1273), 1,
      anon_sym_LPAREN,
    STATE(435), 1,
      sym_comment,
  [18793] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1275), 1,
      anon_sym_DOT,
    STATE(436), 1,
      sym_comment,
  [18806] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1277), 1,
      anon_sym_LPAREN,
    STATE(437), 1,
      sym_comment,
  [18819] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1279), 1,
      sym__natural_number,
    STATE(438), 1,
      sym_comment,
  [18832] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1281), 1,
      aux_sym__double_quote_string_token1,
    STATE(439), 1,
      sym_comment,
  [18845] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1283), 1,
      aux_sym__double_quote_string_token1,
    STATE(440), 1,
      sym_comment,
  [18858] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1285), 1,
      aux_sym__single_quote_string_token1,
    STATE(441), 1,
      sym_comment,
  [18871] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1287), 1,
      aux_sym__double_quote_string_token1,
    STATE(442), 1,
      sym_comment,
  [18884] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1289), 1,
      anon_sym_COLON,
    STATE(443), 1,
      sym_comment,
  [18897] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1291), 1,
      aux_sym__date_token2,
    STATE(444), 1,
      sym_comment,
  [18910] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1293), 1,
      aux_sym__date_token2,
    STATE(445), 1,
      sym_comment,
  [18923] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(446), 1,
      sym_comment,
  [18936] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(447), 1,
      sym_comment,
  [18949] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1299), 1,
      anon_sym_BQUOTE,
    STATE(448), 1,
      sym_comment,
  [18962] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1301), 1,
      anon_sym_LBRACK,
    STATE(449), 1,
      sym_comment,
  [18975] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(450), 1,
      sym_comment,
  [18988] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      sym_comment,
  [19001] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1305), 1,
      sym__natural_number,
    STATE(452), 1,
      sym_comment,
  [19014] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1122), 1,
      sym__natural_number,
    STATE(453), 1,
      sym_comment,
  [19027] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1307), 1,
      anon_sym_DQUOTE,
    STATE(454), 1,
      sym_comment,
  [19040] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_SQUOTE,
    STATE(455), 1,
      sym_comment,
  [19053] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym_comment,
  [19066] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1313), 1,
      anon_sym_LBRACK,
    STATE(457), 1,
      sym_comment,
  [19079] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1315), 1,
      anon_sym_BQUOTE,
    STATE(458), 1,
      sym_comment,
  [19092] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1317), 1,
      anon_sym_RBRACK,
    STATE(459), 1,
      sym_comment,
  [19105] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1319), 1,
      sym__natural_number,
    STATE(460), 1,
      sym_comment,
  [19118] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1321), 1,
      sym__natural_number,
    STATE(461), 1,
      sym_comment,
  [19131] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1323), 1,
      anon_sym_DQUOTE,
    STATE(462), 1,
      sym_comment,
  [19144] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1325), 1,
      anon_sym_SQUOTE,
    STATE(463), 1,
      sym_comment,
  [19157] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1327), 1,
      anon_sym_COLON,
    STATE(464), 1,
      sym_comment,
  [19170] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1329), 1,
      anon_sym_COLON,
    STATE(465), 1,
      sym_comment,
  [19183] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1331), 1,
      anon_sym_BQUOTE,
    STATE(466), 1,
      sym_comment,
  [19196] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      sym_comment,
  [19209] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1335), 1,
      sym__natural_number,
    STATE(468), 1,
      sym_comment,
  [19222] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1337), 1,
      sym__natural_number,
    STATE(469), 1,
      sym_comment,
  [19235] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1339), 1,
      anon_sym_DQUOTE,
    STATE(470), 1,
      sym_comment,
  [19248] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1341), 1,
      anon_sym_SQUOTE,
    STATE(471), 1,
      sym_comment,
  [19261] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1343), 1,
      anon_sym_BQUOTE,
    STATE(472), 1,
      sym_comment,
  [19274] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1345), 1,
      anon_sym_LPAREN,
    STATE(473), 1,
      sym_comment,
  [19287] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1347), 1,
      sym__natural_number,
    STATE(474), 1,
      sym_comment,
  [19300] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1349), 1,
      sym__natural_number,
    STATE(475), 1,
      sym_comment,
  [19313] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1351), 1,
      anon_sym_DQUOTE,
    STATE(476), 1,
      sym_comment,
  [19326] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1353), 1,
      anon_sym_SQUOTE,
    STATE(477), 1,
      sym_comment,
  [19339] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1355), 1,
      anon_sym_BQUOTE,
    STATE(478), 1,
      sym_comment,
  [19352] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1357), 1,
      anon_sym_BQUOTE,
    STATE(479), 1,
      sym_comment,
  [19365] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1359), 1,
      anon_sym_BQUOTE,
    STATE(480), 1,
      sym_comment,
  [19378] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1361), 1,
      sym__identifier_dot,
    STATE(481), 1,
      sym_comment,
  [19391] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1363), 1,
      aux_sym__double_quote_string_token1,
    STATE(482), 1,
      sym_comment,
  [19404] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1365), 1,
      aux_sym__single_quote_string_token1,
    STATE(483), 1,
      sym_comment,
  [19417] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1367), 1,
      anon_sym_EQ,
    STATE(484), 1,
      sym_comment,
  [19430] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1369), 1,
      sym__identifier_dot,
    STATE(485), 1,
      sym_comment,
  [19443] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1371), 1,
      aux_sym__double_quote_string_token1,
    STATE(486), 1,
      sym_comment,
  [19456] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1373), 1,
      aux_sym__single_quote_string_token1,
    STATE(487), 1,
      sym_comment,
  [19469] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1375), 1,
      sym__identifier_dot,
    STATE(488), 1,
      sym_comment,
  [19482] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1377), 1,
      sym__identifier_dot,
    STATE(489), 1,
      sym_comment,
  [19495] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1379), 1,
      aux_sym__double_quote_string_token1,
    STATE(490), 1,
      sym_comment,
  [19508] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1381), 1,
      aux_sym__single_quote_string_token1,
    STATE(491), 1,
      sym_comment,
  [19521] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1383), 1,
      sym__identifier_dot,
    STATE(492), 1,
      sym_comment,
  [19534] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1385), 1,
      aux_sym__double_quote_string_token1,
    STATE(493), 1,
      sym_comment,
  [19547] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      sym_pipe,
    ACTIONS(1387), 1,
      aux_sym__single_quote_string_token1,
    STATE(494), 1,
      sym_comment,
  [19560] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1389), 1,
      sym__identifier_dot,
    STATE(495), 1,
      sym_comment,
  [19573] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1391), 1,
      sym__identifier_dot,
    STATE(496), 1,
      sym_comment,
  [19586] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1393), 1,
      sym__identifier_dot,
    STATE(497), 1,
      sym_comment,
  [19599] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1395), 1,
      anon_sym_DASH,
    STATE(498), 1,
      sym_comment,
  [19612] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1397), 1,
      ts_builtin_sym_end,
    STATE(499), 1,
      sym_comment,
  [19625] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    STATE(500), 1,
      sym_comment,
  [19638] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(946), 1,
      anon_sym_RBRACK,
    STATE(501), 1,
      sym_comment,
  [19651] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1399), 1,
      anon_sym_LPAREN,
    STATE(502), 1,
      sym_comment,
  [19664] = 1,
    ACTIONS(1401), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 131,
  [SMALL_STATE(4)] = 259,
  [SMALL_STATE(5)] = 387,
  [SMALL_STATE(6)] = 512,
  [SMALL_STATE(7)] = 634,
  [SMALL_STATE(8)] = 756,
  [SMALL_STATE(9)] = 878,
  [SMALL_STATE(10)] = 973,
  [SMALL_STATE(11)] = 1093,
  [SMALL_STATE(12)] = 1184,
  [SMALL_STATE(13)] = 1244,
  [SMALL_STATE(14)] = 1306,
  [SMALL_STATE(15)] = 1368,
  [SMALL_STATE(16)] = 1425,
  [SMALL_STATE(17)] = 1544,
  [SMALL_STATE(18)] = 1658,
  [SMALL_STATE(19)] = 1770,
  [SMALL_STATE(20)] = 1882,
  [SMALL_STATE(21)] = 1998,
  [SMALL_STATE(22)] = 2110,
  [SMALL_STATE(23)] = 2222,
  [SMALL_STATE(24)] = 2334,
  [SMALL_STATE(25)] = 2446,
  [SMALL_STATE(26)] = 2558,
  [SMALL_STATE(27)] = 2667,
  [SMALL_STATE(28)] = 2776,
  [SMALL_STATE(29)] = 2885,
  [SMALL_STATE(30)] = 2994,
  [SMALL_STATE(31)] = 3105,
  [SMALL_STATE(32)] = 3214,
  [SMALL_STATE(33)] = 3323,
  [SMALL_STATE(34)] = 3432,
  [SMALL_STATE(35)] = 3541,
  [SMALL_STATE(36)] = 3650,
  [SMALL_STATE(37)] = 3763,
  [SMALL_STATE(38)] = 3876,
  [SMALL_STATE(39)] = 3985,
  [SMALL_STATE(40)] = 4040,
  [SMALL_STATE(41)] = 4149,
  [SMALL_STATE(42)] = 4258,
  [SMALL_STATE(43)] = 4362,
  [SMALL_STATE(44)] = 4468,
  [SMALL_STATE(45)] = 4578,
  [SMALL_STATE(46)] = 4684,
  [SMALL_STATE(47)] = 4788,
  [SMALL_STATE(48)] = 4894,
  [SMALL_STATE(49)] = 4999,
  [SMALL_STATE(50)] = 5104,
  [SMALL_STATE(51)] = 5207,
  [SMALL_STATE(52)] = 5260,
  [SMALL_STATE(53)] = 5313,
  [SMALL_STATE(54)] = 5415,
  [SMALL_STATE(55)] = 5517,
  [SMALL_STATE(56)] = 5617,
  [SMALL_STATE(57)] = 5719,
  [SMALL_STATE(58)] = 5821,
  [SMALL_STATE(59)] = 5921,
  [SMALL_STATE(60)] = 6021,
  [SMALL_STATE(61)] = 6121,
  [SMALL_STATE(62)] = 6223,
  [SMALL_STATE(63)] = 6323,
  [SMALL_STATE(64)] = 6423,
  [SMALL_STATE(65)] = 6523,
  [SMALL_STATE(66)] = 6623,
  [SMALL_STATE(67)] = 6683,
  [SMALL_STATE(68)] = 6783,
  [SMALL_STATE(69)] = 6839,
  [SMALL_STATE(70)] = 6939,
  [SMALL_STATE(71)] = 6995,
  [SMALL_STATE(72)] = 7047,
  [SMALL_STATE(73)] = 7099,
  [SMALL_STATE(74)] = 7201,
  [SMALL_STATE(75)] = 7286,
  [SMALL_STATE(76)] = 7339,
  [SMALL_STATE(77)] = 7422,
  [SMALL_STATE(78)] = 7505,
  [SMALL_STATE(79)] = 7556,
  [SMALL_STATE(80)] = 7608,
  [SMALL_STATE(81)] = 7660,
  [SMALL_STATE(82)] = 7712,
  [SMALL_STATE(83)] = 7762,
  [SMALL_STATE(84)] = 7812,
  [SMALL_STATE(85)] = 7864,
  [SMALL_STATE(86)] = 7916,
  [SMALL_STATE(87)] = 7966,
  [SMALL_STATE(88)] = 8015,
  [SMALL_STATE(89)] = 8064,
  [SMALL_STATE(90)] = 8113,
  [SMALL_STATE(91)] = 8162,
  [SMALL_STATE(92)] = 8211,
  [SMALL_STATE(93)] = 8260,
  [SMALL_STATE(94)] = 8309,
  [SMALL_STATE(95)] = 8358,
  [SMALL_STATE(96)] = 8407,
  [SMALL_STATE(97)] = 8456,
  [SMALL_STATE(98)] = 8505,
  [SMALL_STATE(99)] = 8554,
  [SMALL_STATE(100)] = 8603,
  [SMALL_STATE(101)] = 8652,
  [SMALL_STATE(102)] = 8711,
  [SMALL_STATE(103)] = 8772,
  [SMALL_STATE(104)] = 8821,
  [SMALL_STATE(105)] = 8870,
  [SMALL_STATE(106)] = 8923,
  [SMALL_STATE(107)] = 8980,
  [SMALL_STATE(108)] = 9029,
  [SMALL_STATE(109)] = 9078,
  [SMALL_STATE(110)] = 9127,
  [SMALL_STATE(111)] = 9176,
  [SMALL_STATE(112)] = 9225,
  [SMALL_STATE(113)] = 9276,
  [SMALL_STATE(114)] = 9337,
  [SMALL_STATE(115)] = 9398,
  [SMALL_STATE(116)] = 9477,
  [SMALL_STATE(117)] = 9558,
  [SMALL_STATE(118)] = 9616,
  [SMALL_STATE(119)] = 9676,
  [SMALL_STATE(120)] = 9720,
  [SMALL_STATE(121)] = 9762,
  [SMALL_STATE(122)] = 9806,
  [SMALL_STATE(123)] = 9850,
  [SMALL_STATE(124)] = 9896,
  [SMALL_STATE(125)] = 9938,
  [SMALL_STATE(126)] = 9979,
  [SMALL_STATE(127)] = 10020,
  [SMALL_STATE(128)] = 10061,
  [SMALL_STATE(129)] = 10102,
  [SMALL_STATE(130)] = 10143,
  [SMALL_STATE(131)] = 10184,
  [SMALL_STATE(132)] = 10225,
  [SMALL_STATE(133)] = 10266,
  [SMALL_STATE(134)] = 10331,
  [SMALL_STATE(135)] = 10372,
  [SMALL_STATE(136)] = 10413,
  [SMALL_STATE(137)] = 10454,
  [SMALL_STATE(138)] = 10495,
  [SMALL_STATE(139)] = 10560,
  [SMALL_STATE(140)] = 10601,
  [SMALL_STATE(141)] = 10645,
  [SMALL_STATE(142)] = 10689,
  [SMALL_STATE(143)] = 10749,
  [SMALL_STATE(144)] = 10811,
  [SMALL_STATE(145)] = 10865,
  [SMALL_STATE(146)] = 10907,
  [SMALL_STATE(147)] = 10946,
  [SMALL_STATE(148)] = 11017,
  [SMALL_STATE(149)] = 11086,
  [SMALL_STATE(150)] = 11126,
  [SMALL_STATE(151)] = 11164,
  [SMALL_STATE(152)] = 11206,
  [SMALL_STATE(153)] = 11246,
  [SMALL_STATE(154)] = 11284,
  [SMALL_STATE(155)] = 11324,
  [SMALL_STATE(156)] = 11361,
  [SMALL_STATE(157)] = 11398,
  [SMALL_STATE(158)] = 11435,
  [SMALL_STATE(159)] = 11472,
  [SMALL_STATE(160)] = 11509,
  [SMALL_STATE(161)] = 11568,
  [SMALL_STATE(162)] = 11605,
  [SMALL_STATE(163)] = 11642,
  [SMALL_STATE(164)] = 11679,
  [SMALL_STATE(165)] = 11716,
  [SMALL_STATE(166)] = 11753,
  [SMALL_STATE(167)] = 11790,
  [SMALL_STATE(168)] = 11827,
  [SMALL_STATE(169)] = 11863,
  [SMALL_STATE(170)] = 11919,
  [SMALL_STATE(171)] = 11973,
  [SMALL_STATE(172)] = 12007,
  [SMALL_STATE(173)] = 12041,
  [SMALL_STATE(174)] = 12081,
  [SMALL_STATE(175)] = 12115,
  [SMALL_STATE(176)] = 12149,
  [SMALL_STATE(177)] = 12183,
  [SMALL_STATE(178)] = 12217,
  [SMALL_STATE(179)] = 12251,
  [SMALL_STATE(180)] = 12285,
  [SMALL_STATE(181)] = 12319,
  [SMALL_STATE(182)] = 12359,
  [SMALL_STATE(183)] = 12393,
  [SMALL_STATE(184)] = 12427,
  [SMALL_STATE(185)] = 12460,
  [SMALL_STATE(186)] = 12495,
  [SMALL_STATE(187)] = 12528,
  [SMALL_STATE(188)] = 12563,
  [SMALL_STATE(189)] = 12596,
  [SMALL_STATE(190)] = 12632,
  [SMALL_STATE(191)] = 12664,
  [SMALL_STATE(192)] = 12696,
  [SMALL_STATE(193)] = 12728,
  [SMALL_STATE(194)] = 12760,
  [SMALL_STATE(195)] = 12792,
  [SMALL_STATE(196)] = 12824,
  [SMALL_STATE(197)] = 12870,
  [SMALL_STATE(198)] = 12902,
  [SMALL_STATE(199)] = 12934,
  [SMALL_STATE(200)] = 12966,
  [SMALL_STATE(201)] = 12998,
  [SMALL_STATE(202)] = 13030,
  [SMALL_STATE(203)] = 13062,
  [SMALL_STATE(204)] = 13094,
  [SMALL_STATE(205)] = 13125,
  [SMALL_STATE(206)] = 13156,
  [SMALL_STATE(207)] = 13187,
  [SMALL_STATE(208)] = 13218,
  [SMALL_STATE(209)] = 13249,
  [SMALL_STATE(210)] = 13280,
  [SMALL_STATE(211)] = 13311,
  [SMALL_STATE(212)] = 13342,
  [SMALL_STATE(213)] = 13373,
  [SMALL_STATE(214)] = 13404,
  [SMALL_STATE(215)] = 13435,
  [SMALL_STATE(216)] = 13466,
  [SMALL_STATE(217)] = 13497,
  [SMALL_STATE(218)] = 13528,
  [SMALL_STATE(219)] = 13559,
  [SMALL_STATE(220)] = 13590,
  [SMALL_STATE(221)] = 13621,
  [SMALL_STATE(222)] = 13652,
  [SMALL_STATE(223)] = 13683,
  [SMALL_STATE(224)] = 13714,
  [SMALL_STATE(225)] = 13745,
  [SMALL_STATE(226)] = 13776,
  [SMALL_STATE(227)] = 13807,
  [SMALL_STATE(228)] = 13838,
  [SMALL_STATE(229)] = 13869,
  [SMALL_STATE(230)] = 13900,
  [SMALL_STATE(231)] = 13931,
  [SMALL_STATE(232)] = 13962,
  [SMALL_STATE(233)] = 13993,
  [SMALL_STATE(234)] = 14024,
  [SMALL_STATE(235)] = 14055,
  [SMALL_STATE(236)] = 14086,
  [SMALL_STATE(237)] = 14117,
  [SMALL_STATE(238)] = 14148,
  [SMALL_STATE(239)] = 14179,
  [SMALL_STATE(240)] = 14212,
  [SMALL_STATE(241)] = 14249,
  [SMALL_STATE(242)] = 14280,
  [SMALL_STATE(243)] = 14312,
  [SMALL_STATE(244)] = 14360,
  [SMALL_STATE(245)] = 14392,
  [SMALL_STATE(246)] = 14440,
  [SMALL_STATE(247)] = 14488,
  [SMALL_STATE(248)] = 14518,
  [SMALL_STATE(249)] = 14566,
  [SMALL_STATE(250)] = 14614,
  [SMALL_STATE(251)] = 14662,
  [SMALL_STATE(252)] = 14694,
  [SMALL_STATE(253)] = 14728,
  [SMALL_STATE(254)] = 14760,
  [SMALL_STATE(255)] = 14796,
  [SMALL_STATE(256)] = 14826,
  [SMALL_STATE(257)] = 14856,
  [SMALL_STATE(258)] = 14885,
  [SMALL_STATE(259)] = 14914,
  [SMALL_STATE(260)] = 14943,
  [SMALL_STATE(261)] = 14972,
  [SMALL_STATE(262)] = 15001,
  [SMALL_STATE(263)] = 15042,
  [SMALL_STATE(264)] = 15083,
  [SMALL_STATE(265)] = 15112,
  [SMALL_STATE(266)] = 15143,
  [SMALL_STATE(267)] = 15172,
  [SMALL_STATE(268)] = 15201,
  [SMALL_STATE(269)] = 15230,
  [SMALL_STATE(270)] = 15259,
  [SMALL_STATE(271)] = 15288,
  [SMALL_STATE(272)] = 15316,
  [SMALL_STATE(273)] = 15352,
  [SMALL_STATE(274)] = 15382,
  [SMALL_STATE(275)] = 15428,
  [SMALL_STATE(276)] = 15458,
  [SMALL_STATE(277)] = 15488,
  [SMALL_STATE(278)] = 15518,
  [SMALL_STATE(279)] = 15548,
  [SMALL_STATE(280)] = 15586,
  [SMALL_STATE(281)] = 15626,
  [SMALL_STATE(282)] = 15666,
  [SMALL_STATE(283)] = 15706,
  [SMALL_STATE(284)] = 15743,
  [SMALL_STATE(285)] = 15780,
  [SMALL_STATE(286)] = 15806,
  [SMALL_STATE(287)] = 15841,
  [SMALL_STATE(288)] = 15878,
  [SMALL_STATE(289)] = 15915,
  [SMALL_STATE(290)] = 15949,
  [SMALL_STATE(291)] = 15983,
  [SMALL_STATE(292)] = 16015,
  [SMALL_STATE(293)] = 16049,
  [SMALL_STATE(294)] = 16083,
  [SMALL_STATE(295)] = 16117,
  [SMALL_STATE(296)] = 16148,
  [SMALL_STATE(297)] = 16179,
  [SMALL_STATE(298)] = 16214,
  [SMALL_STATE(299)] = 16245,
  [SMALL_STATE(300)] = 16276,
  [SMALL_STATE(301)] = 16307,
  [SMALL_STATE(302)] = 16339,
  [SMALL_STATE(303)] = 16371,
  [SMALL_STATE(304)] = 16403,
  [SMALL_STATE(305)] = 16429,
  [SMALL_STATE(306)] = 16461,
  [SMALL_STATE(307)] = 16493,
  [SMALL_STATE(308)] = 16522,
  [SMALL_STATE(309)] = 16553,
  [SMALL_STATE(310)] = 16580,
  [SMALL_STATE(311)] = 16605,
  [SMALL_STATE(312)] = 16632,
  [SMALL_STATE(313)] = 16652,
  [SMALL_STATE(314)] = 16672,
  [SMALL_STATE(315)] = 16692,
  [SMALL_STATE(316)] = 16714,
  [SMALL_STATE(317)] = 16734,
  [SMALL_STATE(318)] = 16754,
  [SMALL_STATE(319)] = 16782,
  [SMALL_STATE(320)] = 16808,
  [SMALL_STATE(321)] = 16832,
  [SMALL_STATE(322)] = 16856,
  [SMALL_STATE(323)] = 16876,
  [SMALL_STATE(324)] = 16895,
  [SMALL_STATE(325)] = 16920,
  [SMALL_STATE(326)] = 16943,
  [SMALL_STATE(327)] = 16960,
  [SMALL_STATE(328)] = 16983,
  [SMALL_STATE(329)] = 17006,
  [SMALL_STATE(330)] = 17029,
  [SMALL_STATE(331)] = 17054,
  [SMALL_STATE(332)] = 17077,
  [SMALL_STATE(333)] = 17096,
  [SMALL_STATE(334)] = 17121,
  [SMALL_STATE(335)] = 17140,
  [SMALL_STATE(336)] = 17159,
  [SMALL_STATE(337)] = 17176,
  [SMALL_STATE(338)] = 17201,
  [SMALL_STATE(339)] = 17217,
  [SMALL_STATE(340)] = 17239,
  [SMALL_STATE(341)] = 17259,
  [SMALL_STATE(342)] = 17279,
  [SMALL_STATE(343)] = 17295,
  [SMALL_STATE(344)] = 17315,
  [SMALL_STATE(345)] = 17333,
  [SMALL_STATE(346)] = 17349,
  [SMALL_STATE(347)] = 17367,
  [SMALL_STATE(348)] = 17383,
  [SMALL_STATE(349)] = 17403,
  [SMALL_STATE(350)] = 17425,
  [SMALL_STATE(351)] = 17441,
  [SMALL_STATE(352)] = 17459,
  [SMALL_STATE(353)] = 17479,
  [SMALL_STATE(354)] = 17496,
  [SMALL_STATE(355)] = 17511,
  [SMALL_STATE(356)] = 17528,
  [SMALL_STATE(357)] = 17545,
  [SMALL_STATE(358)] = 17564,
  [SMALL_STATE(359)] = 17581,
  [SMALL_STATE(360)] = 17596,
  [SMALL_STATE(361)] = 17615,
  [SMALL_STATE(362)] = 17634,
  [SMALL_STATE(363)] = 17653,
  [SMALL_STATE(364)] = 17670,
  [SMALL_STATE(365)] = 17685,
  [SMALL_STATE(366)] = 17704,
  [SMALL_STATE(367)] = 17721,
  [SMALL_STATE(368)] = 17740,
  [SMALL_STATE(369)] = 17755,
  [SMALL_STATE(370)] = 17772,
  [SMALL_STATE(371)] = 17791,
  [SMALL_STATE(372)] = 17810,
  [SMALL_STATE(373)] = 17825,
  [SMALL_STATE(374)] = 17844,
  [SMALL_STATE(375)] = 17863,
  [SMALL_STATE(376)] = 17882,
  [SMALL_STATE(377)] = 17901,
  [SMALL_STATE(378)] = 17918,
  [SMALL_STATE(379)] = 17937,
  [SMALL_STATE(380)] = 17956,
  [SMALL_STATE(381)] = 17975,
  [SMALL_STATE(382)] = 17990,
  [SMALL_STATE(383)] = 18009,
  [SMALL_STATE(384)] = 18028,
  [SMALL_STATE(385)] = 18043,
  [SMALL_STATE(386)] = 18058,
  [SMALL_STATE(387)] = 18073,
  [SMALL_STATE(388)] = 18092,
  [SMALL_STATE(389)] = 18111,
  [SMALL_STATE(390)] = 18130,
  [SMALL_STATE(391)] = 18149,
  [SMALL_STATE(392)] = 18166,
  [SMALL_STATE(393)] = 18185,
  [SMALL_STATE(394)] = 18204,
  [SMALL_STATE(395)] = 18223,
  [SMALL_STATE(396)] = 18239,
  [SMALL_STATE(397)] = 18255,
  [SMALL_STATE(398)] = 18269,
  [SMALL_STATE(399)] = 18283,
  [SMALL_STATE(400)] = 18299,
  [SMALL_STATE(401)] = 18313,
  [SMALL_STATE(402)] = 18327,
  [SMALL_STATE(403)] = 18343,
  [SMALL_STATE(404)] = 18359,
  [SMALL_STATE(405)] = 18375,
  [SMALL_STATE(406)] = 18389,
  [SMALL_STATE(407)] = 18403,
  [SMALL_STATE(408)] = 18417,
  [SMALL_STATE(409)] = 18433,
  [SMALL_STATE(410)] = 18449,
  [SMALL_STATE(411)] = 18465,
  [SMALL_STATE(412)] = 18481,
  [SMALL_STATE(413)] = 18494,
  [SMALL_STATE(414)] = 18507,
  [SMALL_STATE(415)] = 18520,
  [SMALL_STATE(416)] = 18533,
  [SMALL_STATE(417)] = 18546,
  [SMALL_STATE(418)] = 18559,
  [SMALL_STATE(419)] = 18572,
  [SMALL_STATE(420)] = 18585,
  [SMALL_STATE(421)] = 18598,
  [SMALL_STATE(422)] = 18611,
  [SMALL_STATE(423)] = 18624,
  [SMALL_STATE(424)] = 18637,
  [SMALL_STATE(425)] = 18650,
  [SMALL_STATE(426)] = 18663,
  [SMALL_STATE(427)] = 18676,
  [SMALL_STATE(428)] = 18689,
  [SMALL_STATE(429)] = 18702,
  [SMALL_STATE(430)] = 18715,
  [SMALL_STATE(431)] = 18728,
  [SMALL_STATE(432)] = 18741,
  [SMALL_STATE(433)] = 18754,
  [SMALL_STATE(434)] = 18767,
  [SMALL_STATE(435)] = 18780,
  [SMALL_STATE(436)] = 18793,
  [SMALL_STATE(437)] = 18806,
  [SMALL_STATE(438)] = 18819,
  [SMALL_STATE(439)] = 18832,
  [SMALL_STATE(440)] = 18845,
  [SMALL_STATE(441)] = 18858,
  [SMALL_STATE(442)] = 18871,
  [SMALL_STATE(443)] = 18884,
  [SMALL_STATE(444)] = 18897,
  [SMALL_STATE(445)] = 18910,
  [SMALL_STATE(446)] = 18923,
  [SMALL_STATE(447)] = 18936,
  [SMALL_STATE(448)] = 18949,
  [SMALL_STATE(449)] = 18962,
  [SMALL_STATE(450)] = 18975,
  [SMALL_STATE(451)] = 18988,
  [SMALL_STATE(452)] = 19001,
  [SMALL_STATE(453)] = 19014,
  [SMALL_STATE(454)] = 19027,
  [SMALL_STATE(455)] = 19040,
  [SMALL_STATE(456)] = 19053,
  [SMALL_STATE(457)] = 19066,
  [SMALL_STATE(458)] = 19079,
  [SMALL_STATE(459)] = 19092,
  [SMALL_STATE(460)] = 19105,
  [SMALL_STATE(461)] = 19118,
  [SMALL_STATE(462)] = 19131,
  [SMALL_STATE(463)] = 19144,
  [SMALL_STATE(464)] = 19157,
  [SMALL_STATE(465)] = 19170,
  [SMALL_STATE(466)] = 19183,
  [SMALL_STATE(467)] = 19196,
  [SMALL_STATE(468)] = 19209,
  [SMALL_STATE(469)] = 19222,
  [SMALL_STATE(470)] = 19235,
  [SMALL_STATE(471)] = 19248,
  [SMALL_STATE(472)] = 19261,
  [SMALL_STATE(473)] = 19274,
  [SMALL_STATE(474)] = 19287,
  [SMALL_STATE(475)] = 19300,
  [SMALL_STATE(476)] = 19313,
  [SMALL_STATE(477)] = 19326,
  [SMALL_STATE(478)] = 19339,
  [SMALL_STATE(479)] = 19352,
  [SMALL_STATE(480)] = 19365,
  [SMALL_STATE(481)] = 19378,
  [SMALL_STATE(482)] = 19391,
  [SMALL_STATE(483)] = 19404,
  [SMALL_STATE(484)] = 19417,
  [SMALL_STATE(485)] = 19430,
  [SMALL_STATE(486)] = 19443,
  [SMALL_STATE(487)] = 19456,
  [SMALL_STATE(488)] = 19469,
  [SMALL_STATE(489)] = 19482,
  [SMALL_STATE(490)] = 19495,
  [SMALL_STATE(491)] = 19508,
  [SMALL_STATE(492)] = 19521,
  [SMALL_STATE(493)] = 19534,
  [SMALL_STATE(494)] = 19547,
  [SMALL_STATE(495)] = 19560,
  [SMALL_STATE(496)] = 19573,
  [SMALL_STATE(497)] = 19586,
  [SMALL_STATE(498)] = 19599,
  [SMALL_STATE(499)] = 19612,
  [SMALL_STATE(500)] = 19625,
  [SMALL_STATE(501)] = 19638,
  [SMALL_STATE(502)] = 19651,
  [SMALL_STATE(503)] = 19664,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 7),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 7),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(15),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(94),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(73),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(352),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(442),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(441),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(440),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(403),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(439),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(411),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(15),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(15),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(438),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(488),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(72),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(339),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(129),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(343),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(486),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(487),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(130),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(130),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(460),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(492),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(124),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 6),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 19),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 19),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(161),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(340),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(493),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(494),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(163),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(163),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(474),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(497),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(150),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 8),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 8),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(130),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(130),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 11),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 11),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(50),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(28),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(29),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(449),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(305),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(303),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(308),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(22),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(324),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(146),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(261),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(341),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(490),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(491),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(257),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(257),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(468),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(495),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(256),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(163),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(163),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 23),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 23),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(27),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(21),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 1),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 14),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 14),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 4),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 2),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 2),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2, .production_id = 9),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2, .production_id = 9),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 6),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 6),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 30),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 30),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 31),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 31),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__self_join, 4),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 8),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 3),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 4),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 6),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 5),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 7),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 7),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 5),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 6),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 6),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 9),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 9),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_keywords, 1),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_keywords, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2, .production_id = 1),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2, .production_id = 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_append, 2, .production_id = 1),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append, 2, .production_id = 1),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 3),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4, .production_id = 14),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4, .production_id = 14),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 4),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 4),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 5),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 7),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(257),
  [939] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(257),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [976] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(337),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(383),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(371),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(374),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [996] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(449),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(305),
  [1002] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(303),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(320),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(399),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(317),
  [1046] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(317),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(443),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1078] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(481),
  [1081] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(347),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(406),
  [1141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(307),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(56),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(45),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(44),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [1183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(47),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(5),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1397] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
