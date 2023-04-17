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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 525
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 199
#define ALIAS_COUNT 0
#define TOKEN_COUNT 116
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
  anon_sym_AMP_AMP = 104,
  anon_sym_PIPE_PIPE = 105,
  aux_sym__date_token1 = 106,
  aux_sym__date_token2 = 107,
  anon_sym_AT = 108,
  aux_sym__time_token1 = 109,
  anon_sym_T = 110,
  anon_sym_Z = 111,
  anon_sym_POUND = 112,
  aux_sym_comment_token1 = 113,
  sym_bang = 114,
  sym_pipe = 115,
  sym_program = 116,
  sym_prql = 117,
  sym_target = 118,
  sym_pipeline = 119,
  sym_variable = 120,
  sym_function_definition = 121,
  sym_parameter = 122,
  sym__call_parameter = 123,
  sym_function_call = 124,
  sym_from_text = 125,
  sym_loop = 126,
  sym_transforms = 127,
  sym_from = 128,
  sym__table_selection = 129,
  sym__table_reference = 130,
  sym_derives = 131,
  sym_append = 132,
  sym_filter = 133,
  sym__boolean_expression = 134,
  sym_case = 135,
  sym_case_condition = 136,
  sym_aggregate = 137,
  sym__agg_keywords = 138,
  sym_aggregate_operation = 139,
  sym__aggregate_func = 140,
  sym_sorts = 141,
  sym__sort_instruction = 142,
  sym_direction = 143,
  sym_takes = 144,
  sym_window = 145,
  sym_window_definitions = 146,
  sym__window_definition = 147,
  sym_group = 148,
  sym_joins = 149,
  sym__join_definition = 150,
  sym_conditions = 151,
  sym__self_join = 152,
  sym_select = 153,
  sym_term = 154,
  sym__expression = 155,
  sym_literal = 156,
  sym_f_string = 157,
  sym_s_string = 158,
  sym__double_quote_string = 159,
  sym__single_quote_string = 160,
  aux_sym__inner_triple_quotes = 161,
  sym__triple_quote_string = 162,
  sym__double_f_string = 163,
  sym__triple_f_string = 164,
  sym__double_s_string = 165,
  sym__triple_s_string = 166,
  sym_literal_string = 167,
  aux_sym__friendly_number = 168,
  sym_integer = 169,
  sym_decimal_number = 170,
  sym_field = 171,
  sym__alias_identifier = 172,
  sym_identifier = 173,
  sym_range = 174,
  sym__agg_rhs_assignment = 175,
  sym_assignment = 176,
  sym_binary_expression = 177,
  sym__date = 178,
  sym_date = 179,
  sym__time = 180,
  sym_time = 181,
  sym_timestamp = 182,
  sym_timezone = 183,
  sym_comment = 184,
  aux_sym_program_repeat1 = 185,
  aux_sym_program_repeat2 = 186,
  aux_sym_function_definition_repeat1 = 187,
  aux_sym_function_call_repeat1 = 188,
  aux_sym_transforms_repeat1 = 189,
  aux_sym_derives_repeat1 = 190,
  aux_sym_case_repeat1 = 191,
  aux_sym_case_repeat2 = 192,
  aux_sym_aggregate_repeat1 = 193,
  aux_sym_sorts_repeat1 = 194,
  aux_sym_window_definitions_repeat1 = 195,
  aux_sym_group_repeat1 = 196,
  aux_sym_group_repeat2 = 197,
  aux_sym_conditions_repeat1 = 198,
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
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
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
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
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
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 7,
  [10] = 5,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 16,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 35,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 26,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 5,
  [67] = 67,
  [68] = 25,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 25,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 26,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 75,
  [116] = 112,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 14,
  [121] = 25,
  [122] = 26,
  [123] = 123,
  [124] = 13,
  [125] = 125,
  [126] = 26,
  [127] = 12,
  [128] = 25,
  [129] = 118,
  [130] = 130,
  [131] = 131,
  [132] = 19,
  [133] = 89,
  [134] = 72,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 84,
  [139] = 56,
  [140] = 101,
  [141] = 96,
  [142] = 53,
  [143] = 14,
  [144] = 13,
  [145] = 12,
  [146] = 19,
  [147] = 112,
  [148] = 12,
  [149] = 75,
  [150] = 26,
  [151] = 25,
  [152] = 123,
  [153] = 13,
  [154] = 119,
  [155] = 14,
  [156] = 56,
  [157] = 135,
  [158] = 158,
  [159] = 53,
  [160] = 84,
  [161] = 72,
  [162] = 65,
  [163] = 163,
  [164] = 101,
  [165] = 96,
  [166] = 89,
  [167] = 136,
  [168] = 137,
  [169] = 19,
  [170] = 131,
  [171] = 130,
  [172] = 25,
  [173] = 173,
  [174] = 26,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 118,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 257,
  [260] = 257,
  [261] = 26,
  [262] = 262,
  [263] = 25,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 258,
  [270] = 14,
  [271] = 13,
  [272] = 272,
  [273] = 273,
  [274] = 12,
  [275] = 123,
  [276] = 72,
  [277] = 135,
  [278] = 278,
  [279] = 89,
  [280] = 19,
  [281] = 96,
  [282] = 101,
  [283] = 283,
  [284] = 53,
  [285] = 131,
  [286] = 56,
  [287] = 84,
  [288] = 130,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 53,
  [313] = 14,
  [314] = 314,
  [315] = 12,
  [316] = 316,
  [317] = 13,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 19,
  [329] = 12,
  [330] = 63,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 56,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 14,
  [343] = 343,
  [344] = 13,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 349,
  [351] = 96,
  [352] = 352,
  [353] = 353,
  [354] = 19,
  [355] = 25,
  [356] = 72,
  [357] = 89,
  [358] = 84,
  [359] = 359,
  [360] = 349,
  [361] = 361,
  [362] = 349,
  [363] = 349,
  [364] = 26,
  [365] = 365,
  [366] = 349,
  [367] = 367,
  [368] = 101,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 53,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 391,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 443,
  [462] = 439,
  [463] = 463,
  [464] = 429,
  [465] = 424,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 428,
  [470] = 470,
  [471] = 439,
  [472] = 472,
  [473] = 429,
  [474] = 474,
  [475] = 466,
  [476] = 467,
  [477] = 477,
  [478] = 424,
  [479] = 439,
  [480] = 480,
  [481] = 429,
  [482] = 424,
  [483] = 466,
  [484] = 467,
  [485] = 439,
  [486] = 486,
  [487] = 429,
  [488] = 424,
  [489] = 466,
  [490] = 467,
  [491] = 439,
  [492] = 466,
  [493] = 466,
  [494] = 439,
  [495] = 439,
  [496] = 439,
  [497] = 460,
  [498] = 434,
  [499] = 433,
  [500] = 500,
  [501] = 459,
  [502] = 460,
  [503] = 434,
  [504] = 433,
  [505] = 467,
  [506] = 460,
  [507] = 434,
  [508] = 433,
  [509] = 460,
  [510] = 434,
  [511] = 433,
  [512] = 460,
  [513] = 434,
  [514] = 460,
  [515] = 460,
  [516] = 460,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 521,
  [524] = 524,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(501);
      if (lookahead == '!') ADVANCE(914);
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(617);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(608);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == '@') ADVANCE(902);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'E') ADVANCE(218);
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'G') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(133);
      if (lookahead == 'J') ADVANCE(159);
      if (lookahead == 'L') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(208);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'P') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(904);
      if (lookahead == 'V') ADVANCE(78);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == 'Z') ADVANCE(906);
      if (lookahead == '[') ADVANCE(612);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(638);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 'j') ADVANCE(388);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 'p') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == 'v') ADVANCE(280);
      if (lookahead == 'w') ADVANCE(312);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(495)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(712);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(727);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'f') ADVANCE(769);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 'o') ADVANCE(849);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(474)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(686);
      if (lookahead == 'D') ADVANCE(678);
      if (lookahead == 'F') ADVANCE(646);
      if (lookahead == 'G') ADVANCE(734);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(719);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(727);
      if (lookahead == 'R') ADVANCE(676);
      if (lookahead == 'S') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(768);
      if (lookahead == 'g') ADVANCE(856);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead == 'j') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(841);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 'o') ADVANCE(849);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(773);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(472)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(478)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(913);
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '@') ADVANCE(902);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == '[') ADVANCE(612);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'f') ADVANCE(642);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 's') ADVANCE(644);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(473)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'f') ADVANCE(769);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(476)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '@') ADVANCE(902);
      if (lookahead == 'A') ADVANCE(759);
      if (lookahead == 'C') ADVANCE(716);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'M') ADVANCE(648);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(650);
      if (lookahead == 'S') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(880);
      if (lookahead == 'c') ADVANCE(838);
      if (lookahead == 'f') ADVANCE(642);
      if (lookahead == 'm') ADVANCE(770);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 'r') ADVANCE(772);
      if (lookahead == 's') ADVANCE(643);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(470)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '@') ADVANCE(902);
      if (lookahead == 'A') ADVANCE(759);
      if (lookahead == 'C') ADVANCE(652);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'M') ADVANCE(648);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'S') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(880);
      if (lookahead == 'c') ADVANCE(774);
      if (lookahead == 'f') ADVANCE(642);
      if (lookahead == 'm') ADVANCE(770);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 's') ADVANCE(643);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(471)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '@') ADVANCE(902);
      if (lookahead == 'A') ADVANCE(759);
      if (lookahead == 'C') ADVANCE(721);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'M') ADVANCE(648);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'S') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(880);
      if (lookahead == 'c') ADVANCE(843);
      if (lookahead == 'f') ADVANCE(642);
      if (lookahead == 'm') ADVANCE(770);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 's') ADVANCE(643);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(487)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'D') ADVANCE(678);
      if (lookahead == 'F') ADVANCE(646);
      if (lookahead == 'G') ADVANCE(734);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(719);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(676);
      if (lookahead == 'S') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(809);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(768);
      if (lookahead == 'g') ADVANCE(856);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead == 'j') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(841);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(773);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(475)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(208);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == '_') ADVANCE(638);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(477)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == 'a') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == 'q') ADVANCE(335);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(634);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(636);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(632);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '[') ADVANCE(612);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(479)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(482)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(480)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == 'S') ADVANCE(695);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 's') ADVANCE(817);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(481)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(901);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(484)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(901);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(486)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 23:
      if (lookahead == '&') ADVANCE(897);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(231);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(888);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(891);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(619);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(619);
      if (lookahead == '>') ADVANCE(615);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(611);
      END_STATE();
    case 30:
      if (lookahead == '?') ADVANCE(896);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(184);
      if (lookahead == 'O') ADVANCE(210);
      if (lookahead == 'S') ADVANCE(213);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(153);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'I') ADVANCE(135);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(125);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(177);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(121);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(112);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(123);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(584);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(197);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(204);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(148);
      END_STATE();
    case 44:
      if (lookahead == 'B') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(582);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(198);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(201);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(202);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(569);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(554);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(560);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(529);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(109);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(152);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(107);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'O') ADVANCE(124);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(527);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(563);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(516);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(523);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(525);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(508);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(531);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(535);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(512);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'O') ADVANCE(153);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(219);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(214);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(178);
      if (lookahead == 'T') ADVANCE(57);
      if (lookahead == 'U') ADVANCE(127);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'O') ADVANCE(178);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(176);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'G') ADVANCE(547);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(180);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(199);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(171);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(190);
      if (lookahead == 'O') ADVANCE(153);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(584);
      END_STATE();
    case 89:
      if (lookahead == 'G') ADVANCE(96);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(165);
      if (lookahead == 'V') ADVANCE(79);
      END_STATE();
    case 90:
      if (lookahead == 'G') ADVANCE(96);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(165);
      END_STATE();
    case 91:
      if (lookahead == 'G') ADVANCE(96);
      if (lookahead == 'P') ADVANCE(165);
      END_STATE();
    case 92:
      if (lookahead == 'G') ADVANCE(553);
      if (lookahead == 'S') ADVANCE(191);
      END_STATE();
    case 93:
      if (lookahead == 'G') ADVANCE(100);
      END_STATE();
    case 94:
      if (lookahead == 'G') ADVANCE(575);
      END_STATE();
    case 95:
      if (lookahead == 'G') ADVANCE(577);
      END_STATE();
    case 96:
      if (lookahead == 'G') ADVANCE(179);
      END_STATE();
    case 97:
      if (lookahead == 'G') ADVANCE(82);
      END_STATE();
    case 98:
      if (lookahead == 'G') ADVANCE(68);
      END_STATE();
    case 99:
      if (lookahead == 'G') ADVANCE(42);
      END_STATE();
    case 100:
      if (lookahead == 'H') ADVANCE(196);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(215);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(143);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(137);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(142);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'O') ADVANCE(177);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(121);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(134);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(145);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(150);
      END_STATE();
    case 109:
      if (lookahead == 'I') ADVANCE(188);
      END_STATE();
    case 110:
      if (lookahead == 'I') ADVANCE(157);
      END_STATE();
    case 111:
      if (lookahead == 'K') ADVANCE(557);
      END_STATE();
    case 112:
      if (lookahead == 'K') ADVANCE(63);
      END_STATE();
    case 113:
      if (lookahead == 'K') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(97);
      END_STATE();
    case 114:
      if (lookahead == 'L') ADVANCE(561);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(206);
      END_STATE();
    case 116:
      if (lookahead == 'L') ADVANCE(206);
      if (lookahead == 'R') ADVANCE(186);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(568);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(578);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(586);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 122:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 123:
      if (lookahead == 'L') ADVANCE(126);
      if (lookahead == 'U') ADVANCE(146);
      if (lookahead == 'W') ADVANCE(183);
      END_STATE();
    case 124:
      if (lookahead == 'L') ADVANCE(126);
      if (lookahead == 'W') ADVANCE(182);
      END_STATE();
    case 125:
      if (lookahead == 'L') ADVANCE(187);
      END_STATE();
    case 126:
      if (lookahead == 'L') ADVANCE(104);
      END_STATE();
    case 127:
      if (lookahead == 'M') ADVANCE(549);
      END_STATE();
    case 128:
      if (lookahead == 'M') ADVANCE(502);
      END_STATE();
    case 129:
      if (lookahead == 'M') ADVANCE(44);
      END_STATE();
    case 130:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 131:
      if (lookahead == 'M') ADVANCE(160);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(573);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(537);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(111);
      END_STATE();
    case 137:
      if (lookahead == 'N') ADVANCE(519);
      END_STATE();
    case 138:
      if (lookahead == 'N') ADVANCE(605);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(587);
      END_STATE();
    case 140:
      if (lookahead == 'N') ADVANCE(149);
      END_STATE();
    case 141:
      if (lookahead == 'N') ADVANCE(211);
      END_STATE();
    case 142:
      if (lookahead == 'N') ADVANCE(94);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(194);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(95);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 148:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 149:
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 150:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 151:
      if (lookahead == 'N') ADVANCE(205);
      END_STATE();
    case 152:
      if (lookahead == 'O') ADVANCE(217);
      END_STATE();
    case 153:
      if (lookahead == 'O') ADVANCE(163);
      END_STATE();
    case 154:
      if (lookahead == 'O') ADVANCE(209);
      END_STATE();
    case 155:
      if (lookahead == 'O') ADVANCE(128);
      END_STATE();
    case 156:
      if (lookahead == 'O') ADVANCE(138);
      END_STATE();
    case 157:
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 158:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 159:
      if (lookahead == 'O') ADVANCE(103);
      if (lookahead == 'S') ADVANCE(156);
      END_STATE();
    case 160:
      if (lookahead == 'O') ADVANCE(216);
      END_STATE();
    case 161:
      if (lookahead == 'P') ADVANCE(43);
      END_STATE();
    case 162:
      if (lookahead == 'P') ADVANCE(562);
      if (lookahead == 'X') ADVANCE(539);
      END_STATE();
    case 163:
      if (lookahead == 'P') ADVANCE(580);
      END_STATE();
    case 164:
      if (lookahead == 'P') ADVANCE(510);
      END_STATE();
    case 165:
      if (lookahead == 'P') ADVANCE(87);
      END_STATE();
    case 166:
      if (lookahead == 'Q') ADVANCE(119);
      END_STATE();
    case 167:
      if (lookahead == 'R') ADVANCE(571);
      END_STATE();
    case 168:
      if (lookahead == 'R') ADVANCE(166);
      END_STATE();
    case 169:
      if (lookahead == 'R') ADVANCE(565);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(506);
      END_STATE();
    case 171:
      if (lookahead == 'R') ADVANCE(559);
      END_STATE();
    case 172:
      if (lookahead == 'R') ADVANCE(101);
      END_STATE();
    case 173:
      if (lookahead == 'R') ADVANCE(154);
      END_STATE();
    case 174:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 175:
      if (lookahead == 'R') ADVANCE(212);
      END_STATE();
    case 176:
      if (lookahead == 'R') ADVANCE(185);
      END_STATE();
    case 177:
      if (lookahead == 'R') ADVANCE(130);
      END_STATE();
    case 178:
      if (lookahead == 'R') ADVANCE(193);
      END_STATE();
    case 179:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 180:
      if (lookahead == 'R') ADVANCE(189);
      END_STATE();
    case 181:
      if (lookahead == 'S') ADVANCE(213);
      END_STATE();
    case 182:
      if (lookahead == 'S') ADVANCE(576);
      END_STATE();
    case 183:
      if (lookahead == 'S') ADVANCE(576);
      if (lookahead == '_') ADVANCE(141);
      END_STATE();
    case 184:
      if (lookahead == 'S') ADVANCE(61);
      END_STATE();
    case 185:
      if (lookahead == 'S') ADVANCE(110);
      END_STATE();
    case 186:
      if (lookahead == 'S') ADVANCE(195);
      END_STATE();
    case 187:
      if (lookahead == 'S') ADVANCE(65);
      END_STATE();
    case 188:
      if (lookahead == 'S') ADVANCE(207);
      END_STATE();
    case 189:
      if (lookahead == 'S') ADVANCE(86);
      END_STATE();
    case 190:
      if (lookahead == 'T') ADVANCE(584);
      END_STATE();
    case 191:
      if (lookahead == 'T') ADVANCE(556);
      END_STATE();
    case 192:
      if (lookahead == 'T') ADVANCE(566);
      END_STATE();
    case 193:
      if (lookahead == 'T') ADVANCE(514);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(543);
      END_STATE();
    case 195:
      if (lookahead == 'T') ADVANCE(555);
      END_STATE();
    case 196:
      if (lookahead == 'T') ADVANCE(567);
      END_STATE();
    case 197:
      if (lookahead == 'T') ADVANCE(603);
      END_STATE();
    case 198:
      if (lookahead == 'T') ADVANCE(521);
      END_STATE();
    case 199:
      if (lookahead == 'T') ADVANCE(588);
      END_STATE();
    case 200:
      if (lookahead == 'T') ADVANCE(601);
      END_STATE();
    case 201:
      if (lookahead == 'T') ADVANCE(533);
      END_STATE();
    case 202:
      if (lookahead == 'T') ADVANCE(551);
      END_STATE();
    case 203:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 204:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 205:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 206:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 207:
      if (lookahead == 'T') ADVANCE(108);
      END_STATE();
    case 208:
      if (lookahead == 'U') ADVANCE(122);
      END_STATE();
    case 209:
      if (lookahead == 'U') ADVANCE(164);
      END_STATE();
    case 210:
      if (lookahead == 'U') ADVANCE(144);
      END_STATE();
    case 211:
      if (lookahead == 'U') ADVANCE(129);
      END_STATE();
    case 212:
      if (lookahead == 'U') ADVANCE(64);
      END_STATE();
    case 213:
      if (lookahead == 'V') ADVANCE(604);
      END_STATE();
    case 214:
      if (lookahead == 'V') ADVANCE(545);
      END_STATE();
    case 215:
      if (lookahead == 'V') ADVANCE(66);
      END_STATE();
    case 216:
      if (lookahead == 'V') ADVANCE(67);
      END_STATE();
    case 217:
      if (lookahead == 'W') ADVANCE(518);
      END_STATE();
    case 218:
      if (lookahead == 'X') ADVANCE(161);
      END_STATE();
    case 219:
      if (lookahead == 'X') ADVANCE(200);
      END_STATE();
    case 220:
      if (lookahead == '_') ADVANCE(366);
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(420);
      if (lookahead == 'o') ADVANCE(455);
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(329);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'f') ADVANCE(434);
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead == 'g') ADVANCE(284);
      if (lookahead == 'h') ADVANCE(324);
      if (lookahead == 'm') ADVANCE(422);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 's') ADVANCE(374);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(328);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 236:
      if (lookahead == 'b') ADVANCE(600);
      END_STATE();
    case 237:
      if (lookahead == 'b') ADVANCE(288);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(582);
      END_STATE();
    case 239:
      if (lookahead == 'c') ADVANCE(593);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 241:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(439);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(569);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(554);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(560);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(529);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(323);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(274);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(412);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == 'q') ADVANCE(335);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'g') ADVANCE(547);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 293:
      if (lookahead == 'f') ADVANCE(434);
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 294:
      if (lookahead == 'f') ADVANCE(342);
      END_STATE();
    case 295:
      if (lookahead == 'g') ADVANCE(303);
      if (lookahead == 'l') ADVANCE(332);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == 'v') ADVANCE(281);
      END_STATE();
    case 296:
      if (lookahead == 'g') ADVANCE(303);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 'p') ADVANCE(395);
      END_STATE();
    case 297:
      if (lookahead == 'g') ADVANCE(303);
      if (lookahead == 'p') ADVANCE(395);
      END_STATE();
    case 298:
      if (lookahead == 'g') ADVANCE(553);
      if (lookahead == 's') ADVANCE(433);
      END_STATE();
    case 299:
      if (lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 300:
      if (lookahead == 'g') ADVANCE(575);
      END_STATE();
    case 301:
      if (lookahead == 'g') ADVANCE(577);
      END_STATE();
    case 302:
      if (lookahead == 'g') ADVANCE(396);
      END_STATE();
    case 303:
      if (lookahead == 'g') ADVANCE(413);
      END_STATE();
    case 304:
      if (lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 305:
      if (lookahead == 'g') ADVANCE(265);
      END_STATE();
    case 306:
      if (lookahead == 'g') ADVANCE(415);
      END_STATE();
    case 307:
      if (lookahead == 'g') ADVANCE(234);
      END_STATE();
    case 308:
      if (lookahead == 'h') ADVANCE(437);
      END_STATE();
    case 309:
      if (lookahead == 'h') ADVANCE(385);
      END_STATE();
    case 310:
      if (lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 311:
      if (lookahead == 'i') ADVANCE(462);
      END_STATE();
    case 312:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 313:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 314:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(359);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(427);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(464);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 326:
      if (lookahead == 'k') ADVANCE(557);
      END_STATE();
    case 327:
      if (lookahead == 'k') ADVANCE(309);
      END_STATE();
    case 328:
      if (lookahead == 'k') ADVANCE(260);
      END_STATE();
    case 329:
      if (lookahead == 'k') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 330:
      if (lookahead == 'k') ADVANCE(249);
      END_STATE();
    case 331:
      if (lookahead == 'k') ADVANCE(269);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(561);
      END_STATE();
    case 333:
      if (lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(423);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 336:
      if (lookahead == 'l') ADVANCE(568);
      END_STATE();
    case 337:
      if (lookahead == 'l') ADVANCE(578);
      END_STATE();
    case 338:
      if (lookahead == 'l') ADVANCE(586);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(595);
      END_STATE();
    case 340:
      if (lookahead == 'l') ADVANCE(596);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 347:
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == 'u') ADVANCE(370);
      if (lookahead == 'w') ADVANCE(220);
      END_STATE();
    case 348:
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == 'w') ADVANCE(418);
      END_STATE();
    case 349:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 350:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 351:
      if (lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 352:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 353:
      if (lookahead == 'm') ADVANCE(503);
      END_STATE();
    case 354:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 355:
      if (lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(574);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(375);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(424);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(300);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead == 'q') ADVANCE(346);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(465);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 391:
      if (lookahead == 'p') ADVANCE(562);
      if (lookahead == 'x') ADVANCE(539);
      END_STATE();
    case 392:
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 393:
      if (lookahead == 'p') ADVANCE(580);
      END_STATE();
    case 394:
      if (lookahead == 'p') ADVANCE(510);
      END_STATE();
    case 395:
      if (lookahead == 'p') ADVANCE(292);
      END_STATE();
    case 396:
      if (lookahead == 'q') ADVANCE(459);
      END_STATE();
    case 397:
      if (lookahead == 'q') ADVANCE(338);
      END_STATE();
    case 398:
      if (lookahead == 'q') ADVANCE(339);
      END_STATE();
    case 399:
      if (lookahead == 'q') ADVANCE(340);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(506);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(354);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(597);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(429);
      if (lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(436);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(399);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(603);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(601);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(551);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(544);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 452:
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 453:
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 454:
      if (lookahead == 'u') ADVANCE(394);
      END_STATE();
    case 455:
      if (lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 456:
      if (lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 457:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 458:
      if (lookahead == 'u') ADVANCE(428);
      END_STATE();
    case 459:
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 460:
      if (lookahead == 'v') ADVANCE(604);
      END_STATE();
    case 461:
      if (lookahead == 'v') ADVANCE(545);
      END_STATE();
    case 462:
      if (lookahead == 'v') ADVANCE(263);
      END_STATE();
    case 463:
      if (lookahead == 'v') ADVANCE(264);
      END_STATE();
    case 464:
      if (lookahead == 'v') ADVANCE(266);
      END_STATE();
    case 465:
      if (lookahead == 'w') ADVANCE(518);
      END_STATE();
    case 466:
      if (lookahead == 'w') ADVANCE(294);
      END_STATE();
    case 467:
      if (lookahead == 'x') ADVANCE(392);
      END_STATE();
    case 468:
      if (lookahead == 'x') ADVANCE(441);
      END_STATE();
    case 469:
      if (lookahead == 'y') ADVANCE(591);
      END_STATE();
    case 470:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(470)
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '@') ADVANCE(902);
      if (lookahead == 'A') ADVANCE(759);
      if (lookahead == 'C') ADVANCE(716);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'M') ADVANCE(648);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(650);
      if (lookahead == 'S') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(880);
      if (lookahead == 'c') ADVANCE(838);
      if (lookahead == 'f') ADVANCE(642);
      if (lookahead == 'm') ADVANCE(770);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 'r') ADVANCE(772);
      if (lookahead == 's') ADVANCE(643);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 471:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(471)
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '@') ADVANCE(902);
      if (lookahead == 'A') ADVANCE(759);
      if (lookahead == 'C') ADVANCE(652);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'M') ADVANCE(648);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'S') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(880);
      if (lookahead == 'c') ADVANCE(774);
      if (lookahead == 'f') ADVANCE(642);
      if (lookahead == 'm') ADVANCE(770);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 's') ADVANCE(643);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 472:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(472)
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(686);
      if (lookahead == 'D') ADVANCE(678);
      if (lookahead == 'F') ADVANCE(646);
      if (lookahead == 'G') ADVANCE(734);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(719);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(727);
      if (lookahead == 'R') ADVANCE(676);
      if (lookahead == 'S') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(768);
      if (lookahead == 'g') ADVANCE(856);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead == 'j') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(841);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 'o') ADVANCE(849);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(773);
      if (lookahead == '|') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 473:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(473)
      if (lookahead == '!') ADVANCE(913);
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '@') ADVANCE(902);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == '[') ADVANCE(612);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'f') ADVANCE(642);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 's') ADVANCE(644);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 474:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(474)
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(712);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(727);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'f') ADVANCE(769);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 'o') ADVANCE(849);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '|') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 475:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(475)
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'D') ADVANCE(678);
      if (lookahead == 'F') ADVANCE(646);
      if (lookahead == 'G') ADVANCE(734);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(719);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(676);
      if (lookahead == 'S') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(809);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(768);
      if (lookahead == 'g') ADVANCE(856);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead == 'j') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(841);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(773);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 476:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(476)
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'f') ADVANCE(769);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 477:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(477)
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(208);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == '_') ADVANCE(638);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      END_STATE();
    case 478:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(478)
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == '|') ADVANCE(916);
      END_STATE();
    case 479:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(479)
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '[') ADVANCE(612);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 480:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(480)
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 481:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(481)
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == 'S') ADVANCE(695);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 's') ADVANCE(817);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(901);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 482:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(482)
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 483:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(630);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 484:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(484)
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(901);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 485:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 486:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(486)
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 487:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(487)
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '@') ADVANCE(902);
      if (lookahead == 'A') ADVANCE(759);
      if (lookahead == 'C') ADVANCE(721);
      if (lookahead == 'F') ADVANCE(647);
      if (lookahead == 'M') ADVANCE(648);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'S') ADVANCE(740);
      if (lookahead == 'T') ADVANCE(730);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(880);
      if (lookahead == 'c') ADVANCE(843);
      if (lookahead == 'f') ADVANCE(642);
      if (lookahead == 'm') ADVANCE(770);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 's') ADVANCE(643);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 488:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(903);
      END_STATE();
    case 489:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(899);
      END_STATE();
    case 490:
      if (eof) ADVANCE(501);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(686);
      if (lookahead == 'D') ADVANCE(678);
      if (lookahead == 'F') ADVANCE(645);
      if (lookahead == 'G') ADVANCE(734);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(680);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(727);
      if (lookahead == 'R') ADVANCE(676);
      if (lookahead == 'S') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(767);
      if (lookahead == 'g') ADVANCE(856);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead == 'j') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 'o') ADVANCE(849);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(773);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(497)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 491:
      if (eof) ADVANCE(501);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(608);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(106);
      if (lookahead == 'G') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(151);
      if (lookahead == 'J') ADVANCE(158);
      if (lookahead == 'L') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(905);
      if (lookahead == 'Z') ADVANCE(906);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(638);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'f') ADVANCE(321);
      if (lookahead == 'g') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == 'j') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(498)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      END_STATE();
    case 492:
      if (eof) ADVANCE(501);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(607);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(106);
      if (lookahead == 'G') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(151);
      if (lookahead == 'J') ADVANCE(158);
      if (lookahead == 'L') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'f') ADVANCE(321);
      if (lookahead == 'g') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == 'j') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '|') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(500)
      END_STATE();
    case 493:
      if (eof) ADVANCE(501);
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'D') ADVANCE(678);
      if (lookahead == 'F') ADVANCE(645);
      if (lookahead == 'G') ADVANCE(734);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(680);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(676);
      if (lookahead == 'S') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(809);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(767);
      if (lookahead == 'g') ADVANCE(856);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead == 'j') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(773);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(499)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 494:
      if (eof) ADVANCE(501);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == '=') ADVANCE(606);
      if (lookahead == '@') ADVANCE(902);
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(181);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'E') ADVANCE(218);
      if (lookahead == 'F') ADVANCE(105);
      if (lookahead == 'G') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(140);
      if (lookahead == 'J') ADVANCE(159);
      if (lookahead == 'L') ADVANCE(70);
      if (lookahead == 'P') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == 'V') ADVANCE(78);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == '[') ADVANCE(612);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(638);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'j') ADVANCE(388);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead == 'v') ADVANCE(280);
      if (lookahead == 'w') ADVANCE(312);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(496)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      END_STATE();
    case 495:
      if (eof) ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(495)
      if (lookahead == '!') ADVANCE(914);
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(617);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(608);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == '@') ADVANCE(902);
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'C') ADVANCE(31);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'E') ADVANCE(218);
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'G') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(133);
      if (lookahead == 'J') ADVANCE(159);
      if (lookahead == 'L') ADVANCE(32);
      if (lookahead == 'M') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(208);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'P') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(904);
      if (lookahead == 'V') ADVANCE(78);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == 'Z') ADVANCE(906);
      if (lookahead == '[') ADVANCE(612);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(638);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'g') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead == 'j') ADVANCE(388);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'n') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 'p') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == 'v') ADVANCE(280);
      if (lookahead == 'w') ADVANCE(312);
      if (lookahead == '|') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      END_STATE();
    case 496:
      if (eof) ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(496)
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == '=') ADVANCE(606);
      if (lookahead == '@') ADVANCE(902);
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(181);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'E') ADVANCE(218);
      if (lookahead == 'F') ADVANCE(105);
      if (lookahead == 'G') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(140);
      if (lookahead == 'J') ADVANCE(159);
      if (lookahead == 'L') ADVANCE(70);
      if (lookahead == 'P') ADVANCE(168);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == 'V') ADVANCE(78);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == '[') ADVANCE(612);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(638);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead == 'f') ADVANCE(320);
      if (lookahead == 'g') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'j') ADVANCE(388);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead == 'v') ADVANCE(280);
      if (lookahead == 'w') ADVANCE(312);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      END_STATE();
    case 497:
      if (eof) ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(497)
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(686);
      if (lookahead == 'D') ADVANCE(678);
      if (lookahead == 'F') ADVANCE(645);
      if (lookahead == 'G') ADVANCE(734);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(680);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(727);
      if (lookahead == 'R') ADVANCE(676);
      if (lookahead == 'S') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(767);
      if (lookahead == 'g') ADVANCE(856);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead == 'j') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 'o') ADVANCE(849);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(773);
      if (lookahead == '|') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 498:
      if (eof) ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(498)
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(608);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(106);
      if (lookahead == 'G') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(151);
      if (lookahead == 'J') ADVANCE(158);
      if (lookahead == 'L') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(905);
      if (lookahead == 'Z') ADVANCE(906);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == '_') ADVANCE(638);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'f') ADVANCE(321);
      if (lookahead == 'g') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == 'j') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '|') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      END_STATE();
    case 499:
      if (eof) ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(499)
      if (lookahead == '"') ADVANCE(620);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '\'') ADVANCE(624);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'D') ADVANCE(678);
      if (lookahead == 'F') ADVANCE(645);
      if (lookahead == 'G') ADVANCE(734);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(722);
      if (lookahead == 'L') ADVANCE(680);
      if (lookahead == 'N') ADVANCE(755);
      if (lookahead == 'R') ADVANCE(676);
      if (lookahead == 'S') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '_') ADVANCE(639);
      if (lookahead == '`') ADVANCE(641);
      if (lookahead == 'a') ADVANCE(809);
      if (lookahead == 'd') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(767);
      if (lookahead == 'g') ADVANCE(856);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead == 'j') ADVANCE(844);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead == 'n') ADVANCE(876);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(773);
      if (lookahead == '|') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 500:
      if (eof) ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(500)
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '(') ADVANCE(609);
      if (lookahead == ')') ADVANCE(610);
      if (lookahead == '*') ADVANCE(889);
      if (lookahead == '+') ADVANCE(618);
      if (lookahead == ',') ADVANCE(613);
      if (lookahead == '-') ADVANCE(616);
      if (lookahead == '/') ADVANCE(890);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '=') ADVANCE(607);
      if (lookahead == '>') ADVANCE(892);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'A') ADVANCE(90);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(106);
      if (lookahead == 'G') ADVANCE(173);
      if (lookahead == 'I') ADVANCE(151);
      if (lookahead == 'J') ADVANCE(158);
      if (lookahead == 'L') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == ']') ADVANCE(614);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == 'f') ADVANCE(321);
      if (lookahead == 'g') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == 'j') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '|') ADVANCE(916);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(203);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(445);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_keyword_case);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_keyword_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_keyword_append);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_keyword_append);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_keyword_remove);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_keyword_remove);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_keyword_intersect);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_keyword_intersect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(53);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(251);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_keyword_lag);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_keyword_lead);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_keyword_first);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_keyword_last);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_keyword_rank);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_keyword_rank);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_keyword_row_number);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_keyword_round);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_keyword_all);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_keyword_map);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_keyword_loop);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_keyword_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_keyword_from_text);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_keyword_from_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_keyword_format);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_keyword_csv);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_keyword_json);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(619);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(619);
      if (lookahead == '>') ADVANCE(615);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(611);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(909);
      if (lookahead == '|') ADVANCE(918);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(623);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(622);
      if (lookahead == '#') ADVANCE(909);
      if (lookahead == '|') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(623);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(623);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '#') ADVANCE(910);
      if (lookahead == '|') ADVANCE(919);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(627);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(626);
      if (lookahead == '#') ADVANCE(910);
      if (lookahead == '|') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(627);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(630);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      if (lookahead == '#') ADVANCE(907);
      if (lookahead == '|') ADVANCE(915);
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == 'a') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == 't') ADVANCE(783);
      if (lookahead == 'u') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(698);
      if (lookahead == 'I') ADVANCE(702);
      if (lookahead == 'R') ADVANCE(718);
      if (lookahead == 'U') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(698);
      if (lookahead == 'I') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(763);
      if (lookahead == 'I') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(697);
      if (lookahead == 'R') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(738);
      if (lookahead == 'O') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(729);
      if (lookahead == 'G') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(701);
      if (lookahead == 'O') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(743);
      if (lookahead == 'O') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(690);
      if (lookahead == 'N') ADVANCE(659);
      if (lookahead == 'P') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(690);
      if (lookahead == 'P') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(661);
      if (lookahead == 'U') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(820);
      if (lookahead == 'i') ADVANCE(824);
      if (lookahead == 'r') ADVANCE(840);
      if (lookahead == 'u') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(820);
      if (lookahead == 'i') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(884);
      if (lookahead == 'i') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(819);
      if (lookahead == 'r') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(860);
      if (lookahead == 'o') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(851);
      if (lookahead == 'g') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(823);
      if (lookahead == 'o') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(863);
      if (lookahead == 'o') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(812);
      if (lookahead == 'n') ADVANCE(781);
      if (lookahead == 'p') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(812);
      if (lookahead == 'p') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__identifier_dot);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(887);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(893);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(895);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(900);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(212);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(112);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(912);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(623);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(627);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '|') ADVANCE(917);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(912);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(912);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_bang);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(891);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_pipe);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead == '|') ADVANCE(898);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(912);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(623);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(627);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 494},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 490},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 491},
  [13] = {.lex_state = 491},
  [14] = {.lex_state = 491},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 491},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 490},
  [26] = {.lex_state = 490},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 491},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 491},
  [37] = {.lex_state = 491},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 491},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 491},
  [54] = {.lex_state = 491},
  [55] = {.lex_state = 491},
  [56] = {.lex_state = 491},
  [57] = {.lex_state = 491},
  [58] = {.lex_state = 491},
  [59] = {.lex_state = 491},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 491},
  [63] = {.lex_state = 491},
  [64] = {.lex_state = 491},
  [65] = {.lex_state = 491},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 491},
  [69] = {.lex_state = 491},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 491},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 493},
  [76] = {.lex_state = 491},
  [77] = {.lex_state = 491},
  [78] = {.lex_state = 491},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 491},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 491},
  [84] = {.lex_state = 491},
  [85] = {.lex_state = 491},
  [86] = {.lex_state = 491},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 491},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 491},
  [94] = {.lex_state = 491},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 491},
  [97] = {.lex_state = 491},
  [98] = {.lex_state = 491},
  [99] = {.lex_state = 491},
  [100] = {.lex_state = 491},
  [101] = {.lex_state = 491},
  [102] = {.lex_state = 491},
  [103] = {.lex_state = 491},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 491},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 491},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 491},
  [112] = {.lex_state = 493},
  [113] = {.lex_state = 491},
  [114] = {.lex_state = 491},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 491},
  [118] = {.lex_state = 492},
  [119] = {.lex_state = 494},
  [120] = {.lex_state = 493},
  [121] = {.lex_state = 493},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 493},
  [124] = {.lex_state = 493},
  [125] = {.lex_state = 494},
  [126] = {.lex_state = 493},
  [127] = {.lex_state = 493},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 492},
  [130] = {.lex_state = 493},
  [131] = {.lex_state = 493},
  [132] = {.lex_state = 493},
  [133] = {.lex_state = 493},
  [134] = {.lex_state = 493},
  [135] = {.lex_state = 493},
  [136] = {.lex_state = 494},
  [137] = {.lex_state = 494},
  [138] = {.lex_state = 493},
  [139] = {.lex_state = 493},
  [140] = {.lex_state = 493},
  [141] = {.lex_state = 493},
  [142] = {.lex_state = 493},
  [143] = {.lex_state = 494},
  [144] = {.lex_state = 494},
  [145] = {.lex_state = 494},
  [146] = {.lex_state = 494},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 494},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 494},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 494},
  [163] = {.lex_state = 494},
  [164] = {.lex_state = 9},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 494},
  [168] = {.lex_state = 494},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 494},
  [173] = {.lex_state = 494},
  [174] = {.lex_state = 494},
  [175] = {.lex_state = 494},
  [176] = {.lex_state = 494},
  [177] = {.lex_state = 494},
  [178] = {.lex_state = 494},
  [179] = {.lex_state = 494},
  [180] = {.lex_state = 494},
  [181] = {.lex_state = 494},
  [182] = {.lex_state = 494},
  [183] = {.lex_state = 494},
  [184] = {.lex_state = 494},
  [185] = {.lex_state = 494},
  [186] = {.lex_state = 494},
  [187] = {.lex_state = 494},
  [188] = {.lex_state = 492},
  [189] = {.lex_state = 491},
  [190] = {.lex_state = 494},
  [191] = {.lex_state = 494},
  [192] = {.lex_state = 494},
  [193] = {.lex_state = 492},
  [194] = {.lex_state = 494},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 494},
  [197] = {.lex_state = 494},
  [198] = {.lex_state = 494},
  [199] = {.lex_state = 492},
  [200] = {.lex_state = 494},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 494},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 494},
  [205] = {.lex_state = 494},
  [206] = {.lex_state = 494},
  [207] = {.lex_state = 494},
  [208] = {.lex_state = 494},
  [209] = {.lex_state = 494},
  [210] = {.lex_state = 492},
  [211] = {.lex_state = 494},
  [212] = {.lex_state = 494},
  [213] = {.lex_state = 494},
  [214] = {.lex_state = 494},
  [215] = {.lex_state = 494},
  [216] = {.lex_state = 494},
  [217] = {.lex_state = 494},
  [218] = {.lex_state = 494},
  [219] = {.lex_state = 494},
  [220] = {.lex_state = 494},
  [221] = {.lex_state = 494},
  [222] = {.lex_state = 494},
  [223] = {.lex_state = 492},
  [224] = {.lex_state = 494},
  [225] = {.lex_state = 494},
  [226] = {.lex_state = 494},
  [227] = {.lex_state = 494},
  [228] = {.lex_state = 494},
  [229] = {.lex_state = 494},
  [230] = {.lex_state = 494},
  [231] = {.lex_state = 494},
  [232] = {.lex_state = 494},
  [233] = {.lex_state = 494},
  [234] = {.lex_state = 494},
  [235] = {.lex_state = 494},
  [236] = {.lex_state = 494},
  [237] = {.lex_state = 494},
  [238] = {.lex_state = 491},
  [239] = {.lex_state = 494},
  [240] = {.lex_state = 494},
  [241] = {.lex_state = 494},
  [242] = {.lex_state = 494},
  [243] = {.lex_state = 494},
  [244] = {.lex_state = 494},
  [245] = {.lex_state = 494},
  [246] = {.lex_state = 494},
  [247] = {.lex_state = 494},
  [248] = {.lex_state = 494},
  [249] = {.lex_state = 491},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 491},
  [252] = {.lex_state = 491},
  [253] = {.lex_state = 491},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 491},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 491},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 491},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 492},
  [268] = {.lex_state = 491},
  [269] = {.lex_state = 491},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 491},
  [273] = {.lex_state = 491},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 5},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 491},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 491},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 5},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 494},
  [290] = {.lex_state = 494},
  [291] = {.lex_state = 494},
  [292] = {.lex_state = 494},
  [293] = {.lex_state = 494},
  [294] = {.lex_state = 494},
  [295] = {.lex_state = 494},
  [296] = {.lex_state = 494},
  [297] = {.lex_state = 494},
  [298] = {.lex_state = 494},
  [299] = {.lex_state = 494},
  [300] = {.lex_state = 494},
  [301] = {.lex_state = 17},
  [302] = {.lex_state = 494},
  [303] = {.lex_state = 494},
  [304] = {.lex_state = 494},
  [305] = {.lex_state = 494},
  [306] = {.lex_state = 494},
  [307] = {.lex_state = 17},
  [308] = {.lex_state = 494},
  [309] = {.lex_state = 17},
  [310] = {.lex_state = 494},
  [311] = {.lex_state = 17},
  [312] = {.lex_state = 494},
  [313] = {.lex_state = 19},
  [314] = {.lex_state = 20},
  [315] = {.lex_state = 19},
  [316] = {.lex_state = 17},
  [317] = {.lex_state = 19},
  [318] = {.lex_state = 18},
  [319] = {.lex_state = 494},
  [320] = {.lex_state = 494},
  [321] = {.lex_state = 494},
  [322] = {.lex_state = 494},
  [323] = {.lex_state = 494},
  [324] = {.lex_state = 494},
  [325] = {.lex_state = 18},
  [326] = {.lex_state = 494},
  [327] = {.lex_state = 494},
  [328] = {.lex_state = 19},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 17},
  [332] = {.lex_state = 494},
  [333] = {.lex_state = 494},
  [334] = {.lex_state = 494},
  [335] = {.lex_state = 494},
  [336] = {.lex_state = 18},
  [337] = {.lex_state = 494},
  [338] = {.lex_state = 494},
  [339] = {.lex_state = 17},
  [340] = {.lex_state = 17},
  [341] = {.lex_state = 494},
  [342] = {.lex_state = 10},
  [343] = {.lex_state = 494},
  [344] = {.lex_state = 10},
  [345] = {.lex_state = 494},
  [346] = {.lex_state = 17},
  [347] = {.lex_state = 494},
  [348] = {.lex_state = 494},
  [349] = {.lex_state = 10},
  [350] = {.lex_state = 10},
  [351] = {.lex_state = 18},
  [352] = {.lex_state = 17},
  [353] = {.lex_state = 494},
  [354] = {.lex_state = 10},
  [355] = {.lex_state = 18},
  [356] = {.lex_state = 18},
  [357] = {.lex_state = 18},
  [358] = {.lex_state = 18},
  [359] = {.lex_state = 494},
  [360] = {.lex_state = 10},
  [361] = {.lex_state = 494},
  [362] = {.lex_state = 10},
  [363] = {.lex_state = 10},
  [364] = {.lex_state = 18},
  [365] = {.lex_state = 18},
  [366] = {.lex_state = 10},
  [367] = {.lex_state = 17},
  [368] = {.lex_state = 18},
  [369] = {.lex_state = 494},
  [370] = {.lex_state = 494},
  [371] = {.lex_state = 17},
  [372] = {.lex_state = 494},
  [373] = {.lex_state = 17},
  [374] = {.lex_state = 17},
  [375] = {.lex_state = 17},
  [376] = {.lex_state = 483},
  [377] = {.lex_state = 494},
  [378] = {.lex_state = 494},
  [379] = {.lex_state = 483},
  [380] = {.lex_state = 494},
  [381] = {.lex_state = 483},
  [382] = {.lex_state = 18},
  [383] = {.lex_state = 494},
  [384] = {.lex_state = 494},
  [385] = {.lex_state = 494},
  [386] = {.lex_state = 494},
  [387] = {.lex_state = 483},
  [388] = {.lex_state = 494},
  [389] = {.lex_state = 494},
  [390] = {.lex_state = 18},
  [391] = {.lex_state = 494},
  [392] = {.lex_state = 494},
  [393] = {.lex_state = 494},
  [394] = {.lex_state = 494},
  [395] = {.lex_state = 494},
  [396] = {.lex_state = 494},
  [397] = {.lex_state = 494},
  [398] = {.lex_state = 494},
  [399] = {.lex_state = 494},
  [400] = {.lex_state = 494},
  [401] = {.lex_state = 21},
  [402] = {.lex_state = 494},
  [403] = {.lex_state = 494},
  [404] = {.lex_state = 494},
  [405] = {.lex_state = 18},
  [406] = {.lex_state = 494},
  [407] = {.lex_state = 485},
  [408] = {.lex_state = 17},
  [409] = {.lex_state = 485},
  [410] = {.lex_state = 494},
  [411] = {.lex_state = 17},
  [412] = {.lex_state = 494},
  [413] = {.lex_state = 485},
  [414] = {.lex_state = 494},
  [415] = {.lex_state = 494},
  [416] = {.lex_state = 494},
  [417] = {.lex_state = 494},
  [418] = {.lex_state = 483},
  [419] = {.lex_state = 494},
  [420] = {.lex_state = 17},
  [421] = {.lex_state = 494},
  [422] = {.lex_state = 6},
  [423] = {.lex_state = 494},
  [424] = {.lex_state = 494},
  [425] = {.lex_state = 494},
  [426] = {.lex_state = 20},
  [427] = {.lex_state = 6},
  [428] = {.lex_state = 20},
  [429] = {.lex_state = 494},
  [430] = {.lex_state = 494},
  [431] = {.lex_state = 621},
  [432] = {.lex_state = 621},
  [433] = {.lex_state = 625},
  [434] = {.lex_state = 621},
  [435] = {.lex_state = 494},
  [436] = {.lex_state = 494},
  [437] = {.lex_state = 494},
  [438] = {.lex_state = 20},
  [439] = {.lex_state = 494},
  [440] = {.lex_state = 494},
  [441] = {.lex_state = 494},
  [442] = {.lex_state = 494},
  [443] = {.lex_state = 494},
  [444] = {.lex_state = 494},
  [445] = {.lex_state = 494},
  [446] = {.lex_state = 494},
  [447] = {.lex_state = 494},
  [448] = {.lex_state = 494},
  [449] = {.lex_state = 494},
  [450] = {.lex_state = 494},
  [451] = {.lex_state = 494},
  [452] = {.lex_state = 494},
  [453] = {.lex_state = 20},
  [454] = {.lex_state = 494},
  [455] = {.lex_state = 494},
  [456] = {.lex_state = 494},
  [457] = {.lex_state = 494},
  [458] = {.lex_state = 494},
  [459] = {.lex_state = 494},
  [460] = {.lex_state = 22},
  [461] = {.lex_state = 494},
  [462] = {.lex_state = 494},
  [463] = {.lex_state = 494},
  [464] = {.lex_state = 494},
  [465] = {.lex_state = 494},
  [466] = {.lex_state = 6},
  [467] = {.lex_state = 494},
  [468] = {.lex_state = 494},
  [469] = {.lex_state = 20},
  [470] = {.lex_state = 494},
  [471] = {.lex_state = 494},
  [472] = {.lex_state = 494},
  [473] = {.lex_state = 494},
  [474] = {.lex_state = 911},
  [475] = {.lex_state = 6},
  [476] = {.lex_state = 494},
  [477] = {.lex_state = 494},
  [478] = {.lex_state = 494},
  [479] = {.lex_state = 494},
  [480] = {.lex_state = 494},
  [481] = {.lex_state = 494},
  [482] = {.lex_state = 494},
  [483] = {.lex_state = 6},
  [484] = {.lex_state = 494},
  [485] = {.lex_state = 494},
  [486] = {.lex_state = 494},
  [487] = {.lex_state = 494},
  [488] = {.lex_state = 494},
  [489] = {.lex_state = 6},
  [490] = {.lex_state = 494},
  [491] = {.lex_state = 494},
  [492] = {.lex_state = 6},
  [493] = {.lex_state = 6},
  [494] = {.lex_state = 494},
  [495] = {.lex_state = 494},
  [496] = {.lex_state = 494},
  [497] = {.lex_state = 22},
  [498] = {.lex_state = 621},
  [499] = {.lex_state = 625},
  [500] = {.lex_state = 494},
  [501] = {.lex_state = 494},
  [502] = {.lex_state = 22},
  [503] = {.lex_state = 621},
  [504] = {.lex_state = 625},
  [505] = {.lex_state = 494},
  [506] = {.lex_state = 22},
  [507] = {.lex_state = 621},
  [508] = {.lex_state = 625},
  [509] = {.lex_state = 22},
  [510] = {.lex_state = 621},
  [511] = {.lex_state = 625},
  [512] = {.lex_state = 22},
  [513] = {.lex_state = 621},
  [514] = {.lex_state = 22},
  [515] = {.lex_state = 22},
  [516] = {.lex_state = 22},
  [517] = {.lex_state = 494},
  [518] = {.lex_state = 6},
  [519] = {.lex_state = 494},
  [520] = {.lex_state = 6},
  [521] = {.lex_state = 20},
  [522] = {.lex_state = 494},
  [523] = {.lex_state = 20},
  [524] = {(TSStateId)(-1)},
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
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
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
    [sym_program] = STATE(517),
    [sym_prql] = STATE(324),
    [sym_pipeline] = STATE(332),
    [sym_variable] = STATE(332),
    [sym_function_definition] = STATE(332),
    [sym_from_text] = STATE(119),
    [sym_from] = STATE(119),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(289),
    [aux_sym_program_repeat2] = STATE(291),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_keyword_from] = ACTIONS(9),
    [sym_keyword_func] = ACTIONS(11),
    [sym_keyword_let] = ACTIONS(13),
    [sym_keyword_prql] = ACTIONS(15),
    [sym_keyword_from_text] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_pipe] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 37,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(27), 1,
      sym_keyword_count_distinct,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(2), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(110), 1,
      sym__agg_keywords,
    STATE(199), 1,
      sym_binary_expression,
    STATE(267), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    ACTIONS(25), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(404), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(23), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(83), 7,
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
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(27), 1,
      sym_keyword_count_distinct,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(110), 1,
      sym__agg_keywords,
    STATE(223), 1,
      sym_binary_expression,
    STATE(267), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    ACTIONS(25), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(415), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(23), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(83), 7,
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
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(27), 1,
      sym_keyword_count_distinct,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(110), 1,
      sym__agg_keywords,
    STATE(223), 1,
      sym_binary_expression,
    STATE(267), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    ACTIONS(25), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(415), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(23), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(83), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [387] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      sym__natural_number,
    ACTIONS(77), 1,
      anon_sym__,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(81), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      sym__identifier,
    STATE(5), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_function_call_repeat1,
    STATE(123), 1,
      sym_identifier,
    STATE(127), 1,
      aux_sym__friendly_number,
    STATE(130), 1,
      sym_literal,
    STATE(131), 1,
      sym__call_parameter,
    STATE(139), 1,
      sym_integer,
    STATE(134), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(138), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(69), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(65), 12,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 20,
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
  [485] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(27), 1,
      sym_keyword_count_distinct,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(6), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(110), 1,
      sym__agg_keywords,
    STATE(223), 1,
      sym_binary_expression,
    STATE(267), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    ACTIONS(25), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(415), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(23), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(83), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [610] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(85), 1,
      sym_keyword_case,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_BQUOTE,
    ACTIONS(91), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(7), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(107), 1,
      sym__agg_keywords,
    STATE(113), 1,
      sym__expression,
    STATE(183), 1,
      sym__agg_rhs_assignment,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(187), 2,
      sym_function_call,
      sym_case,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(23), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [732] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(85), 1,
      sym_keyword_case,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      sym_identifier,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(107), 1,
      sym__agg_keywords,
    STATE(113), 1,
      sym__expression,
    STATE(183), 1,
      sym__agg_rhs_assignment,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(187), 2,
      sym_function_call,
      sym_case,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(23), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [854] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(85), 1,
      sym_keyword_case,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(9), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(66), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(107), 1,
      sym__agg_keywords,
    STATE(113), 1,
      sym__expression,
    STATE(183), 1,
      sym__agg_rhs_assignment,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(187), 2,
      sym_function_call,
      sym_case,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(23), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [976] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym__natural_number,
    ACTIONS(109), 1,
      anon_sym__,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(113), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      sym__identifier,
    STATE(10), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_function_call_repeat1,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(152), 1,
      sym_identifier,
    STATE(156), 1,
      sym_integer,
    STATE(170), 1,
      sym__call_parameter,
    STATE(171), 1,
      sym_literal,
    STATE(160), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(161), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(101), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(65), 12,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 16,
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
  [1070] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(11), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(66), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(107), 1,
      sym__agg_keywords,
    STATE(253), 1,
      sym__expression,
    STATE(258), 1,
      sym_binary_expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(455), 1,
      sym__agg_rhs_assignment,
    STATE(470), 1,
      sym_function_call,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(23), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(83), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1190] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__friendly_number,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(119), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 36,
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
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [1251] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__friendly_number,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(123), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 36,
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
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [1312] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(129), 2,
      sym__natural_number,
      anon_sym__,
    STATE(14), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(127), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 36,
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
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [1371] = 36,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(15), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_case_repeat1,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(265), 1,
      sym_binary_expression,
    STATE(266), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(377), 1,
      aux_sym_case_repeat2,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1490] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      sym_bang,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(177), 1,
      sym_assignment,
    STATE(237), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1602] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(17), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(393), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1714] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(18), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(395), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1826] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(19), 1,
      sym_comment,
    ACTIONS(150), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(148), 38,
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
      sym__natural_number,
      anon_sym__,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [1882] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(20), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(372), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1994] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(21), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_case_repeat1,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(265), 1,
      sym_binary_expression,
    STATE(266), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2108] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(22), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(385), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2220] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      sym_bang,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(23), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(129), 1,
      sym__expression,
    STATE(177), 1,
      sym_assignment,
    STATE(237), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2332] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(265), 1,
      sym_binary_expression,
    STATE(266), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(24), 2,
      sym_comment,
      aux_sym_case_repeat1,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(164), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2444] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(25), 1,
      sym_comment,
    ACTIONS(211), 17,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(213), 25,
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
  [2500] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(26), 1,
      sym_comment,
    ACTIONS(215), 17,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 25,
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
  [2556] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(15), 1,
      aux_sym_case_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(265), 1,
      sym_binary_expression,
    STATE(266), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2672] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(28), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(417), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2781] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(29), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(410), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2890] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(30), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(425), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2999] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(31), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(417), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3108] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    ACTIONS(237), 1,
      anon_sym_EQ_EQ,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(32), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(238), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3219] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(245), 1,
      anon_sym_Z,
    STATE(33), 1,
      sym_comment,
    STATE(111), 1,
      sym_timezone,
    STATE(453), 1,
      sym_direction,
    ACTIONS(243), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(241), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(239), 32,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3282] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(21), 1,
      aux_sym_case_repeat1,
    STATE(34), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(265), 1,
      sym_binary_expression,
    STATE(266), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3395] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(35), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(225), 1,
      sym_term,
    STATE(227), 1,
      sym_assignment,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3504] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(255), 1,
      anon_sym_COLON,
    ACTIONS(257), 1,
      anon_sym_DOT,
    STATE(36), 1,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [3563] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(263), 1,
      anon_sym_COLON,
    ACTIONS(265), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym_comment,
    ACTIONS(261), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(259), 35,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [3622] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(38), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(410), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3731] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(21), 1,
      aux_sym_case_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(265), 1,
      sym_binary_expression,
    STATE(266), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3844] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(40), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(188), 1,
      sym__expression,
    STATE(225), 1,
      sym_term,
    STATE(227), 1,
      sym_assignment,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3953] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(41), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(410), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4062] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(42), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(417), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4171] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(410), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4280] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(44), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(410), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4389] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(45), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(129), 1,
      sym__expression,
    STATE(225), 1,
      sym_term,
    STATE(227), 1,
      sym_assignment,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4498] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(283), 1,
      anon_sym_DOT,
    STATE(46), 1,
      sym_comment,
    ACTIONS(281), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(279), 35,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [4554] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(47), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(252), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4658] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(48), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(252), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4762] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(21), 1,
      aux_sym_case_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(265), 1,
      sym_binary_expression,
    STATE(266), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4872] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(50), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(436), 1,
      sym_term,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4978] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(51), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(417), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5084] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(52), 1,
      sym_comment,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(188), 1,
      sym__expression,
    STATE(410), 1,
      sym_term,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5190] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(53), 1,
      sym_comment,
    ACTIONS(289), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(287), 35,
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
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5243] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(295), 1,
      anon_sym_DOT,
    STATE(54), 1,
      sym_comment,
    ACTIONS(293), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(291), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5298] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(55), 1,
      sym_comment,
    ACTIONS(261), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(259), 35,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [5351] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(301), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_comment,
    ACTIONS(299), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(297), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5406] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(57), 1,
      sym_comment,
    ACTIONS(305), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(303), 35,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [5459] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(311), 1,
      anon_sym_T,
    STATE(58), 1,
      sym_comment,
    ACTIONS(309), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(307), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5514] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(313), 1,
      anon_sym_DOT,
    STATE(59), 1,
      sym_comment,
    ACTIONS(67), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5569] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(60), 1,
      sym_comment,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(249), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5674] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(61), 1,
      sym_comment,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(117), 1,
      sym__expression,
    STATE(247), 1,
      sym__boolean_expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5777] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(62), 1,
      sym_comment,
    ACTIONS(217), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(215), 35,
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
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5830] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(323), 1,
      sym__natural_number,
    STATE(63), 1,
      sym_comment,
    ACTIONS(321), 4,
      sym_keyword_from,
      anon_sym_EQ,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5885] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(64), 1,
      sym_comment,
    ACTIONS(281), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(279), 35,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [5938] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(65), 1,
      sym_comment,
    ACTIONS(327), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(325), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5991] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      sym__natural_number,
    ACTIONS(337), 1,
      anon_sym__,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      anon_sym_BQUOTE,
    ACTIONS(343), 1,
      sym__identifier,
    STATE(66), 1,
      sym_comment,
    STATE(147), 1,
      aux_sym_function_call_repeat1,
    STATE(274), 1,
      aux_sym__friendly_number,
    STATE(275), 1,
      sym_identifier,
    STATE(285), 1,
      sym__call_parameter,
    STATE(286), 1,
      sym_integer,
    STATE(288), 1,
      sym_literal,
    STATE(276), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(287), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(329), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(67), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 15,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6076] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(67), 1,
      sym_comment,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(249), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6181] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(68), 1,
      sym_comment,
    ACTIONS(213), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 35,
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
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6234] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(69), 1,
      sym_comment,
    ACTIONS(349), 4,
      sym_keyword_from,
      anon_sym_EQ,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6286] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(70), 1,
      sym_comment,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(272), 1,
      sym_binary_expression,
    STATE(278), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6388] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(255), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6488] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(72), 1,
      sym_comment,
    ACTIONS(299), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(297), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6540] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(73), 1,
      sym_comment,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(258), 1,
      sym_binary_expression,
    STATE(268), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6642] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(74), 1,
      sym_comment,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(262), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6742] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 1,
      anon_sym_DASH,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(367), 1,
      sym__natural_number,
    ACTIONS(370), 1,
      anon_sym__,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(376), 1,
      anon_sym_BQUOTE,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(123), 1,
      sym_identifier,
    STATE(127), 1,
      aux_sym__friendly_number,
    STATE(130), 1,
      sym_literal,
    STATE(131), 1,
      sym__call_parameter,
    STATE(139), 1,
      sym_integer,
    STATE(75), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(134), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(138), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(355), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(353), 16,
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
  [6826] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(76), 1,
      sym_comment,
    ACTIONS(384), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6878] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(77), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(388), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 30,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6934] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(78), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
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
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6988] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(79), 1,
      sym_comment,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(273), 1,
      sym_binary_expression,
    STATE(278), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7090] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(80), 1,
      sym_comment,
    ACTIONS(388), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(386), 26,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7150] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(80), 1,
      sym__expression,
    STATE(81), 1,
      sym_comment,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7250] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(78), 1,
      sym__expression,
    STATE(82), 1,
      sym_comment,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7350] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(83), 1,
      sym_comment,
    ACTIONS(400), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7402] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(84), 1,
      sym_comment,
    ACTIONS(293), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(291), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7454] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(85), 1,
      sym_comment,
    ACTIONS(404), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7506] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(86), 1,
      sym_comment,
    ACTIONS(408), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7558] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(77), 1,
      sym__expression,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(87), 1,
      sym_comment,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7658] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(88), 1,
      sym_comment,
    STATE(269), 1,
      sym_binary_expression,
    STATE(278), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7760] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(89), 1,
      sym_comment,
    ACTIONS(412), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7812] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(90), 1,
      sym_comment,
    STATE(106), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7912] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(91), 1,
      sym_comment,
    STATE(109), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8012] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(92), 1,
      sym_comment,
    ACTIONS(211), 17,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(213), 21,
      sym_keyword_filter,
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
  [8064] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(93), 1,
      sym_comment,
    ACTIONS(416), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8116] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(94), 1,
      sym_comment,
    ACTIONS(420), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8168] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(95), 1,
      sym_comment,
    STATE(99), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8268] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(96), 1,
      sym_comment,
    ACTIONS(424), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8320] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(97), 1,
      sym_comment,
    ACTIONS(428), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8372] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(98), 1,
      sym_comment,
    ACTIONS(432), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8424] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    STATE(99), 1,
      sym_comment,
    ACTIONS(388), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(386), 25,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8486] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(100), 1,
      sym_comment,
    ACTIONS(438), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8538] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(101), 1,
      sym_comment,
    ACTIONS(321), 4,
      sym_keyword_from,
      anon_sym_EQ,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8590] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(102), 1,
      sym_comment,
    ACTIONS(442), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(440), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8642] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(103), 1,
      sym_comment,
    ACTIONS(446), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8694] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(104), 1,
      sym_comment,
    STATE(249), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8796] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(105), 1,
      sym_comment,
    ACTIONS(215), 17,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 21,
      sym_keyword_filter,
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
  [8848] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(106), 1,
      sym_comment,
    ACTIONS(388), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8900] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(107), 1,
      sym_comment,
    STATE(114), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9000] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(108), 1,
      sym_comment,
    STATE(283), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(189), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9102] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    STATE(109), 1,
      sym_comment,
    ACTIONS(388), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(386), 23,
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
      anon_sym_PIPE_PIPE,
  [9166] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      sym__natural_number,
    ACTIONS(51), 1,
      anon_sym__,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym__double_quote_string,
    STATE(56), 1,
      sym_integer,
    STATE(59), 1,
      sym_identifier,
    STATE(84), 1,
      sym__single_quote_string,
    STATE(110), 1,
      sym_comment,
    STATE(251), 1,
      sym__expression,
    STATE(427), 1,
      sym__alias_identifier,
    STATE(72), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(85), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(86), 2,
      sym__double_s_string,
      sym__triple_s_string,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(83), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9266] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(111), 1,
      sym_comment,
    ACTIONS(452), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 34,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9318] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      sym__natural_number,
    ACTIONS(77), 1,
      anon_sym__,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(81), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      sym__identifier,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(458), 1,
      anon_sym_DASH,
    STATE(75), 1,
      aux_sym_function_call_repeat1,
    STATE(112), 1,
      sym_comment,
    STATE(123), 1,
      sym_identifier,
    STATE(127), 1,
      aux_sym__friendly_number,
    STATE(130), 1,
      sym_literal,
    STATE(131), 1,
      sym__call_parameter,
    STATE(139), 1,
      sym_integer,
    STATE(134), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(138), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(69), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(456), 16,
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
  [9404] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(462), 1,
      sym_keyword_from,
    STATE(113), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(464), 2,
      sym_keyword_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(460), 20,
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
  [9468] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(468), 1,
      sym_keyword_from,
    STATE(114), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(464), 2,
      sym_keyword_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(466), 20,
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
  [9532] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(473), 1,
      anon_sym_DASH,
    ACTIONS(476), 1,
      anon_sym_DQUOTE,
    ACTIONS(479), 1,
      anon_sym_SQUOTE,
    ACTIONS(482), 1,
      sym__natural_number,
    ACTIONS(485), 1,
      anon_sym__,
    ACTIONS(488), 1,
      anon_sym_DOT,
    ACTIONS(491), 1,
      anon_sym_BQUOTE,
    ACTIONS(494), 1,
      sym__identifier,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(152), 1,
      sym_identifier,
    STATE(156), 1,
      sym_integer,
    STATE(170), 1,
      sym__call_parameter,
    STATE(171), 1,
      sym_literal,
    STATE(115), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(160), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(161), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(470), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(353), 12,
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
  [9612] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym__natural_number,
    ACTIONS(109), 1,
      anon_sym__,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(113), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      sym__identifier,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(497), 1,
      anon_sym_DASH,
    STATE(115), 1,
      aux_sym_function_call_repeat1,
    STATE(116), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(152), 1,
      sym_identifier,
    STATE(156), 1,
      sym_integer,
    STATE(170), 1,
      sym__call_parameter,
    STATE(171), 1,
      sym_literal,
    STATE(160), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(161), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(101), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(456), 12,
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
  [9694] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(501), 1,
      sym_keyword_from,
    STATE(117), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(464), 2,
      sym_keyword_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(499), 17,
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
  [9755] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(505), 1,
      sym_keyword_from,
    ACTIONS(507), 1,
      anon_sym_EQ,
    STATE(118), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(464), 2,
      sym_keyword_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 16,
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
  [9818] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(511), 1,
      sym_keyword_from,
    ACTIONS(513), 1,
      sym_keyword_filter,
    ACTIONS(515), 1,
      sym_keyword_derive,
    ACTIONS(517), 1,
      sym_keyword_group,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(525), 1,
      sym_keyword_join,
    ACTIONS(527), 1,
      sym_keyword_select,
    ACTIONS(531), 1,
      sym_keyword_loop,
    STATE(119), 1,
      sym_comment,
    STATE(136), 1,
      aux_sym_transforms_repeat1,
    STATE(323), 1,
      sym_transforms,
    ACTIONS(529), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(509), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(211), 10,
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
  [9887] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(533), 1,
      sym__natural_number,
    ACTIONS(536), 1,
      anon_sym__,
    STATE(120), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(127), 20,
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
  [9934] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(121), 1,
      sym_comment,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(213), 21,
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
  [9977] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(122), 1,
      sym_comment,
    ACTIONS(217), 9,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(215), 20,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10020] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(543), 1,
      anon_sym_COLON,
    STATE(123), 1,
      sym_comment,
    ACTIONS(539), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(541), 21,
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
  [10065] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(120), 1,
      aux_sym__friendly_number,
    STATE(124), 1,
      sym_comment,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(123), 21,
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
  [10110] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(513), 1,
      sym_keyword_filter,
    ACTIONS(515), 1,
      sym_keyword_derive,
    ACTIONS(517), 1,
      sym_keyword_group,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(525), 1,
      sym_keyword_join,
    ACTIONS(527), 1,
      sym_keyword_select,
    ACTIONS(531), 1,
      sym_keyword_loop,
    ACTIONS(547), 1,
      sym_keyword_from,
    STATE(125), 1,
      sym_comment,
    STATE(136), 1,
      aux_sym_transforms_repeat1,
    STATE(333), 1,
      sym_transforms,
    ACTIONS(529), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(545), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(211), 10,
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
  [10179] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(126), 1,
      sym_comment,
    ACTIONS(215), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(217), 21,
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
  [10222] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(120), 1,
      aux_sym__friendly_number,
    STATE(127), 1,
      sym_comment,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(119), 21,
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
  [10267] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(128), 1,
      sym_comment,
    ACTIONS(213), 9,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 20,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10310] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(549), 1,
      anon_sym_EQ,
    STATE(129), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(464), 2,
      sym_keyword_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 13,
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
  [10367] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(130), 1,
      sym_comment,
    ACTIONS(539), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(541), 21,
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
  [10409] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(131), 1,
      sym_comment,
    ACTIONS(551), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(553), 21,
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
  [10451] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(132), 1,
      sym_comment,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(150), 21,
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
  [10493] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(133), 1,
      sym_comment,
    ACTIONS(410), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(412), 21,
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
  [10535] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(134), 1,
      sym_comment,
    ACTIONS(297), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(299), 21,
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
  [10577] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(135), 1,
      sym_comment,
    ACTIONS(555), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(557), 21,
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
  [10619] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(513), 1,
      sym_keyword_filter,
    ACTIONS(515), 1,
      sym_keyword_derive,
    ACTIONS(517), 1,
      sym_keyword_group,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(525), 1,
      sym_keyword_join,
    ACTIONS(527), 1,
      sym_keyword_select,
    ACTIONS(531), 1,
      sym_keyword_loop,
    ACTIONS(561), 1,
      sym_keyword_from,
    STATE(136), 1,
      sym_comment,
    STATE(137), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(529), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(559), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(211), 10,
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
  [10685] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(565), 1,
      sym_keyword_from,
    ACTIONS(567), 1,
      sym_keyword_filter,
    ACTIONS(570), 1,
      sym_keyword_derive,
    ACTIONS(573), 1,
      sym_keyword_group,
    ACTIONS(576), 1,
      sym_keyword_aggregate,
    ACTIONS(579), 1,
      sym_keyword_sort,
    ACTIONS(582), 1,
      sym_keyword_take,
    ACTIONS(585), 1,
      sym_keyword_join,
    ACTIONS(588), 1,
      sym_keyword_select,
    ACTIONS(594), 1,
      sym_keyword_loop,
    STATE(137), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(591), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(563), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(211), 10,
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
  [10749] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(138), 1,
      sym_comment,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(293), 21,
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
  [10791] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(139), 1,
      sym_comment,
    ACTIONS(297), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(299), 21,
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
  [10833] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(140), 1,
      sym_comment,
    ACTIONS(319), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(321), 21,
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
  [10875] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(141), 1,
      sym_comment,
    ACTIONS(422), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(424), 21,
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
  [10917] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(142), 1,
      sym_comment,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(289), 21,
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
  [10959] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(127), 1,
      sym_keyword_from,
    ACTIONS(597), 2,
      sym__natural_number,
      anon_sym__,
    STATE(143), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(125), 23,
      ts_builtin_sym_end,
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
  [11002] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(123), 1,
      sym_keyword_from,
    STATE(143), 1,
      aux_sym__friendly_number,
    STATE(144), 1,
      sym_comment,
    ACTIONS(600), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(121), 23,
      ts_builtin_sym_end,
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
  [11047] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(119), 1,
      sym_keyword_from,
    STATE(143), 1,
      aux_sym__friendly_number,
    STATE(145), 1,
      sym_comment,
    ACTIONS(600), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(117), 23,
      ts_builtin_sym_end,
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
  [11092] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(150), 1,
      sym_keyword_from,
    STATE(146), 1,
      sym_comment,
    ACTIONS(148), 25,
      ts_builtin_sym_end,
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
  [11132] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      sym__natural_number,
    ACTIONS(337), 1,
      anon_sym__,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      anon_sym_BQUOTE,
    ACTIONS(343), 1,
      sym__identifier,
    ACTIONS(602), 1,
      anon_sym_DASH,
    STATE(147), 1,
      sym_comment,
    STATE(149), 1,
      aux_sym_function_call_repeat1,
    STATE(274), 1,
      aux_sym__friendly_number,
    STATE(275), 1,
      sym_identifier,
    STATE(285), 1,
      sym__call_parameter,
    STATE(286), 1,
      sym_integer,
    STATE(288), 1,
      sym_literal,
    STATE(276), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(287), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(329), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(454), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11203] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(148), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym__friendly_number,
    ACTIONS(117), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(119), 17,
      sym_keyword_filter,
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
  [11244] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(607), 1,
      anon_sym_DASH,
    ACTIONS(610), 1,
      anon_sym_DQUOTE,
    ACTIONS(613), 1,
      anon_sym_SQUOTE,
    ACTIONS(616), 1,
      sym__natural_number,
    ACTIONS(619), 1,
      anon_sym__,
    ACTIONS(622), 1,
      anon_sym_DOT,
    ACTIONS(625), 1,
      anon_sym_BQUOTE,
    ACTIONS(628), 1,
      sym__identifier,
    STATE(274), 1,
      aux_sym__friendly_number,
    STATE(275), 1,
      sym_identifier,
    STATE(285), 1,
      sym__call_parameter,
    STATE(286), 1,
      sym_integer,
    STATE(288), 1,
      sym_literal,
    STATE(149), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(276), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(287), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(604), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(351), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11313] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(150), 1,
      sym_comment,
    ACTIONS(215), 8,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(217), 17,
      sym_keyword_filter,
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
  [11352] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(151), 1,
      sym_comment,
    ACTIONS(211), 8,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(213), 17,
      sym_keyword_filter,
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
  [11391] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(631), 1,
      anon_sym_COLON,
    STATE(152), 1,
      sym_comment,
    ACTIONS(539), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(541), 17,
      sym_keyword_filter,
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
  [11432] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(153), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym__friendly_number,
    ACTIONS(121), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(123), 17,
      sym_keyword_filter,
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
  [11473] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    ACTIONS(513), 1,
      sym_keyword_filter,
    ACTIONS(517), 1,
      sym_keyword_group,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(525), 1,
      sym_keyword_join,
    ACTIONS(531), 1,
      sym_keyword_loop,
    ACTIONS(633), 1,
      sym_keyword_derive,
    ACTIONS(635), 1,
      sym_keyword_select,
    STATE(154), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_transforms_repeat1,
    STATE(323), 1,
      sym_transforms,
    ACTIONS(529), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(211), 10,
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
  [11536] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(637), 1,
      sym__natural_number,
    ACTIONS(640), 1,
      anon_sym__,
    STATE(155), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(125), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(127), 16,
      sym_keyword_filter,
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
  [11579] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(156), 1,
      sym_comment,
    ACTIONS(297), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(299), 17,
      sym_keyword_filter,
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
  [11617] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(157), 1,
      sym_comment,
    ACTIONS(555), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(557), 17,
      sym_keyword_filter,
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
  [11655] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(513), 1,
      sym_keyword_filter,
    ACTIONS(517), 1,
      sym_keyword_group,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(525), 1,
      sym_keyword_join,
    ACTIONS(531), 1,
      sym_keyword_loop,
    ACTIONS(633), 1,
      sym_keyword_derive,
    ACTIONS(635), 1,
      sym_keyword_select,
    STATE(158), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_transforms_repeat1,
    STATE(486), 1,
      sym_transforms,
    ACTIONS(529), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(211), 10,
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
  [11715] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(159), 1,
      sym_comment,
    ACTIONS(287), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(289), 17,
      sym_keyword_filter,
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
  [11753] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(160), 1,
      sym_comment,
    ACTIONS(291), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(293), 17,
      sym_keyword_filter,
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
  [11791] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(161), 1,
      sym_comment,
    ACTIONS(297), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(299), 17,
      sym_keyword_filter,
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
  [11829] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(327), 1,
      sym_keyword_from,
    STATE(162), 1,
      sym_comment,
    ACTIONS(325), 23,
      ts_builtin_sym_end,
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
  [11867] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(309), 1,
      sym_keyword_from,
    STATE(163), 1,
      sym_comment,
    ACTIONS(307), 23,
      ts_builtin_sym_end,
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
  [11905] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(164), 1,
      sym_comment,
    ACTIONS(319), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(321), 17,
      sym_keyword_filter,
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
  [11943] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(165), 1,
      sym_comment,
    ACTIONS(422), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(424), 17,
      sym_keyword_filter,
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
  [11981] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(166), 1,
      sym_comment,
    ACTIONS(410), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(412), 17,
      sym_keyword_filter,
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
  [12019] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(513), 1,
      sym_keyword_filter,
    ACTIONS(517), 1,
      sym_keyword_group,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(525), 1,
      sym_keyword_join,
    ACTIONS(531), 1,
      sym_keyword_loop,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(633), 1,
      sym_keyword_derive,
    ACTIONS(635), 1,
      sym_keyword_select,
    STATE(167), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(529), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(211), 10,
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
  [12079] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(567), 1,
      sym_keyword_filter,
    ACTIONS(573), 1,
      sym_keyword_group,
    ACTIONS(576), 1,
      sym_keyword_aggregate,
    ACTIONS(579), 1,
      sym_keyword_sort,
    ACTIONS(582), 1,
      sym_keyword_take,
    ACTIONS(585), 1,
      sym_keyword_join,
    ACTIONS(594), 1,
      sym_keyword_loop,
    ACTIONS(643), 1,
      sym_keyword_derive,
    ACTIONS(646), 1,
      sym_keyword_select,
    STATE(168), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(591), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(211), 10,
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
  [12137] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(169), 1,
      sym_comment,
    ACTIONS(148), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(150), 17,
      sym_keyword_filter,
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
  [12175] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(170), 1,
      sym_comment,
    ACTIONS(551), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(553), 17,
      sym_keyword_filter,
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
  [12213] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(171), 1,
      sym_comment,
    ACTIONS(539), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(541), 17,
      sym_keyword_filter,
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
  [12251] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(213), 1,
      sym_keyword_from,
    STATE(172), 1,
      sym_comment,
    ACTIONS(211), 22,
      ts_builtin_sym_end,
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
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12288] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(651), 1,
      sym_keyword_from,
    STATE(173), 1,
      sym_comment,
    ACTIONS(649), 22,
      ts_builtin_sym_end,
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
  [12325] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(217), 1,
      sym_keyword_from,
    STATE(174), 1,
      sym_comment,
    ACTIONS(215), 22,
      ts_builtin_sym_end,
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
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12362] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(655), 1,
      sym_keyword_from,
    STATE(175), 1,
      sym_comment,
    ACTIONS(653), 20,
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
  [12397] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(659), 1,
      sym_keyword_from,
    STATE(176), 1,
      sym_comment,
    ACTIONS(657), 20,
      ts_builtin_sym_end,
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
  [12432] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(177), 1,
      sym_comment,
    ACTIONS(503), 20,
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
  [12467] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(663), 1,
      sym_keyword_from,
    STATE(178), 1,
      sym_comment,
    ACTIONS(661), 20,
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
  [12502] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(667), 1,
      sym_keyword_from,
    STATE(179), 1,
      sym_comment,
    ACTIONS(665), 20,
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
  [12537] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(671), 1,
      sym_keyword_from,
    STATE(180), 1,
      sym_comment,
    ACTIONS(669), 20,
      ts_builtin_sym_end,
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
  [12572] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(675), 1,
      sym_keyword_from,
    ACTIONS(677), 1,
      anon_sym_LBRACK,
    STATE(181), 1,
      sym_comment,
    STATE(230), 1,
      sym_conditions,
    STATE(233), 1,
      sym__self_join,
    ACTIONS(673), 17,
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
  [12613] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(677), 1,
      anon_sym_LBRACK,
    ACTIONS(681), 1,
      sym_keyword_from,
    STATE(182), 1,
      sym_comment,
    STATE(233), 1,
      sym__self_join,
    STATE(239), 1,
      sym_conditions,
    ACTIONS(679), 17,
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
  [12654] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(685), 1,
      sym_keyword_from,
    STATE(183), 1,
      sym_comment,
    ACTIONS(683), 20,
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
  [12689] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(689), 1,
      sym_keyword_from,
    STATE(184), 1,
      sym_comment,
    ACTIONS(687), 20,
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
  [12724] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(693), 1,
      sym_keyword_from,
    STATE(185), 1,
      sym_comment,
    ACTIONS(691), 20,
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
  [12759] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(697), 1,
      sym_keyword_from,
    STATE(186), 1,
      sym_comment,
    ACTIONS(695), 20,
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
  [12794] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(701), 1,
      sym_keyword_from,
    STATE(187), 1,
      sym_comment,
    ACTIONS(699), 20,
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
  [12829] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(703), 1,
      anon_sym_EQ,
    STATE(188), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(464), 2,
      sym_keyword_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12877] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(707), 1,
      sym_keyword_from,
    STATE(189), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(705), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    ACTIONS(398), 13,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [12915] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(711), 1,
      sym_keyword_from,
    ACTIONS(713), 1,
      anon_sym_DOT_DOT,
    STATE(190), 1,
      sym_comment,
    ACTIONS(709), 18,
      ts_builtin_sym_end,
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
  [12951] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(717), 1,
      sym_keyword_from,
    ACTIONS(719), 1,
      anon_sym_EQ,
    STATE(191), 1,
      sym_comment,
    ACTIONS(715), 18,
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
  [12987] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(723), 1,
      sym_keyword_from,
    STATE(192), 1,
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
  [13020] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(193), 1,
      sym_comment,
    STATE(396), 1,
      aux_sym_derives_repeat1,
    ACTIONS(349), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(347), 15,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13055] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(727), 1,
      sym_keyword_from,
    STATE(194), 1,
      sym_comment,
    ACTIONS(725), 18,
      ts_builtin_sym_end,
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
  [13088] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(195), 1,
      sym_comment,
    ACTIONS(729), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(731), 12,
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
  [13121] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(711), 1,
      sym_keyword_from,
    STATE(196), 1,
      sym_comment,
    ACTIONS(709), 18,
      ts_builtin_sym_end,
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
  [13154] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(735), 1,
      sym_keyword_from,
    STATE(197), 1,
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
  [13187] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(739), 1,
      sym_keyword_from,
    STATE(198), 1,
      sym_comment,
    ACTIONS(737), 18,
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
  [13220] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      sym_comment,
    STATE(386), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(400), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 13,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13259] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(717), 1,
      sym_keyword_from,
    STATE(200), 1,
      sym_comment,
    ACTIONS(715), 18,
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
  [13292] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(201), 1,
      sym_comment,
    ACTIONS(745), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(747), 12,
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
  [13325] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(751), 1,
      sym_keyword_from,
    STATE(202), 1,
      sym_comment,
    ACTIONS(749), 18,
      ts_builtin_sym_end,
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
  [13358] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(203), 1,
      sym_comment,
    ACTIONS(753), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(755), 12,
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
  [13391] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(759), 1,
      sym_keyword_from,
    STATE(204), 1,
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
  [13424] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(763), 1,
      sym_keyword_from,
    STATE(205), 1,
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
  [13457] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(767), 1,
      sym_keyword_from,
    STATE(206), 1,
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
  [13490] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(771), 1,
      sym_keyword_from,
    STATE(207), 1,
      sym_comment,
    ACTIONS(769), 18,
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
  [13523] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(775), 1,
      sym_keyword_from,
    STATE(208), 1,
      sym_comment,
    ACTIONS(773), 18,
      ts_builtin_sym_end,
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
  [13556] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(779), 1,
      sym_keyword_from,
    STATE(209), 1,
      sym_comment,
    ACTIONS(777), 18,
      ts_builtin_sym_end,
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
  [13589] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(210), 1,
      sym_comment,
    ACTIONS(349), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(347), 15,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [13621] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(783), 1,
      sym_keyword_from,
    STATE(211), 1,
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
  [13653] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(787), 1,
      sym_keyword_from,
    STATE(212), 1,
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
  [13685] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(791), 1,
      sym_keyword_from,
    STATE(213), 1,
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
  [13717] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(795), 1,
      sym_keyword_from,
    STATE(214), 1,
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
  [13749] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(799), 1,
      sym_keyword_from,
    STATE(215), 1,
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
  [13781] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(803), 1,
      sym_keyword_from,
    STATE(216), 1,
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
  [13813] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(807), 1,
      sym_keyword_from,
    STATE(217), 1,
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
  [13845] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(811), 1,
      sym_keyword_from,
    STATE(218), 1,
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
  [13877] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(815), 1,
      sym_keyword_from,
    STATE(219), 1,
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
  [13909] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(819), 1,
      sym_keyword_from,
    STATE(220), 1,
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
  [13941] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(823), 1,
      sym_keyword_from,
    STATE(221), 1,
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
  [13973] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(827), 1,
      sym_keyword_from,
    STATE(222), 1,
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
  [14005] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(223), 1,
      sym_comment,
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(400), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 13,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14039] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(833), 1,
      sym_keyword_from,
    STATE(224), 1,
      sym_comment,
    ACTIONS(831), 17,
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
  [14071] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(837), 1,
      sym_keyword_from,
    STATE(225), 1,
      sym_comment,
    ACTIONS(835), 17,
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
  [14103] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(841), 1,
      sym_keyword_from,
    STATE(226), 1,
      sym_comment,
    ACTIONS(839), 17,
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
  [14135] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(227), 1,
      sym_comment,
    ACTIONS(503), 17,
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
  [14167] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(845), 1,
      sym_keyword_from,
    STATE(228), 1,
      sym_comment,
    ACTIONS(843), 17,
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
  [14199] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(849), 1,
      sym_keyword_from,
    STATE(229), 1,
      sym_comment,
    ACTIONS(847), 17,
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
  [14231] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(853), 1,
      sym_keyword_from,
    STATE(230), 1,
      sym_comment,
    ACTIONS(851), 17,
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
  [14263] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(857), 1,
      sym_keyword_from,
    STATE(231), 1,
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
  [14295] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(861), 1,
      sym_keyword_from,
    STATE(232), 1,
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
  [14327] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(865), 1,
      sym_keyword_from,
    STATE(233), 1,
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
  [14359] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(869), 1,
      sym_keyword_from,
    STATE(234), 1,
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
  [14391] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(873), 1,
      sym_keyword_from,
    STATE(235), 1,
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
  [14423] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(877), 1,
      sym_keyword_from,
    STATE(236), 1,
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
  [14455] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(881), 1,
      sym_keyword_from,
    STATE(237), 1,
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
  [14487] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    ACTIONS(885), 1,
      anon_sym_RBRACK,
    STATE(238), 1,
      sym_comment,
    STATE(378), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(400), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 13,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14525] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(889), 1,
      sym_keyword_from,
    STATE(239), 1,
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
  [14557] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(893), 1,
      sym_keyword_from,
    STATE(240), 1,
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
  [14589] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(897), 1,
      sym_keyword_from,
    STATE(241), 1,
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
  [14621] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(901), 1,
      sym_keyword_from,
    STATE(242), 1,
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
  [14653] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(905), 1,
      sym_keyword_from,
    STATE(243), 1,
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
  [14685] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(909), 1,
      sym_keyword_from,
    STATE(244), 1,
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
  [14717] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(913), 1,
      sym_keyword_from,
    STATE(245), 1,
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
  [14749] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(917), 1,
      sym_keyword_from,
    STATE(246), 1,
      sym_comment,
    ACTIONS(915), 17,
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
  [14781] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(921), 1,
      sym_keyword_from,
    STATE(247), 1,
      sym_comment,
    ACTIONS(919), 17,
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
  [14813] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(925), 1,
      sym_keyword_from,
    STATE(248), 1,
      sym_comment,
    ACTIONS(923), 17,
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
  [14845] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(249), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(927), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(398), 13,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14878] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(250), 1,
      sym_comment,
    ACTIONS(929), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(931), 10,
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
  [14909] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    STATE(251), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(464), 2,
      sym_keyword_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(933), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14952] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    STATE(252), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(464), 2,
      sym_keyword_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(935), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14995] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(937), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(939), 2,
      sym_keyword_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15037] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(943), 1,
      anon_sym_DASH,
    ACTIONS(945), 1,
      anon_sym_DQUOTE,
    ACTIONS(947), 1,
      anon_sym_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_DOT,
    STATE(254), 1,
      sym_comment,
    STATE(329), 1,
      aux_sym__friendly_number,
    STATE(336), 1,
      sym_integer,
    STATE(472), 1,
      sym_literal,
    ACTIONS(949), 2,
      sym__natural_number,
      anon_sym__,
    STATE(356), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(358), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(941), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15085] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    STATE(255), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(386), 3,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15125] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(943), 1,
      anon_sym_DASH,
    ACTIONS(945), 1,
      anon_sym_DQUOTE,
    ACTIONS(947), 1,
      anon_sym_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_DOT,
    STATE(256), 1,
      sym_comment,
    STATE(329), 1,
      aux_sym__friendly_number,
    STATE(336), 1,
      sym_integer,
    STATE(477), 1,
      sym_literal,
    ACTIONS(949), 2,
      sym__natural_number,
      anon_sym__,
    STATE(356), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(358), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(941), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15173] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(497), 1,
      anon_sym_DASH,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(156), 1,
      sym_integer,
    STATE(157), 1,
      sym_literal,
    STATE(257), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym__natural_number,
      anon_sym__,
    STATE(160), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(161), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(953), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15221] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(258), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 14,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15251] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(602), 1,
      anon_sym_DASH,
    STATE(259), 1,
      sym_comment,
    STATE(274), 1,
      aux_sym__friendly_number,
    STATE(277), 1,
      sym_literal,
    STATE(286), 1,
      sym_integer,
    ACTIONS(335), 2,
      sym__natural_number,
      anon_sym__,
    STATE(276), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(287), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(955), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15299] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(458), 1,
      anon_sym_DASH,
    STATE(127), 1,
      aux_sym__friendly_number,
    STATE(135), 1,
      sym_literal,
    STATE(139), 1,
      sym_integer,
    STATE(260), 1,
      sym_comment,
    ACTIONS(75), 2,
      sym__natural_number,
      anon_sym__,
    STATE(134), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(138), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(957), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15347] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(261), 1,
      sym_comment,
    ACTIONS(217), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(215), 11,
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
  [15377] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    STATE(262), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(386), 5,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15415] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(263), 1,
      sym_comment,
    ACTIONS(213), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(211), 11,
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
  [15445] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(947), 1,
      anon_sym_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_DOT,
    ACTIONS(959), 1,
      anon_sym_DASH,
    ACTIONS(961), 1,
      anon_sym_DQUOTE,
    STATE(264), 1,
      sym_comment,
    STATE(315), 1,
      aux_sym__friendly_number,
    STATE(336), 1,
      sym_integer,
    STATE(382), 1,
      sym_literal,
    ACTIONS(963), 2,
      sym__natural_number,
      anon_sym__,
    STATE(356), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(358), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(941), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15493] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(965), 1,
      anon_sym_EQ_GT,
    STATE(265), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 13,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15525] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(967), 1,
      anon_sym_EQ_GT,
    STATE(266), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 13,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15557] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(703), 1,
      anon_sym_EQ,
    STATE(267), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(464), 2,
      sym_keyword_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15599] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(937), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(939), 2,
      sym_keyword_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15641] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 13,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15673] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(973), 1,
      sym__natural_number,
    ACTIONS(976), 1,
      anon_sym__,
    STATE(270), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(127), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym__identifier,
    ACTIONS(125), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15707] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(270), 1,
      aux_sym__friendly_number,
    STATE(271), 1,
      sym_comment,
    ACTIONS(123), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(121), 10,
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
  [15739] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 13,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15771] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 13,
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
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15803] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(270), 1,
      aux_sym__friendly_number,
    STATE(274), 1,
      sym_comment,
    ACTIONS(119), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(117), 10,
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
  [15835] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(983), 1,
      anon_sym_COLON,
    STATE(275), 1,
      sym_comment,
    ACTIONS(541), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(539), 10,
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
  [15867] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(276), 1,
      sym_comment,
    ACTIONS(299), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(297), 10,
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
  [15896] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(277), 1,
      sym_comment,
    ACTIONS(557), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(555), 10,
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
  [15925] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    STATE(278), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(937), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(939), 2,
      sym_keyword_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15964] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(279), 1,
      sym_comment,
    ACTIONS(412), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(410), 10,
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
  [15993] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(280), 1,
      sym_comment,
    ACTIONS(150), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(148), 10,
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
  [16022] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(281), 1,
      sym_comment,
    ACTIONS(424), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(422), 10,
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
  [16051] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(282), 1,
      sym_comment,
    ACTIONS(321), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(319), 10,
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
  [16080] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(434), 1,
      anon_sym_QMARK_QMARK,
    STATE(283), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(392), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 2,
      sym_keyword_and,
      anon_sym_AMP_AMP,
    ACTIONS(464), 2,
      sym_keyword_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(394), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16119] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(284), 1,
      sym_comment,
    ACTIONS(289), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(287), 10,
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
  [16148] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(285), 1,
      sym_comment,
    ACTIONS(553), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(551), 10,
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
  [16177] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(286), 1,
      sym_comment,
    ACTIONS(299), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(297), 10,
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
  [16206] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(287), 1,
      sym_comment,
    ACTIONS(293), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(291), 10,
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
  [16235] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(288), 1,
      sym_comment,
    ACTIONS(541), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(539), 10,
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
  [16264] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(985), 1,
      ts_builtin_sym_end,
    STATE(289), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_program_repeat2,
    STATE(310), 1,
      aux_sym_program_repeat1,
    STATE(324), 1,
      sym_prql,
    STATE(119), 2,
      sym_from_text,
      sym_from,
    STATE(332), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16310] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(290), 1,
      sym_comment,
    STATE(327), 1,
      sym_target,
    ACTIONS(987), 11,
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
  [16336] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      sym_keyword_func,
    ACTIONS(13), 1,
      sym_keyword_let,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(985), 1,
      ts_builtin_sym_end,
    STATE(291), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym_program_repeat2,
    STATE(119), 2,
      sym_from_text,
      sym_from,
    STATE(332), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16373] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(989), 1,
      ts_builtin_sym_end,
    ACTIONS(991), 1,
      sym_keyword_from,
    ACTIONS(994), 1,
      sym_keyword_func,
    ACTIONS(997), 1,
      sym_keyword_let,
    ACTIONS(1000), 1,
      sym_keyword_from_text,
    STATE(119), 2,
      sym_from_text,
      sym_from,
    STATE(292), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(332), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16408] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      sym_keyword_func,
    ACTIONS(13), 1,
      sym_keyword_let,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1003), 1,
      ts_builtin_sym_end,
    STATE(292), 1,
      aux_sym_program_repeat2,
    STATE(293), 1,
      sym_comment,
    STATE(119), 2,
      sym_from_text,
      sym_from,
    STATE(332), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16445] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      sym_comment,
    STATE(295), 1,
      aux_sym_group_repeat2,
    STATE(348), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16479] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1009), 1,
      sym_keyword_aggregate,
    ACTIONS(1012), 1,
      sym_keyword_sort,
    ACTIONS(1015), 1,
      sym_keyword_take,
    ACTIONS(1018), 1,
      sym_keyword_window,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(295), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(348), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16511] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_group_repeat2,
    STATE(296), 1,
      sym_comment,
    STATE(348), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16545] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_group_repeat2,
    STATE(297), 1,
      sym_comment,
    STATE(348), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16579] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_group_repeat2,
    STATE(298), 1,
      sym_comment,
    STATE(348), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16613] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_group_repeat2,
    STATE(299), 1,
      sym_comment,
    STATE(348), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16647] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    STATE(298), 1,
      aux_sym_group_repeat2,
    STATE(300), 1,
      sym_comment,
    STATE(348), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16678] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
    ACTIONS(1033), 1,
      anon_sym_RBRACK,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(180), 1,
      sym_identifier,
    STATE(301), 1,
      sym_comment,
    STATE(375), 1,
      sym_direction,
    STATE(392), 1,
      sym__sort_instruction,
    ACTIONS(243), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16713] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    STATE(294), 1,
      aux_sym_group_repeat2,
    STATE(302), 1,
      sym_comment,
    STATE(348), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16744] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    STATE(299), 1,
      aux_sym_group_repeat2,
    STATE(303), 1,
      sym_comment,
    STATE(348), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16775] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    STATE(297), 1,
      aux_sym_group_repeat2,
    STATE(304), 1,
      sym_comment,
    STATE(348), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16806] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_aggregate,
    ACTIONS(521), 1,
      sym_keyword_sort,
    ACTIONS(523), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    STATE(296), 1,
      aux_sym_group_repeat2,
    STATE(305), 1,
      sym_comment,
    STATE(348), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16837] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1039), 1,
      anon_sym_DASH,
    ACTIONS(1041), 1,
      anon_sym_AT,
    STATE(145), 1,
      aux_sym__friendly_number,
    STATE(190), 1,
      sym_integer,
    STATE(196), 1,
      sym_range,
    STATE(306), 1,
      sym_comment,
    STATE(454), 1,
      sym_date,
    ACTIONS(600), 2,
      sym__natural_number,
      anon_sym__,
  [16869] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    ACTIONS(1043), 1,
      anon_sym_RBRACK,
    STATE(180), 1,
      sym_identifier,
    STATE(307), 1,
      sym_comment,
    STATE(375), 1,
      sym_direction,
    STATE(406), 1,
      sym__sort_instruction,
    ACTIONS(243), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16901] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1039), 1,
      anon_sym_DASH,
    ACTIONS(1041), 1,
      anon_sym_AT,
    STATE(145), 1,
      aux_sym__friendly_number,
    STATE(308), 1,
      sym_comment,
    STATE(337), 1,
      sym_integer,
    STATE(361), 1,
      sym_range,
    STATE(454), 1,
      sym_date,
    ACTIONS(600), 2,
      sym__natural_number,
      anon_sym__,
  [16933] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    ACTIONS(1045), 1,
      anon_sym_RBRACK,
    STATE(180), 1,
      sym_identifier,
    STATE(309), 1,
      sym_comment,
    STATE(375), 1,
      sym_direction,
    STATE(406), 1,
      sym__sort_instruction,
    ACTIONS(243), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16965] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1049), 1,
      sym_keyword_from,
    ACTIONS(1051), 1,
      sym_keyword_prql,
    STATE(324), 1,
      sym_prql,
    STATE(310), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1047), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [16991] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    ACTIONS(1054), 1,
      anon_sym_LBRACK,
    STATE(180), 1,
      sym_identifier,
    STATE(194), 1,
      sym__sort_instruction,
    STATE(311), 1,
      sym_comment,
    STATE(375), 1,
      sym_direction,
    ACTIONS(243), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [17023] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(289), 1,
      sym_keyword_from,
    STATE(312), 1,
      sym_comment,
    ACTIONS(287), 6,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
      anon_sym_COMMA,
  [17044] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(127), 1,
      sym__identifier,
    ACTIONS(1056), 1,
      sym__natural_number,
    ACTIONS(1059), 1,
      anon_sym__,
    STATE(313), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [17069] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1062), 1,
      sym_keyword_side,
    ACTIONS(1064), 1,
      sym__identifier,
    STATE(181), 1,
      sym__table_selection,
    STATE(191), 1,
      sym_identifier,
    STATE(207), 1,
      sym__table_reference,
    STATE(314), 1,
      sym_comment,
    STATE(339), 1,
      sym__join_definition,
  [17100] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(119), 1,
      sym__identifier,
    ACTIONS(963), 1,
      sym__natural_number,
    ACTIONS(1066), 1,
      anon_sym__,
    STATE(313), 1,
      aux_sym__friendly_number,
    STATE(315), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [17127] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(180), 1,
      sym_identifier,
    STATE(316), 1,
      sym_comment,
    STATE(375), 1,
      sym_direction,
    STATE(406), 1,
      sym__sort_instruction,
    ACTIONS(243), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [17156] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(123), 1,
      sym__identifier,
    ACTIONS(963), 1,
      sym__natural_number,
    ACTIONS(1066), 1,
      anon_sym__,
    STATE(313), 1,
      aux_sym__friendly_number,
    STATE(317), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [17183] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1068), 1,
      anon_sym_DASH_GT,
    ACTIONS(1070), 1,
      anon_sym_BQUOTE,
    ACTIONS(1072), 1,
      sym__identifier,
    STATE(318), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_function_definition_repeat1,
    STATE(365), 1,
      sym_identifier,
    STATE(405), 1,
      sym_parameter,
  [17211] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1076), 1,
      sym_keyword_from,
    STATE(319), 1,
      sym_comment,
    ACTIONS(1074), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17231] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(320), 1,
      sym_comment,
    STATE(321), 1,
      aux_sym_window_definitions_repeat1,
    STATE(353), 1,
      sym__window_definition,
    STATE(441), 1,
      sym_window_definitions,
    ACTIONS(1078), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17255] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1080), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym_comment,
    STATE(326), 1,
      aux_sym_window_definitions_repeat1,
    STATE(353), 1,
      sym__window_definition,
    ACTIONS(1078), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17279] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1084), 1,
      sym_keyword_from,
    STATE(322), 1,
      sym_comment,
    ACTIONS(1082), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17299] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1088), 1,
      sym_keyword_from,
    STATE(323), 1,
      sym_comment,
    ACTIONS(1086), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [17319] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1092), 1,
      sym_keyword_from,
    STATE(324), 1,
      sym_comment,
    ACTIONS(1090), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17339] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1094), 1,
      anon_sym_DASH_GT,
    ACTIONS(1096), 1,
      anon_sym_BQUOTE,
    ACTIONS(1099), 1,
      sym__identifier,
    STATE(365), 1,
      sym_identifier,
    STATE(405), 1,
      sym_parameter,
    STATE(325), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [17365] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1105), 1,
      anon_sym_LPAREN,
    STATE(353), 1,
      sym__window_definition,
    STATE(326), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1102), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17387] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1109), 1,
      sym_keyword_from,
    STATE(327), 1,
      sym_comment,
    ACTIONS(1107), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17407] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(328), 1,
      sym_comment,
    ACTIONS(150), 2,
      anon_sym__,
      sym__identifier,
    ACTIONS(148), 4,
      anon_sym_DASH_GT,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [17427] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(329), 1,
      sym_comment,
    STATE(342), 1,
      aux_sym__friendly_number,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(949), 2,
      sym__natural_number,
      anon_sym__,
  [17448] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1111), 1,
      sym__natural_number,
    STATE(330), 1,
      sym_comment,
    ACTIONS(319), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [17467] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(191), 1,
      sym_identifier,
    STATE(207), 1,
      sym__table_reference,
    STATE(228), 1,
      sym__table_selection,
    STATE(331), 1,
      sym_comment,
  [17492] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1115), 1,
      sym_keyword_from,
    STATE(332), 1,
      sym_comment,
    ACTIONS(1113), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17511] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1119), 1,
      sym_keyword_from,
    STATE(333), 1,
      sym_comment,
    ACTIONS(1117), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17530] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1121), 1,
      anon_sym_DASH,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym_integer,
    STATE(334), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [17553] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1121), 1,
      anon_sym_DASH,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(64), 1,
      sym_integer,
    STATE(335), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [17576] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1123), 1,
      anon_sym_DOT,
    STATE(336), 1,
      sym_comment,
    ACTIONS(297), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [17595] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(713), 1,
      anon_sym_DOT_DOT,
    STATE(337), 1,
      sym_comment,
    ACTIONS(1125), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17614] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1129), 1,
      sym_keyword_from,
    STATE(338), 1,
      sym_comment,
    ACTIONS(1127), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17633] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(182), 1,
      sym__table_selection,
    STATE(191), 1,
      sym_identifier,
    STATE(207), 1,
      sym__table_reference,
    STATE(339), 1,
      sym_comment,
  [17658] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1070), 1,
      anon_sym_BQUOTE,
    ACTIONS(1072), 1,
      sym__identifier,
    STATE(318), 1,
      aux_sym_function_definition_repeat1,
    STATE(340), 1,
      sym_comment,
    STATE(365), 1,
      sym_identifier,
    STATE(405), 1,
      sym_parameter,
  [17683] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(341), 1,
      sym_comment,
    STATE(500), 1,
      sym_pipeline,
    STATE(154), 2,
      sym_from_text,
      sym_from,
  [17706] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(1131), 2,
      sym__natural_number,
      anon_sym__,
    STATE(342), 2,
      aux_sym__friendly_number,
      sym_comment,
  [17725] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1039), 1,
      anon_sym_DASH,
    STATE(145), 1,
      aux_sym__friendly_number,
    STATE(173), 1,
      sym_integer,
    STATE(343), 1,
      sym_comment,
    ACTIONS(600), 2,
      sym__natural_number,
      anon_sym__,
  [17748] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(342), 1,
      aux_sym__friendly_number,
    STATE(344), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(949), 2,
      sym__natural_number,
      anon_sym__,
  [17769] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(345), 1,
      sym_comment,
    ACTIONS(1134), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [17786] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(191), 1,
      sym_identifier,
    STATE(207), 1,
      sym__table_reference,
    STATE(235), 1,
      sym__table_selection,
    STATE(346), 1,
      sym_comment,
  [17811] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1121), 1,
      anon_sym_DASH,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(55), 1,
      sym_integer,
    STATE(347), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [17834] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(348), 1,
      sym_comment,
    ACTIONS(1136), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [17851] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1138), 1,
      anon_sym_DOT,
    STATE(317), 1,
      aux_sym__friendly_number,
    STATE(349), 1,
      sym_comment,
    ACTIONS(963), 2,
      sym__natural_number,
      anon_sym__,
  [17871] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1138), 1,
      anon_sym_DOT,
    STATE(344), 1,
      aux_sym__friendly_number,
    STATE(350), 1,
      sym_comment,
    ACTIONS(949), 2,
      sym__natural_number,
      anon_sym__,
  [17891] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(351), 1,
      sym_comment,
    ACTIONS(422), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [17907] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(198), 1,
      sym__table_reference,
    STATE(200), 1,
      sym_identifier,
    STATE(352), 1,
      sym_comment,
  [17929] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(353), 1,
      sym_comment,
    ACTIONS(1140), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17945] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(354), 1,
      sym_comment,
    ACTIONS(148), 4,
      anon_sym_COMMA,
      sym__natural_number,
      anon_sym__,
      anon_sym_DOT,
  [17961] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(355), 1,
      sym_comment,
    ACTIONS(211), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17977] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(356), 1,
      sym_comment,
    ACTIONS(297), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [17993] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(357), 1,
      sym_comment,
    ACTIONS(410), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [18009] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(358), 1,
      sym_comment,
    ACTIONS(291), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [18025] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(359), 1,
      sym_comment,
    ACTIONS(1142), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [18041] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1144), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(360), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [18061] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(361), 1,
      sym_comment,
    ACTIONS(1125), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [18077] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1146), 1,
      anon_sym_DOT,
    STATE(124), 1,
      aux_sym__friendly_number,
    STATE(362), 1,
      sym_comment,
    ACTIONS(75), 2,
      sym__natural_number,
      anon_sym__,
  [18097] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1148), 1,
      anon_sym_DOT,
    STATE(271), 1,
      aux_sym__friendly_number,
    STATE(363), 1,
      sym_comment,
    ACTIONS(335), 2,
      sym__natural_number,
      anon_sym__,
  [18117] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(364), 1,
      sym_comment,
    ACTIONS(215), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18133] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1150), 1,
      anon_sym_COLON,
    STATE(365), 1,
      sym_comment,
    ACTIONS(1152), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18151] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1154), 1,
      anon_sym_DOT,
    STATE(153), 1,
      aux_sym__friendly_number,
    STATE(366), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym__natural_number,
      anon_sym__,
  [18171] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1156), 1,
      aux_sym__date_token1,
    ACTIONS(1158), 1,
      aux_sym__time_token1,
    STATE(58), 1,
      sym__date,
    STATE(98), 1,
      sym__time,
    STATE(367), 1,
      sym_comment,
  [18193] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(368), 1,
      sym_comment,
    ACTIONS(319), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [18209] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1160), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_RBRACK,
    STATE(369), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [18226] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1168), 1,
      anon_sym_RBRACK,
    STATE(370), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [18243] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1070), 1,
      anon_sym_BQUOTE,
    ACTIONS(1072), 1,
      sym__identifier,
    STATE(340), 1,
      sym_identifier,
    STATE(371), 1,
      sym_comment,
  [18262] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_RBRACK,
    STATE(372), 1,
      sym_comment,
    STATE(402), 1,
      aux_sym_derives_repeat1,
  [18281] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(373), 1,
      sym_comment,
    STATE(458), 1,
      sym_identifier,
  [18300] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(1174), 1,
      sym__identifier,
    STATE(100), 1,
      sym_identifier,
    STATE(374), 1,
      sym_comment,
  [18319] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(176), 1,
      sym_identifier,
    STATE(375), 1,
      sym_comment,
  [18338] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1178), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    STATE(376), 1,
      sym_comment,
    STATE(387), 1,
      aux_sym__inner_triple_quotes,
  [18357] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      sym_comment,
    STATE(388), 1,
      aux_sym_case_repeat2,
  [18376] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    ACTIONS(1184), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      sym_comment,
    STATE(394), 1,
      aux_sym_conditions_repeat1,
  [18395] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1186), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(379), 1,
      sym_comment,
    STATE(387), 1,
      aux_sym__inner_triple_quotes,
  [18414] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1188), 1,
      sym_keyword_format,
    ACTIONS(1190), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(221), 1,
      sym__triple_quote_string,
    STATE(380), 1,
      sym_comment,
  [18433] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1192), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(381), 1,
      sym_comment,
    STATE(387), 1,
      aux_sym__inner_triple_quotes,
  [18452] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(382), 1,
      sym_comment,
    ACTIONS(1194), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18467] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    ACTIONS(1199), 1,
      anon_sym_RBRACK,
    STATE(383), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [18484] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1043), 1,
      anon_sym_RBRACK,
    ACTIONS(1201), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_sorts_repeat1,
    STATE(384), 1,
      sym_comment,
  [18503] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      sym_comment,
    STATE(389), 1,
      aux_sym_group_repeat1,
  [18522] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      sym_comment,
    STATE(398), 1,
      aux_sym_aggregate_repeat1,
  [18541] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1207), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1210), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(387), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [18558] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    ACTIONS(1212), 1,
      anon_sym_COMMA,
    STATE(388), 2,
      sym_comment,
      aux_sym_case_repeat2,
  [18575] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    ACTIONS(1215), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      aux_sym_group_repeat1,
    STATE(389), 1,
      sym_comment,
  [18594] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(390), 1,
      sym_comment,
    ACTIONS(287), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18609] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(391), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [18626] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1217), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      anon_sym_RBRACK,
    STATE(384), 1,
      aux_sym_sorts_repeat1,
    STATE(392), 1,
      sym_comment,
  [18645] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    ACTIONS(1215), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      sym_comment,
    STATE(397), 1,
      aux_sym_group_repeat1,
  [18664] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(927), 1,
      anon_sym_RBRACK,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    STATE(394), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [18681] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RBRACK,
    STATE(395), 1,
      sym_comment,
    STATE(403), 1,
      aux_sym_group_repeat1,
  [18700] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1230), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_derives_repeat1,
    STATE(396), 1,
      sym_comment,
  [18719] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    ACTIONS(1232), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      aux_sym_group_repeat1,
    STATE(397), 1,
      sym_comment,
  [18738] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(829), 1,
      anon_sym_RBRACK,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    STATE(398), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [18755] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(144), 1,
      aux_sym__friendly_number,
    STATE(399), 1,
      sym_comment,
    ACTIONS(600), 2,
      sym__natural_number,
      anon_sym__,
  [18772] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1237), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_from_text,
    STATE(400), 1,
      sym_comment,
  [18791] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(401), 1,
      sym_comment,
    ACTIONS(1239), 3,
      anon_sym_BQUOTE,
      sym__identifier,
      aux_sym__date_token2,
  [18806] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    ACTIONS(1241), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_derives_repeat1,
    STATE(402), 1,
      sym_comment,
  [18825] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      aux_sym_group_repeat1,
    STATE(403), 1,
      sym_comment,
  [18844] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      anon_sym_RBRACK,
    STATE(386), 1,
      aux_sym_aggregate_repeat1,
    STATE(404), 1,
      sym_comment,
  [18863] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(405), 1,
      sym_comment,
    ACTIONS(1245), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18878] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(406), 1,
      sym_comment,
    ACTIONS(1163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18892] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    STATE(381), 1,
      aux_sym__inner_triple_quotes,
    STATE(407), 1,
      sym_comment,
  [18908] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1247), 1,
      aux_sym__time_token1,
    STATE(33), 1,
      sym__time,
    STATE(408), 1,
      sym_comment,
  [18924] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    STATE(376), 1,
      aux_sym__inner_triple_quotes,
    STATE(409), 1,
      sym_comment,
  [18940] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(410), 1,
      sym_comment,
    ACTIONS(1168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18954] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1249), 1,
      aux_sym__date_token1,
    STATE(163), 1,
      sym__date,
    STATE(411), 1,
      sym_comment,
  [18970] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1041), 1,
      anon_sym_AT,
    STATE(173), 1,
      sym_date,
    STATE(412), 1,
      sym_comment,
  [18986] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    STATE(379), 1,
      aux_sym__inner_triple_quotes,
    STATE(413), 1,
      sym_comment,
  [19002] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1190), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(244), 1,
      sym__triple_quote_string,
    STATE(414), 1,
      sym_comment,
  [19018] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(415), 1,
      sym_comment,
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19032] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1251), 1,
      sym_keyword_derive,
    STATE(416), 1,
      sym_comment,
    STATE(519), 1,
      sym_derives,
  [19048] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(417), 1,
      sym_comment,
    ACTIONS(1199), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [19062] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    STATE(418), 1,
      sym_comment,
    ACTIONS(1253), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [19076] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(419), 1,
      sym_comment,
    ACTIONS(1255), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [19090] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(420), 1,
      sym_comment,
    ACTIONS(1257), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [19104] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1259), 1,
      sym_keyword_version,
    ACTIONS(1261), 1,
      sym_keyword_target,
    STATE(421), 1,
      sym_comment,
  [19120] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(945), 1,
      anon_sym_DQUOTE,
    STATE(319), 1,
      sym__double_quote_string,
    STATE(422), 1,
      sym_comment,
  [19136] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(885), 1,
      anon_sym_RBRACK,
    STATE(423), 1,
      sym_comment,
  [19149] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1263), 1,
      sym__natural_number,
    STATE(424), 1,
      sym_comment,
  [19162] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1265), 1,
      anon_sym_LPAREN,
    STATE(425), 1,
      sym_comment,
  [19175] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1267), 1,
      aux_sym__date_token2,
    STATE(426), 1,
      sym_comment,
  [19188] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1269), 1,
      anon_sym_DOT,
    STATE(427), 1,
      sym_comment,
  [19201] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1271), 1,
      aux_sym__date_token2,
    STATE(428), 1,
      sym_comment,
  [19214] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1273), 1,
      sym__natural_number,
    STATE(429), 1,
      sym_comment,
  [19227] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1275), 1,
      anon_sym_LBRACK,
    STATE(430), 1,
      sym_comment,
  [19240] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1277), 1,
      aux_sym__double_quote_string_token1,
    STATE(431), 1,
      sym_comment,
  [19253] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1279), 1,
      aux_sym__double_quote_string_token1,
    STATE(432), 1,
      sym_comment,
  [19266] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1281), 1,
      aux_sym__single_quote_string_token1,
    STATE(433), 1,
      sym_comment,
  [19279] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1283), 1,
      aux_sym__double_quote_string_token1,
    STATE(434), 1,
      sym_comment,
  [19292] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1285), 1,
      anon_sym_LPAREN,
    STATE(435), 1,
      sym_comment,
  [19305] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1287), 1,
      anon_sym_RBRACK,
    STATE(436), 1,
      sym_comment,
  [19318] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(437), 1,
      sym_comment,
  [19331] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1289), 1,
      aux_sym__date_token2,
    STATE(438), 1,
      sym_comment,
  [19344] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1291), 1,
      anon_sym_BQUOTE,
    STATE(439), 1,
      sym_comment,
  [19357] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(743), 1,
      anon_sym_RBRACK,
    STATE(440), 1,
      sym_comment,
  [19370] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1293), 1,
      anon_sym_LPAREN,
    STATE(441), 1,
      sym_comment,
  [19383] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1295), 1,
      anon_sym_COLON,
    STATE(442), 1,
      sym_comment,
  [19396] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1297), 1,
      anon_sym_DASH,
    STATE(443), 1,
      sym_comment,
  [19409] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1299), 1,
      anon_sym_LPAREN,
    STATE(444), 1,
      sym_comment,
  [19422] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1301), 1,
      anon_sym_LPAREN,
    STATE(445), 1,
      sym_comment,
  [19435] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1303), 1,
      anon_sym_LPAREN,
    STATE(446), 1,
      sym_comment,
  [19448] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1305), 1,
      anon_sym_LBRACK,
    STATE(447), 1,
      sym_comment,
  [19461] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1226), 1,
      anon_sym_RBRACK,
    STATE(448), 1,
      sym_comment,
  [19474] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1307), 1,
      anon_sym_COLON,
    STATE(449), 1,
      sym_comment,
  [19487] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_COLON,
    STATE(450), 1,
      sym_comment,
  [19500] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1311), 1,
      anon_sym_COLON,
    STATE(451), 1,
      sym_comment,
  [19513] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(452), 1,
      sym_comment,
  [19526] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1313), 1,
      aux_sym__date_token2,
    STATE(453), 1,
      sym_comment,
  [19539] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1315), 1,
      anon_sym_DOT_DOT,
    STATE(454), 1,
      sym_comment,
  [19552] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    STATE(455), 1,
      sym_comment,
  [19565] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1219), 1,
      anon_sym_RBRACK,
    STATE(456), 1,
      sym_comment,
  [19578] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1319), 1,
      anon_sym_COLON,
    STATE(457), 1,
      sym_comment,
  [19591] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1321), 1,
      anon_sym_EQ,
    STATE(458), 1,
      sym_comment,
  [19604] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1323), 1,
      anon_sym_DASH,
    STATE(459), 1,
      sym_comment,
  [19617] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1325), 1,
      sym__identifier_dot,
    STATE(460), 1,
      sym_comment,
  [19630] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1327), 1,
      anon_sym_DASH,
    STATE(461), 1,
      sym_comment,
  [19643] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1329), 1,
      anon_sym_BQUOTE,
    STATE(462), 1,
      sym_comment,
  [19656] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(463), 1,
      sym_comment,
  [19669] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1331), 1,
      sym__natural_number,
    STATE(464), 1,
      sym_comment,
  [19682] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1111), 1,
      sym__natural_number,
    STATE(465), 1,
      sym_comment,
  [19695] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1333), 1,
      anon_sym_DQUOTE,
    STATE(466), 1,
      sym_comment,
  [19708] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1335), 1,
      anon_sym_SQUOTE,
    STATE(467), 1,
      sym_comment,
  [19721] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1337), 1,
      anon_sym_LBRACK,
    STATE(468), 1,
      sym_comment,
  [19734] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1339), 1,
      aux_sym__date_token2,
    STATE(469), 1,
      sym_comment,
  [19747] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym_comment,
  [19760] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1343), 1,
      anon_sym_BQUOTE,
    STATE(471), 1,
      sym_comment,
  [19773] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1345), 1,
      anon_sym_COMMA,
    STATE(472), 1,
      sym_comment,
  [19786] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1347), 1,
      sym__natural_number,
    STATE(473), 1,
      sym_comment,
  [19799] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1349), 1,
      aux_sym_comment_token1,
    STATE(474), 1,
      sym_comment,
  [19812] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1351), 1,
      anon_sym_DQUOTE,
    STATE(475), 1,
      sym_comment,
  [19825] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1353), 1,
      anon_sym_SQUOTE,
    STATE(476), 1,
      sym_comment,
  [19838] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    STATE(477), 1,
      sym_comment,
  [19851] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(323), 1,
      sym__natural_number,
    STATE(478), 1,
      sym_comment,
  [19864] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1357), 1,
      anon_sym_BQUOTE,
    STATE(479), 1,
      sym_comment,
  [19877] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1359), 1,
      anon_sym_LPAREN,
    STATE(480), 1,
      sym_comment,
  [19890] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1361), 1,
      sym__natural_number,
    STATE(481), 1,
      sym_comment,
  [19903] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1363), 1,
      sym__natural_number,
    STATE(482), 1,
      sym_comment,
  [19916] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1365), 1,
      anon_sym_DQUOTE,
    STATE(483), 1,
      sym_comment,
  [19929] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1367), 1,
      anon_sym_SQUOTE,
    STATE(484), 1,
      sym_comment,
  [19942] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1369), 1,
      anon_sym_BQUOTE,
    STATE(485), 1,
      sym_comment,
  [19955] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
    STATE(486), 1,
      sym_comment,
  [19968] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1373), 1,
      sym__natural_number,
    STATE(487), 1,
      sym_comment,
  [19981] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1375), 1,
      sym__natural_number,
    STATE(488), 1,
      sym_comment,
  [19994] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1377), 1,
      anon_sym_DQUOTE,
    STATE(489), 1,
      sym_comment,
  [20007] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1379), 1,
      anon_sym_SQUOTE,
    STATE(490), 1,
      sym_comment,
  [20020] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1381), 1,
      anon_sym_BQUOTE,
    STATE(491), 1,
      sym_comment,
  [20033] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1383), 1,
      anon_sym_DQUOTE,
    STATE(492), 1,
      sym_comment,
  [20046] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1385), 1,
      anon_sym_DQUOTE,
    STATE(493), 1,
      sym_comment,
  [20059] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1387), 1,
      anon_sym_BQUOTE,
    STATE(494), 1,
      sym_comment,
  [20072] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1389), 1,
      anon_sym_BQUOTE,
    STATE(495), 1,
      sym_comment,
  [20085] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1391), 1,
      anon_sym_BQUOTE,
    STATE(496), 1,
      sym_comment,
  [20098] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1393), 1,
      sym__identifier_dot,
    STATE(497), 1,
      sym_comment,
  [20111] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1395), 1,
      aux_sym__double_quote_string_token1,
    STATE(498), 1,
      sym_comment,
  [20124] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1397), 1,
      aux_sym__single_quote_string_token1,
    STATE(499), 1,
      sym_comment,
  [20137] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
    STATE(500), 1,
      sym_comment,
  [20150] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1401), 1,
      anon_sym_DASH,
    STATE(501), 1,
      sym_comment,
  [20163] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1403), 1,
      sym__identifier_dot,
    STATE(502), 1,
      sym_comment,
  [20176] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1405), 1,
      aux_sym__double_quote_string_token1,
    STATE(503), 1,
      sym_comment,
  [20189] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1407), 1,
      aux_sym__single_quote_string_token1,
    STATE(504), 1,
      sym_comment,
  [20202] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1409), 1,
      anon_sym_SQUOTE,
    STATE(505), 1,
      sym_comment,
  [20215] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1411), 1,
      sym__identifier_dot,
    STATE(506), 1,
      sym_comment,
  [20228] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1413), 1,
      aux_sym__double_quote_string_token1,
    STATE(507), 1,
      sym_comment,
  [20241] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1415), 1,
      aux_sym__single_quote_string_token1,
    STATE(508), 1,
      sym_comment,
  [20254] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1417), 1,
      sym__identifier_dot,
    STATE(509), 1,
      sym_comment,
  [20267] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1419), 1,
      aux_sym__double_quote_string_token1,
    STATE(510), 1,
      sym_comment,
  [20280] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1421), 1,
      aux_sym__single_quote_string_token1,
    STATE(511), 1,
      sym_comment,
  [20293] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1423), 1,
      sym__identifier_dot,
    STATE(512), 1,
      sym_comment,
  [20306] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_POUND,
    ACTIONS(1425), 1,
      aux_sym__double_quote_string_token1,
    STATE(513), 1,
      sym_comment,
  [20319] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1427), 1,
      sym__identifier_dot,
    STATE(514), 1,
      sym_comment,
  [20332] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1429), 1,
      sym__identifier_dot,
    STATE(515), 1,
      sym_comment,
  [20345] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1431), 1,
      sym__identifier_dot,
    STATE(516), 1,
      sym_comment,
  [20358] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1433), 1,
      ts_builtin_sym_end,
    STATE(517), 1,
      sym_comment,
  [20371] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1435), 1,
      anon_sym_DQUOTE,
    STATE(518), 1,
      sym_comment,
  [20384] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1437), 1,
      anon_sym_RPAREN,
    STATE(519), 1,
      sym_comment,
  [20397] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1439), 1,
      anon_sym_DQUOTE,
    STATE(520), 1,
      sym_comment,
  [20410] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1441), 1,
      aux_sym__date_token2,
    STATE(521), 1,
      sym_comment,
  [20423] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1172), 1,
      anon_sym_RBRACK,
    STATE(522), 1,
      sym_comment,
  [20436] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1443), 1,
      aux_sym__date_token2,
    STATE(523), 1,
      sym_comment,
  [20449] = 1,
    ACTIONS(1445), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 131,
  [SMALL_STATE(4)] = 259,
  [SMALL_STATE(5)] = 387,
  [SMALL_STATE(6)] = 485,
  [SMALL_STATE(7)] = 610,
  [SMALL_STATE(8)] = 732,
  [SMALL_STATE(9)] = 854,
  [SMALL_STATE(10)] = 976,
  [SMALL_STATE(11)] = 1070,
  [SMALL_STATE(12)] = 1190,
  [SMALL_STATE(13)] = 1251,
  [SMALL_STATE(14)] = 1312,
  [SMALL_STATE(15)] = 1371,
  [SMALL_STATE(16)] = 1490,
  [SMALL_STATE(17)] = 1602,
  [SMALL_STATE(18)] = 1714,
  [SMALL_STATE(19)] = 1826,
  [SMALL_STATE(20)] = 1882,
  [SMALL_STATE(21)] = 1994,
  [SMALL_STATE(22)] = 2108,
  [SMALL_STATE(23)] = 2220,
  [SMALL_STATE(24)] = 2332,
  [SMALL_STATE(25)] = 2444,
  [SMALL_STATE(26)] = 2500,
  [SMALL_STATE(27)] = 2556,
  [SMALL_STATE(28)] = 2672,
  [SMALL_STATE(29)] = 2781,
  [SMALL_STATE(30)] = 2890,
  [SMALL_STATE(31)] = 2999,
  [SMALL_STATE(32)] = 3108,
  [SMALL_STATE(33)] = 3219,
  [SMALL_STATE(34)] = 3282,
  [SMALL_STATE(35)] = 3395,
  [SMALL_STATE(36)] = 3504,
  [SMALL_STATE(37)] = 3563,
  [SMALL_STATE(38)] = 3622,
  [SMALL_STATE(39)] = 3731,
  [SMALL_STATE(40)] = 3844,
  [SMALL_STATE(41)] = 3953,
  [SMALL_STATE(42)] = 4062,
  [SMALL_STATE(43)] = 4171,
  [SMALL_STATE(44)] = 4280,
  [SMALL_STATE(45)] = 4389,
  [SMALL_STATE(46)] = 4498,
  [SMALL_STATE(47)] = 4554,
  [SMALL_STATE(48)] = 4658,
  [SMALL_STATE(49)] = 4762,
  [SMALL_STATE(50)] = 4872,
  [SMALL_STATE(51)] = 4978,
  [SMALL_STATE(52)] = 5084,
  [SMALL_STATE(53)] = 5190,
  [SMALL_STATE(54)] = 5243,
  [SMALL_STATE(55)] = 5298,
  [SMALL_STATE(56)] = 5351,
  [SMALL_STATE(57)] = 5406,
  [SMALL_STATE(58)] = 5459,
  [SMALL_STATE(59)] = 5514,
  [SMALL_STATE(60)] = 5569,
  [SMALL_STATE(61)] = 5674,
  [SMALL_STATE(62)] = 5777,
  [SMALL_STATE(63)] = 5830,
  [SMALL_STATE(64)] = 5885,
  [SMALL_STATE(65)] = 5938,
  [SMALL_STATE(66)] = 5991,
  [SMALL_STATE(67)] = 6076,
  [SMALL_STATE(68)] = 6181,
  [SMALL_STATE(69)] = 6234,
  [SMALL_STATE(70)] = 6286,
  [SMALL_STATE(71)] = 6388,
  [SMALL_STATE(72)] = 6488,
  [SMALL_STATE(73)] = 6540,
  [SMALL_STATE(74)] = 6642,
  [SMALL_STATE(75)] = 6742,
  [SMALL_STATE(76)] = 6826,
  [SMALL_STATE(77)] = 6878,
  [SMALL_STATE(78)] = 6934,
  [SMALL_STATE(79)] = 6988,
  [SMALL_STATE(80)] = 7090,
  [SMALL_STATE(81)] = 7150,
  [SMALL_STATE(82)] = 7250,
  [SMALL_STATE(83)] = 7350,
  [SMALL_STATE(84)] = 7402,
  [SMALL_STATE(85)] = 7454,
  [SMALL_STATE(86)] = 7506,
  [SMALL_STATE(87)] = 7558,
  [SMALL_STATE(88)] = 7658,
  [SMALL_STATE(89)] = 7760,
  [SMALL_STATE(90)] = 7812,
  [SMALL_STATE(91)] = 7912,
  [SMALL_STATE(92)] = 8012,
  [SMALL_STATE(93)] = 8064,
  [SMALL_STATE(94)] = 8116,
  [SMALL_STATE(95)] = 8168,
  [SMALL_STATE(96)] = 8268,
  [SMALL_STATE(97)] = 8320,
  [SMALL_STATE(98)] = 8372,
  [SMALL_STATE(99)] = 8424,
  [SMALL_STATE(100)] = 8486,
  [SMALL_STATE(101)] = 8538,
  [SMALL_STATE(102)] = 8590,
  [SMALL_STATE(103)] = 8642,
  [SMALL_STATE(104)] = 8694,
  [SMALL_STATE(105)] = 8796,
  [SMALL_STATE(106)] = 8848,
  [SMALL_STATE(107)] = 8900,
  [SMALL_STATE(108)] = 9000,
  [SMALL_STATE(109)] = 9102,
  [SMALL_STATE(110)] = 9166,
  [SMALL_STATE(111)] = 9266,
  [SMALL_STATE(112)] = 9318,
  [SMALL_STATE(113)] = 9404,
  [SMALL_STATE(114)] = 9468,
  [SMALL_STATE(115)] = 9532,
  [SMALL_STATE(116)] = 9612,
  [SMALL_STATE(117)] = 9694,
  [SMALL_STATE(118)] = 9755,
  [SMALL_STATE(119)] = 9818,
  [SMALL_STATE(120)] = 9887,
  [SMALL_STATE(121)] = 9934,
  [SMALL_STATE(122)] = 9977,
  [SMALL_STATE(123)] = 10020,
  [SMALL_STATE(124)] = 10065,
  [SMALL_STATE(125)] = 10110,
  [SMALL_STATE(126)] = 10179,
  [SMALL_STATE(127)] = 10222,
  [SMALL_STATE(128)] = 10267,
  [SMALL_STATE(129)] = 10310,
  [SMALL_STATE(130)] = 10367,
  [SMALL_STATE(131)] = 10409,
  [SMALL_STATE(132)] = 10451,
  [SMALL_STATE(133)] = 10493,
  [SMALL_STATE(134)] = 10535,
  [SMALL_STATE(135)] = 10577,
  [SMALL_STATE(136)] = 10619,
  [SMALL_STATE(137)] = 10685,
  [SMALL_STATE(138)] = 10749,
  [SMALL_STATE(139)] = 10791,
  [SMALL_STATE(140)] = 10833,
  [SMALL_STATE(141)] = 10875,
  [SMALL_STATE(142)] = 10917,
  [SMALL_STATE(143)] = 10959,
  [SMALL_STATE(144)] = 11002,
  [SMALL_STATE(145)] = 11047,
  [SMALL_STATE(146)] = 11092,
  [SMALL_STATE(147)] = 11132,
  [SMALL_STATE(148)] = 11203,
  [SMALL_STATE(149)] = 11244,
  [SMALL_STATE(150)] = 11313,
  [SMALL_STATE(151)] = 11352,
  [SMALL_STATE(152)] = 11391,
  [SMALL_STATE(153)] = 11432,
  [SMALL_STATE(154)] = 11473,
  [SMALL_STATE(155)] = 11536,
  [SMALL_STATE(156)] = 11579,
  [SMALL_STATE(157)] = 11617,
  [SMALL_STATE(158)] = 11655,
  [SMALL_STATE(159)] = 11715,
  [SMALL_STATE(160)] = 11753,
  [SMALL_STATE(161)] = 11791,
  [SMALL_STATE(162)] = 11829,
  [SMALL_STATE(163)] = 11867,
  [SMALL_STATE(164)] = 11905,
  [SMALL_STATE(165)] = 11943,
  [SMALL_STATE(166)] = 11981,
  [SMALL_STATE(167)] = 12019,
  [SMALL_STATE(168)] = 12079,
  [SMALL_STATE(169)] = 12137,
  [SMALL_STATE(170)] = 12175,
  [SMALL_STATE(171)] = 12213,
  [SMALL_STATE(172)] = 12251,
  [SMALL_STATE(173)] = 12288,
  [SMALL_STATE(174)] = 12325,
  [SMALL_STATE(175)] = 12362,
  [SMALL_STATE(176)] = 12397,
  [SMALL_STATE(177)] = 12432,
  [SMALL_STATE(178)] = 12467,
  [SMALL_STATE(179)] = 12502,
  [SMALL_STATE(180)] = 12537,
  [SMALL_STATE(181)] = 12572,
  [SMALL_STATE(182)] = 12613,
  [SMALL_STATE(183)] = 12654,
  [SMALL_STATE(184)] = 12689,
  [SMALL_STATE(185)] = 12724,
  [SMALL_STATE(186)] = 12759,
  [SMALL_STATE(187)] = 12794,
  [SMALL_STATE(188)] = 12829,
  [SMALL_STATE(189)] = 12877,
  [SMALL_STATE(190)] = 12915,
  [SMALL_STATE(191)] = 12951,
  [SMALL_STATE(192)] = 12987,
  [SMALL_STATE(193)] = 13020,
  [SMALL_STATE(194)] = 13055,
  [SMALL_STATE(195)] = 13088,
  [SMALL_STATE(196)] = 13121,
  [SMALL_STATE(197)] = 13154,
  [SMALL_STATE(198)] = 13187,
  [SMALL_STATE(199)] = 13220,
  [SMALL_STATE(200)] = 13259,
  [SMALL_STATE(201)] = 13292,
  [SMALL_STATE(202)] = 13325,
  [SMALL_STATE(203)] = 13358,
  [SMALL_STATE(204)] = 13391,
  [SMALL_STATE(205)] = 13424,
  [SMALL_STATE(206)] = 13457,
  [SMALL_STATE(207)] = 13490,
  [SMALL_STATE(208)] = 13523,
  [SMALL_STATE(209)] = 13556,
  [SMALL_STATE(210)] = 13589,
  [SMALL_STATE(211)] = 13621,
  [SMALL_STATE(212)] = 13653,
  [SMALL_STATE(213)] = 13685,
  [SMALL_STATE(214)] = 13717,
  [SMALL_STATE(215)] = 13749,
  [SMALL_STATE(216)] = 13781,
  [SMALL_STATE(217)] = 13813,
  [SMALL_STATE(218)] = 13845,
  [SMALL_STATE(219)] = 13877,
  [SMALL_STATE(220)] = 13909,
  [SMALL_STATE(221)] = 13941,
  [SMALL_STATE(222)] = 13973,
  [SMALL_STATE(223)] = 14005,
  [SMALL_STATE(224)] = 14039,
  [SMALL_STATE(225)] = 14071,
  [SMALL_STATE(226)] = 14103,
  [SMALL_STATE(227)] = 14135,
  [SMALL_STATE(228)] = 14167,
  [SMALL_STATE(229)] = 14199,
  [SMALL_STATE(230)] = 14231,
  [SMALL_STATE(231)] = 14263,
  [SMALL_STATE(232)] = 14295,
  [SMALL_STATE(233)] = 14327,
  [SMALL_STATE(234)] = 14359,
  [SMALL_STATE(235)] = 14391,
  [SMALL_STATE(236)] = 14423,
  [SMALL_STATE(237)] = 14455,
  [SMALL_STATE(238)] = 14487,
  [SMALL_STATE(239)] = 14525,
  [SMALL_STATE(240)] = 14557,
  [SMALL_STATE(241)] = 14589,
  [SMALL_STATE(242)] = 14621,
  [SMALL_STATE(243)] = 14653,
  [SMALL_STATE(244)] = 14685,
  [SMALL_STATE(245)] = 14717,
  [SMALL_STATE(246)] = 14749,
  [SMALL_STATE(247)] = 14781,
  [SMALL_STATE(248)] = 14813,
  [SMALL_STATE(249)] = 14845,
  [SMALL_STATE(250)] = 14878,
  [SMALL_STATE(251)] = 14909,
  [SMALL_STATE(252)] = 14952,
  [SMALL_STATE(253)] = 14995,
  [SMALL_STATE(254)] = 15037,
  [SMALL_STATE(255)] = 15085,
  [SMALL_STATE(256)] = 15125,
  [SMALL_STATE(257)] = 15173,
  [SMALL_STATE(258)] = 15221,
  [SMALL_STATE(259)] = 15251,
  [SMALL_STATE(260)] = 15299,
  [SMALL_STATE(261)] = 15347,
  [SMALL_STATE(262)] = 15377,
  [SMALL_STATE(263)] = 15415,
  [SMALL_STATE(264)] = 15445,
  [SMALL_STATE(265)] = 15493,
  [SMALL_STATE(266)] = 15525,
  [SMALL_STATE(267)] = 15557,
  [SMALL_STATE(268)] = 15599,
  [SMALL_STATE(269)] = 15641,
  [SMALL_STATE(270)] = 15673,
  [SMALL_STATE(271)] = 15707,
  [SMALL_STATE(272)] = 15739,
  [SMALL_STATE(273)] = 15771,
  [SMALL_STATE(274)] = 15803,
  [SMALL_STATE(275)] = 15835,
  [SMALL_STATE(276)] = 15867,
  [SMALL_STATE(277)] = 15896,
  [SMALL_STATE(278)] = 15925,
  [SMALL_STATE(279)] = 15964,
  [SMALL_STATE(280)] = 15993,
  [SMALL_STATE(281)] = 16022,
  [SMALL_STATE(282)] = 16051,
  [SMALL_STATE(283)] = 16080,
  [SMALL_STATE(284)] = 16119,
  [SMALL_STATE(285)] = 16148,
  [SMALL_STATE(286)] = 16177,
  [SMALL_STATE(287)] = 16206,
  [SMALL_STATE(288)] = 16235,
  [SMALL_STATE(289)] = 16264,
  [SMALL_STATE(290)] = 16310,
  [SMALL_STATE(291)] = 16336,
  [SMALL_STATE(292)] = 16373,
  [SMALL_STATE(293)] = 16408,
  [SMALL_STATE(294)] = 16445,
  [SMALL_STATE(295)] = 16479,
  [SMALL_STATE(296)] = 16511,
  [SMALL_STATE(297)] = 16545,
  [SMALL_STATE(298)] = 16579,
  [SMALL_STATE(299)] = 16613,
  [SMALL_STATE(300)] = 16647,
  [SMALL_STATE(301)] = 16678,
  [SMALL_STATE(302)] = 16713,
  [SMALL_STATE(303)] = 16744,
  [SMALL_STATE(304)] = 16775,
  [SMALL_STATE(305)] = 16806,
  [SMALL_STATE(306)] = 16837,
  [SMALL_STATE(307)] = 16869,
  [SMALL_STATE(308)] = 16901,
  [SMALL_STATE(309)] = 16933,
  [SMALL_STATE(310)] = 16965,
  [SMALL_STATE(311)] = 16991,
  [SMALL_STATE(312)] = 17023,
  [SMALL_STATE(313)] = 17044,
  [SMALL_STATE(314)] = 17069,
  [SMALL_STATE(315)] = 17100,
  [SMALL_STATE(316)] = 17127,
  [SMALL_STATE(317)] = 17156,
  [SMALL_STATE(318)] = 17183,
  [SMALL_STATE(319)] = 17211,
  [SMALL_STATE(320)] = 17231,
  [SMALL_STATE(321)] = 17255,
  [SMALL_STATE(322)] = 17279,
  [SMALL_STATE(323)] = 17299,
  [SMALL_STATE(324)] = 17319,
  [SMALL_STATE(325)] = 17339,
  [SMALL_STATE(326)] = 17365,
  [SMALL_STATE(327)] = 17387,
  [SMALL_STATE(328)] = 17407,
  [SMALL_STATE(329)] = 17427,
  [SMALL_STATE(330)] = 17448,
  [SMALL_STATE(331)] = 17467,
  [SMALL_STATE(332)] = 17492,
  [SMALL_STATE(333)] = 17511,
  [SMALL_STATE(334)] = 17530,
  [SMALL_STATE(335)] = 17553,
  [SMALL_STATE(336)] = 17576,
  [SMALL_STATE(337)] = 17595,
  [SMALL_STATE(338)] = 17614,
  [SMALL_STATE(339)] = 17633,
  [SMALL_STATE(340)] = 17658,
  [SMALL_STATE(341)] = 17683,
  [SMALL_STATE(342)] = 17706,
  [SMALL_STATE(343)] = 17725,
  [SMALL_STATE(344)] = 17748,
  [SMALL_STATE(345)] = 17769,
  [SMALL_STATE(346)] = 17786,
  [SMALL_STATE(347)] = 17811,
  [SMALL_STATE(348)] = 17834,
  [SMALL_STATE(349)] = 17851,
  [SMALL_STATE(350)] = 17871,
  [SMALL_STATE(351)] = 17891,
  [SMALL_STATE(352)] = 17907,
  [SMALL_STATE(353)] = 17929,
  [SMALL_STATE(354)] = 17945,
  [SMALL_STATE(355)] = 17961,
  [SMALL_STATE(356)] = 17977,
  [SMALL_STATE(357)] = 17993,
  [SMALL_STATE(358)] = 18009,
  [SMALL_STATE(359)] = 18025,
  [SMALL_STATE(360)] = 18041,
  [SMALL_STATE(361)] = 18061,
  [SMALL_STATE(362)] = 18077,
  [SMALL_STATE(363)] = 18097,
  [SMALL_STATE(364)] = 18117,
  [SMALL_STATE(365)] = 18133,
  [SMALL_STATE(366)] = 18151,
  [SMALL_STATE(367)] = 18171,
  [SMALL_STATE(368)] = 18193,
  [SMALL_STATE(369)] = 18209,
  [SMALL_STATE(370)] = 18226,
  [SMALL_STATE(371)] = 18243,
  [SMALL_STATE(372)] = 18262,
  [SMALL_STATE(373)] = 18281,
  [SMALL_STATE(374)] = 18300,
  [SMALL_STATE(375)] = 18319,
  [SMALL_STATE(376)] = 18338,
  [SMALL_STATE(377)] = 18357,
  [SMALL_STATE(378)] = 18376,
  [SMALL_STATE(379)] = 18395,
  [SMALL_STATE(380)] = 18414,
  [SMALL_STATE(381)] = 18433,
  [SMALL_STATE(382)] = 18452,
  [SMALL_STATE(383)] = 18467,
  [SMALL_STATE(384)] = 18484,
  [SMALL_STATE(385)] = 18503,
  [SMALL_STATE(386)] = 18522,
  [SMALL_STATE(387)] = 18541,
  [SMALL_STATE(388)] = 18558,
  [SMALL_STATE(389)] = 18575,
  [SMALL_STATE(390)] = 18594,
  [SMALL_STATE(391)] = 18609,
  [SMALL_STATE(392)] = 18626,
  [SMALL_STATE(393)] = 18645,
  [SMALL_STATE(394)] = 18664,
  [SMALL_STATE(395)] = 18681,
  [SMALL_STATE(396)] = 18700,
  [SMALL_STATE(397)] = 18719,
  [SMALL_STATE(398)] = 18738,
  [SMALL_STATE(399)] = 18755,
  [SMALL_STATE(400)] = 18772,
  [SMALL_STATE(401)] = 18791,
  [SMALL_STATE(402)] = 18806,
  [SMALL_STATE(403)] = 18825,
  [SMALL_STATE(404)] = 18844,
  [SMALL_STATE(405)] = 18863,
  [SMALL_STATE(406)] = 18878,
  [SMALL_STATE(407)] = 18892,
  [SMALL_STATE(408)] = 18908,
  [SMALL_STATE(409)] = 18924,
  [SMALL_STATE(410)] = 18940,
  [SMALL_STATE(411)] = 18954,
  [SMALL_STATE(412)] = 18970,
  [SMALL_STATE(413)] = 18986,
  [SMALL_STATE(414)] = 19002,
  [SMALL_STATE(415)] = 19018,
  [SMALL_STATE(416)] = 19032,
  [SMALL_STATE(417)] = 19048,
  [SMALL_STATE(418)] = 19062,
  [SMALL_STATE(419)] = 19076,
  [SMALL_STATE(420)] = 19090,
  [SMALL_STATE(421)] = 19104,
  [SMALL_STATE(422)] = 19120,
  [SMALL_STATE(423)] = 19136,
  [SMALL_STATE(424)] = 19149,
  [SMALL_STATE(425)] = 19162,
  [SMALL_STATE(426)] = 19175,
  [SMALL_STATE(427)] = 19188,
  [SMALL_STATE(428)] = 19201,
  [SMALL_STATE(429)] = 19214,
  [SMALL_STATE(430)] = 19227,
  [SMALL_STATE(431)] = 19240,
  [SMALL_STATE(432)] = 19253,
  [SMALL_STATE(433)] = 19266,
  [SMALL_STATE(434)] = 19279,
  [SMALL_STATE(435)] = 19292,
  [SMALL_STATE(436)] = 19305,
  [SMALL_STATE(437)] = 19318,
  [SMALL_STATE(438)] = 19331,
  [SMALL_STATE(439)] = 19344,
  [SMALL_STATE(440)] = 19357,
  [SMALL_STATE(441)] = 19370,
  [SMALL_STATE(442)] = 19383,
  [SMALL_STATE(443)] = 19396,
  [SMALL_STATE(444)] = 19409,
  [SMALL_STATE(445)] = 19422,
  [SMALL_STATE(446)] = 19435,
  [SMALL_STATE(447)] = 19448,
  [SMALL_STATE(448)] = 19461,
  [SMALL_STATE(449)] = 19474,
  [SMALL_STATE(450)] = 19487,
  [SMALL_STATE(451)] = 19500,
  [SMALL_STATE(452)] = 19513,
  [SMALL_STATE(453)] = 19526,
  [SMALL_STATE(454)] = 19539,
  [SMALL_STATE(455)] = 19552,
  [SMALL_STATE(456)] = 19565,
  [SMALL_STATE(457)] = 19578,
  [SMALL_STATE(458)] = 19591,
  [SMALL_STATE(459)] = 19604,
  [SMALL_STATE(460)] = 19617,
  [SMALL_STATE(461)] = 19630,
  [SMALL_STATE(462)] = 19643,
  [SMALL_STATE(463)] = 19656,
  [SMALL_STATE(464)] = 19669,
  [SMALL_STATE(465)] = 19682,
  [SMALL_STATE(466)] = 19695,
  [SMALL_STATE(467)] = 19708,
  [SMALL_STATE(468)] = 19721,
  [SMALL_STATE(469)] = 19734,
  [SMALL_STATE(470)] = 19747,
  [SMALL_STATE(471)] = 19760,
  [SMALL_STATE(472)] = 19773,
  [SMALL_STATE(473)] = 19786,
  [SMALL_STATE(474)] = 19799,
  [SMALL_STATE(475)] = 19812,
  [SMALL_STATE(476)] = 19825,
  [SMALL_STATE(477)] = 19838,
  [SMALL_STATE(478)] = 19851,
  [SMALL_STATE(479)] = 19864,
  [SMALL_STATE(480)] = 19877,
  [SMALL_STATE(481)] = 19890,
  [SMALL_STATE(482)] = 19903,
  [SMALL_STATE(483)] = 19916,
  [SMALL_STATE(484)] = 19929,
  [SMALL_STATE(485)] = 19942,
  [SMALL_STATE(486)] = 19955,
  [SMALL_STATE(487)] = 19968,
  [SMALL_STATE(488)] = 19981,
  [SMALL_STATE(489)] = 19994,
  [SMALL_STATE(490)] = 20007,
  [SMALL_STATE(491)] = 20020,
  [SMALL_STATE(492)] = 20033,
  [SMALL_STATE(493)] = 20046,
  [SMALL_STATE(494)] = 20059,
  [SMALL_STATE(495)] = 20072,
  [SMALL_STATE(496)] = 20085,
  [SMALL_STATE(497)] = 20098,
  [SMALL_STATE(498)] = 20111,
  [SMALL_STATE(499)] = 20124,
  [SMALL_STATE(500)] = 20137,
  [SMALL_STATE(501)] = 20150,
  [SMALL_STATE(502)] = 20163,
  [SMALL_STATE(503)] = 20176,
  [SMALL_STATE(504)] = 20189,
  [SMALL_STATE(505)] = 20202,
  [SMALL_STATE(506)] = 20215,
  [SMALL_STATE(507)] = 20228,
  [SMALL_STATE(508)] = 20241,
  [SMALL_STATE(509)] = 20254,
  [SMALL_STATE(510)] = 20267,
  [SMALL_STATE(511)] = 20280,
  [SMALL_STATE(512)] = 20293,
  [SMALL_STATE(513)] = 20306,
  [SMALL_STATE(514)] = 20319,
  [SMALL_STATE(515)] = 20332,
  [SMALL_STATE(516)] = 20345,
  [SMALL_STATE(517)] = 20358,
  [SMALL_STATE(518)] = 20371,
  [SMALL_STATE(519)] = 20384,
  [SMALL_STATE(520)] = 20397,
  [SMALL_STATE(521)] = 20410,
  [SMALL_STATE(522)] = 20423,
  [SMALL_STATE(523)] = 20436,
  [SMALL_STATE(524)] = 20449,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 7),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 7),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(19),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(72),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(88),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(360),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(434),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(433),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(432),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(413),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(431),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(409),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(19),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(19),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(429),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(502),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(68),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(367),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 6),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(134),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(362),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(507),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(504),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(132),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(132),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(473),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(512),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(121),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 19),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 19),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(161),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(366),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(513),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(511),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(169),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(169),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(487),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(516),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(151),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 8),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 8),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(132),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(132),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 11),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 11),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(61),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(35),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(30),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(447),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(311),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(306),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(314),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(16),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(346),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(444),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(146),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(276),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(363),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(510),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(508),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(280),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(280),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(481),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(514),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(263),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(169),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(169),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(45),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(23),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 23),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 23),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 6),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 6),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 2),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 1),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2, .production_id = 9),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2, .production_id = 9),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 14),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 14),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 4),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 4),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 1),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 31),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 31),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 30),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 30),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 5),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 5),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 7),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 7),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 8),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 3),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 7),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2, .production_id = 1),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2, .production_id = 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 9),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 9),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 4),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 6),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 6),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 6),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_append, 2, .production_id = 1),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append, 2, .production_id = 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4, .production_id = 14),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4, .production_id = 14),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 4),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 4),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 4),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 4),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__self_join, 4),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 5),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_keywords, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_keywords, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(280),
  [976] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(280),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [991] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(331),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(371),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(373),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(380),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1009] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(447),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(311),
  [1015] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(306),
  [1018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(320),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1049] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(421),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1056] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(328),
  [1059] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(328),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1096] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(497),
  [1099] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(355),
  [1102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(442),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(354),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(316),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(52),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [1196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(51),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(418),
  [1210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(49),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(104),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(6),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1433] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
