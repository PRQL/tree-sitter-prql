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
#define STATE_COUNT 508
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 197
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
  sym_loop = 124,
  sym_transforms = 125,
  sym_from = 126,
  sym__table_selection = 127,
  sym__table_reference = 128,
  sym_derives = 129,
  sym_append = 130,
  sym_filter = 131,
  sym__boolean_expression = 132,
  sym_case = 133,
  sym_case_condition = 134,
  sym_aggregate = 135,
  sym__agg_keywords = 136,
  sym_aggregate_operation = 137,
  sym__aggregate_func = 138,
  sym_sorts = 139,
  sym__sort_instruction = 140,
  sym_direction = 141,
  sym_takes = 142,
  sym_window = 143,
  sym_window_definitions = 144,
  sym__window_definition = 145,
  sym_group = 146,
  sym_joins = 147,
  sym__join_definition = 148,
  sym_conditions = 149,
  sym__self_join = 150,
  sym_select = 151,
  sym_term = 152,
  sym__expression = 153,
  sym_literal = 154,
  sym_f_string = 155,
  sym_s_string = 156,
  sym__double_quote_string = 157,
  sym__single_quote_string = 158,
  aux_sym__inner_triple_quotes = 159,
  sym__triple_quote_string = 160,
  sym__double_f_string = 161,
  sym__triple_f_string = 162,
  sym__double_s_string = 163,
  sym__triple_s_string = 164,
  sym_literal_string = 165,
  aux_sym__friendly_number = 166,
  sym_integer = 167,
  sym_decimal_number = 168,
  sym_field = 169,
  sym__alias_identifier = 170,
  sym_identifier = 171,
  sym_range = 172,
  sym__agg_rhs_assignment = 173,
  sym_assignment = 174,
  sym_binary_expression = 175,
  sym__date = 176,
  sym_date = 177,
  sym__time = 178,
  sym_time = 179,
  sym_timestamp = 180,
  sym_timezone = 181,
  sym_comment = 182,
  aux_sym_program_repeat1 = 183,
  aux_sym_program_repeat2 = 184,
  aux_sym_function_definition_repeat1 = 185,
  aux_sym_function_call_repeat1 = 186,
  aux_sym_transforms_repeat1 = 187,
  aux_sym_derives_repeat1 = 188,
  aux_sym_case_repeat1 = 189,
  aux_sym_case_repeat2 = 190,
  aux_sym_aggregate_repeat1 = 191,
  aux_sym_sorts_repeat1 = 192,
  aux_sym_window_definitions_repeat1 = 193,
  aux_sym_group_repeat1 = 194,
  aux_sym_group_repeat2 = 195,
  aux_sym_conditions_repeat1 = 196,
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
  [sym_loop] = "loop",
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
  [sym_loop] = sym_loop,
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
  [sym_loop] = {
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
      if (lookahead == '!') ADVANCE(900);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(605);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(596);
      if (lookahead == '>') ADVANCE(880);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(888);
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
      if (lookahead == 'T') ADVANCE(890);
      if (lookahead == 'V') ADVANCE(75);
      if (lookahead == 'W') ADVANCE(98);
      if (lookahead == 'Z') ADVANCE(892);
      if (lookahead == '[') ADVANCE(600);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(629);
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
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(483)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(880);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(700);
      if (lookahead == 'F') ADVANCE(635);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'O') ADVANCE(715);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(822);
      if (lookahead == 'f') ADVANCE(757);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 'o') ADVANCE(837);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(464)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(880);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(674);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'G') ADVANCE(722);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'J') ADVANCE(710);
      if (lookahead == 'L') ADVANCE(707);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'O') ADVANCE(715);
      if (lookahead == 'R') ADVANCE(664);
      if (lookahead == 'S') ADVANCE(667);
      if (lookahead == 'T') ADVANCE(639);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(796);
      if (lookahead == 'd') ADVANCE(788);
      if (lookahead == 'f') ADVANCE(756);
      if (lookahead == 'g') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead == 'j') ADVANCE(832);
      if (lookahead == 'l') ADVANCE(829);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 'o') ADVANCE(837);
      if (lookahead == 'r') ADVANCE(786);
      if (lookahead == 's') ADVANCE(789);
      if (lookahead == 't') ADVANCE(761);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(462)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(880);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(467)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(899);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '@') ADVANCE(888);
      if (lookahead == 'F') ADVANCE(635);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == '[') ADVANCE(600);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 's') ADVANCE(632);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(463)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == 'F') ADVANCE(635);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'f') ADVANCE(757);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(466)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '=') ADVANCE(594);
      if (lookahead == '@') ADVANCE(888);
      if (lookahead == 'A') ADVANCE(747);
      if (lookahead == 'C') ADVANCE(704);
      if (lookahead == 'F') ADVANCE(635);
      if (lookahead == 'M') ADVANCE(636);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'R') ADVANCE(638);
      if (lookahead == 'S') ADVANCE(728);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == 'c') ADVANCE(826);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'm') ADVANCE(758);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 'r') ADVANCE(760);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(460)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '@') ADVANCE(888);
      if (lookahead == 'A') ADVANCE(747);
      if (lookahead == 'C') ADVANCE(640);
      if (lookahead == 'F') ADVANCE(635);
      if (lookahead == 'M') ADVANCE(636);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'S') ADVANCE(728);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == 'c') ADVANCE(762);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'm') ADVANCE(758);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(461)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '@') ADVANCE(888);
      if (lookahead == 'A') ADVANCE(747);
      if (lookahead == 'C') ADVANCE(709);
      if (lookahead == 'F') ADVANCE(635);
      if (lookahead == 'M') ADVANCE(636);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'S') ADVANCE(728);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == 'c') ADVANCE(831);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'm') ADVANCE(758);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(475)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == 'A') ADVANCE(675);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'G') ADVANCE(722);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'J') ADVANCE(710);
      if (lookahead == 'L') ADVANCE(707);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'R') ADVANCE(664);
      if (lookahead == 'S') ADVANCE(667);
      if (lookahead == 'T') ADVANCE(639);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == 'd') ADVANCE(788);
      if (lookahead == 'f') ADVANCE(756);
      if (lookahead == 'g') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead == 'j') ADVANCE(832);
      if (lookahead == 'l') ADVANCE(829);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 'r') ADVANCE(786);
      if (lookahead == 's') ADVANCE(789);
      if (lookahead == 't') ADVANCE(761);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(465)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(621);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(336);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == 'q') ADVANCE(327);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(622);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(624);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(620);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '[') ADVANCE(600);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(468)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(471)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(469)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == 'S') ADVANCE(683);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 's') ADVANCE(805);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(470)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(474)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(875);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(224);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(876);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(879);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(607);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(607);
      if (lookahead == '>') ADVANCE(603);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(599);
      END_STATE();
    case 27:
      if (lookahead == '?') ADVANCE(884);
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
      if (lookahead == 'T') ADVANCE(572);
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
      if (lookahead == 'C') ADVANCE(570);
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
      if (lookahead == 'O') ADVANCE(149);
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
      if (lookahead == 'O') ADVANCE(149);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(143);
      END_STATE();
    case 85:
      if (lookahead == 'F') ADVANCE(186);
      if (lookahead == 'T') ADVANCE(572);
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
      if (lookahead == 'L') ADVANCE(574);
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
      if (lookahead == 'N') ADVANCE(593);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(575);
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
      if (lookahead == 'T') ADVANCE(572);
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
      if (lookahead == 'T') ADVANCE(591);
      END_STATE();
    case 192:
      if (lookahead == 'T') ADVANCE(509);
      END_STATE();
    case 193:
      if (lookahead == 'T') ADVANCE(576);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(589);
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
      if (lookahead == 'V') ADVANCE(592);
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
      if (lookahead == 't') ADVANCE(572);
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
      if (lookahead == 'b') ADVANCE(588);
      END_STATE();
    case 230:
      if (lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(570);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(581);
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
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'o') ADVANCE(373);
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
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 286:
      if (lookahead == 'f') ADVANCE(424);
      if (lookahead == 't') ADVANCE(572);
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
      if (lookahead == 'i') ADVANCE(578);
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
      if (lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(584);
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
      if (lookahead == 'n') ADVANCE(593);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(575);
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
      if (lookahead == 's') ADVANCE(585);
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
      if (lookahead == 't') ADVANCE(572);
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
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(576);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(589);
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
      if (lookahead == 'v') ADVANCE(592);
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
      if (lookahead == 'y') ADVANCE(579);
      END_STATE();
    case 460:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(460)
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '=') ADVANCE(594);
      if (lookahead == '@') ADVANCE(888);
      if (lookahead == 'A') ADVANCE(747);
      if (lookahead == 'C') ADVANCE(704);
      if (lookahead == 'F') ADVANCE(635);
      if (lookahead == 'M') ADVANCE(636);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'R') ADVANCE(638);
      if (lookahead == 'S') ADVANCE(728);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == 'c') ADVANCE(826);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'm') ADVANCE(758);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 'r') ADVANCE(760);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 461:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(461)
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '@') ADVANCE(888);
      if (lookahead == 'A') ADVANCE(747);
      if (lookahead == 'C') ADVANCE(640);
      if (lookahead == 'F') ADVANCE(635);
      if (lookahead == 'M') ADVANCE(636);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'S') ADVANCE(728);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == 'c') ADVANCE(762);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'm') ADVANCE(758);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 462:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(462)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(880);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(674);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'G') ADVANCE(722);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'J') ADVANCE(710);
      if (lookahead == 'L') ADVANCE(707);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'O') ADVANCE(715);
      if (lookahead == 'R') ADVANCE(664);
      if (lookahead == 'S') ADVANCE(667);
      if (lookahead == 'T') ADVANCE(639);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(796);
      if (lookahead == 'd') ADVANCE(788);
      if (lookahead == 'f') ADVANCE(756);
      if (lookahead == 'g') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead == 'j') ADVANCE(832);
      if (lookahead == 'l') ADVANCE(829);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 'o') ADVANCE(837);
      if (lookahead == 'r') ADVANCE(786);
      if (lookahead == 's') ADVANCE(789);
      if (lookahead == 't') ADVANCE(761);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 463:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(463)
      if (lookahead == '!') ADVANCE(899);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '@') ADVANCE(888);
      if (lookahead == 'F') ADVANCE(635);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == '[') ADVANCE(600);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 's') ADVANCE(632);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 464:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(464)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(880);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(700);
      if (lookahead == 'F') ADVANCE(635);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'O') ADVANCE(715);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(822);
      if (lookahead == 'f') ADVANCE(757);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 'o') ADVANCE(837);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 465:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(465)
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == 'A') ADVANCE(675);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'F') ADVANCE(634);
      if (lookahead == 'G') ADVANCE(722);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'J') ADVANCE(710);
      if (lookahead == 'L') ADVANCE(707);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'R') ADVANCE(664);
      if (lookahead == 'S') ADVANCE(667);
      if (lookahead == 'T') ADVANCE(639);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == 'd') ADVANCE(788);
      if (lookahead == 'f') ADVANCE(756);
      if (lookahead == 'g') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead == 'j') ADVANCE(832);
      if (lookahead == 'l') ADVANCE(829);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 'r') ADVANCE(786);
      if (lookahead == 's') ADVANCE(789);
      if (lookahead == 't') ADVANCE(761);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 466:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(466)
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == 'F') ADVANCE(635);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'f') ADVANCE(757);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 467:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(467)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(880);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      END_STATE();
    case 468:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(468)
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '[') ADVANCE(600);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 469:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(469)
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 470:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(470)
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == 'S') ADVANCE(683);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 's') ADVANCE(805);
      if (lookahead == '|') ADVANCE(901);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 471:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(471)
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 472:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(618);
      if (lookahead == '"') ADVANCE(617);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 473:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(619);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 474:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(474)
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(875);
      END_STATE();
    case 475:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(475)
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '@') ADVANCE(888);
      if (lookahead == 'A') ADVANCE(747);
      if (lookahead == 'C') ADVANCE(709);
      if (lookahead == 'F') ADVANCE(635);
      if (lookahead == 'M') ADVANCE(636);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'S') ADVANCE(728);
      if (lookahead == 'T') ADVANCE(718);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == 'c') ADVANCE(831);
      if (lookahead == 'f') ADVANCE(630);
      if (lookahead == 'm') ADVANCE(758);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead == 't') ADVANCE(840);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 476:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(889);
      END_STATE();
    case 477:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(885);
      END_STATE();
    case 478:
      if (eof) ADVANCE(489);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == '>') ADVANCE(880);
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
      if (lookahead == '[') ADVANCE(600);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(626);
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
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(488)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      END_STATE();
    case 479:
      if (eof) ADVANCE(489);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(880);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(674);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'G') ADVANCE(722);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'J') ADVANCE(710);
      if (lookahead == 'L') ADVANCE(668);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'O') ADVANCE(715);
      if (lookahead == 'R') ADVANCE(664);
      if (lookahead == 'S') ADVANCE(667);
      if (lookahead == 'T') ADVANCE(639);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(796);
      if (lookahead == 'd') ADVANCE(788);
      if (lookahead == 'f') ADVANCE(755);
      if (lookahead == 'g') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead == 'j') ADVANCE(832);
      if (lookahead == 'l') ADVANCE(790);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 'o') ADVANCE(837);
      if (lookahead == 'r') ADVANCE(786);
      if (lookahead == 's') ADVANCE(789);
      if (lookahead == 't') ADVANCE(761);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(484)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 480:
      if (eof) ADVANCE(489);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(596);
      if (lookahead == '>') ADVANCE(880);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(888);
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
      if (lookahead == 'T') ADVANCE(891);
      if (lookahead == 'W') ADVANCE(98);
      if (lookahead == 'Z') ADVANCE(892);
      if (lookahead == '[') ADVANCE(600);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(626);
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
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(485)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      END_STATE();
    case 481:
      if (eof) ADVANCE(489);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(596);
      if (lookahead == '>') ADVANCE(880);
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
      if (lookahead == 'T') ADVANCE(891);
      if (lookahead == 'W') ADVANCE(98);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(626);
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
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(486)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      END_STATE();
    case 482:
      if (eof) ADVANCE(489);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == 'A') ADVANCE(675);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'G') ADVANCE(722);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'J') ADVANCE(710);
      if (lookahead == 'L') ADVANCE(668);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'R') ADVANCE(664);
      if (lookahead == 'S') ADVANCE(667);
      if (lookahead == 'T') ADVANCE(639);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == 'd') ADVANCE(788);
      if (lookahead == 'f') ADVANCE(755);
      if (lookahead == 'g') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead == 'j') ADVANCE(832);
      if (lookahead == 'l') ADVANCE(790);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 'r') ADVANCE(786);
      if (lookahead == 's') ADVANCE(789);
      if (lookahead == 't') ADVANCE(761);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(487)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 483:
      if (eof) ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(483)
      if (lookahead == '!') ADVANCE(900);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(605);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(596);
      if (lookahead == '>') ADVANCE(880);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(888);
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
      if (lookahead == 'T') ADVANCE(890);
      if (lookahead == 'V') ADVANCE(75);
      if (lookahead == 'W') ADVANCE(98);
      if (lookahead == 'Z') ADVANCE(892);
      if (lookahead == '[') ADVANCE(600);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(626);
      if (lookahead == '`') ADVANCE(629);
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
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      END_STATE();
    case 484:
      if (eof) ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(484)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(880);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(674);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'G') ADVANCE(722);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'J') ADVANCE(710);
      if (lookahead == 'L') ADVANCE(668);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'O') ADVANCE(715);
      if (lookahead == 'R') ADVANCE(664);
      if (lookahead == 'S') ADVANCE(667);
      if (lookahead == 'T') ADVANCE(639);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(796);
      if (lookahead == 'd') ADVANCE(788);
      if (lookahead == 'f') ADVANCE(755);
      if (lookahead == 'g') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead == 'j') ADVANCE(832);
      if (lookahead == 'l') ADVANCE(790);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 'o') ADVANCE(837);
      if (lookahead == 'r') ADVANCE(786);
      if (lookahead == 's') ADVANCE(789);
      if (lookahead == 't') ADVANCE(761);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 485:
      if (eof) ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(485)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(596);
      if (lookahead == '>') ADVANCE(880);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(888);
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
      if (lookahead == 'T') ADVANCE(891);
      if (lookahead == 'W') ADVANCE(98);
      if (lookahead == 'Z') ADVANCE(892);
      if (lookahead == '[') ADVANCE(600);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(626);
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
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      END_STATE();
    case 486:
      if (eof) ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(486)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(596);
      if (lookahead == '>') ADVANCE(880);
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
      if (lookahead == 'T') ADVANCE(891);
      if (lookahead == 'W') ADVANCE(98);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(626);
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
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      END_STATE();
    case 487:
      if (eof) ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(487)
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == 'A') ADVANCE(675);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'G') ADVANCE(722);
      if (lookahead == 'I') ADVANCE(701);
      if (lookahead == 'J') ADVANCE(710);
      if (lookahead == 'L') ADVANCE(668);
      if (lookahead == 'N') ADVANCE(743);
      if (lookahead == 'R') ADVANCE(664);
      if (lookahead == 'S') ADVANCE(667);
      if (lookahead == 'T') ADVANCE(639);
      if (lookahead == '_') ADVANCE(627);
      if (lookahead == '`') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == 'd') ADVANCE(788);
      if (lookahead == 'f') ADVANCE(755);
      if (lookahead == 'g') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead == 'j') ADVANCE(832);
      if (lookahead == 'l') ADVANCE(790);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 'r') ADVANCE(786);
      if (lookahead == 's') ADVANCE(789);
      if (lookahead == 't') ADVANCE(761);
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 488:
      if (eof) ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(488)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '\'') ADVANCE(612);
      if (lookahead == '(') ADVANCE(597);
      if (lookahead == ')') ADVANCE(598);
      if (lookahead == '*') ADVANCE(877);
      if (lookahead == '+') ADVANCE(606);
      if (lookahead == ',') ADVANCE(601);
      if (lookahead == '-') ADVANCE(604);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '=') ADVANCE(595);
      if (lookahead == '>') ADVANCE(880);
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
      if (lookahead == '[') ADVANCE(600);
      if (lookahead == ']') ADVANCE(602);
      if (lookahead == '_') ADVANCE(626);
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
      if (lookahead == '|') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
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
      if (lookahead == '_') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_keyword_case);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_keyword_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_keyword_append);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_keyword_append);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_keyword_remove);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_keyword_remove);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_keyword_intersect);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_keyword_intersect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_keyword_loop);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_keyword_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_keyword_from_text);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_keyword_from_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_keyword_format);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_keyword_csv);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_keyword_json);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(607);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(607);
      if (lookahead == '>') ADVANCE(603);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(599);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(895);
      if (lookahead == '|') ADVANCE(903);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(611);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(610);
      if (lookahead == '#') ADVANCE(895);
      if (lookahead == '|') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(611);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == '|') ADVANCE(904);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(615);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(614);
      if (lookahead == '#') ADVANCE(896);
      if (lookahead == '|') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(615);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(618);
      if (lookahead == '"') ADVANCE(617);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(619);
      if (lookahead == '#') ADVANCE(893);
      if (lookahead == '|') ADVANCE(901);
      if (lookahead != 0) ADVANCE(616);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(621);
      if (lookahead == 'a') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == 'u') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(686);
      if (lookahead == 'I') ADVANCE(690);
      if (lookahead == 'R') ADVANCE(706);
      if (lookahead == 'U') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(686);
      if (lookahead == 'I') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(751);
      if (lookahead == 'I') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(685);
      if (lookahead == 'R') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(726);
      if (lookahead == 'O') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(717);
      if (lookahead == 'G') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(689);
      if (lookahead == 'O') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(731);
      if (lookahead == 'O') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(678);
      if (lookahead == 'N') ADVANCE(647);
      if (lookahead == 'P') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(678);
      if (lookahead == 'P') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(649);
      if (lookahead == 'U') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(812);
      if (lookahead == 'r') ADVANCE(828);
      if (lookahead == 'u') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'i') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(872);
      if (lookahead == 'i') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(807);
      if (lookahead == 'r') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(848);
      if (lookahead == 'o') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(839);
      if (lookahead == 'g') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead == 'o') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(851);
      if (lookahead == 'o') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(800);
      if (lookahead == 'n') ADVANCE(769);
      if (lookahead == 'p') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(800);
      if (lookahead == 'p') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__identifier_dot);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(875);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(881);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(883);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'R') ADVANCE(206);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(108);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(898);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(611);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(615);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(894);
      if (lookahead == '|') ADVANCE(902);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(898);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(898);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_bang);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(879);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_pipe);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(898);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(611);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(615);
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
  [6] = {.lex_state = 479},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
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
  [22] = {.lex_state = 481},
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
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 479},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 479},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 480},
  [52] = {.lex_state = 480},
  [53] = {.lex_state = 480},
  [54] = {.lex_state = 480},
  [55] = {.lex_state = 480},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 482},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 480},
  [74] = {.lex_state = 480},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 482},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 480},
  [79] = {.lex_state = 480},
  [80] = {.lex_state = 480},
  [81] = {.lex_state = 480},
  [82] = {.lex_state = 480},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 480},
  [85] = {.lex_state = 480},
  [86] = {.lex_state = 480},
  [87] = {.lex_state = 480},
  [88] = {.lex_state = 480},
  [89] = {.lex_state = 480},
  [90] = {.lex_state = 480},
  [91] = {.lex_state = 480},
  [92] = {.lex_state = 480},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 480},
  [95] = {.lex_state = 480},
  [96] = {.lex_state = 480},
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
  [110] = {.lex_state = 480},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 480},
  [113] = {.lex_state = 480},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 480},
  [117] = {.lex_state = 480},
  [118] = {.lex_state = 478},
  [119] = {.lex_state = 482},
  [120] = {.lex_state = 480},
  [121] = {.lex_state = 480},
  [122] = {.lex_state = 482},
  [123] = {.lex_state = 482},
  [124] = {.lex_state = 482},
  [125] = {.lex_state = 482},
  [126] = {.lex_state = 482},
  [127] = {.lex_state = 482},
  [128] = {.lex_state = 482},
  [129] = {.lex_state = 482},
  [130] = {.lex_state = 480},
  [131] = {.lex_state = 480},
  [132] = {.lex_state = 482},
  [133] = {.lex_state = 482},
  [134] = {.lex_state = 482},
  [135] = {.lex_state = 482},
  [136] = {.lex_state = 482},
  [137] = {.lex_state = 482},
  [138] = {.lex_state = 482},
  [139] = {.lex_state = 482},
  [140] = {.lex_state = 481},
  [141] = {.lex_state = 481},
  [142] = {.lex_state = 481},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 478},
  [146] = {.lex_state = 481},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 480},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 481},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 480},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 9},
  [163] = {.lex_state = 480},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 480},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
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
  [184] = {.lex_state = 480},
  [185] = {.lex_state = 481},
  [186] = {.lex_state = 478},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 480},
  [189] = {.lex_state = 480},
  [190] = {.lex_state = 480},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 480},
  [193] = {.lex_state = 480},
  [194] = {.lex_state = 480},
  [195] = {.lex_state = 480},
  [196] = {.lex_state = 480},
  [197] = {.lex_state = 480},
  [198] = {.lex_state = 4},
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
  [225] = {.lex_state = 478},
  [226] = {.lex_state = 480},
  [227] = {.lex_state = 480},
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
  [239] = {.lex_state = 480},
  [240] = {.lex_state = 480},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 478},
  [243] = {.lex_state = 478},
  [244] = {.lex_state = 480},
  [245] = {.lex_state = 478},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 478},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 478},
  [253] = {.lex_state = 478},
  [254] = {.lex_state = 478},
  [255] = {.lex_state = 478},
  [256] = {.lex_state = 478},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 478},
  [259] = {.lex_state = 480},
  [260] = {.lex_state = 480},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 480},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 480},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 480},
  [276] = {.lex_state = 480},
  [277] = {.lex_state = 480},
  [278] = {.lex_state = 480},
  [279] = {.lex_state = 478},
  [280] = {.lex_state = 480},
  [281] = {.lex_state = 3},
  [282] = {.lex_state = 480},
  [283] = {.lex_state = 480},
  [284] = {.lex_state = 3},
  [285] = {.lex_state = 480},
  [286] = {.lex_state = 480},
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
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 16},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 480},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 16},
  [307] = {.lex_state = 480},
  [308] = {.lex_state = 16},
  [309] = {.lex_state = 18},
  [310] = {.lex_state = 16},
  [311] = {.lex_state = 18},
  [312] = {.lex_state = 18},
  [313] = {.lex_state = 19},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 17},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 17},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 18},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 481},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 16},
  [328] = {.lex_state = 480},
  [329] = {.lex_state = 16},
  [330] = {.lex_state = 480},
  [331] = {.lex_state = 480},
  [332] = {.lex_state = 480},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 16},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 16},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 17},
  [341] = {.lex_state = 16},
  [342] = {.lex_state = 17},
  [343] = {.lex_state = 480},
  [344] = {.lex_state = 17},
  [345] = {.lex_state = 480},
  [346] = {.lex_state = 480},
  [347] = {.lex_state = 17},
  [348] = {.lex_state = 480},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 17},
  [351] = {.lex_state = 480},
  [352] = {.lex_state = 3},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 480},
  [355] = {.lex_state = 480},
  [356] = {.lex_state = 17},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 17},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 472},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 16},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 16},
  [369] = {.lex_state = 16},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 17},
  [373] = {.lex_state = 472},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 16},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 17},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 480},
  [382] = {.lex_state = 472},
  [383] = {.lex_state = 480},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 17},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 16},
  [388] = {.lex_state = 17},
  [389] = {.lex_state = 17},
  [390] = {.lex_state = 17},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 472},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 480},
  [398] = {.lex_state = 3},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 478},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 16},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 473},
  [406] = {.lex_state = 3},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 473},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 473},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 472},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 16},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 897},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 6},
  [431] = {.lex_state = 16},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 481},
  [435] = {.lex_state = 16},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 6},
  [442] = {.lex_state = 609},
  [443] = {.lex_state = 609},
  [444] = {.lex_state = 613},
  [445] = {.lex_state = 609},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 6},
  [457] = {.lex_state = 6},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 6},
  [461] = {.lex_state = 16},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 6},
  [465] = {.lex_state = 6},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 16},
  [472] = {.lex_state = 6},
  [473] = {.lex_state = 6},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 6},
  [479] = {.lex_state = 6},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 20},
  [486] = {.lex_state = 609},
  [487] = {.lex_state = 613},
  [488] = {.lex_state = 6},
  [489] = {.lex_state = 20},
  [490] = {.lex_state = 609},
  [491] = {.lex_state = 613},
  [492] = {.lex_state = 20},
  [493] = {.lex_state = 20},
  [494] = {.lex_state = 609},
  [495] = {.lex_state = 613},
  [496] = {.lex_state = 20},
  [497] = {.lex_state = 609},
  [498] = {.lex_state = 613},
  [499] = {.lex_state = 20},
  [500] = {.lex_state = 20},
  [501] = {.lex_state = 20},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 6},
  [506] = {.lex_state = 0},
  [507] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(503),
    [sym_prql] = STATE(317),
    [sym_pipeline] = STATE(335),
    [sym_variable] = STATE(335),
    [sym_function_definition] = STATE(335),
    [sym_from_text] = STATE(121),
    [sym_from] = STATE(121),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(274),
    [aux_sym_program_repeat2] = STATE(289),
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
    STATE(59), 1,
      sym__agg_keywords,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(243), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    ACTIONS(23), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(396), 3,
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
    STATE(108), 7,
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
    STATE(59), 1,
      sym__agg_keywords,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(250), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    ACTIONS(23), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(402), 3,
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
    STATE(108), 7,
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
    STATE(59), 1,
      sym__agg_keywords,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(250), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    ACTIONS(23), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(402), 3,
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
    STATE(108), 7,
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
    STATE(59), 1,
      sym__agg_keywords,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(250), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    ACTIONS(23), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(402), 3,
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
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [512] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym__natural_number,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(79), 1,
      anon_sym_BQUOTE,
    ACTIONS(81), 1,
      sym__identifier,
    STATE(6), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_function_call_repeat1,
    STATE(125), 1,
      aux_sym__friendly_number,
    STATE(126), 1,
      sym_identifier,
    STATE(132), 1,
      sym_integer,
    STATE(135), 1,
      sym__call_parameter,
    STATE(137), 1,
      sym_literal,
    STATE(127), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(129), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(67), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(63), 10,
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
    ACTIONS(65), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_GT,
      anon_sym_LT,
  [608] = 34,
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
    ACTIONS(83), 1,
      sym_keyword_case,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_BQUOTE,
    ACTIONS(89), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(7), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(70), 1,
      sym__agg_keywords,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(113), 1,
      sym__expression,
    STATE(177), 1,
      sym__agg_rhs_assignment,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(176), 2,
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
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [730] = 34,
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
    ACTIONS(83), 1,
      sym_keyword_case,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_BQUOTE,
    ACTIONS(93), 1,
      sym__identifier,
    STATE(8), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(70), 1,
      sym__agg_keywords,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(83), 1,
      sym_identifier,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(113), 1,
      sym__expression,
    STATE(177), 1,
      sym__agg_rhs_assignment,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(176), 2,
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
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [852] = 34,
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
    ACTIONS(83), 1,
      sym_keyword_case,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(70), 1,
      sym__agg_keywords,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(113), 1,
      sym__expression,
    STATE(177), 1,
      sym__agg_rhs_assignment,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(176), 2,
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
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [974] = 34,
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
    ACTIONS(91), 1,
      anon_sym_BQUOTE,
    ACTIONS(93), 1,
      sym__identifier,
    STATE(10), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(70), 1,
      sym__agg_keywords,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(83), 1,
      sym_identifier,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(278), 1,
      sym_binary_expression,
    STATE(280), 1,
      sym__expression,
    STATE(437), 1,
      sym_function_call,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(440), 1,
      sym__agg_rhs_assignment,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
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
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1094] = 21,
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
    STATE(114), 1,
      aux_sym_function_call_repeat1,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(149), 1,
      sym_identifier,
    STATE(157), 1,
      sym__call_parameter,
    STATE(166), 1,
      sym_literal,
    STATE(170), 1,
      sym_integer,
    STATE(168), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(169), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(99), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(63), 10,
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
    ACTIONS(65), 16,
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
      sym_keyword_loop,
      anon_sym_GT,
      anon_sym_LT,
  [1186] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__friendly_number,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(117), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 38,
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
      sym_keyword_loop,
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
  [1249] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__friendly_number,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(121), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 38,
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
      sym_keyword_loop,
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
  [1312] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(127), 2,
      sym__natural_number,
      anon_sym__,
    STATE(14), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(125), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(123), 38,
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
      sym_keyword_loop,
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
  [1373] = 5,
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
    ACTIONS(130), 40,
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
      sym_keyword_loop,
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
  [1431] = 36,
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
    STATE(25), 1,
      aux_sym_case_repeat1,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(198), 1,
      sym_case_condition,
    STATE(281), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym_literal,
    STATE(285), 1,
      sym__expression,
    STATE(380), 1,
      aux_sym_case_repeat2,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1550] = 34,
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
    STATE(25), 1,
      aux_sym_case_repeat1,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(198), 1,
      sym_case_condition,
    STATE(281), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym_literal,
    STATE(285), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1664] = 33,
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
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(18), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(377), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1776] = 33,
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
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      sym_bang,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(19), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(145), 1,
      sym__expression,
    STATE(180), 1,
      sym_assignment,
    STATE(214), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1888] = 33,
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
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(20), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(374), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2000] = 33,
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
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      sym_bang,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(21), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(180), 1,
      sym_assignment,
    STATE(214), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2112] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(22), 1,
      sym_comment,
    ACTIONS(154), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(152), 37,
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
      sym_keyword_loop,
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
  [2168] = 33,
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
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(23), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(371), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2280] = 35,
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
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      aux_sym_case_repeat1,
    STATE(24), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(198), 1,
      sym_case_condition,
    STATE(281), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym_literal,
    STATE(285), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2396] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_DASH,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(181), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(193), 1,
      sym__natural_number,
    ACTIONS(196), 1,
      anon_sym__,
    ACTIONS(199), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_BQUOTE,
    ACTIONS(205), 1,
      sym__identifier,
    ACTIONS(208), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(198), 1,
      sym_case_condition,
    STATE(281), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym_literal,
    STATE(285), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(25), 2,
      sym_comment,
      aux_sym_case_repeat1,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(164), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2508] = 33,
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
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(26), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(392), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2620] = 32,
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
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(27), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(399), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2729] = 32,
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
    ACTIONS(221), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(28), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(208), 1,
      sym_assignment,
    STATE(212), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2838] = 32,
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
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(29), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(438), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2947] = 32,
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
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(30), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(399), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3056] = 32,
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
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(31), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3165] = 32,
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
    ACTIONS(221), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(32), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(208), 1,
      sym_assignment,
    STATE(212), 1,
      sym_term,
    STATE(225), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3274] = 32,
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
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(33), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3383] = 32,
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
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(34), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(399), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3492] = 32,
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
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3601] = 34,
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
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(198), 1,
      sym_case_condition,
    STATE(281), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym_literal,
    STATE(285), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3714] = 32,
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
    ACTIONS(221), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(37), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(145), 1,
      sym__expression,
    STATE(208), 1,
      sym_assignment,
    STATE(212), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3823] = 34,
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
    STATE(38), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(198), 1,
      sym_case_condition,
    STATE(281), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym_literal,
    STATE(285), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3936] = 33,
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
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    ACTIONS(243), 1,
      anon_sym_EQ_EQ,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(39), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(244), 1,
      sym_binary_expression,
    STATE(285), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4047] = 32,
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
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(40), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4156] = 32,
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
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4265] = 30,
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
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(259), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4369] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(43), 1,
      sym_comment,
    ACTIONS(251), 15,
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
    ACTIONS(253), 25,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
  [4423] = 31,
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
    STATE(44), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(446), 1,
      sym_term,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4529] = 33,
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
    STATE(45), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(198), 1,
      sym_case_condition,
    STATE(281), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym_literal,
    STATE(285), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4639] = 31,
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
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(46), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(399), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4745] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(47), 1,
      sym_comment,
    ACTIONS(255), 15,
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
    ACTIONS(257), 25,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
  [4799] = 31,
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
    STATE(48), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(180), 1,
      sym_assignment,
    STATE(225), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4905] = 30,
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
    STATE(49), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(259), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5009] = 31,
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
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(50), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(266), 1,
      sym_binary_expression,
    STATE(285), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5114] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(51), 1,
      sym_comment,
    ACTIONS(263), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(261), 33,
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
      sym_keyword_loop,
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
  [5171] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(52), 1,
      sym_comment,
    ACTIONS(253), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 35,
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
      sym_keyword_loop,
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
  [5224] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(273), 1,
      anon_sym_COLON,
    ACTIONS(275), 1,
      anon_sym_DOT,
    STATE(53), 1,
      sym_comment,
    ACTIONS(271), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(269), 33,
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
      sym_keyword_loop,
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
  [5281] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(283), 1,
      anon_sym_Z,
    STATE(54), 1,
      sym_comment,
    STATE(98), 1,
      sym_timezone,
    STATE(471), 1,
      sym_direction,
    ACTIONS(281), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(279), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 30,
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
      sym_keyword_loop,
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
  [5342] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(55), 1,
      sym_comment,
    ACTIONS(257), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 35,
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
      sym_keyword_loop,
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
  [5395] = 30,
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
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(56), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(117), 1,
      sym__expression,
    STATE(229), 1,
      sym__boolean_expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5498] = 31,
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
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(266), 1,
      sym_binary_expression,
    STATE(285), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5603] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      anon_sym_DASH,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      anon_sym_SQUOTE,
    ACTIONS(305), 1,
      sym__natural_number,
    ACTIONS(308), 1,
      anon_sym__,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(314), 1,
      anon_sym_BQUOTE,
    ACTIONS(317), 1,
      sym__identifier,
    STATE(125), 1,
      aux_sym__friendly_number,
    STATE(126), 1,
      sym_identifier,
    STATE(132), 1,
      sym_integer,
    STATE(135), 1,
      sym__call_parameter,
    STATE(137), 1,
      sym_literal,
    STATE(58), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(127), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(129), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(293), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(291), 16,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [5687] = 29,
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
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(260), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5787] = 30,
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
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(277), 1,
      sym__expression,
    STATE(278), 1,
      sym_binary_expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5889] = 29,
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
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(104), 1,
      sym__expression,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5989] = 29,
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
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(97), 1,
      sym__expression,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6089] = 29,
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
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(105), 1,
      sym__expression,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6189] = 29,
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
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(275), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6289] = 29,
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
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__expression,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6389] = 29,
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
    STATE(66), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(106), 1,
      sym__expression,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6489] = 30,
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
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(283), 1,
      sym_binary_expression,
    STATE(286), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6591] = 29,
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
    STATE(68), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(273), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6691] = 30,
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
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(276), 1,
      sym_binary_expression,
    STATE(286), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6793] = 29,
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
    STATE(70), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(116), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6893] = 30,
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
    STATE(71), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(285), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(205), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6995] = 30,
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
    STATE(72), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(266), 1,
      sym_binary_expression,
    STATE(285), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7097] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(73), 1,
      sym_comment,
    ACTIONS(322), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(320), 34,
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
      sym_keyword_loop,
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
  [7149] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(328), 1,
      anon_sym_DOT,
    STATE(74), 1,
      sym_comment,
    ACTIONS(326), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 33,
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
      sym_keyword_loop,
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
  [7203] = 29,
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
    STATE(75), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(92), 1,
      sym__expression,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7303] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym__natural_number,
    ACTIONS(75), 1,
      anon_sym__,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(79), 1,
      anon_sym_BQUOTE,
    ACTIONS(81), 1,
      sym__identifier,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 1,
      anon_sym_DASH,
    STATE(58), 1,
      aux_sym_function_call_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(125), 1,
      aux_sym__friendly_number,
    STATE(126), 1,
      sym_identifier,
    STATE(132), 1,
      sym_integer,
    STATE(135), 1,
      sym__call_parameter,
    STATE(137), 1,
      sym_literal,
    STATE(127), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(129), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(67), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(332), 16,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [7389] = 30,
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
    STATE(77), 1,
      sym_comment,
    STATE(78), 1,
      sym_identifier,
    STATE(80), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__single_quote_string,
    STATE(282), 1,
      sym_binary_expression,
    STATE(286), 1,
      sym__expression,
    STATE(439), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(101), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(108), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7491] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(78), 1,
      sym_comment,
    ACTIONS(65), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 32,
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
      sym_keyword_loop,
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
  [7544] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(79), 1,
      sym_comment,
    ACTIONS(271), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(269), 33,
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
      sym_keyword_loop,
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
  [7595] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(342), 1,
      anon_sym_DOT,
    STATE(80), 1,
      sym_comment,
    ACTIONS(340), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(338), 32,
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
      sym_keyword_loop,
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
  [7648] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(348), 1,
      anon_sym_DOT,
    STATE(81), 1,
      sym_comment,
    ACTIONS(346), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 32,
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
      sym_keyword_loop,
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
  [7701] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(82), 1,
      sym_comment,
    ACTIONS(326), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(324), 33,
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
      sym_keyword_loop,
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
  [7752] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      anon_sym_SQUOTE,
    ACTIONS(356), 1,
      sym__natural_number,
    ACTIONS(358), 1,
      anon_sym__,
    ACTIONS(360), 1,
      anon_sym_DOT,
    ACTIONS(362), 1,
      anon_sym_BQUOTE,
    ACTIONS(364), 1,
      sym__identifier,
    STATE(83), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_function_call_repeat1,
    STATE(246), 1,
      aux_sym__friendly_number,
    STATE(257), 1,
      sym_identifier,
    STATE(268), 1,
      sym_integer,
    STATE(271), 1,
      sym__call_parameter,
    STATE(272), 1,
      sym_literal,
    STATE(263), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(265), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(350), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(65), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 13,
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
  [7835] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(84), 1,
      sym_comment,
    ACTIONS(368), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 33,
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
      sym_keyword_loop,
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
  [7886] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(374), 1,
      anon_sym_T,
    STATE(85), 1,
      sym_comment,
    ACTIONS(372), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(370), 32,
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
      sym_keyword_loop,
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
  [7939] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(380), 1,
      sym__natural_number,
    STATE(86), 1,
      sym_comment,
    ACTIONS(378), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 32,
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
      sym_keyword_loop,
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
  [7992] = 5,
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
    ACTIONS(382), 32,
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
      sym_keyword_loop,
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
  [8042] = 5,
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
    ACTIONS(386), 32,
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
      sym_keyword_loop,
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
  [8092] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(89), 1,
      sym_comment,
    ACTIONS(340), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(338), 32,
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
      sym_keyword_loop,
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
  [8142] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(90), 1,
      sym_comment,
    ACTIONS(392), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 32,
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
      sym_keyword_loop,
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
  [8192] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    STATE(91), 1,
      sym_comment,
    ACTIONS(396), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(394), 23,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [8252] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(92), 1,
      sym_comment,
    ACTIONS(396), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(394), 24,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_QMARK_QMARK,
  [8310] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(93), 1,
      sym_comment,
    ACTIONS(255), 15,
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
    ACTIONS(257), 21,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
  [8360] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(94), 1,
      sym_comment,
    ACTIONS(410), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 32,
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
      sym_keyword_loop,
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
  [8410] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(95), 1,
      sym_comment,
    ACTIONS(414), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 32,
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
      sym_keyword_loop,
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
  [8460] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(96), 1,
      sym_comment,
    ACTIONS(418), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 32,
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
      sym_keyword_loop,
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
  [8510] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(420), 1,
      sym_keyword_and,
    STATE(97), 1,
      sym_comment,
    ACTIONS(396), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(394), 22,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
  [8572] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(98), 1,
      sym_comment,
    ACTIONS(424), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 32,
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
      sym_keyword_loop,
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
  [8622] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(99), 1,
      sym_comment,
    ACTIONS(428), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 32,
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
      sym_keyword_loop,
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
  [8672] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(100), 1,
      sym_comment,
    ACTIONS(432), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 32,
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
      sym_keyword_loop,
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
  [8722] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(101), 1,
      sym_comment,
    ACTIONS(436), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 32,
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
      sym_keyword_loop,
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
  [8772] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(102), 1,
      sym_comment,
    ACTIONS(440), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 32,
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
      sym_keyword_loop,
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
  [8822] = 5,
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
    ACTIONS(442), 32,
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
      sym_keyword_loop,
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
  [8872] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(104), 1,
      sym_comment,
    ACTIONS(396), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 32,
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
      sym_keyword_loop,
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
  [8922] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(105), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 28,
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
      sym_keyword_loop,
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
  [8976] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(106), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(396), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 30,
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
      sym_keyword_loop,
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
  [9028] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(107), 1,
      sym_comment,
    ACTIONS(346), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(344), 32,
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
      sym_keyword_loop,
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
    STATE(108), 1,
      sym_comment,
    ACTIONS(448), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 32,
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
      sym_keyword_loop,
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
  [9128] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(109), 1,
      sym_comment,
    ACTIONS(378), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 32,
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
      sym_keyword_loop,
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
  [9178] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(110), 1,
      sym_comment,
    ACTIONS(452), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 32,
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
      sym_keyword_loop,
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
  [9228] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(111), 1,
      sym_comment,
    ACTIONS(251), 15,
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
    ACTIONS(253), 21,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
  [9278] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(112), 1,
      sym_comment,
    ACTIONS(456), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(454), 32,
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
      sym_keyword_loop,
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
  [9328] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(420), 1,
      sym_keyword_and,
    ACTIONS(460), 1,
      sym_keyword_from,
    ACTIONS(462), 1,
      sym_keyword_or,
    STATE(113), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(458), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9390] = 22,
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
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(464), 1,
      anon_sym_DASH,
    STATE(114), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym_function_call_repeat1,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(149), 1,
      sym_identifier,
    STATE(157), 1,
      sym__call_parameter,
    STATE(166), 1,
      sym_literal,
    STATE(170), 1,
      sym_integer,
    STATE(168), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(169), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(99), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(332), 12,
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
      sym_keyword_loop,
  [9472] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
    ACTIONS(475), 1,
      anon_sym_SQUOTE,
    ACTIONS(478), 1,
      sym__natural_number,
    ACTIONS(481), 1,
      anon_sym__,
    ACTIONS(484), 1,
      anon_sym_DOT,
    ACTIONS(487), 1,
      anon_sym_BQUOTE,
    ACTIONS(490), 1,
      sym__identifier,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(149), 1,
      sym_identifier,
    STATE(157), 1,
      sym__call_parameter,
    STATE(166), 1,
      sym_literal,
    STATE(170), 1,
      sym_integer,
    STATE(115), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(168), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(169), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(466), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(291), 12,
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
      sym_keyword_loop,
  [9552] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(420), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    ACTIONS(495), 1,
      sym_keyword_from,
    STATE(116), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(493), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9614] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(420), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    ACTIONS(499), 1,
      sym_keyword_from,
    STATE(117), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(497), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [9673] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(420), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    ACTIONS(503), 1,
      sym_keyword_from,
    ACTIONS(505), 1,
      anon_sym_EQ,
    STATE(118), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [9734] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(507), 1,
      sym__natural_number,
    ACTIONS(510), 1,
      anon_sym__,
    STATE(119), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(125), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      sym__identifier,
  [9781] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(515), 1,
      sym_keyword_from,
    ACTIONS(517), 1,
      sym_keyword_filter,
    ACTIONS(519), 1,
      sym_keyword_derive,
    ACTIONS(521), 1,
      sym_keyword_group,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(529), 1,
      sym_keyword_join,
    ACTIONS(531), 1,
      sym_keyword_select,
    ACTIONS(535), 1,
      sym_keyword_loop,
    STATE(120), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_transforms_repeat1,
    STATE(326), 1,
      sym_transforms,
    ACTIONS(533), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(513), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(220), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [9850] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(517), 1,
      sym_keyword_filter,
    ACTIONS(519), 1,
      sym_keyword_derive,
    ACTIONS(521), 1,
      sym_keyword_group,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(529), 1,
      sym_keyword_join,
    ACTIONS(531), 1,
      sym_keyword_select,
    ACTIONS(535), 1,
      sym_keyword_loop,
    ACTIONS(539), 1,
      sym_keyword_from,
    STATE(121), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_transforms_repeat1,
    STATE(319), 1,
      sym_transforms,
    ACTIONS(533), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(537), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(220), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [9919] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(119), 1,
      aux_sym__friendly_number,
    STATE(122), 1,
      sym_comment,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(117), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [9964] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(123), 1,
      sym_comment,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(257), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10007] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(124), 1,
      sym_comment,
    ACTIONS(251), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(253), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10050] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(119), 1,
      aux_sym__friendly_number,
    STATE(125), 1,
      sym_comment,
    ACTIONS(119), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(121), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10095] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(545), 1,
      anon_sym_COLON,
    STATE(126), 1,
      sym_comment,
    ACTIONS(541), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(543), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10140] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(127), 1,
      sym_comment,
    ACTIONS(344), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(346), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10182] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(128), 1,
      sym_comment,
    ACTIONS(547), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(549), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10224] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(129), 1,
      sym_comment,
    ACTIONS(338), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(340), 21,
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
      sym_keyword_loop,
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
    ACTIONS(517), 1,
      sym_keyword_filter,
    ACTIONS(519), 1,
      sym_keyword_derive,
    ACTIONS(521), 1,
      sym_keyword_group,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(529), 1,
      sym_keyword_join,
    ACTIONS(531), 1,
      sym_keyword_select,
    ACTIONS(535), 1,
      sym_keyword_loop,
    ACTIONS(553), 1,
      sym_keyword_from,
    STATE(130), 1,
      sym_comment,
    STATE(131), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(533), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(551), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(220), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10332] = 16,
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
    ACTIONS(586), 1,
      sym_keyword_loop,
    STATE(131), 2,
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
    STATE(220), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10396] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(132), 1,
      sym_comment,
    ACTIONS(338), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(340), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10438] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(133), 1,
      sym_comment,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(132), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10480] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(134), 1,
      sym_comment,
    ACTIONS(376), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(378), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10522] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(135), 1,
      sym_comment,
    ACTIONS(589), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(591), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10564] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(136), 1,
      sym_comment,
    ACTIONS(382), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(384), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10606] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(137), 1,
      sym_comment,
    ACTIONS(541), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(543), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10648] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(138), 1,
      sym_comment,
    ACTIONS(386), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(388), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10690] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(139), 1,
      sym_comment,
    ACTIONS(320), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(322), 21,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [10732] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(121), 1,
      sym_keyword_from,
    STATE(140), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym__friendly_number,
    ACTIONS(593), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(119), 23,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [10777] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(117), 1,
      sym_keyword_from,
    STATE(141), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym__friendly_number,
    ACTIONS(593), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(115), 23,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [10822] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(125), 1,
      sym_keyword_from,
    ACTIONS(595), 2,
      sym__natural_number,
      anon_sym__,
    STATE(142), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(123), 23,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [10865] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(143), 1,
      sym_comment,
    ACTIONS(253), 9,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 18,
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
  [10906] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(144), 1,
      sym_comment,
    ACTIONS(257), 9,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 18,
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
  [10947] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(420), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    ACTIONS(598), 1,
      anon_sym_EQ,
    STATE(145), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(501), 13,
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
      sym_keyword_loop,
      anon_sym_RPAREN,
  [11002] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(132), 1,
      sym_keyword_from,
    STATE(146), 1,
      sym_comment,
    ACTIONS(130), 25,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__natural_number,
      anon_sym__,
      anon_sym_DOT_DOT,
  [11042] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(600), 1,
      sym__natural_number,
    ACTIONS(603), 1,
      anon_sym__,
    STATE(147), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(123), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(125), 16,
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
      sym_keyword_loop,
      sym__identifier,
  [11085] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(147), 1,
      aux_sym__friendly_number,
    STATE(148), 1,
      sym_comment,
    ACTIONS(119), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(121), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11126] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(606), 1,
      anon_sym_COLON,
    STATE(149), 1,
      sym_comment,
    ACTIONS(541), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(543), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11167] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(150), 1,
      sym_comment,
    ACTIONS(251), 8,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(253), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11206] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(151), 1,
      sym_comment,
    ACTIONS(255), 8,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(257), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11245] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      anon_sym_SQUOTE,
    ACTIONS(356), 1,
      sym__natural_number,
    ACTIONS(358), 1,
      anon_sym__,
    ACTIONS(360), 1,
      anon_sym_DOT,
    ACTIONS(362), 1,
      anon_sym_BQUOTE,
    ACTIONS(364), 1,
      sym__identifier,
    ACTIONS(608), 1,
      anon_sym_DASH,
    STATE(152), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_function_call_repeat1,
    STATE(246), 1,
      aux_sym__friendly_number,
    STATE(257), 1,
      sym_identifier,
    STATE(268), 1,
      sym_integer,
    STATE(271), 1,
      sym__call_parameter,
    STATE(272), 1,
      sym_literal,
    STATE(263), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(265), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(350), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(330), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11316] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(613), 1,
      anon_sym_DASH,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      anon_sym_SQUOTE,
    ACTIONS(622), 1,
      sym__natural_number,
    ACTIONS(625), 1,
      anon_sym__,
    ACTIONS(628), 1,
      anon_sym_DOT,
    ACTIONS(631), 1,
      anon_sym_BQUOTE,
    ACTIONS(634), 1,
      sym__identifier,
    STATE(246), 1,
      aux_sym__friendly_number,
    STATE(257), 1,
      sym_identifier,
    STATE(268), 1,
      sym_integer,
    STATE(271), 1,
      sym__call_parameter,
    STATE(272), 1,
      sym_literal,
    STATE(153), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(263), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(265), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(610), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(289), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11385] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(517), 1,
      sym_keyword_filter,
    ACTIONS(521), 1,
      sym_keyword_group,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(529), 1,
      sym_keyword_join,
    ACTIONS(535), 1,
      sym_keyword_loop,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    ACTIONS(637), 1,
      sym_keyword_derive,
    ACTIONS(639), 1,
      sym_keyword_select,
    STATE(154), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym_transforms_repeat1,
    STATE(319), 1,
      sym_transforms,
    ACTIONS(533), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(220), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11448] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(147), 1,
      aux_sym__friendly_number,
    STATE(155), 1,
      sym_comment,
    ACTIONS(115), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(117), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11489] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(372), 1,
      sym_keyword_from,
    STATE(156), 1,
      sym_comment,
    ACTIONS(370), 23,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [11527] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(157), 1,
      sym_comment,
    ACTIONS(589), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(591), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11565] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(158), 1,
      sym_comment,
    ACTIONS(382), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(384), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11603] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(159), 1,
      sym_comment,
    ACTIONS(320), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(322), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11641] = 15,
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
    ACTIONS(586), 1,
      sym_keyword_loop,
    ACTIONS(641), 1,
      sym_keyword_derive,
    ACTIONS(644), 1,
      sym_keyword_select,
    STATE(160), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(583), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(220), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11699] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(161), 1,
      sym_comment,
    ACTIONS(386), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(388), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11737] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(162), 1,
      sym_comment,
    ACTIONS(130), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(132), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11775] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(517), 1,
      sym_keyword_filter,
    ACTIONS(521), 1,
      sym_keyword_group,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(529), 1,
      sym_keyword_join,
    ACTIONS(535), 1,
      sym_keyword_loop,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    ACTIONS(637), 1,
      sym_keyword_derive,
    ACTIONS(639), 1,
      sym_keyword_select,
    STATE(160), 1,
      aux_sym_transforms_repeat1,
    STATE(163), 1,
      sym_comment,
    ACTIONS(533), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(220), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11835] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(164), 1,
      sym_comment,
    ACTIONS(547), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(549), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11873] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(517), 1,
      sym_keyword_filter,
    ACTIONS(521), 1,
      sym_keyword_group,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(529), 1,
      sym_keyword_join,
    ACTIONS(535), 1,
      sym_keyword_loop,
    ACTIONS(637), 1,
      sym_keyword_derive,
    ACTIONS(639), 1,
      sym_keyword_select,
    STATE(163), 1,
      aux_sym_transforms_repeat1,
    STATE(165), 1,
      sym_comment,
    STATE(418), 1,
      sym_transforms,
    ACTIONS(533), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(220), 10,
      sym_loop,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11933] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(166), 1,
      sym_comment,
    ACTIONS(541), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(543), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [11971] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(167), 1,
      sym_comment,
    ACTIONS(376), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(378), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12009] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(168), 1,
      sym_comment,
    ACTIONS(338), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(340), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12047] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(169), 1,
      sym_comment,
    ACTIONS(344), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(346), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12085] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(170), 1,
      sym_comment,
    ACTIONS(338), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(340), 17,
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
      sym_keyword_loop,
      anon_sym__,
      sym__identifier,
  [12123] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(649), 1,
      sym_keyword_from,
    STATE(171), 1,
      sym_comment,
    ACTIONS(647), 22,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [12160] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(653), 1,
      sym_keyword_from,
    STATE(172), 1,
      sym_comment,
    ACTIONS(651), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12195] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(657), 1,
      sym_keyword_from,
    STATE(173), 1,
      sym_comment,
    ACTIONS(655), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12230] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(661), 1,
      sym_keyword_from,
    ACTIONS(663), 1,
      anon_sym_LBRACK,
    STATE(174), 1,
      sym_comment,
    STATE(238), 1,
      sym__self_join,
    STATE(239), 1,
      sym_conditions,
    ACTIONS(659), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12271] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(663), 1,
      anon_sym_LBRACK,
    ACTIONS(667), 1,
      sym_keyword_from,
    STATE(175), 1,
      sym_comment,
    STATE(233), 1,
      sym_conditions,
    STATE(238), 1,
      sym__self_join,
    ACTIONS(665), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12312] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(671), 1,
      sym_keyword_from,
    STATE(176), 1,
      sym_comment,
    ACTIONS(669), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12347] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(675), 1,
      sym_keyword_from,
    STATE(177), 1,
      sym_comment,
    ACTIONS(673), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12382] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(679), 1,
      sym_keyword_from,
    STATE(178), 1,
      sym_comment,
    ACTIONS(677), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12417] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(683), 1,
      sym_keyword_from,
    STATE(179), 1,
      sym_comment,
    ACTIONS(681), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12452] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(503), 1,
      sym_keyword_from,
    STATE(180), 1,
      sym_comment,
    ACTIONS(501), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12487] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(687), 1,
      sym_keyword_from,
    STATE(181), 1,
      sym_comment,
    ACTIONS(685), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12522] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(691), 1,
      sym_keyword_from,
    STATE(182), 1,
      sym_comment,
    ACTIONS(689), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12557] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(695), 1,
      sym_keyword_from,
    STATE(183), 1,
      sym_comment,
    ACTIONS(693), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12592] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(699), 1,
      sym_keyword_from,
    STATE(184), 1,
      sym_comment,
    ACTIONS(697), 20,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12627] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(703), 1,
      sym_keyword_from,
    ACTIONS(705), 1,
      anon_sym_DOT_DOT,
    STATE(185), 1,
      sym_comment,
    ACTIONS(701), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12663] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(709), 1,
      sym_keyword_from,
    ACTIONS(711), 1,
      anon_sym_EQ,
    STATE(186), 1,
      sym_comment,
    ACTIONS(707), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [12699] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(187), 1,
      sym_comment,
    ACTIONS(713), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(715), 12,
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
  [12732] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(719), 1,
      sym_keyword_from,
    STATE(188), 1,
      sym_comment,
    ACTIONS(717), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [12765] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(723), 1,
      sym_keyword_from,
    STATE(189), 1,
      sym_comment,
    ACTIONS(721), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12798] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(703), 1,
      sym_keyword_from,
    STATE(190), 1,
      sym_comment,
    ACTIONS(701), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12831] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(191), 1,
      sym_comment,
    ACTIONS(725), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(727), 12,
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
  [12864] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(731), 1,
      sym_keyword_from,
    STATE(192), 1,
      sym_comment,
    ACTIONS(729), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [12897] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(735), 1,
      sym_keyword_from,
    STATE(193), 1,
      sym_comment,
    ACTIONS(733), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12930] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(739), 1,
      sym_keyword_from,
    STATE(194), 1,
      sym_comment,
    ACTIONS(737), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12963] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(709), 1,
      sym_keyword_from,
    STATE(195), 1,
      sym_comment,
    ACTIONS(707), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
  [12996] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(743), 1,
      sym_keyword_from,
    STATE(196), 1,
      sym_comment,
    ACTIONS(741), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13029] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(747), 1,
      sym_keyword_from,
    STATE(197), 1,
      sym_comment,
    ACTIONS(745), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13062] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(198), 1,
      sym_comment,
    ACTIONS(749), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(751), 12,
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
  [13095] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(755), 1,
      sym_keyword_from,
    STATE(199), 1,
      sym_comment,
    ACTIONS(753), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13128] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(759), 1,
      sym_keyword_from,
    STATE(200), 1,
      sym_comment,
    ACTIONS(757), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13161] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(763), 1,
      sym_keyword_from,
    STATE(201), 1,
      sym_comment,
    ACTIONS(761), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13194] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(767), 1,
      sym_keyword_from,
    STATE(202), 1,
      sym_comment,
    ACTIONS(765), 18,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13227] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(771), 1,
      sym_keyword_from,
    STATE(203), 1,
      sym_comment,
    ACTIONS(769), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13259] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(775), 1,
      sym_keyword_from,
    STATE(204), 1,
      sym_comment,
    ACTIONS(773), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13291] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(779), 1,
      sym_keyword_from,
    STATE(205), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(777), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    ACTIONS(446), 11,
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
  [13327] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(783), 1,
      sym_keyword_from,
    STATE(206), 1,
      sym_comment,
    ACTIONS(781), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13359] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(787), 1,
      sym_keyword_from,
    STATE(207), 1,
      sym_comment,
    ACTIONS(785), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13391] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(503), 1,
      sym_keyword_from,
    STATE(208), 1,
      sym_comment,
    ACTIONS(501), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13423] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(791), 1,
      sym_keyword_from,
    STATE(209), 1,
      sym_comment,
    ACTIONS(789), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13455] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(795), 1,
      sym_keyword_from,
    STATE(210), 1,
      sym_comment,
    ACTIONS(793), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13487] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(799), 1,
      sym_keyword_from,
    STATE(211), 1,
      sym_comment,
    ACTIONS(797), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13519] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(803), 1,
      sym_keyword_from,
    STATE(212), 1,
      sym_comment,
    ACTIONS(801), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13551] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(807), 1,
      sym_keyword_from,
    STATE(213), 1,
      sym_comment,
    ACTIONS(805), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13583] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(811), 1,
      sym_keyword_from,
    STATE(214), 1,
      sym_comment,
    ACTIONS(809), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13615] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(815), 1,
      sym_keyword_from,
    STATE(215), 1,
      sym_comment,
    ACTIONS(813), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13647] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(819), 1,
      sym_keyword_from,
    STATE(216), 1,
      sym_comment,
    ACTIONS(817), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13679] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(823), 1,
      sym_keyword_from,
    STATE(217), 1,
      sym_comment,
    ACTIONS(821), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13711] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(827), 1,
      sym_keyword_from,
    STATE(218), 1,
      sym_comment,
    ACTIONS(825), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13743] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(831), 1,
      sym_keyword_from,
    STATE(219), 1,
      sym_comment,
    ACTIONS(829), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13775] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(835), 1,
      sym_keyword_from,
    STATE(220), 1,
      sym_comment,
    ACTIONS(833), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13807] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(839), 1,
      sym_keyword_from,
    STATE(221), 1,
      sym_comment,
    ACTIONS(837), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13839] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(843), 1,
      sym_keyword_from,
    STATE(222), 1,
      sym_comment,
    ACTIONS(841), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13871] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(847), 1,
      sym_keyword_from,
    STATE(223), 1,
      sym_comment,
    ACTIONS(845), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13903] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(851), 1,
      sym_keyword_from,
    STATE(224), 1,
      sym_comment,
    ACTIONS(849), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13935] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(420), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    ACTIONS(853), 1,
      anon_sym_EQ,
    STATE(225), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(501), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [13981] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(857), 1,
      sym_keyword_from,
    STATE(226), 1,
      sym_comment,
    ACTIONS(855), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14013] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(861), 1,
      sym_keyword_from,
    STATE(227), 1,
      sym_comment,
    ACTIONS(859), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14045] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(865), 1,
      sym_keyword_from,
    STATE(228), 1,
      sym_comment,
    ACTIONS(863), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14077] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(869), 1,
      sym_keyword_from,
    STATE(229), 1,
      sym_comment,
    ACTIONS(867), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14109] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(873), 1,
      sym_keyword_from,
    STATE(230), 1,
      sym_comment,
    ACTIONS(871), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14141] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(877), 1,
      sym_keyword_from,
    STATE(231), 1,
      sym_comment,
    ACTIONS(875), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14173] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(881), 1,
      sym_keyword_from,
    STATE(232), 1,
      sym_comment,
    ACTIONS(879), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14205] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(885), 1,
      sym_keyword_from,
    STATE(233), 1,
      sym_comment,
    ACTIONS(883), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14237] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(889), 1,
      sym_keyword_from,
    STATE(234), 1,
      sym_comment,
    ACTIONS(887), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14269] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(893), 1,
      sym_keyword_from,
    STATE(235), 1,
      sym_comment,
    ACTIONS(891), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14301] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(897), 1,
      sym_keyword_from,
    STATE(236), 1,
      sym_comment,
    ACTIONS(895), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14333] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(901), 1,
      sym_keyword_from,
    STATE(237), 1,
      sym_comment,
    ACTIONS(899), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14365] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(905), 1,
      sym_keyword_from,
    STATE(238), 1,
      sym_comment,
    ACTIONS(903), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14397] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(909), 1,
      sym_keyword_from,
    STATE(239), 1,
      sym_comment,
    ACTIONS(907), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14429] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(913), 1,
      sym_keyword_from,
    STATE(240), 1,
      sym_comment,
    ACTIONS(911), 17,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [14461] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(241), 1,
      sym_comment,
    ACTIONS(915), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(917), 10,
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
  [14492] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(242), 1,
      sym_comment,
    STATE(358), 1,
      aux_sym_derives_repeat1,
    ACTIONS(392), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 13,
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
  [14525] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    ACTIONS(921), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      sym_comment,
    STATE(386), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(448), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 11,
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
  [14562] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    ACTIONS(925), 1,
      anon_sym_RBRACK,
    STATE(244), 1,
      sym_comment,
    STATE(367), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 11,
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
  [14598] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(929), 1,
      anon_sym_DASH,
    ACTIONS(931), 1,
      anon_sym_DQUOTE,
    ACTIONS(933), 1,
      anon_sym_SQUOTE,
    ACTIONS(937), 1,
      anon_sym_DOT,
    STATE(245), 1,
      sym_comment,
    STATE(309), 1,
      aux_sym__friendly_number,
    STATE(344), 1,
      sym_integer,
    STATE(372), 1,
      sym_literal,
    ACTIONS(935), 2,
      sym__natural_number,
      anon_sym__,
    STATE(356), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(378), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(927), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14646] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(246), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym__friendly_number,
    ACTIONS(121), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(119), 10,
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
  [14678] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(247), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym__friendly_number,
    ACTIONS(117), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(115), 10,
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
  [14710] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(939), 1,
      sym__natural_number,
    ACTIONS(942), 1,
      anon_sym__,
    STATE(248), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(125), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym__identifier,
    ACTIONS(123), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14744] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(249), 1,
      sym_comment,
    ACTIONS(257), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(255), 11,
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
  [14774] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(250), 1,
      sym_comment,
    ACTIONS(945), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(448), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 11,
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
  [14806] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(251), 1,
      sym_comment,
    ACTIONS(253), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(251), 11,
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
  [14836] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      anon_sym_DASH,
    STATE(125), 1,
      aux_sym__friendly_number,
    STATE(128), 1,
      sym_literal,
    STATE(132), 1,
      sym_integer,
    STATE(252), 1,
      sym_comment,
    ACTIONS(73), 2,
      sym__natural_number,
      anon_sym__,
    STATE(127), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(129), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(947), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14884] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      anon_sym_SQUOTE,
    ACTIONS(360), 1,
      anon_sym_DOT,
    ACTIONS(608), 1,
      anon_sym_DASH,
    STATE(246), 1,
      aux_sym__friendly_number,
    STATE(253), 1,
      sym_comment,
    STATE(264), 1,
      sym_literal,
    STATE(268), 1,
      sym_integer,
    ACTIONS(356), 2,
      sym__natural_number,
      anon_sym__,
    STATE(263), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(265), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(949), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14932] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(254), 1,
      sym_comment,
    ACTIONS(392), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 13,
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
  [14962] = 14,
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
    ACTIONS(464), 1,
      anon_sym_DASH,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(164), 1,
      sym_literal,
    STATE(170), 1,
      sym_integer,
    STATE(255), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym__natural_number,
      anon_sym__,
    STATE(168), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(169), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(951), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15010] = 14,
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
    STATE(80), 1,
      sym_integer,
    STATE(256), 1,
      sym_comment,
    STATE(448), 1,
      sym_literal,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(953), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15058] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(955), 1,
      anon_sym_COLON,
    STATE(257), 1,
      sym_comment,
    ACTIONS(543), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(541), 10,
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
  [15090] = 14,
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
    STATE(80), 1,
      sym_integer,
    STATE(258), 1,
      sym_comment,
    STATE(447), 1,
      sym_literal,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
    STATE(89), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(107), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(953), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15138] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(420), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    STATE(259), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(957), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15179] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(420), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    STATE(260), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(959), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15220] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(261), 1,
      sym_comment,
    ACTIONS(322), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(320), 10,
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
  [15249] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(262), 1,
      sym_comment,
    ACTIONS(388), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(386), 10,
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
  [15278] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(263), 1,
      sym_comment,
    ACTIONS(340), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(338), 10,
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
  [15307] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(264), 1,
      sym_comment,
    ACTIONS(549), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(547), 10,
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
  [15336] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(265), 1,
      sym_comment,
    ACTIONS(346), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(344), 10,
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
  [15365] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(266), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(961), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(446), 11,
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
  [15396] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(267), 1,
      sym_comment,
    ACTIONS(384), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(382), 10,
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
  [15425] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(268), 1,
      sym_comment,
    ACTIONS(340), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(338), 10,
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
  [15454] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(269), 1,
      sym_comment,
    ACTIONS(378), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(376), 10,
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
  [15483] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(270), 1,
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
  [15512] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(271), 1,
      sym_comment,
    ACTIONS(591), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(589), 10,
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
  [15541] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(272), 1,
      sym_comment,
    ACTIONS(543), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(541), 10,
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
  [15570] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    STATE(273), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15606] = 14,
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
    ACTIONS(963), 1,
      ts_builtin_sym_end,
    STATE(274), 1,
      sym_comment,
    STATE(288), 1,
      aux_sym_program_repeat2,
    STATE(303), 1,
      aux_sym_program_repeat1,
    STATE(317), 1,
      sym_prql,
    STATE(121), 2,
      sym_from_text,
      sym_from,
    STATE(335), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15652] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(420), 1,
      sym_keyword_and,
    STATE(275), 1,
      sym_comment,
    ACTIONS(394), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15690] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 11,
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
  [15720] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(967), 1,
      sym_keyword_and,
    ACTIONS(969), 1,
      sym_keyword_or,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15760] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(278), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 12,
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
  [15788] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(420), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    ACTIONS(853), 1,
      anon_sym_EQ,
    STATE(279), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15828] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(967), 1,
      sym_keyword_and,
    ACTIONS(969), 1,
      sym_keyword_or,
    STATE(280), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15868] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(973), 1,
      anon_sym_EQ_GT,
    STATE(281), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 11,
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
  [15898] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 11,
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
  [15928] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 11,
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
  [15958] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(979), 1,
      anon_sym_EQ_GT,
    STATE(284), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 11,
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
  [15988] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(420), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_or,
    STATE(285), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16025] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(967), 1,
      sym_keyword_and,
    ACTIONS(969), 1,
      sym_keyword_or,
    STATE(286), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(402), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16062] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(287), 1,
      sym_comment,
    STATE(323), 1,
      sym_target,
    ACTIONS(981), 11,
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
  [16088] = 11,
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
    ACTIONS(983), 1,
      ts_builtin_sym_end,
    STATE(288), 1,
      sym_comment,
    STATE(290), 1,
      aux_sym_program_repeat2,
    STATE(121), 2,
      sym_from_text,
      sym_from,
    STATE(335), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16125] = 11,
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
    ACTIONS(963), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      sym_comment,
    STATE(290), 1,
      aux_sym_program_repeat2,
    STATE(121), 2,
      sym_from_text,
      sym_from,
    STATE(335), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16162] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(985), 1,
      ts_builtin_sym_end,
    ACTIONS(987), 1,
      sym_keyword_from,
    ACTIONS(990), 1,
      sym_keyword_func,
    ACTIONS(993), 1,
      sym_keyword_let,
    ACTIONS(996), 1,
      sym_keyword_from_text,
    STATE(121), 2,
      sym_from_text,
      sym_from,
    STATE(290), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(335), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16197] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(999), 1,
      sym_keyword_window,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16231] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1003), 1,
      sym_keyword_aggregate,
    ACTIONS(1006), 1,
      sym_keyword_sort,
    ACTIONS(1009), 1,
      sym_keyword_take,
    ACTIONS(1012), 1,
      sym_keyword_window,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(292), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16263] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(999), 1,
      sym_keyword_window,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(293), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16297] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(999), 1,
      sym_keyword_window,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(294), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16331] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(999), 1,
      sym_keyword_window,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(295), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16365] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(999), 1,
      sym_keyword_window,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(296), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16399] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(999), 1,
      sym_keyword_window,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(297), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16430] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(999), 1,
      sym_keyword_window,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(298), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16461] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    ACTIONS(1027), 1,
      anon_sym_RBRACK,
    ACTIONS(1029), 1,
      sym__identifier,
    STATE(184), 1,
      sym_identifier,
    STATE(299), 1,
      sym_comment,
    STATE(368), 1,
      sym_direction,
    STATE(393), 1,
      sym__sort_instruction,
    ACTIONS(281), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16496] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(999), 1,
      sym_keyword_window,
    STATE(294), 1,
      aux_sym_group_repeat2,
    STATE(300), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16527] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(999), 1,
      sym_keyword_window,
    STATE(295), 1,
      aux_sym_group_repeat2,
    STATE(301), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16558] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(523), 1,
      sym_keyword_aggregate,
    ACTIONS(525), 1,
      sym_keyword_sort,
    ACTIONS(527), 1,
      sym_keyword_take,
    ACTIONS(999), 1,
      sym_keyword_window,
    STATE(296), 1,
      aux_sym_group_repeat2,
    STATE(302), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16589] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1033), 1,
      sym_keyword_from,
    ACTIONS(1035), 1,
      sym_keyword_prql,
    STATE(317), 1,
      sym_prql,
    STATE(303), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1031), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [16615] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1038), 1,
      anon_sym_DASH,
    ACTIONS(1040), 1,
      anon_sym_AT,
    STATE(140), 1,
      aux_sym__friendly_number,
    STATE(304), 1,
      sym_comment,
    STATE(325), 1,
      sym_integer,
    STATE(353), 1,
      sym_range,
    STATE(434), 1,
      sym_date,
    ACTIONS(593), 2,
      sym__natural_number,
      anon_sym__,
  [16647] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1029), 1,
      sym__identifier,
    ACTIONS(1042), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      sym_identifier,
    STATE(305), 1,
      sym_comment,
    STATE(368), 1,
      sym_direction,
    STATE(411), 1,
      sym__sort_instruction,
    ACTIONS(281), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16679] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1029), 1,
      sym__identifier,
    ACTIONS(1044), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      sym_identifier,
    STATE(306), 1,
      sym_comment,
    STATE(368), 1,
      sym_direction,
    STATE(411), 1,
      sym__sort_instruction,
    ACTIONS(281), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16711] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1038), 1,
      anon_sym_DASH,
    ACTIONS(1040), 1,
      anon_sym_AT,
    STATE(140), 1,
      aux_sym__friendly_number,
    STATE(185), 1,
      sym_integer,
    STATE(190), 1,
      sym_range,
    STATE(307), 1,
      sym_comment,
    STATE(434), 1,
      sym_date,
    ACTIONS(593), 2,
      sym__natural_number,
      anon_sym__,
  [16743] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1029), 1,
      sym__identifier,
    ACTIONS(1046), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_identifier,
    STATE(201), 1,
      sym__sort_instruction,
    STATE(308), 1,
      sym_comment,
    STATE(368), 1,
      sym_direction,
    ACTIONS(281), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16775] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(121), 1,
      sym__identifier,
    ACTIONS(935), 1,
      sym__natural_number,
    ACTIONS(1048), 1,
      anon_sym__,
    STATE(309), 1,
      sym_comment,
    STATE(312), 1,
      aux_sym__friendly_number,
    ACTIONS(119), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16802] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1029), 1,
      sym__identifier,
    STATE(184), 1,
      sym_identifier,
    STATE(310), 1,
      sym_comment,
    STATE(368), 1,
      sym_direction,
    STATE(411), 1,
      sym__sort_instruction,
    ACTIONS(281), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16831] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(117), 1,
      sym__identifier,
    ACTIONS(935), 1,
      sym__natural_number,
    ACTIONS(1048), 1,
      anon_sym__,
    STATE(311), 1,
      sym_comment,
    STATE(312), 1,
      aux_sym__friendly_number,
    ACTIONS(115), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16858] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(125), 1,
      sym__identifier,
    ACTIONS(1050), 1,
      sym__natural_number,
    ACTIONS(1053), 1,
      anon_sym__,
    STATE(312), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(123), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16883] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(55), 1,
      sym__identifier,
    ACTIONS(1056), 1,
      sym_keyword_side,
    STATE(175), 1,
      sym__table_selection,
    STATE(186), 1,
      sym_identifier,
    STATE(188), 1,
      sym__table_reference,
    STATE(313), 1,
      sym_comment,
    STATE(337), 1,
      sym__join_definition,
  [16914] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1060), 1,
      sym_keyword_from,
    STATE(314), 1,
      sym_comment,
    ACTIONS(1058), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [16934] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1062), 1,
      anon_sym_DASH_GT,
    ACTIONS(1064), 1,
      anon_sym_BQUOTE,
    ACTIONS(1066), 1,
      sym__identifier,
    STATE(315), 1,
      sym_comment,
    STATE(320), 1,
      aux_sym_function_definition_repeat1,
    STATE(350), 1,
      sym_identifier,
    STATE(360), 1,
      sym_parameter,
  [16962] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(316), 1,
      sym_comment,
    STATE(318), 1,
      aux_sym_window_definitions_repeat1,
    STATE(349), 1,
      sym__window_definition,
    STATE(449), 1,
      sym_window_definitions,
    ACTIONS(1068), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [16986] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1072), 1,
      sym_keyword_from,
    STATE(317), 1,
      sym_comment,
    ACTIONS(1070), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17006] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1074), 1,
      anon_sym_LPAREN,
    STATE(318), 1,
      sym_comment,
    STATE(324), 1,
      aux_sym_window_definitions_repeat1,
    STATE(349), 1,
      sym__window_definition,
    ACTIONS(1068), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17030] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1078), 1,
      sym_keyword_from,
    STATE(319), 1,
      sym_comment,
    ACTIONS(1076), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [17050] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1080), 1,
      anon_sym_DASH_GT,
    ACTIONS(1082), 1,
      anon_sym_BQUOTE,
    ACTIONS(1085), 1,
      sym__identifier,
    STATE(350), 1,
      sym_identifier,
    STATE(360), 1,
      sym_parameter,
    STATE(320), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [17076] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1090), 1,
      sym_keyword_from,
    STATE(321), 1,
      sym_comment,
    ACTIONS(1088), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17096] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(322), 1,
      sym_comment,
    ACTIONS(132), 2,
      anon_sym__,
      sym__identifier,
    ACTIONS(130), 4,
      anon_sym_DASH_GT,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [17116] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1094), 1,
      sym_keyword_from,
    STATE(323), 1,
      sym_comment,
    ACTIONS(1092), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17136] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1099), 1,
      anon_sym_LPAREN,
    STATE(349), 1,
      sym__window_definition,
    STATE(324), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1096), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17158] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(705), 1,
      anon_sym_DOT_DOT,
    STATE(325), 1,
      sym_comment,
    ACTIONS(1101), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17177] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1105), 1,
      sym_keyword_from,
    STATE(326), 1,
      sym_comment,
    ACTIONS(1103), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17196] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1029), 1,
      sym__identifier,
    STATE(186), 1,
      sym_identifier,
    STATE(188), 1,
      sym__table_reference,
    STATE(206), 1,
      sym__table_selection,
    STATE(327), 1,
      sym_comment,
  [17221] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1107), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(82), 1,
      sym_integer,
    STATE(328), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
  [17244] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1029), 1,
      sym__identifier,
    STATE(186), 1,
      sym_identifier,
    STATE(188), 1,
      sym__table_reference,
    STATE(215), 1,
      sym__table_selection,
    STATE(329), 1,
      sym_comment,
  [17269] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1107), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(79), 1,
      sym_integer,
    STATE(330), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
  [17292] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1107), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(84), 1,
      sym_integer,
    STATE(331), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
  [17315] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1107), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(171), 1,
      sym_integer,
    STATE(332), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
  [17338] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    STATE(333), 1,
      sym_comment,
    STATE(417), 1,
      sym_pipeline,
    STATE(154), 2,
      sym_from_text,
      sym_from,
  [17361] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1064), 1,
      anon_sym_BQUOTE,
    ACTIONS(1066), 1,
      sym__identifier,
    STATE(315), 1,
      aux_sym_function_definition_repeat1,
    STATE(334), 1,
      sym_comment,
    STATE(350), 1,
      sym_identifier,
    STATE(360), 1,
      sym_parameter,
  [17386] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1111), 1,
      sym_keyword_from,
    STATE(335), 1,
      sym_comment,
    ACTIONS(1109), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17405] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1115), 1,
      sym_keyword_from,
    STATE(336), 1,
      sym_comment,
    ACTIONS(1113), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17424] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1029), 1,
      sym__identifier,
    STATE(174), 1,
      sym__table_selection,
    STATE(186), 1,
      sym_identifier,
    STATE(188), 1,
      sym__table_reference,
    STATE(337), 1,
      sym_comment,
  [17449] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(338), 1,
      sym_comment,
    ACTIONS(1117), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [17466] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(339), 1,
      sym_comment,
    ACTIONS(1119), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [17483] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(340), 1,
      sym_comment,
    ACTIONS(251), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17499] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1029), 1,
      sym__identifier,
    STATE(192), 1,
      sym__table_reference,
    STATE(195), 1,
      sym_identifier,
    STATE(341), 1,
      sym_comment,
  [17521] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1121), 1,
      sym__natural_number,
    STATE(342), 1,
      sym_comment,
    ACTIONS(376), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17539] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(343), 1,
      sym_comment,
    ACTIONS(1123), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [17555] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1125), 1,
      anon_sym_DOT,
    STATE(344), 1,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17573] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1127), 1,
      anon_sym_DOT,
    STATE(155), 1,
      aux_sym__friendly_number,
    STATE(345), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym__natural_number,
      anon_sym__,
  [17593] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1129), 1,
      anon_sym_DOT,
    STATE(247), 1,
      aux_sym__friendly_number,
    STATE(346), 1,
      sym_comment,
    ACTIONS(356), 2,
      sym__natural_number,
      anon_sym__,
  [17613] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(347), 1,
      sym_comment,
    ACTIONS(255), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17629] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1131), 1,
      anon_sym_DOT,
    STATE(122), 1,
      aux_sym__friendly_number,
    STATE(348), 1,
      sym_comment,
    ACTIONS(73), 2,
      sym__natural_number,
      anon_sym__,
  [17649] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(349), 1,
      sym_comment,
    ACTIONS(1133), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17665] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1135), 1,
      anon_sym_COLON,
    STATE(350), 1,
      sym_comment,
    ACTIONS(1137), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17683] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1139), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(351), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
  [17703] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1141), 1,
      aux_sym__date_token1,
    ACTIONS(1143), 1,
      aux_sym__time_token1,
    STATE(85), 1,
      sym__date,
    STATE(112), 1,
      sym__time,
    STATE(352), 1,
      sym_comment,
  [17725] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(353), 1,
      sym_comment,
    ACTIONS(1101), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17741] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1145), 1,
      anon_sym_DOT,
    STATE(311), 1,
      aux_sym__friendly_number,
    STATE(354), 1,
      sym_comment,
    ACTIONS(935), 2,
      sym__natural_number,
      anon_sym__,
  [17761] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(141), 1,
      aux_sym__friendly_number,
    STATE(355), 1,
      sym_comment,
    ACTIONS(593), 2,
      sym__natural_number,
      anon_sym__,
  [17778] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(356), 1,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17793] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RBRACK,
    STATE(357), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [17810] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_RBRACK,
    STATE(358), 1,
      sym_comment,
    STATE(376), 1,
      aux_sym_derives_repeat1,
  [17829] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(945), 1,
      anon_sym_RBRACK,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    STATE(359), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [17846] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(360), 1,
      sym_comment,
    ACTIONS(1159), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17861] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(1161), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_from_text,
    STATE(361), 1,
      sym_comment,
  [17880] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(961), 1,
      anon_sym_RBRACK,
    ACTIONS(1163), 1,
      anon_sym_COMMA,
    STATE(362), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [17897] = 6,
    ACTIONS(1166), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1168), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    STATE(363), 1,
      sym_comment,
    STATE(395), 1,
      aux_sym__inner_triple_quotes,
  [17916] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_RBRACK,
    STATE(364), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [17933] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    ACTIONS(1179), 1,
      anon_sym_COMMA,
    STATE(365), 2,
      sym_comment,
      aux_sym_case_repeat2,
  [17950] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(366), 1,
      sym_comment,
    ACTIONS(1182), 3,
      anon_sym_BQUOTE,
      sym__identifier,
      aux_sym__date_token2,
  [17965] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    ACTIONS(1184), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_conditions_repeat1,
    STATE(367), 1,
      sym_comment,
  [17984] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1029), 1,
      sym__identifier,
    STATE(179), 1,
      sym_identifier,
    STATE(368), 1,
      sym_comment,
  [18003] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1029), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    STATE(369), 1,
      sym_comment,
  [18022] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_group_repeat1,
    STATE(370), 1,
      sym_comment,
  [18041] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    ACTIONS(1190), 1,
      anon_sym_RBRACK,
    STATE(371), 1,
      sym_comment,
    STATE(391), 1,
      aux_sym_group_repeat1,
  [18060] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(372), 1,
      sym_comment,
    ACTIONS(1192), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18075] = 6,
    ACTIONS(1166), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1194), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(373), 1,
      sym_comment,
    STATE(395), 1,
      aux_sym__inner_triple_quotes,
  [18094] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      aux_sym_group_repeat1,
    STATE(374), 1,
      sym_comment,
  [18113] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1064), 1,
      anon_sym_BQUOTE,
    ACTIONS(1066), 1,
      sym__identifier,
    STATE(334), 1,
      sym_identifier,
    STATE(375), 1,
      sym_comment,
  [18132] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    ACTIONS(1201), 1,
      anon_sym_RBRACK,
    STATE(376), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [18149] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      sym_comment,
    STATE(379), 1,
      aux_sym_group_repeat1,
  [18168] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(378), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18183] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_group_repeat1,
    STATE(379), 1,
      sym_comment,
  [18202] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    STATE(365), 1,
      aux_sym_case_repeat2,
    STATE(380), 1,
      sym_comment,
  [18221] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(381), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym__natural_number,
      anon_sym__,
  [18238] = 6,
    ACTIONS(1166), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(382), 1,
      sym_comment,
    STATE(395), 1,
      aux_sym__inner_triple_quotes,
  [18257] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1209), 1,
      sym_keyword_format,
    ACTIONS(1211), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(218), 1,
      sym__triple_quote_string,
    STATE(383), 1,
      sym_comment,
  [18276] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1042), 1,
      anon_sym_RBRACK,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_sorts_repeat1,
    STATE(384), 1,
      sym_comment,
  [18295] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(385), 1,
      sym_comment,
    ACTIONS(376), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18310] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(1215), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_aggregate_repeat1,
    STATE(386), 1,
      sym_comment,
  [18329] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(53), 1,
      anon_sym_BQUOTE,
    ACTIONS(1029), 1,
      sym__identifier,
    STATE(387), 1,
      sym_comment,
    STATE(488), 1,
      sym_identifier,
  [18348] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(388), 1,
      sym_comment,
    ACTIONS(382), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18363] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(389), 1,
      sym_comment,
    ACTIONS(320), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18378] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(390), 1,
      sym_comment,
    ACTIONS(386), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18393] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    ACTIONS(1217), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_group_repeat1,
    STATE(391), 1,
      sym_comment,
  [18412] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1219), 1,
      anon_sym_COMMA,
    ACTIONS(1221), 1,
      anon_sym_RBRACK,
    STATE(392), 1,
      sym_comment,
    STATE(394), 1,
      aux_sym_derives_repeat1,
  [18431] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1223), 1,
      anon_sym_COMMA,
    ACTIONS(1225), 1,
      anon_sym_RBRACK,
    STATE(384), 1,
      aux_sym_sorts_repeat1,
    STATE(393), 1,
      sym_comment,
  [18450] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    ACTIONS(1227), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_derives_repeat1,
    STATE(394), 1,
      sym_comment,
  [18469] = 5,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1229), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1232), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(395), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [18486] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    ACTIONS(921), 1,
      anon_sym_RBRACK,
    STATE(386), 1,
      aux_sym_aggregate_repeat1,
    STATE(396), 1,
      sym_comment,
  [18505] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1211), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(207), 1,
      sym__triple_quote_string,
    STATE(397), 1,
      sym_comment,
  [18521] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1141), 1,
      aux_sym__date_token1,
    STATE(156), 1,
      sym__date,
    STATE(398), 1,
      sym_comment,
  [18537] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(399), 1,
      sym_comment,
    ACTIONS(1201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18551] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(400), 1,
      sym_comment,
    ACTIONS(1150), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18565] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1234), 1,
      sym_keyword_version,
    ACTIONS(1236), 1,
      sym_keyword_target,
    STATE(401), 1,
      sym_comment,
  [18581] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(402), 1,
      sym_comment,
    ACTIONS(945), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18595] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(403), 1,
      sym_comment,
    ACTIONS(1238), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [18609] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1240), 1,
      sym_keyword_derive,
    STATE(404), 1,
      sym_comment,
    STATE(463), 1,
      sym_derives,
  [18625] = 5,
    ACTIONS(1166), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    STATE(363), 1,
      aux_sym__inner_triple_quotes,
    STATE(405), 1,
      sym_comment,
  [18641] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1242), 1,
      aux_sym__time_token1,
    STATE(54), 1,
      sym__time,
    STATE(406), 1,
      sym_comment,
  [18657] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(407), 1,
      sym_comment,
    ACTIONS(1244), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [18671] = 5,
    ACTIONS(1166), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    STATE(382), 1,
      aux_sym__inner_triple_quotes,
    STATE(408), 1,
      sym_comment,
  [18687] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(321), 1,
      sym__double_quote_string,
    STATE(409), 1,
      sym_comment,
  [18703] = 5,
    ACTIONS(1166), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    STATE(373), 1,
      aux_sym__inner_triple_quotes,
    STATE(410), 1,
      sym_comment,
  [18719] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(411), 1,
      sym_comment,
    ACTIONS(1177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18733] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1040), 1,
      anon_sym_AT,
    STATE(171), 1,
      sym_date,
    STATE(412), 1,
      sym_comment,
  [18749] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    STATE(413), 1,
      sym_comment,
    ACTIONS(1246), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [18763] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1248), 1,
      anon_sym_LPAREN,
    STATE(414), 1,
      sym_comment,
  [18776] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1250), 1,
      anon_sym_COLON,
    STATE(415), 1,
      sym_comment,
  [18789] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1252), 1,
      aux_sym__date_token2,
    STATE(416), 1,
      sym_comment,
  [18802] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      sym_comment,
  [18815] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      sym_comment,
  [18828] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(419), 1,
      sym_comment,
  [18841] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1225), 1,
      anon_sym_RBRACK,
    STATE(420), 1,
      sym_comment,
  [18854] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(921), 1,
      anon_sym_RBRACK,
    STATE(421), 1,
      sym_comment,
  [18867] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1258), 1,
      anon_sym_LPAREN,
    STATE(422), 1,
      sym_comment,
  [18880] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1190), 1,
      anon_sym_RBRACK,
    STATE(423), 1,
      sym_comment,
  [18893] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1221), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      sym_comment,
  [18906] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1260), 1,
      aux_sym_comment_token1,
    STATE(425), 1,
      sym_comment,
  [18919] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1262), 1,
      anon_sym_DQUOTE,
    STATE(426), 1,
      sym_comment,
  [18932] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1264), 1,
      anon_sym_DQUOTE,
    STATE(427), 1,
      sym_comment,
  [18945] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1266), 1,
      anon_sym_SQUOTE,
    STATE(428), 1,
      sym_comment,
  [18958] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1268), 1,
      anon_sym_DQUOTE,
    STATE(429), 1,
      sym_comment,
  [18971] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(380), 1,
      sym__natural_number,
    STATE(430), 1,
      sym_comment,
  [18984] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1270), 1,
      aux_sym__date_token2,
    STATE(431), 1,
      sym_comment,
  [18997] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1272), 1,
      anon_sym_LBRACK,
    STATE(432), 1,
      sym_comment,
  [19010] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1274), 1,
      anon_sym_COLON,
    STATE(433), 1,
      sym_comment,
  [19023] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1276), 1,
      anon_sym_DOT_DOT,
    STATE(434), 1,
      sym_comment,
  [19036] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1278), 1,
      aux_sym__date_token2,
    STATE(435), 1,
      sym_comment,
  [19049] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1280), 1,
      anon_sym_LPAREN,
    STATE(436), 1,
      sym_comment,
  [19062] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      sym_comment,
  [19075] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1284), 1,
      anon_sym_LPAREN,
    STATE(438), 1,
      sym_comment,
  [19088] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1286), 1,
      anon_sym_DOT,
    STATE(439), 1,
      sym_comment,
  [19101] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    STATE(440), 1,
      sym_comment,
  [19114] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1290), 1,
      sym__natural_number,
    STATE(441), 1,
      sym_comment,
  [19127] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1292), 1,
      aux_sym__double_quote_string_token1,
    STATE(442), 1,
      sym_comment,
  [19140] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1294), 1,
      aux_sym__double_quote_string_token1,
    STATE(443), 1,
      sym_comment,
  [19153] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1296), 1,
      aux_sym__single_quote_string_token1,
    STATE(444), 1,
      sym_comment,
  [19166] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1298), 1,
      aux_sym__double_quote_string_token1,
    STATE(445), 1,
      sym_comment,
  [19179] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1300), 1,
      anon_sym_RBRACK,
    STATE(446), 1,
      sym_comment,
  [19192] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1302), 1,
      anon_sym_COMMA,
    STATE(447), 1,
      sym_comment,
  [19205] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      sym_comment,
  [19218] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1306), 1,
      anon_sym_LPAREN,
    STATE(449), 1,
      sym_comment,
  [19231] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    STATE(450), 1,
      sym_comment,
  [19244] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1308), 1,
      anon_sym_BQUOTE,
    STATE(451), 1,
      sym_comment,
  [19257] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(925), 1,
      anon_sym_RBRACK,
    STATE(452), 1,
      sym_comment,
  [19270] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1310), 1,
      anon_sym_LBRACK,
    STATE(453), 1,
      sym_comment,
  [19283] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1312), 1,
      anon_sym_BQUOTE,
    STATE(454), 1,
      sym_comment,
  [19296] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1314), 1,
      anon_sym_COLON,
    STATE(455), 1,
      sym_comment,
  [19309] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1316), 1,
      sym__natural_number,
    STATE(456), 1,
      sym_comment,
  [19322] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1121), 1,
      sym__natural_number,
    STATE(457), 1,
      sym_comment,
  [19335] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1318), 1,
      anon_sym_DQUOTE,
    STATE(458), 1,
      sym_comment,
  [19348] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1320), 1,
      anon_sym_SQUOTE,
    STATE(459), 1,
      sym_comment,
  [19361] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1322), 1,
      anon_sym_DASH,
    STATE(460), 1,
      sym_comment,
  [19374] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1324), 1,
      aux_sym__date_token2,
    STATE(461), 1,
      sym_comment,
  [19387] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1326), 1,
      anon_sym_BQUOTE,
    STATE(462), 1,
      sym_comment,
  [19400] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      sym_comment,
  [19413] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1330), 1,
      sym__natural_number,
    STATE(464), 1,
      sym_comment,
  [19426] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1332), 1,
      sym__natural_number,
    STATE(465), 1,
      sym_comment,
  [19439] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1334), 1,
      anon_sym_DQUOTE,
    STATE(466), 1,
      sym_comment,
  [19452] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1336), 1,
      anon_sym_SQUOTE,
    STATE(467), 1,
      sym_comment,
  [19465] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1338), 1,
      anon_sym_COLON,
    STATE(468), 1,
      sym_comment,
  [19478] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1340), 1,
      anon_sym_COLON,
    STATE(469), 1,
      sym_comment,
  [19491] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1342), 1,
      anon_sym_BQUOTE,
    STATE(470), 1,
      sym_comment,
  [19504] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1344), 1,
      aux_sym__date_token2,
    STATE(471), 1,
      sym_comment,
  [19517] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1346), 1,
      sym__natural_number,
    STATE(472), 1,
      sym_comment,
  [19530] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1348), 1,
      sym__natural_number,
    STATE(473), 1,
      sym_comment,
  [19543] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1350), 1,
      anon_sym_DQUOTE,
    STATE(474), 1,
      sym_comment,
  [19556] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1352), 1,
      anon_sym_SQUOTE,
    STATE(475), 1,
      sym_comment,
  [19569] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1354), 1,
      anon_sym_BQUOTE,
    STATE(476), 1,
      sym_comment,
  [19582] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1356), 1,
      anon_sym_LBRACK,
    STATE(477), 1,
      sym_comment,
  [19595] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1358), 1,
      sym__natural_number,
    STATE(478), 1,
      sym_comment,
  [19608] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1360), 1,
      sym__natural_number,
    STATE(479), 1,
      sym_comment,
  [19621] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1362), 1,
      anon_sym_DQUOTE,
    STATE(480), 1,
      sym_comment,
  [19634] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1364), 1,
      anon_sym_SQUOTE,
    STATE(481), 1,
      sym_comment,
  [19647] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1366), 1,
      anon_sym_BQUOTE,
    STATE(482), 1,
      sym_comment,
  [19660] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1368), 1,
      anon_sym_BQUOTE,
    STATE(483), 1,
      sym_comment,
  [19673] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1370), 1,
      anon_sym_BQUOTE,
    STATE(484), 1,
      sym_comment,
  [19686] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1372), 1,
      sym__identifier_dot,
    STATE(485), 1,
      sym_comment,
  [19699] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1374), 1,
      aux_sym__double_quote_string_token1,
    STATE(486), 1,
      sym_comment,
  [19712] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1376), 1,
      aux_sym__single_quote_string_token1,
    STATE(487), 1,
      sym_comment,
  [19725] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1378), 1,
      anon_sym_EQ,
    STATE(488), 1,
      sym_comment,
  [19738] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1380), 1,
      sym__identifier_dot,
    STATE(489), 1,
      sym_comment,
  [19751] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1382), 1,
      aux_sym__double_quote_string_token1,
    STATE(490), 1,
      sym_comment,
  [19764] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1384), 1,
      aux_sym__single_quote_string_token1,
    STATE(491), 1,
      sym_comment,
  [19777] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1386), 1,
      sym__identifier_dot,
    STATE(492), 1,
      sym_comment,
  [19790] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1388), 1,
      sym__identifier_dot,
    STATE(493), 1,
      sym_comment,
  [19803] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1390), 1,
      aux_sym__double_quote_string_token1,
    STATE(494), 1,
      sym_comment,
  [19816] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1392), 1,
      aux_sym__single_quote_string_token1,
    STATE(495), 1,
      sym_comment,
  [19829] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1394), 1,
      sym__identifier_dot,
    STATE(496), 1,
      sym_comment,
  [19842] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1396), 1,
      aux_sym__double_quote_string_token1,
    STATE(497), 1,
      sym_comment,
  [19855] = 4,
    ACTIONS(1170), 1,
      anon_sym_POUND,
    ACTIONS(1172), 1,
      sym_pipe,
    ACTIONS(1398), 1,
      aux_sym__single_quote_string_token1,
    STATE(498), 1,
      sym_comment,
  [19868] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1400), 1,
      sym__identifier_dot,
    STATE(499), 1,
      sym_comment,
  [19881] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1402), 1,
      sym__identifier_dot,
    STATE(500), 1,
      sym_comment,
  [19894] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1404), 1,
      sym__identifier_dot,
    STATE(501), 1,
      sym_comment,
  [19907] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1406), 1,
      anon_sym_LPAREN,
    STATE(502), 1,
      sym_comment,
  [19920] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1408), 1,
      ts_builtin_sym_end,
    STATE(503), 1,
      sym_comment,
  [19933] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1410), 1,
      anon_sym_LPAREN,
    STATE(504), 1,
      sym_comment,
  [19946] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1412), 1,
      anon_sym_DASH,
    STATE(505), 1,
      sym_comment,
  [19959] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(506), 1,
      sym_comment,
  [19972] = 1,
    ACTIONS(1414), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 131,
  [SMALL_STATE(4)] = 259,
  [SMALL_STATE(5)] = 387,
  [SMALL_STATE(6)] = 512,
  [SMALL_STATE(7)] = 608,
  [SMALL_STATE(8)] = 730,
  [SMALL_STATE(9)] = 852,
  [SMALL_STATE(10)] = 974,
  [SMALL_STATE(11)] = 1094,
  [SMALL_STATE(12)] = 1186,
  [SMALL_STATE(13)] = 1249,
  [SMALL_STATE(14)] = 1312,
  [SMALL_STATE(15)] = 1373,
  [SMALL_STATE(16)] = 1431,
  [SMALL_STATE(17)] = 1550,
  [SMALL_STATE(18)] = 1664,
  [SMALL_STATE(19)] = 1776,
  [SMALL_STATE(20)] = 1888,
  [SMALL_STATE(21)] = 2000,
  [SMALL_STATE(22)] = 2112,
  [SMALL_STATE(23)] = 2168,
  [SMALL_STATE(24)] = 2280,
  [SMALL_STATE(25)] = 2396,
  [SMALL_STATE(26)] = 2508,
  [SMALL_STATE(27)] = 2620,
  [SMALL_STATE(28)] = 2729,
  [SMALL_STATE(29)] = 2838,
  [SMALL_STATE(30)] = 2947,
  [SMALL_STATE(31)] = 3056,
  [SMALL_STATE(32)] = 3165,
  [SMALL_STATE(33)] = 3274,
  [SMALL_STATE(34)] = 3383,
  [SMALL_STATE(35)] = 3492,
  [SMALL_STATE(36)] = 3601,
  [SMALL_STATE(37)] = 3714,
  [SMALL_STATE(38)] = 3823,
  [SMALL_STATE(39)] = 3936,
  [SMALL_STATE(40)] = 4047,
  [SMALL_STATE(41)] = 4156,
  [SMALL_STATE(42)] = 4265,
  [SMALL_STATE(43)] = 4369,
  [SMALL_STATE(44)] = 4423,
  [SMALL_STATE(45)] = 4529,
  [SMALL_STATE(46)] = 4639,
  [SMALL_STATE(47)] = 4745,
  [SMALL_STATE(48)] = 4799,
  [SMALL_STATE(49)] = 4905,
  [SMALL_STATE(50)] = 5009,
  [SMALL_STATE(51)] = 5114,
  [SMALL_STATE(52)] = 5171,
  [SMALL_STATE(53)] = 5224,
  [SMALL_STATE(54)] = 5281,
  [SMALL_STATE(55)] = 5342,
  [SMALL_STATE(56)] = 5395,
  [SMALL_STATE(57)] = 5498,
  [SMALL_STATE(58)] = 5603,
  [SMALL_STATE(59)] = 5687,
  [SMALL_STATE(60)] = 5787,
  [SMALL_STATE(61)] = 5889,
  [SMALL_STATE(62)] = 5989,
  [SMALL_STATE(63)] = 6089,
  [SMALL_STATE(64)] = 6189,
  [SMALL_STATE(65)] = 6289,
  [SMALL_STATE(66)] = 6389,
  [SMALL_STATE(67)] = 6489,
  [SMALL_STATE(68)] = 6591,
  [SMALL_STATE(69)] = 6691,
  [SMALL_STATE(70)] = 6793,
  [SMALL_STATE(71)] = 6893,
  [SMALL_STATE(72)] = 6995,
  [SMALL_STATE(73)] = 7097,
  [SMALL_STATE(74)] = 7149,
  [SMALL_STATE(75)] = 7203,
  [SMALL_STATE(76)] = 7303,
  [SMALL_STATE(77)] = 7389,
  [SMALL_STATE(78)] = 7491,
  [SMALL_STATE(79)] = 7544,
  [SMALL_STATE(80)] = 7595,
  [SMALL_STATE(81)] = 7648,
  [SMALL_STATE(82)] = 7701,
  [SMALL_STATE(83)] = 7752,
  [SMALL_STATE(84)] = 7835,
  [SMALL_STATE(85)] = 7886,
  [SMALL_STATE(86)] = 7939,
  [SMALL_STATE(87)] = 7992,
  [SMALL_STATE(88)] = 8042,
  [SMALL_STATE(89)] = 8092,
  [SMALL_STATE(90)] = 8142,
  [SMALL_STATE(91)] = 8192,
  [SMALL_STATE(92)] = 8252,
  [SMALL_STATE(93)] = 8310,
  [SMALL_STATE(94)] = 8360,
  [SMALL_STATE(95)] = 8410,
  [SMALL_STATE(96)] = 8460,
  [SMALL_STATE(97)] = 8510,
  [SMALL_STATE(98)] = 8572,
  [SMALL_STATE(99)] = 8622,
  [SMALL_STATE(100)] = 8672,
  [SMALL_STATE(101)] = 8722,
  [SMALL_STATE(102)] = 8772,
  [SMALL_STATE(103)] = 8822,
  [SMALL_STATE(104)] = 8872,
  [SMALL_STATE(105)] = 8922,
  [SMALL_STATE(106)] = 8976,
  [SMALL_STATE(107)] = 9028,
  [SMALL_STATE(108)] = 9078,
  [SMALL_STATE(109)] = 9128,
  [SMALL_STATE(110)] = 9178,
  [SMALL_STATE(111)] = 9228,
  [SMALL_STATE(112)] = 9278,
  [SMALL_STATE(113)] = 9328,
  [SMALL_STATE(114)] = 9390,
  [SMALL_STATE(115)] = 9472,
  [SMALL_STATE(116)] = 9552,
  [SMALL_STATE(117)] = 9614,
  [SMALL_STATE(118)] = 9673,
  [SMALL_STATE(119)] = 9734,
  [SMALL_STATE(120)] = 9781,
  [SMALL_STATE(121)] = 9850,
  [SMALL_STATE(122)] = 9919,
  [SMALL_STATE(123)] = 9964,
  [SMALL_STATE(124)] = 10007,
  [SMALL_STATE(125)] = 10050,
  [SMALL_STATE(126)] = 10095,
  [SMALL_STATE(127)] = 10140,
  [SMALL_STATE(128)] = 10182,
  [SMALL_STATE(129)] = 10224,
  [SMALL_STATE(130)] = 10266,
  [SMALL_STATE(131)] = 10332,
  [SMALL_STATE(132)] = 10396,
  [SMALL_STATE(133)] = 10438,
  [SMALL_STATE(134)] = 10480,
  [SMALL_STATE(135)] = 10522,
  [SMALL_STATE(136)] = 10564,
  [SMALL_STATE(137)] = 10606,
  [SMALL_STATE(138)] = 10648,
  [SMALL_STATE(139)] = 10690,
  [SMALL_STATE(140)] = 10732,
  [SMALL_STATE(141)] = 10777,
  [SMALL_STATE(142)] = 10822,
  [SMALL_STATE(143)] = 10865,
  [SMALL_STATE(144)] = 10906,
  [SMALL_STATE(145)] = 10947,
  [SMALL_STATE(146)] = 11002,
  [SMALL_STATE(147)] = 11042,
  [SMALL_STATE(148)] = 11085,
  [SMALL_STATE(149)] = 11126,
  [SMALL_STATE(150)] = 11167,
  [SMALL_STATE(151)] = 11206,
  [SMALL_STATE(152)] = 11245,
  [SMALL_STATE(153)] = 11316,
  [SMALL_STATE(154)] = 11385,
  [SMALL_STATE(155)] = 11448,
  [SMALL_STATE(156)] = 11489,
  [SMALL_STATE(157)] = 11527,
  [SMALL_STATE(158)] = 11565,
  [SMALL_STATE(159)] = 11603,
  [SMALL_STATE(160)] = 11641,
  [SMALL_STATE(161)] = 11699,
  [SMALL_STATE(162)] = 11737,
  [SMALL_STATE(163)] = 11775,
  [SMALL_STATE(164)] = 11835,
  [SMALL_STATE(165)] = 11873,
  [SMALL_STATE(166)] = 11933,
  [SMALL_STATE(167)] = 11971,
  [SMALL_STATE(168)] = 12009,
  [SMALL_STATE(169)] = 12047,
  [SMALL_STATE(170)] = 12085,
  [SMALL_STATE(171)] = 12123,
  [SMALL_STATE(172)] = 12160,
  [SMALL_STATE(173)] = 12195,
  [SMALL_STATE(174)] = 12230,
  [SMALL_STATE(175)] = 12271,
  [SMALL_STATE(176)] = 12312,
  [SMALL_STATE(177)] = 12347,
  [SMALL_STATE(178)] = 12382,
  [SMALL_STATE(179)] = 12417,
  [SMALL_STATE(180)] = 12452,
  [SMALL_STATE(181)] = 12487,
  [SMALL_STATE(182)] = 12522,
  [SMALL_STATE(183)] = 12557,
  [SMALL_STATE(184)] = 12592,
  [SMALL_STATE(185)] = 12627,
  [SMALL_STATE(186)] = 12663,
  [SMALL_STATE(187)] = 12699,
  [SMALL_STATE(188)] = 12732,
  [SMALL_STATE(189)] = 12765,
  [SMALL_STATE(190)] = 12798,
  [SMALL_STATE(191)] = 12831,
  [SMALL_STATE(192)] = 12864,
  [SMALL_STATE(193)] = 12897,
  [SMALL_STATE(194)] = 12930,
  [SMALL_STATE(195)] = 12963,
  [SMALL_STATE(196)] = 12996,
  [SMALL_STATE(197)] = 13029,
  [SMALL_STATE(198)] = 13062,
  [SMALL_STATE(199)] = 13095,
  [SMALL_STATE(200)] = 13128,
  [SMALL_STATE(201)] = 13161,
  [SMALL_STATE(202)] = 13194,
  [SMALL_STATE(203)] = 13227,
  [SMALL_STATE(204)] = 13259,
  [SMALL_STATE(205)] = 13291,
  [SMALL_STATE(206)] = 13327,
  [SMALL_STATE(207)] = 13359,
  [SMALL_STATE(208)] = 13391,
  [SMALL_STATE(209)] = 13423,
  [SMALL_STATE(210)] = 13455,
  [SMALL_STATE(211)] = 13487,
  [SMALL_STATE(212)] = 13519,
  [SMALL_STATE(213)] = 13551,
  [SMALL_STATE(214)] = 13583,
  [SMALL_STATE(215)] = 13615,
  [SMALL_STATE(216)] = 13647,
  [SMALL_STATE(217)] = 13679,
  [SMALL_STATE(218)] = 13711,
  [SMALL_STATE(219)] = 13743,
  [SMALL_STATE(220)] = 13775,
  [SMALL_STATE(221)] = 13807,
  [SMALL_STATE(222)] = 13839,
  [SMALL_STATE(223)] = 13871,
  [SMALL_STATE(224)] = 13903,
  [SMALL_STATE(225)] = 13935,
  [SMALL_STATE(226)] = 13981,
  [SMALL_STATE(227)] = 14013,
  [SMALL_STATE(228)] = 14045,
  [SMALL_STATE(229)] = 14077,
  [SMALL_STATE(230)] = 14109,
  [SMALL_STATE(231)] = 14141,
  [SMALL_STATE(232)] = 14173,
  [SMALL_STATE(233)] = 14205,
  [SMALL_STATE(234)] = 14237,
  [SMALL_STATE(235)] = 14269,
  [SMALL_STATE(236)] = 14301,
  [SMALL_STATE(237)] = 14333,
  [SMALL_STATE(238)] = 14365,
  [SMALL_STATE(239)] = 14397,
  [SMALL_STATE(240)] = 14429,
  [SMALL_STATE(241)] = 14461,
  [SMALL_STATE(242)] = 14492,
  [SMALL_STATE(243)] = 14525,
  [SMALL_STATE(244)] = 14562,
  [SMALL_STATE(245)] = 14598,
  [SMALL_STATE(246)] = 14646,
  [SMALL_STATE(247)] = 14678,
  [SMALL_STATE(248)] = 14710,
  [SMALL_STATE(249)] = 14744,
  [SMALL_STATE(250)] = 14774,
  [SMALL_STATE(251)] = 14806,
  [SMALL_STATE(252)] = 14836,
  [SMALL_STATE(253)] = 14884,
  [SMALL_STATE(254)] = 14932,
  [SMALL_STATE(255)] = 14962,
  [SMALL_STATE(256)] = 15010,
  [SMALL_STATE(257)] = 15058,
  [SMALL_STATE(258)] = 15090,
  [SMALL_STATE(259)] = 15138,
  [SMALL_STATE(260)] = 15179,
  [SMALL_STATE(261)] = 15220,
  [SMALL_STATE(262)] = 15249,
  [SMALL_STATE(263)] = 15278,
  [SMALL_STATE(264)] = 15307,
  [SMALL_STATE(265)] = 15336,
  [SMALL_STATE(266)] = 15365,
  [SMALL_STATE(267)] = 15396,
  [SMALL_STATE(268)] = 15425,
  [SMALL_STATE(269)] = 15454,
  [SMALL_STATE(270)] = 15483,
  [SMALL_STATE(271)] = 15512,
  [SMALL_STATE(272)] = 15541,
  [SMALL_STATE(273)] = 15570,
  [SMALL_STATE(274)] = 15606,
  [SMALL_STATE(275)] = 15652,
  [SMALL_STATE(276)] = 15690,
  [SMALL_STATE(277)] = 15720,
  [SMALL_STATE(278)] = 15760,
  [SMALL_STATE(279)] = 15788,
  [SMALL_STATE(280)] = 15828,
  [SMALL_STATE(281)] = 15868,
  [SMALL_STATE(282)] = 15898,
  [SMALL_STATE(283)] = 15928,
  [SMALL_STATE(284)] = 15958,
  [SMALL_STATE(285)] = 15988,
  [SMALL_STATE(286)] = 16025,
  [SMALL_STATE(287)] = 16062,
  [SMALL_STATE(288)] = 16088,
  [SMALL_STATE(289)] = 16125,
  [SMALL_STATE(290)] = 16162,
  [SMALL_STATE(291)] = 16197,
  [SMALL_STATE(292)] = 16231,
  [SMALL_STATE(293)] = 16263,
  [SMALL_STATE(294)] = 16297,
  [SMALL_STATE(295)] = 16331,
  [SMALL_STATE(296)] = 16365,
  [SMALL_STATE(297)] = 16399,
  [SMALL_STATE(298)] = 16430,
  [SMALL_STATE(299)] = 16461,
  [SMALL_STATE(300)] = 16496,
  [SMALL_STATE(301)] = 16527,
  [SMALL_STATE(302)] = 16558,
  [SMALL_STATE(303)] = 16589,
  [SMALL_STATE(304)] = 16615,
  [SMALL_STATE(305)] = 16647,
  [SMALL_STATE(306)] = 16679,
  [SMALL_STATE(307)] = 16711,
  [SMALL_STATE(308)] = 16743,
  [SMALL_STATE(309)] = 16775,
  [SMALL_STATE(310)] = 16802,
  [SMALL_STATE(311)] = 16831,
  [SMALL_STATE(312)] = 16858,
  [SMALL_STATE(313)] = 16883,
  [SMALL_STATE(314)] = 16914,
  [SMALL_STATE(315)] = 16934,
  [SMALL_STATE(316)] = 16962,
  [SMALL_STATE(317)] = 16986,
  [SMALL_STATE(318)] = 17006,
  [SMALL_STATE(319)] = 17030,
  [SMALL_STATE(320)] = 17050,
  [SMALL_STATE(321)] = 17076,
  [SMALL_STATE(322)] = 17096,
  [SMALL_STATE(323)] = 17116,
  [SMALL_STATE(324)] = 17136,
  [SMALL_STATE(325)] = 17158,
  [SMALL_STATE(326)] = 17177,
  [SMALL_STATE(327)] = 17196,
  [SMALL_STATE(328)] = 17221,
  [SMALL_STATE(329)] = 17244,
  [SMALL_STATE(330)] = 17269,
  [SMALL_STATE(331)] = 17292,
  [SMALL_STATE(332)] = 17315,
  [SMALL_STATE(333)] = 17338,
  [SMALL_STATE(334)] = 17361,
  [SMALL_STATE(335)] = 17386,
  [SMALL_STATE(336)] = 17405,
  [SMALL_STATE(337)] = 17424,
  [SMALL_STATE(338)] = 17449,
  [SMALL_STATE(339)] = 17466,
  [SMALL_STATE(340)] = 17483,
  [SMALL_STATE(341)] = 17499,
  [SMALL_STATE(342)] = 17521,
  [SMALL_STATE(343)] = 17539,
  [SMALL_STATE(344)] = 17555,
  [SMALL_STATE(345)] = 17573,
  [SMALL_STATE(346)] = 17593,
  [SMALL_STATE(347)] = 17613,
  [SMALL_STATE(348)] = 17629,
  [SMALL_STATE(349)] = 17649,
  [SMALL_STATE(350)] = 17665,
  [SMALL_STATE(351)] = 17683,
  [SMALL_STATE(352)] = 17703,
  [SMALL_STATE(353)] = 17725,
  [SMALL_STATE(354)] = 17741,
  [SMALL_STATE(355)] = 17761,
  [SMALL_STATE(356)] = 17778,
  [SMALL_STATE(357)] = 17793,
  [SMALL_STATE(358)] = 17810,
  [SMALL_STATE(359)] = 17829,
  [SMALL_STATE(360)] = 17846,
  [SMALL_STATE(361)] = 17861,
  [SMALL_STATE(362)] = 17880,
  [SMALL_STATE(363)] = 17897,
  [SMALL_STATE(364)] = 17916,
  [SMALL_STATE(365)] = 17933,
  [SMALL_STATE(366)] = 17950,
  [SMALL_STATE(367)] = 17965,
  [SMALL_STATE(368)] = 17984,
  [SMALL_STATE(369)] = 18003,
  [SMALL_STATE(370)] = 18022,
  [SMALL_STATE(371)] = 18041,
  [SMALL_STATE(372)] = 18060,
  [SMALL_STATE(373)] = 18075,
  [SMALL_STATE(374)] = 18094,
  [SMALL_STATE(375)] = 18113,
  [SMALL_STATE(376)] = 18132,
  [SMALL_STATE(377)] = 18149,
  [SMALL_STATE(378)] = 18168,
  [SMALL_STATE(379)] = 18183,
  [SMALL_STATE(380)] = 18202,
  [SMALL_STATE(381)] = 18221,
  [SMALL_STATE(382)] = 18238,
  [SMALL_STATE(383)] = 18257,
  [SMALL_STATE(384)] = 18276,
  [SMALL_STATE(385)] = 18295,
  [SMALL_STATE(386)] = 18310,
  [SMALL_STATE(387)] = 18329,
  [SMALL_STATE(388)] = 18348,
  [SMALL_STATE(389)] = 18363,
  [SMALL_STATE(390)] = 18378,
  [SMALL_STATE(391)] = 18393,
  [SMALL_STATE(392)] = 18412,
  [SMALL_STATE(393)] = 18431,
  [SMALL_STATE(394)] = 18450,
  [SMALL_STATE(395)] = 18469,
  [SMALL_STATE(396)] = 18486,
  [SMALL_STATE(397)] = 18505,
  [SMALL_STATE(398)] = 18521,
  [SMALL_STATE(399)] = 18537,
  [SMALL_STATE(400)] = 18551,
  [SMALL_STATE(401)] = 18565,
  [SMALL_STATE(402)] = 18581,
  [SMALL_STATE(403)] = 18595,
  [SMALL_STATE(404)] = 18609,
  [SMALL_STATE(405)] = 18625,
  [SMALL_STATE(406)] = 18641,
  [SMALL_STATE(407)] = 18657,
  [SMALL_STATE(408)] = 18671,
  [SMALL_STATE(409)] = 18687,
  [SMALL_STATE(410)] = 18703,
  [SMALL_STATE(411)] = 18719,
  [SMALL_STATE(412)] = 18733,
  [SMALL_STATE(413)] = 18749,
  [SMALL_STATE(414)] = 18763,
  [SMALL_STATE(415)] = 18776,
  [SMALL_STATE(416)] = 18789,
  [SMALL_STATE(417)] = 18802,
  [SMALL_STATE(418)] = 18815,
  [SMALL_STATE(419)] = 18828,
  [SMALL_STATE(420)] = 18841,
  [SMALL_STATE(421)] = 18854,
  [SMALL_STATE(422)] = 18867,
  [SMALL_STATE(423)] = 18880,
  [SMALL_STATE(424)] = 18893,
  [SMALL_STATE(425)] = 18906,
  [SMALL_STATE(426)] = 18919,
  [SMALL_STATE(427)] = 18932,
  [SMALL_STATE(428)] = 18945,
  [SMALL_STATE(429)] = 18958,
  [SMALL_STATE(430)] = 18971,
  [SMALL_STATE(431)] = 18984,
  [SMALL_STATE(432)] = 18997,
  [SMALL_STATE(433)] = 19010,
  [SMALL_STATE(434)] = 19023,
  [SMALL_STATE(435)] = 19036,
  [SMALL_STATE(436)] = 19049,
  [SMALL_STATE(437)] = 19062,
  [SMALL_STATE(438)] = 19075,
  [SMALL_STATE(439)] = 19088,
  [SMALL_STATE(440)] = 19101,
  [SMALL_STATE(441)] = 19114,
  [SMALL_STATE(442)] = 19127,
  [SMALL_STATE(443)] = 19140,
  [SMALL_STATE(444)] = 19153,
  [SMALL_STATE(445)] = 19166,
  [SMALL_STATE(446)] = 19179,
  [SMALL_STATE(447)] = 19192,
  [SMALL_STATE(448)] = 19205,
  [SMALL_STATE(449)] = 19218,
  [SMALL_STATE(450)] = 19231,
  [SMALL_STATE(451)] = 19244,
  [SMALL_STATE(452)] = 19257,
  [SMALL_STATE(453)] = 19270,
  [SMALL_STATE(454)] = 19283,
  [SMALL_STATE(455)] = 19296,
  [SMALL_STATE(456)] = 19309,
  [SMALL_STATE(457)] = 19322,
  [SMALL_STATE(458)] = 19335,
  [SMALL_STATE(459)] = 19348,
  [SMALL_STATE(460)] = 19361,
  [SMALL_STATE(461)] = 19374,
  [SMALL_STATE(462)] = 19387,
  [SMALL_STATE(463)] = 19400,
  [SMALL_STATE(464)] = 19413,
  [SMALL_STATE(465)] = 19426,
  [SMALL_STATE(466)] = 19439,
  [SMALL_STATE(467)] = 19452,
  [SMALL_STATE(468)] = 19465,
  [SMALL_STATE(469)] = 19478,
  [SMALL_STATE(470)] = 19491,
  [SMALL_STATE(471)] = 19504,
  [SMALL_STATE(472)] = 19517,
  [SMALL_STATE(473)] = 19530,
  [SMALL_STATE(474)] = 19543,
  [SMALL_STATE(475)] = 19556,
  [SMALL_STATE(476)] = 19569,
  [SMALL_STATE(477)] = 19582,
  [SMALL_STATE(478)] = 19595,
  [SMALL_STATE(479)] = 19608,
  [SMALL_STATE(480)] = 19621,
  [SMALL_STATE(481)] = 19634,
  [SMALL_STATE(482)] = 19647,
  [SMALL_STATE(483)] = 19660,
  [SMALL_STATE(484)] = 19673,
  [SMALL_STATE(485)] = 19686,
  [SMALL_STATE(486)] = 19699,
  [SMALL_STATE(487)] = 19712,
  [SMALL_STATE(488)] = 19725,
  [SMALL_STATE(489)] = 19738,
  [SMALL_STATE(490)] = 19751,
  [SMALL_STATE(491)] = 19764,
  [SMALL_STATE(492)] = 19777,
  [SMALL_STATE(493)] = 19790,
  [SMALL_STATE(494)] = 19803,
  [SMALL_STATE(495)] = 19816,
  [SMALL_STATE(496)] = 19829,
  [SMALL_STATE(497)] = 19842,
  [SMALL_STATE(498)] = 19855,
  [SMALL_STATE(499)] = 19868,
  [SMALL_STATE(500)] = 19881,
  [SMALL_STATE(501)] = 19894,
  [SMALL_STATE(502)] = 19907,
  [SMALL_STATE(503)] = 19920,
  [SMALL_STATE(504)] = 19933,
  [SMALL_STATE(505)] = 19946,
  [SMALL_STATE(506)] = 19959,
  [SMALL_STATE(507)] = 19972,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 7),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 7),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(89),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(77),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(351),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(445),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(444),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(443),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(410),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(442),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(408),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(15),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(15),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(441),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(492),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(55),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(352),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(129),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(348),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(490),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(491),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(133),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(133),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(464),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(496),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(123),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 6),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 19),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 19),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(168),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(345),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(497),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(498),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(162),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(162),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(478),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(501),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(151),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 8),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 8),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(133),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(133),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 11),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 11),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(56),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(28),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(29),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(453),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(308),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(307),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(313),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(21),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(329),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(414),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(146),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(162),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(162),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(263),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(346),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(494),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(495),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(270),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(270),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(472),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(499),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(249),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(37),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(19),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 23),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 23),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 14),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 14),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2, .production_id = 9),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2, .production_id = 9),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 4),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 2),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 6),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 6),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 1),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 31),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 31),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 30),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 30),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 6),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2, .production_id = 1),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2, .production_id = 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 8),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 5),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 4),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_append, 2, .production_id = 1),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append, 2, .production_id = 1),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 7),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 6),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 6),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__self_join, 4),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 7),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 7),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 5),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 3),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 4),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 4),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 9),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 9),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 5),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 1),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4, .production_id = 14),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4, .production_id = 14),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 4),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 4),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_keywords, 1),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_keywords, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(270),
  [942] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(270),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [987] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(327),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(375),
  [993] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(387),
  [996] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(383),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(453),
  [1006] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(308),
  [1009] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(307),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(316),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(401),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(322),
  [1053] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(322),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(485),
  [1085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(347),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1094] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1096] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(455),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(48),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(5),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(72),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(310),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(45),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(46),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(413),
  [1232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1408] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
