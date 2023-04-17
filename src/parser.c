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
  sym_keyword_in = 39,
  sym_keyword_rolling = 40,
  sym_keyword_rows = 41,
  sym_keyword_expanding = 42,
  sym_keyword_null = 43,
  sym_keyword_loop = 44,
  sym_keyword_func = 45,
  sym_keyword_let = 46,
  sym_keyword_prql = 47,
  sym_keyword_version = 48,
  sym_keyword_target = 49,
  anon_sym_COLON = 50,
  anon_sym_sql_DOTansi = 51,
  anon_sym_sql_DOTbigquery = 52,
  anon_sym_sql_DOTclickhouse = 53,
  anon_sym_sql_DOTgeneric = 54,
  anon_sym_sql_DOThive = 55,
  anon_sym_sql_DOTmssql = 56,
  anon_sym_sql_DOTmysql = 57,
  anon_sym_sql_DOTpostgres = 58,
  anon_sym_sql_DOTsqlite = 59,
  anon_sym_sql_DOTsnowflake = 60,
  anon_sym_sql_DOTduckdb = 61,
  sym_keyword_from_text = 62,
  sym_keyword_format = 63,
  sym_keyword_csv = 64,
  sym_keyword_json = 65,
  anon_sym_EQ = 66,
  anon_sym_LPAREN = 67,
  anon_sym_RPAREN = 68,
  anon_sym_DASH_GT = 69,
  anon_sym_LBRACK = 70,
  anon_sym_COMMA = 71,
  anon_sym_RBRACK = 72,
  anon_sym_EQ_GT = 73,
  anon_sym_DASH = 74,
  anon_sym_PLUS = 75,
  anon_sym_EQ_EQ = 76,
  anon_sym_DQUOTE = 77,
  aux_sym__double_quote_string_token1 = 78,
  anon_sym_SQUOTE = 79,
  aux_sym__single_quote_string_token1 = 80,
  aux_sym__inner_triple_quotes_token1 = 81,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 82,
  anon_sym_f_DQUOTE = 83,
  anon_sym_f_DQUOTE_DQUOTE_DQUOTE = 84,
  anon_sym_s_DQUOTE = 85,
  anon_sym_s_DQUOTE_DQUOTE_DQUOTE = 86,
  sym__natural_number = 87,
  anon_sym__ = 88,
  anon_sym_DOT = 89,
  anon_sym_BQUOTE = 90,
  sym__identifier = 91,
  sym__identifier_dot = 92,
  anon_sym_DOT_DOT = 93,
  anon_sym_STAR = 94,
  anon_sym_SLASH = 95,
  anon_sym_BANG_EQ = 96,
  anon_sym_GT = 97,
  anon_sym_GT_EQ = 98,
  anon_sym_LT = 99,
  anon_sym_LT_EQ = 100,
  anon_sym_QMARK_QMARK = 101,
  anon_sym_AMP_AMP = 102,
  anon_sym_PIPE_PIPE = 103,
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
  [7] = 6,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 14,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 27,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
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
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
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
  [79] = 9,
  [80] = 45,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 47,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 45,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 47,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 71,
  [115] = 68,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 24,
  [120] = 45,
  [121] = 121,
  [122] = 122,
  [123] = 36,
  [124] = 38,
  [125] = 125,
  [126] = 47,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 97,
  [131] = 96,
  [132] = 132,
  [133] = 110,
  [134] = 74,
  [135] = 91,
  [136] = 78,
  [137] = 48,
  [138] = 138,
  [139] = 104,
  [140] = 45,
  [141] = 36,
  [142] = 47,
  [143] = 118,
  [144] = 38,
  [145] = 24,
  [146] = 48,
  [147] = 36,
  [148] = 125,
  [149] = 45,
  [150] = 24,
  [151] = 71,
  [152] = 38,
  [153] = 121,
  [154] = 68,
  [155] = 47,
  [156] = 156,
  [157] = 104,
  [158] = 48,
  [159] = 91,
  [160] = 160,
  [161] = 132,
  [162] = 129,
  [163] = 127,
  [164] = 128,
  [165] = 75,
  [166] = 138,
  [167] = 97,
  [168] = 74,
  [169] = 96,
  [170] = 110,
  [171] = 78,
  [172] = 45,
  [173] = 173,
  [174] = 47,
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
  [188] = 188,
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
  [226] = 118,
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
  [248] = 36,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 125,
  [254] = 252,
  [255] = 255,
  [256] = 38,
  [257] = 45,
  [258] = 258,
  [259] = 47,
  [260] = 24,
  [261] = 252,
  [262] = 128,
  [263] = 263,
  [264] = 48,
  [265] = 265,
  [266] = 132,
  [267] = 97,
  [268] = 138,
  [269] = 78,
  [270] = 96,
  [271] = 110,
  [272] = 74,
  [273] = 91,
  [274] = 104,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 277,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
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
  [312] = 36,
  [313] = 313,
  [314] = 24,
  [315] = 38,
  [316] = 78,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 48,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 36,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 77,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 38,
  [345] = 74,
  [346] = 346,
  [347] = 24,
  [348] = 348,
  [349] = 45,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 351,
  [356] = 351,
  [357] = 351,
  [358] = 358,
  [359] = 97,
  [360] = 96,
  [361] = 351,
  [362] = 48,
  [363] = 110,
  [364] = 47,
  [365] = 104,
  [366] = 366,
  [367] = 351,
  [368] = 91,
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
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 78,
  [401] = 381,
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
  [461] = 461,
  [462] = 440,
  [463] = 463,
  [464] = 426,
  [465] = 436,
  [466] = 437,
  [467] = 438,
  [468] = 468,
  [469] = 469,
  [470] = 440,
  [471] = 471,
  [472] = 426,
  [473] = 436,
  [474] = 437,
  [475] = 438,
  [476] = 476,
  [477] = 477,
  [478] = 440,
  [479] = 469,
  [480] = 426,
  [481] = 436,
  [482] = 437,
  [483] = 438,
  [484] = 440,
  [485] = 485,
  [486] = 426,
  [487] = 436,
  [488] = 437,
  [489] = 438,
  [490] = 440,
  [491] = 491,
  [492] = 437,
  [493] = 440,
  [494] = 440,
  [495] = 440,
  [496] = 468,
  [497] = 434,
  [498] = 432,
  [499] = 499,
  [500] = 500,
  [501] = 468,
  [502] = 434,
  [503] = 432,
  [504] = 500,
  [505] = 468,
  [506] = 434,
  [507] = 432,
  [508] = 468,
  [509] = 434,
  [510] = 432,
  [511] = 468,
  [512] = 434,
  [513] = 468,
  [514] = 468,
  [515] = 468,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 456,
  [521] = 521,
  [522] = 522,
  [523] = 519,
  [524] = 524,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(491);
      if (lookahead == '!') ADVANCE(892);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '/') ADVANCE(868);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == '<') ADVANCE(872);
      if (lookahead == '=') ADVANCE(594);
      if (lookahead == '>') ADVANCE(870);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '@') ADVANCE(880);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'C') ADVANCE(30);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'G') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'J') ADVANCE(155);
      if (lookahead == 'L') ADVANCE(31);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(37);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(882);
      if (lookahead == 'V') ADVANCE(76);
      if (lookahead == 'W') ADVANCE(99);
      if (lookahead == 'Z') ADVANCE(884);
      if (lookahead == '[') ADVANCE(598);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(624);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead == 'j') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == 'v') ADVANCE(273);
      if (lookahead == 'w') ADVANCE(305);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(485)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '/') ADVANCE(868);
      if (lookahead == '<') ADVANCE(872);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(870);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'f') ADVANCE(751);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(465)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '/') ADVANCE(868);
      if (lookahead == '<') ADVANCE(872);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(870);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(671);
      if (lookahead == 'D') ADVANCE(663);
      if (lookahead == 'F') ADVANCE(632);
      if (lookahead == 'G') ADVANCE(716);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'L') ADVANCE(702);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(661);
      if (lookahead == 'S') ADVANCE(664);
      if (lookahead == 'T') ADVANCE(637);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'd') ADVANCE(781);
      if (lookahead == 'f') ADVANCE(750);
      if (lookahead == 'g') ADVANCE(834);
      if (lookahead == 'i') ADVANCE(816);
      if (lookahead == 'j') ADVANCE(823);
      if (lookahead == 'l') ADVANCE(820);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 'r') ADVANCE(779);
      if (lookahead == 's') ADVANCE(782);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(463)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(891);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '@') ADVANCE(880);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == '[') ADVANCE(598);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'f') ADVANCE(628);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(464)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'f') ADVANCE(751);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(467)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '@') ADVANCE(880);
      if (lookahead == 'A') ADVANCE(741);
      if (lookahead == 'C') ADVANCE(699);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'M') ADVANCE(634);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(636);
      if (lookahead == 'S') ADVANCE(722);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(858);
      if (lookahead == 'c') ADVANCE(817);
      if (lookahead == 'f') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 'r') ADVANCE(754);
      if (lookahead == 's') ADVANCE(629);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(461)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '@') ADVANCE(880);
      if (lookahead == 'A') ADVANCE(741);
      if (lookahead == 'C') ADVANCE(638);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'M') ADVANCE(634);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'S') ADVANCE(722);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(858);
      if (lookahead == 'c') ADVANCE(756);
      if (lookahead == 'f') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 's') ADVANCE(629);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(462)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '@') ADVANCE(880);
      if (lookahead == 'A') ADVANCE(741);
      if (lookahead == 'C') ADVANCE(704);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'M') ADVANCE(634);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'S') ADVANCE(722);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(858);
      if (lookahead == 'c') ADVANCE(822);
      if (lookahead == 'f') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 's') ADVANCE(629);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(477)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(671);
      if (lookahead == 'D') ADVANCE(663);
      if (lookahead == 'F') ADVANCE(632);
      if (lookahead == 'G') ADVANCE(716);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'L') ADVANCE(702);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(661);
      if (lookahead == 'S') ADVANCE(664);
      if (lookahead == 'T') ADVANCE(637);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'd') ADVANCE(781);
      if (lookahead == 'f') ADVANCE(750);
      if (lookahead == 'g') ADVANCE(834);
      if (lookahead == 'i') ADVANCE(816);
      if (lookahead == 'j') ADVANCE(823);
      if (lookahead == 'l') ADVANCE(820);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 'r') ADVANCE(779);
      if (lookahead == 's') ADVANCE(782);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(466)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'N') ADVANCE(203);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == '_') ADVANCE(624);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(468)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == 'q') ADVANCE(328);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(620);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(622);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(618);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '[') ADVANCE(598);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(469)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(472)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(470)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == 'S') ADVANCE(679);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 's') ADVANCE(797);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(471)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(879);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(474)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(879);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(476)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 22:
      if (lookahead == '&') ADVANCE(875);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(226);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(866);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(869);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(605);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(605);
      if (lookahead == '>') ADVANCE(601);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(597);
      END_STATE();
    case 29:
      if (lookahead == '?') ADVANCE(874);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(179);
      if (lookahead == 'O') ADVANCE(205);
      if (lookahead == 'S') ADVANCE(208);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(89);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(149);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(158);
      if (lookahead == 'I') ADVANCE(131);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(109);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'F') ADVANCE(187);
      if (lookahead == 'T') ADVANCE(570);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(192);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(199);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(144);
      END_STATE();
    case 43:
      if (lookahead == 'B') ADVANCE(82);
      END_STATE();
    case 44:
      if (lookahead == 'C') ADVANCE(568);
      END_STATE();
    case 45:
      if (lookahead == 'C') ADVANCE(193);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(196);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(197);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(544);
      END_STATE();
    case 49:
      if (lookahead == 'D') ADVANCE(550);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(519);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(106);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(148);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(104);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == 'I') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(121);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(517);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(553);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(506);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(513);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(515);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(498);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(521);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(525);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(502);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(149);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(214);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(209);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(52);
      if (lookahead == 'O') ADVANCE(173);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead == 'U') ADVANCE(124);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == 'O') ADVANCE(173);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(171);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead == 'G') ADVANCE(537);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(175);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(194);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(185);
      if (lookahead == 'O') ADVANCE(149);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(143);
      END_STATE();
    case 86:
      if (lookahead == 'F') ADVANCE(187);
      if (lookahead == 'T') ADVANCE(570);
      END_STATE();
    case 87:
      if (lookahead == 'G') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'P') ADVANCE(161);
      if (lookahead == 'V') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'G') ADVANCE(93);
      if (lookahead == 'P') ADVANCE(161);
      END_STATE();
    case 89:
      if (lookahead == 'G') ADVANCE(543);
      if (lookahead == 'S') ADVANCE(186);
      END_STATE();
    case 90:
      if (lookahead == 'G') ADVANCE(97);
      END_STATE();
    case 91:
      if (lookahead == 'G') ADVANCE(561);
      END_STATE();
    case 92:
      if (lookahead == 'G') ADVANCE(563);
      END_STATE();
    case 93:
      if (lookahead == 'G') ADVANCE(174);
      END_STATE();
    case 94:
      if (lookahead == 'G') ADVANCE(81);
      END_STATE();
    case 95:
      if (lookahead == 'G') ADVANCE(66);
      END_STATE();
    case 96:
      if (lookahead == 'G') ADVANCE(41);
      END_STATE();
    case 97:
      if (lookahead == 'H') ADVANCE(191);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(210);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(137);
      END_STATE();
    case 100:
      if (lookahead == 'I') ADVANCE(133);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(139);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(118);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(112);
      if (lookahead == 'R') ADVANCE(151);
      if (lookahead == 'U') ADVANCE(130);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(142);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(183);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(153);
      END_STATE();
    case 108:
      if (lookahead == 'K') ADVANCE(547);
      END_STATE();
    case 109:
      if (lookahead == 'K') ADVANCE(61);
      END_STATE();
    case 110:
      if (lookahead == 'K') ADVANCE(61);
      if (lookahead == 'R') ADVANCE(94);
      END_STATE();
    case 111:
      if (lookahead == 'L') ADVANCE(551);
      END_STATE();
    case 112:
      if (lookahead == 'L') ADVANCE(201);
      END_STATE();
    case 113:
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'R') ADVANCE(181);
      END_STATE();
    case 114:
      if (lookahead == 'L') ADVANCE(558);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(564);
      END_STATE();
    case 116:
      if (lookahead == 'L') ADVANCE(572);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(70);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(115);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(123);
      if (lookahead == 'U') ADVANCE(140);
      if (lookahead == 'W') ADVANCE(178);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(123);
      if (lookahead == 'W') ADVANCE(177);
      END_STATE();
    case 122:
      if (lookahead == 'L') ADVANCE(182);
      END_STATE();
    case 123:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 124:
      if (lookahead == 'M') ADVANCE(539);
      END_STATE();
    case 125:
      if (lookahead == 'M') ADVANCE(492);
      END_STATE();
    case 126:
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 127:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 128:
      if (lookahead == 'M') ADVANCE(156);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(559);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(527);
      END_STATE();
    case 132:
      if (lookahead == 'N') ADVANCE(108);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(509);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(591);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(573);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(145);
      END_STATE();
    case 137:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 138:
      if (lookahead == 'N') ADVANCE(206);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 140:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 141:
      if (lookahead == 'N') ADVANCE(189);
      END_STATE();
    case 142:
      if (lookahead == 'N') ADVANCE(92);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(200);
      END_STATE();
    case 148:
      if (lookahead == 'O') ADVANCE(212);
      END_STATE();
    case 149:
      if (lookahead == 'O') ADVANCE(159);
      END_STATE();
    case 150:
      if (lookahead == 'O') ADVANCE(204);
      END_STATE();
    case 151:
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 152:
      if (lookahead == 'O') ADVANCE(134);
      END_STATE();
    case 153:
      if (lookahead == 'O') ADVANCE(135);
      END_STATE();
    case 154:
      if (lookahead == 'O') ADVANCE(100);
      END_STATE();
    case 155:
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(152);
      END_STATE();
    case 156:
      if (lookahead == 'O') ADVANCE(211);
      END_STATE();
    case 157:
      if (lookahead == 'P') ADVANCE(42);
      END_STATE();
    case 158:
      if (lookahead == 'P') ADVANCE(552);
      if (lookahead == 'X') ADVANCE(529);
      END_STATE();
    case 159:
      if (lookahead == 'P') ADVANCE(566);
      END_STATE();
    case 160:
      if (lookahead == 'P') ADVANCE(500);
      END_STATE();
    case 161:
      if (lookahead == 'P') ADVANCE(85);
      END_STATE();
    case 162:
      if (lookahead == 'Q') ADVANCE(116);
      END_STATE();
    case 163:
      if (lookahead == 'R') ADVANCE(162);
      END_STATE();
    case 164:
      if (lookahead == 'R') ADVANCE(555);
      END_STATE();
    case 165:
      if (lookahead == 'R') ADVANCE(496);
      END_STATE();
    case 166:
      if (lookahead == 'R') ADVANCE(549);
      END_STATE();
    case 167:
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 168:
      if (lookahead == 'R') ADVANCE(150);
      END_STATE();
    case 169:
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(207);
      END_STATE();
    case 171:
      if (lookahead == 'R') ADVANCE(180);
      END_STATE();
    case 172:
      if (lookahead == 'R') ADVANCE(127);
      END_STATE();
    case 173:
      if (lookahead == 'R') ADVANCE(188);
      END_STATE();
    case 174:
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 175:
      if (lookahead == 'R') ADVANCE(184);
      END_STATE();
    case 176:
      if (lookahead == 'S') ADVANCE(208);
      END_STATE();
    case 177:
      if (lookahead == 'S') ADVANCE(562);
      END_STATE();
    case 178:
      if (lookahead == 'S') ADVANCE(562);
      if (lookahead == '_') ADVANCE(138);
      END_STATE();
    case 179:
      if (lookahead == 'S') ADVANCE(59);
      END_STATE();
    case 180:
      if (lookahead == 'S') ADVANCE(107);
      END_STATE();
    case 181:
      if (lookahead == 'S') ADVANCE(190);
      END_STATE();
    case 182:
      if (lookahead == 'S') ADVANCE(63);
      END_STATE();
    case 183:
      if (lookahead == 'S') ADVANCE(202);
      END_STATE();
    case 184:
      if (lookahead == 'S') ADVANCE(84);
      END_STATE();
    case 185:
      if (lookahead == 'T') ADVANCE(570);
      END_STATE();
    case 186:
      if (lookahead == 'T') ADVANCE(546);
      END_STATE();
    case 187:
      if (lookahead == 'T') ADVANCE(556);
      END_STATE();
    case 188:
      if (lookahead == 'T') ADVANCE(504);
      END_STATE();
    case 189:
      if (lookahead == 'T') ADVANCE(533);
      END_STATE();
    case 190:
      if (lookahead == 'T') ADVANCE(545);
      END_STATE();
    case 191:
      if (lookahead == 'T') ADVANCE(557);
      END_STATE();
    case 192:
      if (lookahead == 'T') ADVANCE(589);
      END_STATE();
    case 193:
      if (lookahead == 'T') ADVANCE(511);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(574);
      END_STATE();
    case 195:
      if (lookahead == 'T') ADVANCE(587);
      END_STATE();
    case 196:
      if (lookahead == 'T') ADVANCE(523);
      END_STATE();
    case 197:
      if (lookahead == 'T') ADVANCE(541);
      END_STATE();
    case 198:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 199:
      if (lookahead == 'T') ADVANCE(67);
      END_STATE();
    case 200:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 201:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 202:
      if (lookahead == 'T') ADVANCE(105);
      END_STATE();
    case 203:
      if (lookahead == 'U') ADVANCE(119);
      END_STATE();
    case 204:
      if (lookahead == 'U') ADVANCE(160);
      END_STATE();
    case 205:
      if (lookahead == 'U') ADVANCE(141);
      END_STATE();
    case 206:
      if (lookahead == 'U') ADVANCE(126);
      END_STATE();
    case 207:
      if (lookahead == 'U') ADVANCE(62);
      END_STATE();
    case 208:
      if (lookahead == 'V') ADVANCE(590);
      END_STATE();
    case 209:
      if (lookahead == 'V') ADVANCE(535);
      END_STATE();
    case 210:
      if (lookahead == 'V') ADVANCE(64);
      END_STATE();
    case 211:
      if (lookahead == 'V') ADVANCE(65);
      END_STATE();
    case 212:
      if (lookahead == 'W') ADVANCE(508);
      END_STATE();
    case 213:
      if (lookahead == 'X') ADVANCE(157);
      END_STATE();
    case 214:
      if (lookahead == 'X') ADVANCE(195);
      END_STATE();
    case 215:
      if (lookahead == '_') ADVANCE(359);
      if (lookahead == 's') ADVANCE(562);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(425);
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'g') ADVANCE(279);
      if (lookahead == 'h') ADVANCE(317);
      if (lookahead == 'm') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(381);
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 231:
      if (lookahead == 'b') ADVANCE(586);
      END_STATE();
    case 232:
      if (lookahead == 'b') ADVANCE(282);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(568);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(579);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(323);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(320);
      END_STATE();
    case 237:
      if (lookahead == 'c') ADVANCE(430);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 239:
      if (lookahead == 'c') ADVANCE(434);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(544);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(550);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(519);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(371);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(311);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == 'q') ADVANCE(328);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == 'g') ADVANCE(537);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 287:
      if (lookahead == 'f') ADVANCE(425);
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 288:
      if (lookahead == 'f') ADVANCE(335);
      END_STATE();
    case 289:
      if (lookahead == 'g') ADVANCE(296);
      if (lookahead == 'l') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(387);
      if (lookahead == 'v') ADVANCE(275);
      END_STATE();
    case 290:
      if (lookahead == 'g') ADVANCE(296);
      if (lookahead == 'p') ADVANCE(387);
      END_STATE();
    case 291:
      if (lookahead == 'g') ADVANCE(543);
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 292:
      if (lookahead == 'g') ADVANCE(301);
      END_STATE();
    case 293:
      if (lookahead == 'g') ADVANCE(561);
      END_STATE();
    case 294:
      if (lookahead == 'g') ADVANCE(563);
      END_STATE();
    case 295:
      if (lookahead == 'g') ADVANCE(388);
      END_STATE();
    case 296:
      if (lookahead == 'g') ADVANCE(404);
      END_STATE();
    case 297:
      if (lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 298:
      if (lookahead == 'g') ADVANCE(259);
      END_STATE();
    case 299:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 300:
      if (lookahead == 'g') ADVANCE(406);
      END_STATE();
    case 301:
      if (lookahead == 'h') ADVANCE(428);
      END_STATE();
    case 302:
      if (lookahead == 'h') ADVANCE(377);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(576);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 310:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 311:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 312:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 313:
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 314:
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(378);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(455);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 319:
      if (lookahead == 'k') ADVANCE(547);
      END_STATE();
    case 320:
      if (lookahead == 'k') ADVANCE(302);
      END_STATE();
    case 321:
      if (lookahead == 'k') ADVANCE(254);
      END_STATE();
    case 322:
      if (lookahead == 'k') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 323:
      if (lookahead == 'k') ADVANCE(243);
      END_STATE();
    case 324:
      if (lookahead == 'k') ADVANCE(263);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(551);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(564);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(581);
      END_STATE();
    case 333:
      if (lookahead == 'l') ADVANCE(582);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 336:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 337:
      if (lookahead == 'l') ADVANCE(329);
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 338:
      if (lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 340:
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(361);
      if (lookahead == 'w') ADVANCE(215);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 'w') ADVANCE(409);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 344:
      if (lookahead == 'm') ADVANCE(539);
      END_STATE();
    case 345:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 346:
      if (lookahead == 'm') ADVANCE(493);
      END_STATE();
    case 347:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 348:
      if (lookahead == 'm') ADVANCE(382);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(560);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(527);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(573);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 'q') ADVANCE(339);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 371:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 372:
      if (lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 373:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 374:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 375:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 376:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 377:
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 378:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 383:
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead == 'x') ADVANCE(529);
      END_STATE();
    case 384:
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 385:
      if (lookahead == 'p') ADVANCE(566);
      END_STATE();
    case 386:
      if (lookahead == 'p') ADVANCE(500);
      END_STATE();
    case 387:
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 388:
      if (lookahead == 'q') ADVANCE(450);
      END_STATE();
    case 389:
      if (lookahead == 'q') ADVANCE(331);
      END_STATE();
    case 390:
      if (lookahead == 'q') ADVANCE(332);
      END_STATE();
    case 391:
      if (lookahead == 'q') ADVANCE(333);
      END_STATE();
    case 392:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 393:
      if (lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 394:
      if (lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 395:
      if (lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 396:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 397:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 398:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 399:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 400:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 402:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 403:
      if (lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 404:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 405:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 408:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 409:
      if (lookahead == 's') ADVANCE(562);
      END_STATE();
    case 410:
      if (lookahead == 's') ADVANCE(583);
      END_STATE();
    case 411:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 412:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 413:
      if (lookahead == 's') ADVANCE(420);
      if (lookahead == 'y') ADVANCE(422);
      END_STATE();
    case 414:
      if (lookahead == 's') ADVANCE(427);
      END_STATE();
    case 415:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 416:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 417:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 418:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 419:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 420:
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 421:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(391);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(546);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(504);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(545);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(574);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(587);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 443:
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 445:
      if (lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 446:
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 447:
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 448:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 449:
      if (lookahead == 'u') ADVANCE(419);
      END_STATE();
    case 450:
      if (lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 451:
      if (lookahead == 'v') ADVANCE(590);
      END_STATE();
    case 452:
      if (lookahead == 'v') ADVANCE(535);
      END_STATE();
    case 453:
      if (lookahead == 'v') ADVANCE(257);
      END_STATE();
    case 454:
      if (lookahead == 'v') ADVANCE(258);
      END_STATE();
    case 455:
      if (lookahead == 'v') ADVANCE(260);
      END_STATE();
    case 456:
      if (lookahead == 'w') ADVANCE(508);
      END_STATE();
    case 457:
      if (lookahead == 'w') ADVANCE(288);
      END_STATE();
    case 458:
      if (lookahead == 'x') ADVANCE(384);
      END_STATE();
    case 459:
      if (lookahead == 'x') ADVANCE(432);
      END_STATE();
    case 460:
      if (lookahead == 'y') ADVANCE(577);
      END_STATE();
    case 461:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(461)
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '@') ADVANCE(880);
      if (lookahead == 'A') ADVANCE(741);
      if (lookahead == 'C') ADVANCE(699);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'M') ADVANCE(634);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(636);
      if (lookahead == 'S') ADVANCE(722);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(858);
      if (lookahead == 'c') ADVANCE(817);
      if (lookahead == 'f') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 'r') ADVANCE(754);
      if (lookahead == 's') ADVANCE(629);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 462:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(462)
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '@') ADVANCE(880);
      if (lookahead == 'A') ADVANCE(741);
      if (lookahead == 'C') ADVANCE(638);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'M') ADVANCE(634);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'S') ADVANCE(722);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(858);
      if (lookahead == 'c') ADVANCE(756);
      if (lookahead == 'f') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 's') ADVANCE(629);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 463:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(463)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '/') ADVANCE(868);
      if (lookahead == '<') ADVANCE(872);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(870);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(671);
      if (lookahead == 'D') ADVANCE(663);
      if (lookahead == 'F') ADVANCE(632);
      if (lookahead == 'G') ADVANCE(716);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'L') ADVANCE(702);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(661);
      if (lookahead == 'S') ADVANCE(664);
      if (lookahead == 'T') ADVANCE(637);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'd') ADVANCE(781);
      if (lookahead == 'f') ADVANCE(750);
      if (lookahead == 'g') ADVANCE(834);
      if (lookahead == 'i') ADVANCE(816);
      if (lookahead == 'j') ADVANCE(823);
      if (lookahead == 'l') ADVANCE(820);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 'r') ADVANCE(779);
      if (lookahead == 's') ADVANCE(782);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 464:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(464)
      if (lookahead == '!') ADVANCE(891);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '@') ADVANCE(880);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == '[') ADVANCE(598);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'f') ADVANCE(628);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 's') ADVANCE(630);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 465:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(465)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '/') ADVANCE(868);
      if (lookahead == '<') ADVANCE(872);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(870);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'f') ADVANCE(751);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 466:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(466)
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(671);
      if (lookahead == 'D') ADVANCE(663);
      if (lookahead == 'F') ADVANCE(632);
      if (lookahead == 'G') ADVANCE(716);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'L') ADVANCE(702);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(661);
      if (lookahead == 'S') ADVANCE(664);
      if (lookahead == 'T') ADVANCE(637);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'd') ADVANCE(781);
      if (lookahead == 'f') ADVANCE(750);
      if (lookahead == 'g') ADVANCE(834);
      if (lookahead == 'i') ADVANCE(816);
      if (lookahead == 'j') ADVANCE(823);
      if (lookahead == 'l') ADVANCE(820);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 'r') ADVANCE(779);
      if (lookahead == 's') ADVANCE(782);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 467:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(467)
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'f') ADVANCE(751);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 468:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(468)
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'N') ADVANCE(203);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == '_') ADVANCE(624);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      END_STATE();
    case 469:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(469)
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '[') ADVANCE(598);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 470:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(470)
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 471:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(471)
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == 'S') ADVANCE(679);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 's') ADVANCE(797);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(879);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 472:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(472)
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 473:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(616);
      if (lookahead == '"') ADVANCE(615);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead != 0) ADVANCE(614);
      END_STATE();
    case 474:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(474)
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(879);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 475:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(617);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead != 0) ADVANCE(614);
      END_STATE();
    case 476:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(476)
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 477:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(477)
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '@') ADVANCE(880);
      if (lookahead == 'A') ADVANCE(741);
      if (lookahead == 'C') ADVANCE(704);
      if (lookahead == 'F') ADVANCE(633);
      if (lookahead == 'M') ADVANCE(634);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'S') ADVANCE(722);
      if (lookahead == 'T') ADVANCE(712);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(858);
      if (lookahead == 'c') ADVANCE(822);
      if (lookahead == 'f') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 's') ADVANCE(629);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 478:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(881);
      END_STATE();
    case 479:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      END_STATE();
    case 480:
      if (eof) ADVANCE(491);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '/') ADVANCE(868);
      if (lookahead == '<') ADVANCE(872);
      if (lookahead == '=') ADVANCE(593);
      if (lookahead == '>') ADVANCE(870);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(671);
      if (lookahead == 'D') ADVANCE(663);
      if (lookahead == 'F') ADVANCE(631);
      if (lookahead == 'G') ADVANCE(716);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'L') ADVANCE(665);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(661);
      if (lookahead == 'S') ADVANCE(664);
      if (lookahead == 'T') ADVANCE(637);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'd') ADVANCE(781);
      if (lookahead == 'f') ADVANCE(749);
      if (lookahead == 'g') ADVANCE(834);
      if (lookahead == 'i') ADVANCE(816);
      if (lookahead == 'j') ADVANCE(823);
      if (lookahead == 'l') ADVANCE(783);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 'r') ADVANCE(779);
      if (lookahead == 's') ADVANCE(782);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(487)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 481:
      if (eof) ADVANCE(491);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '/') ADVANCE(868);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == '<') ADVANCE(872);
      if (lookahead == '=') ADVANCE(594);
      if (lookahead == '>') ADVANCE(870);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(103);
      if (lookahead == 'G') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'J') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(883);
      if (lookahead == 'Z') ADVANCE(884);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(624);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'j') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(488)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      END_STATE();
    case 482:
      if (eof) ADVANCE(491);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '/') ADVANCE(868);
      if (lookahead == '<') ADVANCE(872);
      if (lookahead == '=') ADVANCE(593);
      if (lookahead == '>') ADVANCE(870);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(103);
      if (lookahead == 'G') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'J') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'j') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '|') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(490)
      END_STATE();
    case 483:
      if (eof) ADVANCE(491);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(671);
      if (lookahead == 'D') ADVANCE(663);
      if (lookahead == 'F') ADVANCE(631);
      if (lookahead == 'G') ADVANCE(716);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'L') ADVANCE(665);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(661);
      if (lookahead == 'S') ADVANCE(664);
      if (lookahead == 'T') ADVANCE(637);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'd') ADVANCE(781);
      if (lookahead == 'f') ADVANCE(749);
      if (lookahead == 'g') ADVANCE(834);
      if (lookahead == 'i') ADVANCE(816);
      if (lookahead == 'j') ADVANCE(823);
      if (lookahead == 'l') ADVANCE(783);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 'r') ADVANCE(779);
      if (lookahead == 's') ADVANCE(782);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(489)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 484:
      if (eof) ADVANCE(491);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == '=') ADVANCE(592);
      if (lookahead == '@') ADVANCE(880);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == 'F') ADVANCE(102);
      if (lookahead == 'G') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'J') ADVANCE(155);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'P') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'V') ADVANCE(76);
      if (lookahead == 'W') ADVANCE(99);
      if (lookahead == '[') ADVANCE(598);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(624);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'j') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == 'v') ADVANCE(273);
      if (lookahead == 'w') ADVANCE(305);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(486)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      END_STATE();
    case 485:
      if (eof) ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(485)
      if (lookahead == '!') ADVANCE(892);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '/') ADVANCE(868);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == '<') ADVANCE(872);
      if (lookahead == '=') ADVANCE(594);
      if (lookahead == '>') ADVANCE(870);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '@') ADVANCE(880);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'C') ADVANCE(30);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'G') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'J') ADVANCE(155);
      if (lookahead == 'L') ADVANCE(31);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(37);
      if (lookahead == 'S') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(882);
      if (lookahead == 'V') ADVANCE(76);
      if (lookahead == 'W') ADVANCE(99);
      if (lookahead == 'Z') ADVANCE(884);
      if (lookahead == '[') ADVANCE(598);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(624);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(349);
      if (lookahead == 'j') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'm') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(443);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == 'v') ADVANCE(273);
      if (lookahead == 'w') ADVANCE(305);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      END_STATE();
    case 486:
      if (eof) ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(486)
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == '=') ADVANCE(592);
      if (lookahead == '@') ADVANCE(880);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(213);
      if (lookahead == 'F') ADVANCE(102);
      if (lookahead == 'G') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'J') ADVANCE(155);
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'P') ADVANCE(163);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'V') ADVANCE(76);
      if (lookahead == 'W') ADVANCE(99);
      if (lookahead == '[') ADVANCE(598);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(624);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'j') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == 's') ADVANCE(272);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == 'v') ADVANCE(273);
      if (lookahead == 'w') ADVANCE(305);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      END_STATE();
    case 487:
      if (eof) ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(487)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '/') ADVANCE(868);
      if (lookahead == '<') ADVANCE(872);
      if (lookahead == '=') ADVANCE(593);
      if (lookahead == '>') ADVANCE(870);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(671);
      if (lookahead == 'D') ADVANCE(663);
      if (lookahead == 'F') ADVANCE(631);
      if (lookahead == 'G') ADVANCE(716);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'L') ADVANCE(665);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(661);
      if (lookahead == 'S') ADVANCE(664);
      if (lookahead == 'T') ADVANCE(637);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'd') ADVANCE(781);
      if (lookahead == 'f') ADVANCE(749);
      if (lookahead == 'g') ADVANCE(834);
      if (lookahead == 'i') ADVANCE(816);
      if (lookahead == 'j') ADVANCE(823);
      if (lookahead == 'l') ADVANCE(783);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 'r') ADVANCE(779);
      if (lookahead == 's') ADVANCE(782);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 488:
      if (eof) ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(488)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(595);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(599);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == '/') ADVANCE(868);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == '<') ADVANCE(872);
      if (lookahead == '=') ADVANCE(594);
      if (lookahead == '>') ADVANCE(870);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(103);
      if (lookahead == 'G') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'J') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(883);
      if (lookahead == 'Z') ADVANCE(884);
      if (lookahead == ']') ADVANCE(600);
      if (lookahead == '_') ADVANCE(624);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'j') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '|') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      END_STATE();
    case 489:
      if (eof) ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(489)
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(610);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '.') ADVANCE(626);
      if (lookahead == ':') ADVANCE(575);
      if (lookahead == 'A') ADVANCE(671);
      if (lookahead == 'D') ADVANCE(663);
      if (lookahead == 'F') ADVANCE(631);
      if (lookahead == 'G') ADVANCE(716);
      if (lookahead == 'I') ADVANCE(698);
      if (lookahead == 'J') ADVANCE(705);
      if (lookahead == 'L') ADVANCE(665);
      if (lookahead == 'N') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(661);
      if (lookahead == 'S') ADVANCE(664);
      if (lookahead == 'T') ADVANCE(637);
      if (lookahead == '_') ADVANCE(625);
      if (lookahead == '`') ADVANCE(627);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == 'd') ADVANCE(781);
      if (lookahead == 'f') ADVANCE(749);
      if (lookahead == 'g') ADVANCE(834);
      if (lookahead == 'i') ADVANCE(816);
      if (lookahead == 'j') ADVANCE(823);
      if (lookahead == 'l') ADVANCE(783);
      if (lookahead == 'n') ADVANCE(854);
      if (lookahead == 'r') ADVANCE(779);
      if (lookahead == 's') ADVANCE(782);
      if (lookahead == 't') ADVANCE(755);
      if (lookahead == '|') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 490:
      if (eof) ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(490)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '*') ADVANCE(867);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == '-') ADVANCE(602);
      if (lookahead == '/') ADVANCE(868);
      if (lookahead == '<') ADVANCE(872);
      if (lookahead == '=') ADVANCE(593);
      if (lookahead == '>') ADVANCE(870);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(103);
      if (lookahead == 'G') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(147);
      if (lookahead == 'J') ADVANCE(154);
      if (lookahead == 'L') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'd') ADVANCE(268);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'j') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '|') ADVANCE(894);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(198);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(436);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_keyword_case);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_keyword_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_keyword_append);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_keyword_append);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_keyword_remove);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_keyword_remove);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_keyword_intersect);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_keyword_intersect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(51);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(245);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_keyword_lag);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_keyword_lead);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_keyword_first);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_keyword_last);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_keyword_rank);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_keyword_rank);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_keyword_row_number);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_keyword_round);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_keyword_all);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_keyword_map);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_keyword_loop);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_keyword_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_keyword_from_text);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_keyword_from_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_keyword_format);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_keyword_csv);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_keyword_json);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(605);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(605);
      if (lookahead == '>') ADVANCE(601);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(597);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(887);
      if (lookahead == '|') ADVANCE(896);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(609);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(608);
      if (lookahead == '#') ADVANCE(887);
      if (lookahead == '|') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '#') ADVANCE(888);
      if (lookahead == '|') ADVANCE(897);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(613);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(612);
      if (lookahead == '#') ADVANCE(888);
      if (lookahead == '|') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(613);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(616);
      if (lookahead == '"') ADVANCE(615);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead != 0) ADVANCE(614);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(617);
      if (lookahead == '#') ADVANCE(885);
      if (lookahead == '|') ADVANCE(893);
      if (lookahead != 0) ADVANCE(614);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(623);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(619);
      if (lookahead == 'a') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(621);
      if (lookahead == 't') ADVANCE(764);
      if (lookahead == 'u') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(682);
      if (lookahead == 'I') ADVANCE(686);
      if (lookahead == 'R') ADVANCE(701);
      if (lookahead == 'U') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(682);
      if (lookahead == 'I') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(745);
      if (lookahead == 'I') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'R') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(720);
      if (lookahead == 'O') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(711);
      if (lookahead == 'G') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(685);
      if (lookahead == 'O') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(726);
      if (lookahead == 'O') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(674);
      if (lookahead == 'P') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(646);
      if (lookahead == 'U') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(800);
      if (lookahead == 'i') ADVANCE(804);
      if (lookahead == 'r') ADVANCE(819);
      if (lookahead == 'u') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(800);
      if (lookahead == 'i') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(862);
      if (lookahead == 'i') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == 'r') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(838);
      if (lookahead == 'o') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(829);
      if (lookahead == 'g') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(803);
      if (lookahead == 'o') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(841);
      if (lookahead == 'o') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(792);
      if (lookahead == 'p') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(864);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__identifier_dot);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(871);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(873);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(878);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(207);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(109);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(890);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(609);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(613);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '|') ADVANCE(895);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(890);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(890);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_bang);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(869);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_pipe);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead == '|') ADVANCE(876);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(890);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(609);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(613);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 484},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 480},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 481},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 481},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 481},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 480},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 480},
  [48] = {.lex_state = 481},
  [49] = {.lex_state = 481},
  [50] = {.lex_state = 481},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 481},
  [55] = {.lex_state = 481},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 483},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 483},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 481},
  [75] = {.lex_state = 481},
  [76] = {.lex_state = 481},
  [77] = {.lex_state = 481},
  [78] = {.lex_state = 481},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 481},
  [81] = {.lex_state = 481},
  [82] = {.lex_state = 481},
  [83] = {.lex_state = 481},
  [84] = {.lex_state = 481},
  [85] = {.lex_state = 481},
  [86] = {.lex_state = 481},
  [87] = {.lex_state = 481},
  [88] = {.lex_state = 481},
  [89] = {.lex_state = 481},
  [90] = {.lex_state = 481},
  [91] = {.lex_state = 481},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 481},
  [94] = {.lex_state = 481},
  [95] = {.lex_state = 481},
  [96] = {.lex_state = 481},
  [97] = {.lex_state = 481},
  [98] = {.lex_state = 481},
  [99] = {.lex_state = 481},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 481},
  [102] = {.lex_state = 481},
  [103] = {.lex_state = 481},
  [104] = {.lex_state = 481},
  [105] = {.lex_state = 481},
  [106] = {.lex_state = 481},
  [107] = {.lex_state = 481},
  [108] = {.lex_state = 481},
  [109] = {.lex_state = 481},
  [110] = {.lex_state = 481},
  [111] = {.lex_state = 481},
  [112] = {.lex_state = 481},
  [113] = {.lex_state = 481},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 481},
  [117] = {.lex_state = 481},
  [118] = {.lex_state = 482},
  [119] = {.lex_state = 483},
  [120] = {.lex_state = 483},
  [121] = {.lex_state = 484},
  [122] = {.lex_state = 484},
  [123] = {.lex_state = 483},
  [124] = {.lex_state = 483},
  [125] = {.lex_state = 483},
  [126] = {.lex_state = 483},
  [127] = {.lex_state = 484},
  [128] = {.lex_state = 483},
  [129] = {.lex_state = 484},
  [130] = {.lex_state = 483},
  [131] = {.lex_state = 483},
  [132] = {.lex_state = 483},
  [133] = {.lex_state = 483},
  [134] = {.lex_state = 483},
  [135] = {.lex_state = 483},
  [136] = {.lex_state = 483},
  [137] = {.lex_state = 483},
  [138] = {.lex_state = 483},
  [139] = {.lex_state = 483},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 484},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 482},
  [144] = {.lex_state = 484},
  [145] = {.lex_state = 484},
  [146] = {.lex_state = 484},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 484},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 484},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 484},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 484},
  [163] = {.lex_state = 484},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 484},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 484},
  [173] = {.lex_state = 484},
  [174] = {.lex_state = 484},
  [175] = {.lex_state = 484},
  [176] = {.lex_state = 484},
  [177] = {.lex_state = 484},
  [178] = {.lex_state = 484},
  [179] = {.lex_state = 484},
  [180] = {.lex_state = 484},
  [181] = {.lex_state = 484},
  [182] = {.lex_state = 484},
  [183] = {.lex_state = 484},
  [184] = {.lex_state = 484},
  [185] = {.lex_state = 484},
  [186] = {.lex_state = 484},
  [187] = {.lex_state = 484},
  [188] = {.lex_state = 484},
  [189] = {.lex_state = 484},
  [190] = {.lex_state = 484},
  [191] = {.lex_state = 484},
  [192] = {.lex_state = 484},
  [193] = {.lex_state = 484},
  [194] = {.lex_state = 484},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 484},
  [197] = {.lex_state = 484},
  [198] = {.lex_state = 484},
  [199] = {.lex_state = 484},
  [200] = {.lex_state = 484},
  [201] = {.lex_state = 484},
  [202] = {.lex_state = 484},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 484},
  [206] = {.lex_state = 484},
  [207] = {.lex_state = 484},
  [208] = {.lex_state = 484},
  [209] = {.lex_state = 484},
  [210] = {.lex_state = 484},
  [211] = {.lex_state = 484},
  [212] = {.lex_state = 484},
  [213] = {.lex_state = 484},
  [214] = {.lex_state = 484},
  [215] = {.lex_state = 484},
  [216] = {.lex_state = 484},
  [217] = {.lex_state = 484},
  [218] = {.lex_state = 484},
  [219] = {.lex_state = 484},
  [220] = {.lex_state = 484},
  [221] = {.lex_state = 484},
  [222] = {.lex_state = 481},
  [223] = {.lex_state = 484},
  [224] = {.lex_state = 484},
  [225] = {.lex_state = 484},
  [226] = {.lex_state = 480},
  [227] = {.lex_state = 484},
  [228] = {.lex_state = 484},
  [229] = {.lex_state = 484},
  [230] = {.lex_state = 484},
  [231] = {.lex_state = 484},
  [232] = {.lex_state = 484},
  [233] = {.lex_state = 484},
  [234] = {.lex_state = 484},
  [235] = {.lex_state = 484},
  [236] = {.lex_state = 484},
  [237] = {.lex_state = 484},
  [238] = {.lex_state = 484},
  [239] = {.lex_state = 484},
  [240] = {.lex_state = 484},
  [241] = {.lex_state = 484},
  [242] = {.lex_state = 484},
  [243] = {.lex_state = 484},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 480},
  [246] = {.lex_state = 480},
  [247] = {.lex_state = 480},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 480},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 480},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 9},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 480},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 480},
  [266] = {.lex_state = 4},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 480},
  [276] = {.lex_state = 2},
  [277] = {.lex_state = 480},
  [278] = {.lex_state = 480},
  [279] = {.lex_state = 480},
  [280] = {.lex_state = 480},
  [281] = {.lex_state = 484},
  [282] = {.lex_state = 480},
  [283] = {.lex_state = 480},
  [284] = {.lex_state = 480},
  [285] = {.lex_state = 480},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 480},
  [288] = {.lex_state = 480},
  [289] = {.lex_state = 480},
  [290] = {.lex_state = 484},
  [291] = {.lex_state = 484},
  [292] = {.lex_state = 484},
  [293] = {.lex_state = 484},
  [294] = {.lex_state = 484},
  [295] = {.lex_state = 484},
  [296] = {.lex_state = 484},
  [297] = {.lex_state = 484},
  [298] = {.lex_state = 484},
  [299] = {.lex_state = 484},
  [300] = {.lex_state = 484},
  [301] = {.lex_state = 484},
  [302] = {.lex_state = 484},
  [303] = {.lex_state = 484},
  [304] = {.lex_state = 16},
  [305] = {.lex_state = 484},
  [306] = {.lex_state = 16},
  [307] = {.lex_state = 484},
  [308] = {.lex_state = 16},
  [309] = {.lex_state = 16},
  [310] = {.lex_state = 484},
  [311] = {.lex_state = 484},
  [312] = {.lex_state = 18},
  [313] = {.lex_state = 19},
  [314] = {.lex_state = 18},
  [315] = {.lex_state = 18},
  [316] = {.lex_state = 484},
  [317] = {.lex_state = 16},
  [318] = {.lex_state = 484},
  [319] = {.lex_state = 484},
  [320] = {.lex_state = 484},
  [321] = {.lex_state = 484},
  [322] = {.lex_state = 484},
  [323] = {.lex_state = 17},
  [324] = {.lex_state = 18},
  [325] = {.lex_state = 484},
  [326] = {.lex_state = 484},
  [327] = {.lex_state = 484},
  [328] = {.lex_state = 17},
  [329] = {.lex_state = 484},
  [330] = {.lex_state = 9},
  [331] = {.lex_state = 484},
  [332] = {.lex_state = 16},
  [333] = {.lex_state = 484},
  [334] = {.lex_state = 484},
  [335] = {.lex_state = 16},
  [336] = {.lex_state = 484},
  [337] = {.lex_state = 484},
  [338] = {.lex_state = 484},
  [339] = {.lex_state = 484},
  [340] = {.lex_state = 17},
  [341] = {.lex_state = 484},
  [342] = {.lex_state = 16},
  [343] = {.lex_state = 484},
  [344] = {.lex_state = 9},
  [345] = {.lex_state = 17},
  [346] = {.lex_state = 484},
  [347] = {.lex_state = 9},
  [348] = {.lex_state = 16},
  [349] = {.lex_state = 17},
  [350] = {.lex_state = 16},
  [351] = {.lex_state = 9},
  [352] = {.lex_state = 484},
  [353] = {.lex_state = 484},
  [354] = {.lex_state = 16},
  [355] = {.lex_state = 9},
  [356] = {.lex_state = 9},
  [357] = {.lex_state = 9},
  [358] = {.lex_state = 484},
  [359] = {.lex_state = 17},
  [360] = {.lex_state = 17},
  [361] = {.lex_state = 9},
  [362] = {.lex_state = 9},
  [363] = {.lex_state = 17},
  [364] = {.lex_state = 17},
  [365] = {.lex_state = 17},
  [366] = {.lex_state = 17},
  [367] = {.lex_state = 9},
  [368] = {.lex_state = 17},
  [369] = {.lex_state = 484},
  [370] = {.lex_state = 484},
  [371] = {.lex_state = 484},
  [372] = {.lex_state = 473},
  [373] = {.lex_state = 484},
  [374] = {.lex_state = 16},
  [375] = {.lex_state = 473},
  [376] = {.lex_state = 17},
  [377] = {.lex_state = 473},
  [378] = {.lex_state = 484},
  [379] = {.lex_state = 484},
  [380] = {.lex_state = 484},
  [381] = {.lex_state = 484},
  [382] = {.lex_state = 484},
  [383] = {.lex_state = 484},
  [384] = {.lex_state = 473},
  [385] = {.lex_state = 484},
  [386] = {.lex_state = 484},
  [387] = {.lex_state = 16},
  [388] = {.lex_state = 17},
  [389] = {.lex_state = 484},
  [390] = {.lex_state = 484},
  [391] = {.lex_state = 484},
  [392] = {.lex_state = 484},
  [393] = {.lex_state = 484},
  [394] = {.lex_state = 484},
  [395] = {.lex_state = 484},
  [396] = {.lex_state = 484},
  [397] = {.lex_state = 16},
  [398] = {.lex_state = 484},
  [399] = {.lex_state = 484},
  [400] = {.lex_state = 17},
  [401] = {.lex_state = 484},
  [402] = {.lex_state = 484},
  [403] = {.lex_state = 16},
  [404] = {.lex_state = 484},
  [405] = {.lex_state = 20},
  [406] = {.lex_state = 16},
  [407] = {.lex_state = 484},
  [408] = {.lex_state = 484},
  [409] = {.lex_state = 475},
  [410] = {.lex_state = 475},
  [411] = {.lex_state = 484},
  [412] = {.lex_state = 16},
  [413] = {.lex_state = 475},
  [414] = {.lex_state = 484},
  [415] = {.lex_state = 484},
  [416] = {.lex_state = 484},
  [417] = {.lex_state = 473},
  [418] = {.lex_state = 484},
  [419] = {.lex_state = 484},
  [420] = {.lex_state = 16},
  [421] = {.lex_state = 484},
  [422] = {.lex_state = 5},
  [423] = {.lex_state = 19},
  [424] = {.lex_state = 5},
  [425] = {.lex_state = 484},
  [426] = {.lex_state = 484},
  [427] = {.lex_state = 889},
  [428] = {.lex_state = 607},
  [429] = {.lex_state = 484},
  [430] = {.lex_state = 607},
  [431] = {.lex_state = 484},
  [432] = {.lex_state = 611},
  [433] = {.lex_state = 484},
  [434] = {.lex_state = 607},
  [435] = {.lex_state = 484},
  [436] = {.lex_state = 484},
  [437] = {.lex_state = 5},
  [438] = {.lex_state = 484},
  [439] = {.lex_state = 5},
  [440] = {.lex_state = 484},
  [441] = {.lex_state = 5},
  [442] = {.lex_state = 484},
  [443] = {.lex_state = 484},
  [444] = {.lex_state = 484},
  [445] = {.lex_state = 484},
  [446] = {.lex_state = 484},
  [447] = {.lex_state = 484},
  [448] = {.lex_state = 484},
  [449] = {.lex_state = 484},
  [450] = {.lex_state = 484},
  [451] = {.lex_state = 484},
  [452] = {.lex_state = 484},
  [453] = {.lex_state = 484},
  [454] = {.lex_state = 484},
  [455] = {.lex_state = 484},
  [456] = {.lex_state = 19},
  [457] = {.lex_state = 484},
  [458] = {.lex_state = 484},
  [459] = {.lex_state = 484},
  [460] = {.lex_state = 484},
  [461] = {.lex_state = 484},
  [462] = {.lex_state = 484},
  [463] = {.lex_state = 484},
  [464] = {.lex_state = 484},
  [465] = {.lex_state = 484},
  [466] = {.lex_state = 5},
  [467] = {.lex_state = 484},
  [468] = {.lex_state = 21},
  [469] = {.lex_state = 19},
  [470] = {.lex_state = 484},
  [471] = {.lex_state = 484},
  [472] = {.lex_state = 484},
  [473] = {.lex_state = 484},
  [474] = {.lex_state = 5},
  [475] = {.lex_state = 484},
  [476] = {.lex_state = 19},
  [477] = {.lex_state = 19},
  [478] = {.lex_state = 484},
  [479] = {.lex_state = 19},
  [480] = {.lex_state = 484},
  [481] = {.lex_state = 484},
  [482] = {.lex_state = 5},
  [483] = {.lex_state = 484},
  [484] = {.lex_state = 484},
  [485] = {.lex_state = 484},
  [486] = {.lex_state = 484},
  [487] = {.lex_state = 484},
  [488] = {.lex_state = 5},
  [489] = {.lex_state = 484},
  [490] = {.lex_state = 484},
  [491] = {.lex_state = 484},
  [492] = {.lex_state = 5},
  [493] = {.lex_state = 484},
  [494] = {.lex_state = 484},
  [495] = {.lex_state = 484},
  [496] = {.lex_state = 21},
  [497] = {.lex_state = 607},
  [498] = {.lex_state = 611},
  [499] = {.lex_state = 484},
  [500] = {.lex_state = 484},
  [501] = {.lex_state = 21},
  [502] = {.lex_state = 607},
  [503] = {.lex_state = 611},
  [504] = {.lex_state = 484},
  [505] = {.lex_state = 21},
  [506] = {.lex_state = 607},
  [507] = {.lex_state = 611},
  [508] = {.lex_state = 21},
  [509] = {.lex_state = 607},
  [510] = {.lex_state = 611},
  [511] = {.lex_state = 21},
  [512] = {.lex_state = 607},
  [513] = {.lex_state = 21},
  [514] = {.lex_state = 21},
  [515] = {.lex_state = 21},
  [516] = {.lex_state = 484},
  [517] = {.lex_state = 484},
  [518] = {.lex_state = 484},
  [519] = {.lex_state = 484},
  [520] = {.lex_state = 19},
  [521] = {.lex_state = 484},
  [522] = {.lex_state = 484},
  [523] = {.lex_state = 484},
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
    [sym_program] = STATE(516),
    [sym_prql] = STATE(320),
    [sym_pipeline] = STATE(346),
    [sym_variable] = STATE(346),
    [sym_function_definition] = STATE(346),
    [sym_from_text] = STATE(121),
    [sym_from] = STATE(121),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(281),
    [aux_sym_program_repeat2] = STATE(293),
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym__agg_keywords,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(246), 1,
      sym_binary_expression,
    STATE(278), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    ACTIONS(25), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(385), 3,
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
    STATE(95), 7,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym__agg_keywords,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(249), 1,
      sym_binary_expression,
    STATE(278), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    ACTIONS(25), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(407), 3,
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
    STATE(95), 7,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym__agg_keywords,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(249), 1,
      sym_binary_expression,
    STATE(278), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    ACTIONS(25), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(407), 3,
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
    STATE(95), 7,
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
    STATE(5), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym__agg_keywords,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(249), 1,
      sym_binary_expression,
    STATE(278), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    ACTIONS(25), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(407), 3,
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
    STATE(95), 7,
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
    ACTIONS(65), 1,
      sym_keyword_case,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    STATE(6), 1,
      sym_comment,
    STATE(9), 1,
      sym_identifier,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym__agg_keywords,
    STATE(74), 1,
      sym_integer,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(116), 1,
      sym__expression,
    STATE(180), 1,
      sym__agg_rhs_assignment,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(182), 2,
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
    STATE(95), 8,
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
    ACTIONS(65), 1,
      sym_keyword_case,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(7), 1,
      sym_comment,
    STATE(11), 1,
      sym_identifier,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym__agg_keywords,
    STATE(74), 1,
      sym_integer,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(116), 1,
      sym__expression,
    STATE(180), 1,
      sym__agg_rhs_assignment,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(182), 2,
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
    STATE(95), 8,
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
    ACTIONS(65), 1,
      sym_keyword_case,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      sym__identifier,
    STATE(8), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym__agg_keywords,
    STATE(74), 1,
      sym_integer,
    STATE(79), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(116), 1,
      sym__expression,
    STATE(180), 1,
      sym__agg_rhs_assignment,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(182), 2,
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
    STATE(95), 8,
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
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    STATE(9), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_function_call_repeat1,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(125), 1,
      sym_identifier,
    STATE(128), 1,
      sym__call_parameter,
    STATE(132), 1,
      sym_literal,
    STATE(134), 1,
      sym_integer,
    STATE(135), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(139), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(85), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(81), 12,
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
    ACTIONS(83), 18,
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
      anon_sym_GT,
      anon_sym_LT,
  [974] = 34,
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
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      sym__identifier,
    STATE(10), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym__agg_keywords,
    STATE(74), 1,
      sym_integer,
    STATE(79), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(277), 1,
      sym_binary_expression,
    STATE(285), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(435), 1,
      sym_function_call,
    STATE(522), 1,
      sym__agg_rhs_assignment,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
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
    STATE(95), 7,
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
    STATE(11), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym_function_call_repeat1,
    STATE(147), 1,
      aux_sym__friendly_number,
    STATE(148), 1,
      sym_identifier,
    STATE(161), 1,
      sym_literal,
    STATE(164), 1,
      sym__call_parameter,
    STATE(168), 1,
      sym_integer,
    STATE(157), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(159), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(101), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(81), 12,
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
    ACTIONS(83), 14,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_GT,
      anon_sym_LT,
  [1186] = 36,
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
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_case_repeat1,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(276), 1,
      sym_literal,
    STATE(286), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(373), 1,
      aux_sym_case_repeat2,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1305] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_DASH,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(150), 1,
      sym__natural_number,
    ACTIONS(153), 1,
      anon_sym__,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(159), 1,
      anon_sym_BQUOTE,
    ACTIONS(162), 1,
      sym__identifier,
    ACTIONS(165), 1,
      anon_sym_AT,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(276), 1,
      sym_literal,
    STATE(286), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(13), 2,
      sym_comment,
      aux_sym_case_repeat1,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(121), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1417] = 33,
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
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      sym_bang,
    STATE(14), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(143), 1,
      sym__expression,
    STATE(177), 1,
      sym_assignment,
    STATE(230), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1529] = 34,
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
    STATE(13), 1,
      aux_sym_case_repeat1,
    STATE(15), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(276), 1,
      sym_literal,
    STATE(286), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1643] = 33,
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
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(402), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1755] = 35,
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
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_case_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(276), 1,
      sym_literal,
    STATE(286), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1871] = 33,
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
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(386), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1983] = 33,
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
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(393), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2095] = 33,
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
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      sym_bang,
    STATE(20), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(177), 1,
      sym_assignment,
    STATE(230), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2207] = 33,
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
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(370), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2319] = 34,
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
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_case_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(276), 1,
      sym_literal,
    STATE(286), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2432] = 32,
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
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(418), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2541] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(204), 2,
      sym__natural_number,
      anon_sym__,
    STATE(24), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(202), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(200), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [2598] = 32,
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
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(418), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2707] = 32,
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
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(421), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2816] = 32,
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
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(143), 1,
      sym__expression,
    STATE(218), 1,
      sym_assignment,
    STATE(219), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2925] = 32,
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
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(218), 1,
      sym_assignment,
    STATE(219), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3034] = 32,
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
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(433), 1,
      sym_term,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3143] = 32,
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
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(219), 1,
      sym_term,
    STATE(226), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3252] = 32,
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
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(421), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3361] = 34,
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
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_case_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(276), 1,
      sym_literal,
    STATE(286), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3474] = 32,
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
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(421), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3583] = 33,
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
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    ACTIONS(227), 1,
      anon_sym_EQ_EQ,
    STATE(34), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(247), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3694] = 32,
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
      anon_sym_RBRACK,
    STATE(35), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(418), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3803] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(24), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(233), 4,
      sym_keyword_from,
      anon_sym_EQ,
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
  [3862] = 32,
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
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(37), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(418), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3971] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(24), 1,
      aux_sym__friendly_number,
    STATE(38), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(239), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [4030] = 32,
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
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(39), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(418), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4139] = 33,
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
    STATE(15), 1,
      aux_sym_case_repeat1,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(40), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(195), 1,
      sym_case_condition,
    STATE(276), 1,
      sym_literal,
    STATE(286), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4249] = 31,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(41), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(491), 1,
      sym_term,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4355] = 31,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(42), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(418), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4461] = 30,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(263), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4565] = 30,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(44), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(263), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4669] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(45), 1,
      sym_comment,
    ACTIONS(245), 17,
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
    ACTIONS(247), 23,
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
      anon_sym_GT,
      anon_sym_LT,
  [4723] = 31,
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
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(46), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(177), 1,
      sym_assignment,
    STATE(226), 1,
      sym__expression,
    STATE(421), 1,
      sym_term,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4829] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(47), 1,
      sym_comment,
    ACTIONS(249), 17,
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
    ACTIONS(251), 23,
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
      anon_sym_GT,
      anon_sym_LT,
  [4883] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(48), 1,
      sym_comment,
    ACTIONS(255), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 36,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [4937] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(261), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym_comment,
    ACTIONS(259), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(257), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [4994] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(271), 1,
      anon_sym_Z,
    STATE(50), 1,
      sym_comment,
    STATE(112), 1,
      sym_timezone,
    STATE(476), 1,
      sym_direction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(267), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(265), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [5055] = 31,
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
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(51), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(265), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5160] = 31,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(52), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(265), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5265] = 30,
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
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(53), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(117), 1,
      sym__expression,
    STATE(214), 1,
      sym__boolean_expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5368] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_DOT,
    STATE(54), 1,
      sym_comment,
    ACTIONS(281), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(279), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [5425] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(291), 1,
      anon_sym_DOT,
    STATE(55), 1,
      sym_comment,
    ACTIONS(289), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(287), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [5479] = 30,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(56), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(279), 1,
      sym_binary_expression,
    STATE(289), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5581] = 30,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(265), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5683] = 29,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(275), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5783] = 29,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(107), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5883] = 29,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(60), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(106), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5983] = 29,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(61), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(105), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6083] = 29,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(62), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(103), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6183] = 30,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(63), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(284), 1,
      sym_binary_expression,
    STATE(289), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6285] = 29,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(64), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(102), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6385] = 29,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(65), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(101), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6485] = 30,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(66), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(287), 1,
      sym_binary_expression,
    STATE(289), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6587] = 30,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(277), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6689] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__natural_number,
    ACTIONS(93), 1,
      anon_sym__,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_BQUOTE,
    ACTIONS(99), 1,
      sym__identifier,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      anon_sym_DASH,
    STATE(68), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_function_call_repeat1,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(125), 1,
      sym_identifier,
    STATE(128), 1,
      sym__call_parameter,
    STATE(132), 1,
      sym_literal,
    STATE(134), 1,
      sym_integer,
    STATE(135), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(139), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(85), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(295), 16,
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
  [6775] = 29,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(113), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6875] = 30,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(70), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(288), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(222), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6977] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      anon_sym_SQUOTE,
    ACTIONS(315), 1,
      sym__natural_number,
    ACTIONS(318), 1,
      anon_sym__,
    ACTIONS(321), 1,
      anon_sym_DOT,
    ACTIONS(324), 1,
      anon_sym_BQUOTE,
    ACTIONS(327), 1,
      sym__identifier,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(125), 1,
      sym_identifier,
    STATE(128), 1,
      sym__call_parameter,
    STATE(132), 1,
      sym_literal,
    STATE(134), 1,
      sym_integer,
    STATE(71), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(135), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(139), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(303), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(301), 16,
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
  [7061] = 29,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(280), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7161] = 29,
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
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(73), 1,
      sym_comment,
    STATE(74), 1,
      sym_integer,
    STATE(76), 1,
      sym_identifier,
    STATE(82), 1,
      sym__double_quote_string,
    STATE(91), 1,
      sym__single_quote_string,
    STATE(282), 1,
      sym__expression,
    STATE(424), 1,
      sym__alias_identifier,
    STATE(89), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(90), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(104), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(95), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7261] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(334), 1,
      anon_sym_DOT,
    STATE(74), 1,
      sym_comment,
    ACTIONS(332), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7314] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(75), 1,
      sym_comment,
    ACTIONS(338), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(336), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7365] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(340), 1,
      anon_sym_DOT,
    STATE(76), 1,
      sym_comment,
    ACTIONS(83), 4,
      sym_keyword_from,
      anon_sym_EQ,
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
  [7418] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(346), 1,
      sym__natural_number,
    STATE(77), 1,
      sym_comment,
    ACTIONS(344), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(342), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7471] = 5,
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
  [7522] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
    ACTIONS(358), 1,
      sym__natural_number,
    ACTIONS(360), 1,
      anon_sym__,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(364), 1,
      anon_sym_BQUOTE,
    ACTIONS(366), 1,
      sym__identifier,
    STATE(79), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_function_call_repeat1,
    STATE(248), 1,
      aux_sym__friendly_number,
    STATE(253), 1,
      sym_identifier,
    STATE(262), 1,
      sym__call_parameter,
    STATE(266), 1,
      sym_literal,
    STATE(272), 1,
      sym_integer,
    ACTIONS(83), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(273), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(274), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(352), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(81), 15,
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
  [7605] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(80), 1,
      sym_comment,
    ACTIONS(247), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(245), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7656] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(81), 1,
      sym_comment,
    ACTIONS(289), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(287), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7707] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(372), 1,
      anon_sym_DOT,
    STATE(82), 1,
      sym_comment,
    ACTIONS(370), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7760] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(83), 1,
      sym_comment,
    ACTIONS(376), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7811] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(84), 1,
      sym_comment,
    ACTIONS(259), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(257), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7862] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_T,
    STATE(85), 1,
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
  [7915] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(86), 1,
      sym_comment,
    ACTIONS(251), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(249), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7966] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(87), 1,
      sym_comment,
    ACTIONS(386), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8016] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(88), 1,
      sym_comment,
    ACTIONS(390), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8066] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(89), 1,
      sym_comment,
    ACTIONS(394), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
    STATE(90), 1,
      sym_comment,
    ACTIONS(398), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8166] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(91), 1,
      sym_comment,
    ACTIONS(370), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8216] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(92), 1,
      sym_comment,
    ACTIONS(245), 17,
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
    ACTIONS(247), 19,
      sym_keyword_filter,
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
      anon_sym_GT,
      anon_sym_LT,
  [8266] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(93), 1,
      sym_comment,
    ACTIONS(402), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8316] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(94), 1,
      sym_comment,
    ACTIONS(406), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8366] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(95), 1,
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
  [8416] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(96), 1,
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
  [8466] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(97), 1,
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
  [8516] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(98), 1,
      sym_comment,
    ACTIONS(422), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8566] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(99), 1,
      sym_comment,
    ACTIONS(426), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8616] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(100), 1,
      sym_comment,
    ACTIONS(249), 17,
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
    ACTIONS(251), 19,
      sym_keyword_filter,
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
      anon_sym_GT,
      anon_sym_LT,
  [8666] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(101), 1,
      sym_comment,
    ACTIONS(430), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8716] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(102), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(430), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 28,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8770] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(103), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(430), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8822] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(104), 1,
      sym_comment,
    ACTIONS(332), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(330), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8872] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(105), 1,
      sym_comment,
    ACTIONS(430), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(428), 24,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_EQ_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8930] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    STATE(106), 1,
      sym_comment,
    ACTIONS(430), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(428), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_EQ_GT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8990] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    STATE(107), 1,
      sym_comment,
    ACTIONS(430), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(428), 22,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_EQ_GT,
      anon_sym_PIPE_PIPE,
  [9052] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(108), 1,
      sym_comment,
    ACTIONS(446), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9102] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(109), 1,
      sym_comment,
    ACTIONS(450), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9152] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(110), 1,
      sym_comment,
    ACTIONS(344), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(342), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9202] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(111), 1,
      sym_comment,
    ACTIONS(454), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(452), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9252] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(112), 1,
      sym_comment,
    ACTIONS(458), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(456), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9302] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(462), 1,
      sym_keyword_from,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    STATE(113), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
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
  [9364] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(299), 1,
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
    STATE(147), 1,
      aux_sym__friendly_number,
    STATE(148), 1,
      sym_identifier,
    STATE(161), 1,
      sym_literal,
    STATE(164), 1,
      sym__call_parameter,
    STATE(168), 1,
      sym_integer,
    STATE(114), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(157), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(159), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(466), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(301), 12,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9444] = 22,
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
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      anon_sym_DASH,
    STATE(114), 1,
      aux_sym_function_call_repeat1,
    STATE(115), 1,
      sym_comment,
    STATE(147), 1,
      aux_sym__friendly_number,
    STATE(148), 1,
      sym_identifier,
    STATE(161), 1,
      sym_literal,
    STATE(164), 1,
      sym__call_parameter,
    STATE(168), 1,
      sym_integer,
    STATE(157), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(159), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(101), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(295), 12,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9526] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(497), 1,
      sym_keyword_from,
    STATE(116), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(495), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9588] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(501), 1,
      sym_keyword_from,
    STATE(117), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
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
  [9647] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(505), 1,
      sym_keyword_from,
    ACTIONS(507), 1,
      anon_sym_EQ,
    STATE(118), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
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
  [9708] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(509), 1,
      sym__natural_number,
    ACTIONS(512), 1,
      anon_sym__,
    STATE(119), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(202), 20,
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
  [9755] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(120), 1,
      sym_comment,
    ACTIONS(245), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(247), 21,
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
  [9798] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(517), 1,
      sym_keyword_from,
    ACTIONS(519), 1,
      sym_keyword_filter,
    ACTIONS(521), 1,
      sym_keyword_derive,
    ACTIONS(523), 1,
      sym_keyword_group,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(531), 1,
      sym_keyword_join,
    ACTIONS(533), 1,
      sym_keyword_select,
    ACTIONS(537), 1,
      sym_keyword_loop,
    STATE(121), 1,
      sym_comment,
    STATE(129), 1,
      aux_sym_transforms_repeat1,
    STATE(322), 1,
      sym_transforms,
    ACTIONS(535), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(515), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(235), 10,
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
  [9867] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_filter,
    ACTIONS(521), 1,
      sym_keyword_derive,
    ACTIONS(523), 1,
      sym_keyword_group,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(531), 1,
      sym_keyword_join,
    ACTIONS(533), 1,
      sym_keyword_select,
    ACTIONS(537), 1,
      sym_keyword_loop,
    ACTIONS(541), 1,
      sym_keyword_from,
    STATE(122), 1,
      sym_comment,
    STATE(129), 1,
      aux_sym_transforms_repeat1,
    STATE(331), 1,
      sym_transforms,
    ACTIONS(535), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(539), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(235), 10,
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
  [9936] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(119), 1,
      aux_sym__friendly_number,
    STATE(123), 1,
      sym_comment,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(233), 21,
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
  [9981] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(119), 1,
      aux_sym__friendly_number,
    STATE(124), 1,
      sym_comment,
    ACTIONS(237), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(239), 21,
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
  [10026] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(547), 1,
      anon_sym_COLON,
    STATE(125), 1,
      sym_comment,
    ACTIONS(543), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(545), 21,
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
  [10071] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(126), 1,
      sym_comment,
    ACTIONS(249), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(251), 21,
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
  [10114] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(551), 1,
      sym_keyword_from,
    ACTIONS(553), 1,
      sym_keyword_filter,
    ACTIONS(556), 1,
      sym_keyword_derive,
    ACTIONS(559), 1,
      sym_keyword_group,
    ACTIONS(562), 1,
      sym_keyword_aggregate,
    ACTIONS(565), 1,
      sym_keyword_sort,
    ACTIONS(568), 1,
      sym_keyword_take,
    ACTIONS(571), 1,
      sym_keyword_join,
    ACTIONS(574), 1,
      sym_keyword_select,
    ACTIONS(580), 1,
      sym_keyword_loop,
    STATE(127), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(577), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(549), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(235), 10,
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
  [10178] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(128), 1,
      sym_comment,
    ACTIONS(583), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(585), 21,
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
  [10220] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_filter,
    ACTIONS(521), 1,
      sym_keyword_derive,
    ACTIONS(523), 1,
      sym_keyword_group,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(531), 1,
      sym_keyword_join,
    ACTIONS(533), 1,
      sym_keyword_select,
    ACTIONS(537), 1,
      sym_keyword_loop,
    ACTIONS(589), 1,
      sym_keyword_from,
    STATE(127), 1,
      aux_sym_transforms_repeat1,
    STATE(129), 1,
      sym_comment,
    ACTIONS(535), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(587), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(235), 10,
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
  [10286] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(130), 1,
      sym_comment,
    ACTIONS(416), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(418), 21,
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
  [10328] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(131), 1,
      sym_comment,
    ACTIONS(412), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(414), 21,
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
  [10370] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(132), 1,
      sym_comment,
    ACTIONS(543), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(545), 21,
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
  [10412] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(133), 1,
      sym_comment,
    ACTIONS(342), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(344), 21,
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
  [10454] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(134), 1,
      sym_comment,
    ACTIONS(330), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(332), 21,
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
  [10496] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(135), 1,
      sym_comment,
    ACTIONS(368), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(370), 21,
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
  [10538] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(136), 1,
      sym_comment,
    ACTIONS(348), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(350), 21,
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
  [10580] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(137), 1,
      sym_comment,
    ACTIONS(253), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(255), 21,
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
  [10622] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(138), 1,
      sym_comment,
    ACTIONS(591), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(593), 21,
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
  [10664] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(139), 1,
      sym_comment,
    ACTIONS(330), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(332), 21,
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
  [10706] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(140), 1,
      sym_comment,
    ACTIONS(247), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(245), 20,
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
  [10747] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(233), 1,
      sym_keyword_from,
    STATE(141), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym__friendly_number,
    ACTIONS(595), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(231), 23,
      ts_builtin_sym_end,
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
  [10792] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(142), 1,
      sym_comment,
    ACTIONS(251), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(249), 20,
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
  [10833] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(597), 1,
      anon_sym_EQ,
    STATE(143), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
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
  [10888] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(239), 1,
      sym_keyword_from,
    STATE(144), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym__friendly_number,
    ACTIONS(595), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(237), 23,
      ts_builtin_sym_end,
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
  [10933] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(202), 1,
      sym_keyword_from,
    ACTIONS(599), 2,
      sym__natural_number,
      anon_sym__,
    STATE(145), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(200), 23,
      ts_builtin_sym_end,
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
  [10976] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(255), 1,
      sym_keyword_from,
    STATE(146), 1,
      sym_comment,
    ACTIONS(253), 25,
      ts_builtin_sym_end,
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
  [11016] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(147), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym__friendly_number,
    ACTIONS(231), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(233), 17,
      sym_keyword_filter,
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
  [11057] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(602), 1,
      anon_sym_COLON,
    STATE(148), 1,
      sym_comment,
    ACTIONS(543), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(545), 17,
      sym_keyword_filter,
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
  [11098] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(149), 1,
      sym_comment,
    ACTIONS(245), 8,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(247), 17,
      sym_keyword_filter,
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
  [11137] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(604), 1,
      sym__natural_number,
    ACTIONS(607), 1,
      anon_sym__,
    STATE(150), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(200), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(202), 16,
      sym_keyword_filter,
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
  [11180] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
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
    STATE(248), 1,
      aux_sym__friendly_number,
    STATE(253), 1,
      sym_identifier,
    STATE(262), 1,
      sym__call_parameter,
    STATE(266), 1,
      sym_literal,
    STATE(272), 1,
      sym_integer,
    STATE(151), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(273), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(274), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(610), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(299), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11249] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(150), 1,
      aux_sym__friendly_number,
    STATE(152), 1,
      sym_comment,
    ACTIONS(237), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(239), 17,
      sym_keyword_filter,
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
  [11290] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    ACTIONS(519), 1,
      sym_keyword_filter,
    ACTIONS(523), 1,
      sym_keyword_group,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(531), 1,
      sym_keyword_join,
    ACTIONS(537), 1,
      sym_keyword_loop,
    ACTIONS(637), 1,
      sym_keyword_derive,
    ACTIONS(639), 1,
      sym_keyword_select,
    STATE(153), 1,
      sym_comment,
    STATE(162), 1,
      aux_sym_transforms_repeat1,
    STATE(322), 1,
      sym_transforms,
    ACTIONS(535), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(235), 10,
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
  [11353] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
    ACTIONS(358), 1,
      sym__natural_number,
    ACTIONS(360), 1,
      anon_sym__,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(364), 1,
      anon_sym_BQUOTE,
    ACTIONS(366), 1,
      sym__identifier,
    ACTIONS(641), 1,
      anon_sym_DASH,
    STATE(151), 1,
      aux_sym_function_call_repeat1,
    STATE(154), 1,
      sym_comment,
    STATE(248), 1,
      aux_sym__friendly_number,
    STATE(253), 1,
      sym_identifier,
    STATE(262), 1,
      sym__call_parameter,
    STATE(266), 1,
      sym_literal,
    STATE(272), 1,
      sym_integer,
    STATE(273), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(274), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(352), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(293), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11424] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(155), 1,
      sym_comment,
    ACTIONS(249), 8,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(251), 17,
      sym_keyword_filter,
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
  [11463] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(380), 1,
      sym_keyword_from,
    STATE(156), 1,
      sym_comment,
    ACTIONS(378), 23,
      ts_builtin_sym_end,
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
  [11501] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(157), 1,
      sym_comment,
    ACTIONS(330), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(332), 17,
      sym_keyword_filter,
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
  [11539] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(158), 1,
      sym_comment,
    ACTIONS(253), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(255), 17,
      sym_keyword_filter,
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
  [11577] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(159), 1,
      sym_comment,
    ACTIONS(368), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(370), 17,
      sym_keyword_filter,
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
  [11615] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_filter,
    ACTIONS(523), 1,
      sym_keyword_group,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(531), 1,
      sym_keyword_join,
    ACTIONS(537), 1,
      sym_keyword_loop,
    ACTIONS(637), 1,
      sym_keyword_derive,
    ACTIONS(639), 1,
      sym_keyword_select,
    STATE(160), 1,
      sym_comment,
    STATE(162), 1,
      aux_sym_transforms_repeat1,
    STATE(453), 1,
      sym_transforms,
    ACTIONS(535), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(235), 10,
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
  [11675] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(161), 1,
      sym_comment,
    ACTIONS(543), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(545), 17,
      sym_keyword_filter,
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
  [11713] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(519), 1,
      sym_keyword_filter,
    ACTIONS(523), 1,
      sym_keyword_group,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(531), 1,
      sym_keyword_join,
    ACTIONS(537), 1,
      sym_keyword_loop,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(637), 1,
      sym_keyword_derive,
    ACTIONS(639), 1,
      sym_keyword_select,
    STATE(162), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(535), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(235), 10,
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
  [11773] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    ACTIONS(553), 1,
      sym_keyword_filter,
    ACTIONS(559), 1,
      sym_keyword_group,
    ACTIONS(562), 1,
      sym_keyword_aggregate,
    ACTIONS(565), 1,
      sym_keyword_sort,
    ACTIONS(568), 1,
      sym_keyword_take,
    ACTIONS(571), 1,
      sym_keyword_join,
    ACTIONS(580), 1,
      sym_keyword_loop,
    ACTIONS(643), 1,
      sym_keyword_derive,
    ACTIONS(646), 1,
      sym_keyword_select,
    STATE(163), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(577), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(235), 10,
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
  [11831] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(164), 1,
      sym_comment,
    ACTIONS(583), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(585), 17,
      sym_keyword_filter,
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
  [11869] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(338), 1,
      sym_keyword_from,
    STATE(165), 1,
      sym_comment,
    ACTIONS(336), 23,
      ts_builtin_sym_end,
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
  [11907] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(166), 1,
      sym_comment,
    ACTIONS(591), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(593), 17,
      sym_keyword_filter,
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
  [11945] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(167), 1,
      sym_comment,
    ACTIONS(416), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(418), 17,
      sym_keyword_filter,
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
  [11983] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(168), 1,
      sym_comment,
    ACTIONS(330), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(332), 17,
      sym_keyword_filter,
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
  [12021] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(169), 1,
      sym_comment,
    ACTIONS(412), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(414), 17,
      sym_keyword_filter,
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
  [12059] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(170), 1,
      sym_comment,
    ACTIONS(342), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(344), 17,
      sym_keyword_filter,
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
  [12097] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(171), 1,
      sym_comment,
    ACTIONS(348), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(350), 17,
      sym_keyword_filter,
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
  [12135] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(247), 1,
      sym_keyword_from,
    STATE(172), 1,
      sym_comment,
    ACTIONS(245), 22,
      ts_builtin_sym_end,
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
  [12172] = 5,
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
  [12209] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(251), 1,
      sym_keyword_from,
    STATE(174), 1,
      sym_comment,
    ACTIONS(249), 22,
      ts_builtin_sym_end,
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
  [12246] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(655), 1,
      sym_keyword_from,
    ACTIONS(657), 1,
      anon_sym_LBRACK,
    STATE(175), 1,
      sym_comment,
    STATE(223), 1,
      sym__self_join,
    STATE(239), 1,
      sym_conditions,
    ACTIONS(653), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12287] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(661), 1,
      sym_keyword_from,
    STATE(176), 1,
      sym_comment,
    ACTIONS(659), 20,
      ts_builtin_sym_end,
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
  [12322] = 5,
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
  [12357] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(665), 1,
      sym_keyword_from,
    STATE(178), 1,
      sym_comment,
    ACTIONS(663), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12392] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(669), 1,
      sym_keyword_from,
    STATE(179), 1,
      sym_comment,
    ACTIONS(667), 20,
      ts_builtin_sym_end,
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
  [12427] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(673), 1,
      sym_keyword_from,
    STATE(180), 1,
      sym_comment,
    ACTIONS(671), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12462] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(657), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 1,
      sym_keyword_from,
    STATE(181), 1,
      sym_comment,
    STATE(223), 1,
      sym__self_join,
    STATE(237), 1,
      sym_conditions,
    ACTIONS(675), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12503] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(681), 1,
      sym_keyword_from,
    STATE(182), 1,
      sym_comment,
    ACTIONS(679), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12538] = 5,
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
  [12573] = 5,
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
  [12608] = 5,
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
  [12643] = 5,
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
  [12678] = 5,
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
  [12713] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(705), 1,
      sym_keyword_from,
    ACTIONS(707), 1,
      anon_sym_DOT_DOT,
    STATE(188), 1,
      sym_comment,
    ACTIONS(703), 18,
      ts_builtin_sym_end,
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
  [12749] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(711), 1,
      sym_keyword_from,
    ACTIONS(713), 1,
      anon_sym_EQ,
    STATE(189), 1,
      sym_comment,
    ACTIONS(709), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12785] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(717), 1,
      sym_keyword_from,
    STATE(190), 1,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12818] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(721), 1,
      sym_keyword_from,
    STATE(191), 1,
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
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [12851] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(725), 1,
      sym_keyword_from,
    STATE(192), 1,
      sym_comment,
    ACTIONS(723), 18,
      ts_builtin_sym_end,
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
  [12884] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(729), 1,
      sym_keyword_from,
    STATE(193), 1,
      sym_comment,
    ACTIONS(727), 18,
      ts_builtin_sym_end,
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
  [12917] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(733), 1,
      sym_keyword_from,
    STATE(194), 1,
      sym_comment,
    ACTIONS(731), 18,
      ts_builtin_sym_end,
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
  [12950] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(195), 1,
      sym_comment,
    ACTIONS(735), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(737), 12,
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
  [12983] = 5,
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
  [13016] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(741), 1,
      sym_keyword_from,
    STATE(197), 1,
      sym_comment,
    ACTIONS(739), 18,
      ts_builtin_sym_end,
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
  [13049] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(745), 1,
      sym_keyword_from,
    STATE(198), 1,
      sym_comment,
    ACTIONS(743), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13082] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(749), 1,
      sym_keyword_from,
    STATE(199), 1,
      sym_comment,
    ACTIONS(747), 18,
      ts_builtin_sym_end,
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
  [13115] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(753), 1,
      sym_keyword_from,
    STATE(200), 1,
      sym_comment,
    ACTIONS(751), 18,
      ts_builtin_sym_end,
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
  [13148] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(757), 1,
      sym_keyword_from,
    STATE(201), 1,
      sym_comment,
    ACTIONS(755), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13181] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(761), 1,
      sym_keyword_from,
    STATE(202), 1,
      sym_comment,
    ACTIONS(759), 18,
      ts_builtin_sym_end,
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
  [13214] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(203), 1,
      sym_comment,
    ACTIONS(763), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(765), 12,
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
  [13247] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(204), 1,
      sym_comment,
    ACTIONS(767), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(769), 12,
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
  [13280] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(705), 1,
      sym_keyword_from,
    STATE(205), 1,
      sym_comment,
    ACTIONS(703), 18,
      ts_builtin_sym_end,
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
  [13313] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(773), 1,
      sym_keyword_from,
    STATE(206), 1,
      sym_comment,
    ACTIONS(771), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13345] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(777), 1,
      sym_keyword_from,
    STATE(207), 1,
      sym_comment,
    ACTIONS(775), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13377] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(781), 1,
      sym_keyword_from,
    STATE(208), 1,
      sym_comment,
    ACTIONS(779), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13409] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(785), 1,
      sym_keyword_from,
    STATE(209), 1,
      sym_comment,
    ACTIONS(783), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13441] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(789), 1,
      sym_keyword_from,
    STATE(210), 1,
      sym_comment,
    ACTIONS(787), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13473] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(793), 1,
      sym_keyword_from,
    STATE(211), 1,
      sym_comment,
    ACTIONS(791), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13505] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(797), 1,
      sym_keyword_from,
    STATE(212), 1,
      sym_comment,
    ACTIONS(795), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13537] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(801), 1,
      sym_keyword_from,
    STATE(213), 1,
      sym_comment,
    ACTIONS(799), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13569] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(805), 1,
      sym_keyword_from,
    STATE(214), 1,
      sym_comment,
    ACTIONS(803), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13601] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(809), 1,
      sym_keyword_from,
    STATE(215), 1,
      sym_comment,
    ACTIONS(807), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13633] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(813), 1,
      sym_keyword_from,
    STATE(216), 1,
      sym_comment,
    ACTIONS(811), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13665] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(817), 1,
      sym_keyword_from,
    STATE(217), 1,
      sym_comment,
    ACTIONS(815), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13697] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(218), 1,
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
  [13729] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(821), 1,
      sym_keyword_from,
    STATE(219), 1,
      sym_comment,
    ACTIONS(819), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13761] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(825), 1,
      sym_keyword_from,
    STATE(220), 1,
      sym_comment,
    ACTIONS(823), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13793] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(829), 1,
      sym_keyword_from,
    STATE(221), 1,
      sym_comment,
    ACTIONS(827), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13825] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(833), 1,
      sym_keyword_from,
    STATE(222), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(831), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    ACTIONS(408), 11,
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
  [13861] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(837), 1,
      sym_keyword_from,
    STATE(223), 1,
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
  [13893] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(841), 1,
      sym_keyword_from,
    STATE(224), 1,
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
  [13925] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(845), 1,
      sym_keyword_from,
    STATE(225), 1,
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
  [13957] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(847), 1,
      anon_sym_EQ,
    STATE(226), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [14003] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(851), 1,
      sym_keyword_from,
    STATE(227), 1,
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
  [14035] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(855), 1,
      sym_keyword_from,
    STATE(228), 1,
      sym_comment,
    ACTIONS(853), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14067] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(859), 1,
      sym_keyword_from,
    STATE(229), 1,
      sym_comment,
    ACTIONS(857), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14099] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(863), 1,
      sym_keyword_from,
    STATE(230), 1,
      sym_comment,
    ACTIONS(861), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14131] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(867), 1,
      sym_keyword_from,
    STATE(231), 1,
      sym_comment,
    ACTIONS(865), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14163] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(871), 1,
      sym_keyword_from,
    STATE(232), 1,
      sym_comment,
    ACTIONS(869), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14195] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(875), 1,
      sym_keyword_from,
    STATE(233), 1,
      sym_comment,
    ACTIONS(873), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14227] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(879), 1,
      sym_keyword_from,
    STATE(234), 1,
      sym_comment,
    ACTIONS(877), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14259] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(883), 1,
      sym_keyword_from,
    STATE(235), 1,
      sym_comment,
    ACTIONS(881), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14291] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(887), 1,
      sym_keyword_from,
    STATE(236), 1,
      sym_comment,
    ACTIONS(885), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14323] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(891), 1,
      sym_keyword_from,
    STATE(237), 1,
      sym_comment,
    ACTIONS(889), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14355] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(895), 1,
      sym_keyword_from,
    STATE(238), 1,
      sym_comment,
    ACTIONS(893), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14387] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(899), 1,
      sym_keyword_from,
    STATE(239), 1,
      sym_comment,
    ACTIONS(897), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14419] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(903), 1,
      sym_keyword_from,
    STATE(240), 1,
      sym_comment,
    ACTIONS(901), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14451] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(907), 1,
      sym_keyword_from,
    STATE(241), 1,
      sym_comment,
    ACTIONS(905), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14483] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(911), 1,
      sym_keyword_from,
    STATE(242), 1,
      sym_comment,
    ACTIONS(909), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14515] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(915), 1,
      sym_keyword_from,
    STATE(243), 1,
      sym_comment,
    ACTIONS(913), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14547] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(244), 1,
      sym_comment,
    ACTIONS(917), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(919), 10,
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
  [14578] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(245), 1,
      sym_comment,
    STATE(382), 1,
      aux_sym_derives_repeat1,
    ACTIONS(406), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 13,
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
  [14611] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(923), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym_comment,
    STATE(383), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(410), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 11,
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
  [14648] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(927), 1,
      anon_sym_RBRACK,
    STATE(247), 1,
      sym_comment,
    STATE(394), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(410), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 11,
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
  [14684] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(248), 1,
      sym_comment,
    STATE(260), 1,
      aux_sym__friendly_number,
    ACTIONS(233), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(231), 10,
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
  [14716] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(249), 1,
      sym_comment,
    ACTIONS(929), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(410), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 11,
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
  [14748] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(933), 1,
      anon_sym_DASH,
    ACTIONS(935), 1,
      anon_sym_DQUOTE,
    ACTIONS(937), 1,
      anon_sym_SQUOTE,
    ACTIONS(941), 1,
      anon_sym_DOT,
    STATE(250), 1,
      sym_comment,
    STATE(312), 1,
      aux_sym__friendly_number,
    STATE(345), 1,
      sym_integer,
    STATE(388), 1,
      sym_literal,
    ACTIONS(939), 2,
      sym__natural_number,
      anon_sym__,
    STATE(365), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(368), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(931), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14796] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(251), 1,
      sym_comment,
    ACTIONS(406), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 13,
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
  [14826] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(641), 1,
      anon_sym_DASH,
    STATE(248), 1,
      aux_sym__friendly_number,
    STATE(252), 1,
      sym_comment,
    STATE(268), 1,
      sym_literal,
    STATE(272), 1,
      sym_integer,
    ACTIONS(358), 2,
      sym__natural_number,
      anon_sym__,
    STATE(273), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(274), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(943), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14874] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(945), 1,
      anon_sym_COLON,
    STATE(253), 1,
      sym_comment,
    ACTIONS(545), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(543), 10,
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
  [14906] = 14,
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
    ACTIONS(493), 1,
      anon_sym_DASH,
    STATE(147), 1,
      aux_sym__friendly_number,
    STATE(166), 1,
      sym_literal,
    STATE(168), 1,
      sym_integer,
    STATE(254), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym__natural_number,
      anon_sym__,
    STATE(157), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(159), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(947), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14954] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(937), 1,
      anon_sym_SQUOTE,
    ACTIONS(941), 1,
      anon_sym_DOT,
    ACTIONS(949), 1,
      anon_sym_DASH,
    ACTIONS(951), 1,
      anon_sym_DQUOTE,
    STATE(255), 1,
      sym_comment,
    STATE(330), 1,
      aux_sym__friendly_number,
    STATE(345), 1,
      sym_integer,
    STATE(443), 1,
      sym_literal,
    ACTIONS(953), 2,
      sym__natural_number,
      anon_sym__,
    STATE(365), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(368), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(931), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15002] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(256), 1,
      sym_comment,
    STATE(260), 1,
      aux_sym__friendly_number,
    ACTIONS(239), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(237), 10,
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
  [15034] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(257), 1,
      sym_comment,
    ACTIONS(247), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(245), 11,
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
  [15064] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(937), 1,
      anon_sym_SQUOTE,
    ACTIONS(941), 1,
      anon_sym_DOT,
    ACTIONS(949), 1,
      anon_sym_DASH,
    ACTIONS(951), 1,
      anon_sym_DQUOTE,
    STATE(258), 1,
      sym_comment,
    STATE(330), 1,
      aux_sym__friendly_number,
    STATE(345), 1,
      sym_integer,
    STATE(442), 1,
      sym_literal,
    ACTIONS(953), 2,
      sym__natural_number,
      anon_sym__,
    STATE(365), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(368), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(931), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15112] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(259), 1,
      sym_comment,
    ACTIONS(251), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(249), 11,
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
  [15142] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(955), 1,
      sym__natural_number,
    ACTIONS(958), 1,
      anon_sym__,
    STATE(260), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(202), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym__identifier,
    ACTIONS(200), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15176] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(297), 1,
      anon_sym_DASH,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(134), 1,
      sym_integer,
    STATE(138), 1,
      sym_literal,
    STATE(261), 1,
      sym_comment,
    ACTIONS(91), 2,
      sym__natural_number,
      anon_sym__,
    STATE(135), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(139), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(961), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15224] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(262), 1,
      sym_comment,
    ACTIONS(585), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(583), 10,
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
  [15253] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    STATE(263), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(963), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15294] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(264), 1,
      sym_comment,
    ACTIONS(255), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(253), 10,
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
  [15323] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(265), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(965), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(408), 11,
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
  [15354] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(266), 1,
      sym_comment,
    ACTIONS(545), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(543), 10,
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
  [15383] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(267), 1,
      sym_comment,
    ACTIONS(418), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(416), 10,
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
  [15412] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(268), 1,
      sym_comment,
    ACTIONS(593), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(591), 10,
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
  [15441] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(269), 1,
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
  [15470] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(270), 1,
      sym_comment,
    ACTIONS(414), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(412), 10,
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
  [15499] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(271), 1,
      sym_comment,
    ACTIONS(344), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(342), 10,
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
  [15528] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(272), 1,
      sym_comment,
    ACTIONS(332), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(330), 10,
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
  [15557] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(273), 1,
      sym_comment,
    ACTIONS(370), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(368), 10,
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
  [15586] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(274), 1,
      sym_comment,
    ACTIONS(332), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(330), 10,
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
  [15615] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    STATE(275), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(967), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15656] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(969), 1,
      anon_sym_EQ_GT,
    STATE(276), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 11,
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
  [15686] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(277), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 12,
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
  [15714] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(847), 1,
      anon_sym_EQ,
    STATE(278), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15754] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 11,
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
  [15784] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    STATE(280), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15822] = 14,
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
    ACTIONS(973), 1,
      ts_builtin_sym_end,
    STATE(281), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym_program_repeat2,
    STATE(310), 1,
      aux_sym_program_repeat1,
    STATE(320), 1,
      sym_prql,
    STATE(121), 2,
      sym_from_text,
      sym_from,
    STATE(346), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15868] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    STATE(282), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 3,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15904] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    ACTIONS(977), 1,
      anon_sym_AMP_AMP,
    ACTIONS(979), 1,
      anon_sym_PIPE_PIPE,
    STATE(283), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15944] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 11,
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
  [15974] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    ACTIONS(977), 1,
      anon_sym_AMP_AMP,
    ACTIONS(979), 1,
      anon_sym_PIPE_PIPE,
    STATE(285), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16014] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(983), 1,
      anon_sym_EQ_GT,
    STATE(286), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 11,
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
  [16044] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 11,
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
  [16074] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    STATE(288), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16111] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(977), 1,
      anon_sym_AMP_AMP,
    ACTIONS(979), 1,
      anon_sym_PIPE_PIPE,
    STATE(289), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(434), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16148] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(290), 1,
      sym_comment,
    STATE(318), 1,
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
  [16174] = 10,
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
    STATE(121), 2,
      sym_from_text,
      sym_from,
    STATE(291), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(346), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16209] = 11,
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
    STATE(291), 1,
      aux_sym_program_repeat2,
    STATE(292), 1,
      sym_comment,
    STATE(121), 2,
      sym_from_text,
      sym_from,
    STATE(346), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16246] = 11,
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
    ACTIONS(973), 1,
      ts_builtin_sym_end,
    STATE(291), 1,
      aux_sym_program_repeat2,
    STATE(293), 1,
      sym_comment,
    STATE(121), 2,
      sym_from_text,
      sym_from,
    STATE(346), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16283] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      sym_comment,
    STATE(299), 1,
      aux_sym_group_repeat2,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16317] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      sym_comment,
    STATE(299), 1,
      aux_sym_group_repeat2,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16351] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      sym_comment,
    STATE(299), 1,
      aux_sym_group_repeat2,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16385] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      sym_comment,
    STATE(299), 1,
      aux_sym_group_repeat2,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16419] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(298), 1,
      sym_comment,
    STATE(299), 1,
      aux_sym_group_repeat2,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16453] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1017), 1,
      sym_keyword_aggregate,
    ACTIONS(1020), 1,
      sym_keyword_sort,
    ACTIONS(1023), 1,
      sym_keyword_take,
    ACTIONS(1026), 1,
      sym_keyword_window,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(299), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16485] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    STATE(297), 1,
      aux_sym_group_repeat2,
    STATE(300), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16516] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    STATE(296), 1,
      aux_sym_group_repeat2,
    STATE(301), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16547] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    STATE(295), 1,
      aux_sym_group_repeat2,
    STATE(302), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16578] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    STATE(294), 1,
      aux_sym_group_repeat2,
    STATE(303), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16609] = 11,
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
    STATE(179), 1,
      sym_identifier,
    STATE(304), 1,
      sym_comment,
    STATE(399), 1,
      sym__sort_instruction,
    STATE(403), 1,
      sym_direction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16644] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_aggregate,
    ACTIONS(527), 1,
      sym_keyword_sort,
    ACTIONS(529), 1,
      sym_keyword_take,
    ACTIONS(1005), 1,
      sym_keyword_window,
    STATE(298), 1,
      aux_sym_group_repeat2,
    STATE(305), 1,
      sym_comment,
    STATE(339), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16675] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    ACTIONS(1039), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_identifier,
    STATE(306), 1,
      sym_comment,
    STATE(403), 1,
      sym_direction,
    STATE(408), 1,
      sym__sort_instruction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16707] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1041), 1,
      anon_sym_DASH,
    ACTIONS(1043), 1,
      anon_sym_AT,
    STATE(141), 1,
      aux_sym__friendly_number,
    STATE(307), 1,
      sym_comment,
    STATE(338), 1,
      sym_integer,
    STATE(353), 1,
      sym_range,
    STATE(429), 1,
      sym_date,
    ACTIONS(595), 2,
      sym__natural_number,
      anon_sym__,
  [16739] = 10,
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
    STATE(179), 1,
      sym_identifier,
    STATE(308), 1,
      sym_comment,
    STATE(403), 1,
      sym_direction,
    STATE(408), 1,
      sym__sort_instruction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16771] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    ACTIONS(1047), 1,
      anon_sym_LBRACK,
    STATE(179), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sort_instruction,
    STATE(309), 1,
      sym_comment,
    STATE(403), 1,
      sym_direction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16803] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1051), 1,
      sym_keyword_from,
    ACTIONS(1053), 1,
      sym_keyword_prql,
    STATE(320), 1,
      sym_prql,
    STATE(310), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1049), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [16829] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1041), 1,
      anon_sym_DASH,
    ACTIONS(1043), 1,
      anon_sym_AT,
    STATE(141), 1,
      aux_sym__friendly_number,
    STATE(188), 1,
      sym_integer,
    STATE(205), 1,
      sym_range,
    STATE(311), 1,
      sym_comment,
    STATE(429), 1,
      sym_date,
    ACTIONS(595), 2,
      sym__natural_number,
      anon_sym__,
  [16861] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(233), 1,
      sym__identifier,
    ACTIONS(939), 1,
      sym__natural_number,
    ACTIONS(1056), 1,
      anon_sym__,
    STATE(312), 1,
      sym_comment,
    STATE(314), 1,
      aux_sym__friendly_number,
    ACTIONS(231), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16888] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1058), 1,
      sym_keyword_side,
    ACTIONS(1060), 1,
      sym__identifier,
    STATE(181), 1,
      sym__table_selection,
    STATE(189), 1,
      sym_identifier,
    STATE(201), 1,
      sym__table_reference,
    STATE(313), 1,
      sym_comment,
    STATE(335), 1,
      sym__join_definition,
  [16919] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(202), 1,
      sym__identifier,
    ACTIONS(1062), 1,
      sym__natural_number,
    ACTIONS(1065), 1,
      anon_sym__,
    STATE(314), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16944] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(939), 1,
      sym__natural_number,
    ACTIONS(1056), 1,
      anon_sym__,
    STATE(314), 1,
      aux_sym__friendly_number,
    STATE(315), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16971] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(350), 1,
      sym_keyword_from,
    STATE(316), 1,
      sym_comment,
    ACTIONS(348), 6,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
      anon_sym_COMMA,
  [16992] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(179), 1,
      sym_identifier,
    STATE(317), 1,
      sym_comment,
    STATE(403), 1,
      sym_direction,
    STATE(408), 1,
      sym__sort_instruction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [17021] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1070), 1,
      sym_keyword_from,
    STATE(318), 1,
      sym_comment,
    ACTIONS(1068), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17041] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(319), 1,
      sym_comment,
    STATE(321), 1,
      aux_sym_window_definitions_repeat1,
    STATE(352), 1,
      sym__window_definition,
    STATE(517), 1,
      sym_window_definitions,
    ACTIONS(1072), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17065] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1076), 1,
      sym_keyword_from,
    STATE(320), 1,
      sym_comment,
    ACTIONS(1074), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17085] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_window_definitions_repeat1,
    STATE(352), 1,
      sym__window_definition,
    ACTIONS(1072), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17109] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1082), 1,
      sym_keyword_from,
    STATE(322), 1,
      sym_comment,
    ACTIONS(1080), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [17129] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1084), 1,
      anon_sym_DASH_GT,
    ACTIONS(1086), 1,
      anon_sym_BQUOTE,
    ACTIONS(1088), 1,
      sym__identifier,
    STATE(323), 1,
      sym_comment,
    STATE(328), 1,
      aux_sym_function_definition_repeat1,
    STATE(366), 1,
      sym_identifier,
    STATE(376), 1,
      sym_parameter,
  [17157] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(324), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym__,
      sym__identifier,
    ACTIONS(253), 4,
      anon_sym_DASH_GT,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [17177] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1093), 1,
      anon_sym_LPAREN,
    STATE(352), 1,
      sym__window_definition,
    STATE(325), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1090), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17199] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1097), 1,
      sym_keyword_from,
    STATE(326), 1,
      sym_comment,
    ACTIONS(1095), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17219] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1101), 1,
      sym_keyword_from,
    STATE(327), 1,
      sym_comment,
    ACTIONS(1099), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17239] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1103), 1,
      anon_sym_DASH_GT,
    ACTIONS(1105), 1,
      anon_sym_BQUOTE,
    ACTIONS(1108), 1,
      sym__identifier,
    STATE(366), 1,
      sym_identifier,
    STATE(376), 1,
      sym_parameter,
    STATE(328), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [17265] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(329), 1,
      sym_comment,
    ACTIONS(1111), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [17282] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(330), 1,
      sym_comment,
    STATE(347), 1,
      aux_sym__friendly_number,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(953), 2,
      sym__natural_number,
      anon_sym__,
  [17303] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1115), 1,
      sym_keyword_from,
    STATE(331), 1,
      sym_comment,
    ACTIONS(1113), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17322] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1086), 1,
      anon_sym_BQUOTE,
    ACTIONS(1088), 1,
      sym__identifier,
    STATE(323), 1,
      aux_sym_function_definition_repeat1,
    STATE(332), 1,
      sym_comment,
    STATE(366), 1,
      sym_identifier,
    STATE(376), 1,
      sym_parameter,
  [17347] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1117), 1,
      anon_sym_DASH,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(84), 1,
      sym_integer,
    STATE(333), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [17370] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(334), 1,
      sym_comment,
    STATE(454), 1,
      sym_pipeline,
    STATE(153), 2,
      sym_from_text,
      sym_from,
  [17393] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(175), 1,
      sym__table_selection,
    STATE(189), 1,
      sym_identifier,
    STATE(201), 1,
      sym__table_reference,
    STATE(335), 1,
      sym_comment,
  [17418] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1117), 1,
      anon_sym_DASH,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(81), 1,
      sym_integer,
    STATE(336), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [17441] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1117), 1,
      anon_sym_DASH,
    STATE(36), 1,
      aux_sym__friendly_number,
    STATE(83), 1,
      sym_integer,
    STATE(337), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [17464] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(707), 1,
      anon_sym_DOT_DOT,
    STATE(338), 1,
      sym_comment,
    ACTIONS(1119), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17483] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(339), 1,
      sym_comment,
    ACTIONS(1121), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [17500] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1123), 1,
      sym__natural_number,
    STATE(340), 1,
      sym_comment,
    ACTIONS(342), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [17519] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1041), 1,
      anon_sym_DASH,
    STATE(141), 1,
      aux_sym__friendly_number,
    STATE(173), 1,
      sym_integer,
    STATE(341), 1,
      sym_comment,
    ACTIONS(595), 2,
      sym__natural_number,
      anon_sym__,
  [17542] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(189), 1,
      sym_identifier,
    STATE(201), 1,
      sym__table_reference,
    STATE(238), 1,
      sym__table_selection,
    STATE(342), 1,
      sym_comment,
  [17567] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1127), 1,
      sym_keyword_from,
    STATE(343), 1,
      sym_comment,
    ACTIONS(1125), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17586] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(344), 1,
      sym_comment,
    STATE(347), 1,
      aux_sym__friendly_number,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(953), 2,
      sym__natural_number,
      anon_sym__,
  [17607] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1129), 1,
      anon_sym_DOT,
    STATE(345), 1,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [17626] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1133), 1,
      sym_keyword_from,
    STATE(346), 1,
      sym_comment,
    ACTIONS(1131), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17645] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(1135), 2,
      sym__natural_number,
      anon_sym__,
    STATE(347), 2,
      aux_sym__friendly_number,
      sym_comment,
  [17664] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(189), 1,
      sym_identifier,
    STATE(201), 1,
      sym__table_reference,
    STATE(241), 1,
      sym__table_selection,
    STATE(348), 1,
      sym_comment,
  [17689] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(349), 1,
      sym_comment,
    ACTIONS(245), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17705] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(196), 1,
      sym_identifier,
    STATE(198), 1,
      sym__table_reference,
    STATE(350), 1,
      sym_comment,
  [17727] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1138), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym__friendly_number,
    STATE(351), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [17747] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(352), 1,
      sym_comment,
    ACTIONS(1140), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17763] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(353), 1,
      sym_comment,
    ACTIONS(1119), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17779] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1142), 1,
      aux_sym__date_token1,
    ACTIONS(1144), 1,
      aux_sym__time_token1,
    STATE(85), 1,
      sym__date,
    STATE(109), 1,
      sym__time,
    STATE(354), 1,
      sym_comment,
  [17801] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1146), 1,
      anon_sym_DOT,
    STATE(344), 1,
      aux_sym__friendly_number,
    STATE(355), 1,
      sym_comment,
    ACTIONS(953), 2,
      sym__natural_number,
      anon_sym__,
  [17821] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1148), 1,
      anon_sym_DOT,
    STATE(152), 1,
      aux_sym__friendly_number,
    STATE(356), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym__natural_number,
      anon_sym__,
  [17841] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1150), 1,
      anon_sym_DOT,
    STATE(256), 1,
      aux_sym__friendly_number,
    STATE(357), 1,
      sym_comment,
    ACTIONS(358), 2,
      sym__natural_number,
      anon_sym__,
  [17861] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(358), 1,
      sym_comment,
    ACTIONS(1152), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [17877] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(359), 1,
      sym_comment,
    ACTIONS(416), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [17893] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(360), 1,
      sym_comment,
    ACTIONS(412), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [17909] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1154), 1,
      anon_sym_DOT,
    STATE(124), 1,
      aux_sym__friendly_number,
    STATE(361), 1,
      sym_comment,
    ACTIONS(91), 2,
      sym__natural_number,
      anon_sym__,
  [17929] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(362), 1,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_COMMA,
      sym__natural_number,
      anon_sym__,
      anon_sym_DOT,
  [17945] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(363), 1,
      sym_comment,
    ACTIONS(342), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [17961] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(364), 1,
      sym_comment,
    ACTIONS(249), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17977] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(365), 1,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [17993] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1156), 1,
      anon_sym_COLON,
    STATE(366), 1,
      sym_comment,
    ACTIONS(1158), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18011] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1146), 1,
      anon_sym_DOT,
    STATE(315), 1,
      aux_sym__friendly_number,
    STATE(367), 1,
      sym_comment,
    ACTIONS(939), 2,
      sym__natural_number,
      anon_sym__,
  [18031] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(368), 1,
      sym_comment,
    ACTIONS(368), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
      sym__identifier,
  [18047] = 5,
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
      aux_sym_derives_repeat1,
  [18064] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_RBRACK,
    STATE(370), 1,
      sym_comment,
    STATE(379), 1,
      aux_sym_derives_repeat1,
  [18083] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    STATE(371), 2,
      sym_comment,
      aux_sym_case_repeat2,
  [18100] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1172), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1174), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    STATE(372), 1,
      sym_comment,
    STATE(384), 1,
      aux_sym__inner_triple_quotes,
  [18119] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_case_repeat2,
    STATE(373), 1,
      sym_comment,
  [18138] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_BQUOTE,
    ACTIONS(1037), 1,
      sym__identifier,
    STATE(374), 1,
      sym_comment,
    STATE(460), 1,
      sym_identifier,
  [18157] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1172), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1180), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(375), 1,
      sym_comment,
    STATE(384), 1,
      aux_sym__inner_triple_quotes,
  [18176] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(376), 1,
      sym_comment,
    ACTIONS(1182), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18191] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1172), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1184), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(377), 1,
      sym_comment,
    STATE(384), 1,
      aux_sym__inner_triple_quotes,
  [18210] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1186), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_from_text,
    STATE(378), 1,
      sym_comment,
  [18229] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_derives_repeat1,
    STATE(379), 1,
      sym_comment,
  [18248] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    ACTIONS(1190), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      sym_comment,
    STATE(390), 1,
      aux_sym_group_repeat1,
  [18267] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(38), 1,
      aux_sym__friendly_number,
    STATE(381), 1,
      sym_comment,
    ACTIONS(49), 2,
      sym__natural_number,
      anon_sym__,
  [18284] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1192), 1,
      anon_sym_COMMA,
    ACTIONS(1194), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_derives_repeat1,
    STATE(382), 1,
      sym_comment,
  [18303] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_aggregate_repeat1,
  [18322] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1198), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1201), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(384), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [18339] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(921), 1,
      anon_sym_COMMA,
    ACTIONS(923), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_aggregate_repeat1,
    STATE(385), 1,
      sym_comment,
  [18358] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
    ACTIONS(1205), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      aux_sym_group_repeat1,
    STATE(386), 1,
      sym_comment,
  [18377] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(1207), 1,
      sym__identifier,
    STATE(108), 1,
      sym_identifier,
    STATE(387), 1,
      sym_comment,
  [18396] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(388), 1,
      sym_comment,
    ACTIONS(1209), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18411] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1039), 1,
      anon_sym_RBRACK,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    STATE(389), 1,
      sym_comment,
    STATE(398), 1,
      aux_sym_sorts_repeat1,
  [18430] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    ACTIONS(1216), 1,
      anon_sym_RBRACK,
    STATE(390), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [18447] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_group_repeat1,
    STATE(391), 1,
      sym_comment,
  [18466] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1220), 1,
      sym_keyword_format,
    ACTIONS(1222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(217), 1,
      sym__triple_quote_string,
    STATE(392), 1,
      sym_comment,
  [18485] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    ACTIONS(1224), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      sym_comment,
    STATE(395), 1,
      aux_sym_group_repeat1,
  [18504] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    ACTIONS(1226), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      sym_comment,
    STATE(396), 1,
      aux_sym_conditions_repeat1,
  [18523] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    STATE(390), 1,
      aux_sym_group_repeat1,
    STATE(395), 1,
      sym_comment,
  [18542] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(965), 1,
      anon_sym_RBRACK,
    ACTIONS(1230), 1,
      anon_sym_COMMA,
    STATE(396), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [18559] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1086), 1,
      anon_sym_BQUOTE,
    ACTIONS(1088), 1,
      sym__identifier,
    STATE(332), 1,
      sym_identifier,
    STATE(397), 1,
      sym_comment,
  [18578] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1233), 1,
      anon_sym_COMMA,
    ACTIONS(1236), 1,
      anon_sym_RBRACK,
    STATE(398), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [18595] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1238), 1,
      anon_sym_COMMA,
    ACTIONS(1240), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_sorts_repeat1,
    STATE(399), 1,
      sym_comment,
  [18614] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(400), 1,
      sym_comment,
    ACTIONS(348), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18629] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(144), 1,
      aux_sym__friendly_number,
    STATE(401), 1,
      sym_comment,
    ACTIONS(595), 2,
      sym__natural_number,
      anon_sym__,
  [18646] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_group_repeat1,
    STATE(402), 1,
      sym_comment,
  [18665] = 6,
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
    STATE(403), 1,
      sym_comment,
  [18684] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(929), 1,
      anon_sym_RBRACK,
    ACTIONS(1242), 1,
      anon_sym_COMMA,
    STATE(404), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [18701] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(405), 1,
      sym_comment,
    ACTIONS(1245), 3,
      anon_sym_BQUOTE,
      sym__identifier,
      aux_sym__date_token2,
  [18716] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1247), 1,
      aux_sym__date_token1,
    STATE(156), 1,
      sym__date,
    STATE(406), 1,
      sym_comment,
  [18732] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(407), 1,
      sym_comment,
    ACTIONS(929), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18746] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(408), 1,
      sym_comment,
    ACTIONS(1236), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18760] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1172), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    STATE(372), 1,
      aux_sym__inner_triple_quotes,
    STATE(409), 1,
      sym_comment,
  [18776] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1172), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    STATE(375), 1,
      aux_sym__inner_triple_quotes,
    STATE(410), 1,
      sym_comment,
  [18792] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1043), 1,
      anon_sym_AT,
    STATE(173), 1,
      sym_date,
    STATE(411), 1,
      sym_comment,
  [18808] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(412), 1,
      sym_comment,
    ACTIONS(1249), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [18822] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1172), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    STATE(377), 1,
      aux_sym__inner_triple_quotes,
    STATE(413), 1,
      sym_comment,
  [18838] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1222), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(207), 1,
      sym__triple_quote_string,
    STATE(414), 1,
      sym_comment,
  [18854] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1251), 1,
      sym_keyword_derive,
    STATE(415), 1,
      sym_comment,
    STATE(448), 1,
      sym_derives,
  [18870] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1253), 1,
      sym_keyword_version,
    ACTIONS(1255), 1,
      sym_keyword_target,
    STATE(416), 1,
      sym_comment,
  [18886] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    STATE(417), 1,
      sym_comment,
    ACTIONS(1257), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [18900] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(418), 1,
      sym_comment,
    ACTIONS(1216), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18914] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(419), 1,
      sym_comment,
    ACTIONS(1259), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [18928] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1261), 1,
      aux_sym__time_token1,
    STATE(50), 1,
      sym__time,
    STATE(420), 1,
      sym_comment,
  [18944] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(421), 1,
      sym_comment,
    ACTIONS(1163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18958] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(951), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      sym__double_quote_string,
    STATE(422), 1,
      sym_comment,
  [18974] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1263), 1,
      aux_sym__date_token2,
    STATE(423), 1,
      sym_comment,
  [18987] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1265), 1,
      anon_sym_DOT,
    STATE(424), 1,
      sym_comment,
  [19000] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1267), 1,
      anon_sym_COLON,
    STATE(425), 1,
      sym_comment,
  [19013] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1269), 1,
      sym__natural_number,
    STATE(426), 1,
      sym_comment,
  [19026] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1271), 1,
      aux_sym_comment_token1,
    STATE(427), 1,
      sym_comment,
  [19039] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1273), 1,
      aux_sym__double_quote_string_token1,
    STATE(428), 1,
      sym_comment,
  [19052] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1275), 1,
      anon_sym_DOT_DOT,
    STATE(429), 1,
      sym_comment,
  [19065] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1277), 1,
      aux_sym__double_quote_string_token1,
    STATE(430), 1,
      sym_comment,
  [19078] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1279), 1,
      anon_sym_LBRACK,
    STATE(431), 1,
      sym_comment,
  [19091] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1281), 1,
      aux_sym__single_quote_string_token1,
    STATE(432), 1,
      sym_comment,
  [19104] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1283), 1,
      anon_sym_LPAREN,
    STATE(433), 1,
      sym_comment,
  [19117] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1285), 1,
      aux_sym__double_quote_string_token1,
    STATE(434), 1,
      sym_comment,
  [19130] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
    STATE(435), 1,
      sym_comment,
  [19143] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(346), 1,
      sym__natural_number,
    STATE(436), 1,
      sym_comment,
  [19156] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1289), 1,
      anon_sym_DQUOTE,
    STATE(437), 1,
      sym_comment,
  [19169] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1291), 1,
      anon_sym_SQUOTE,
    STATE(438), 1,
      sym_comment,
  [19182] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1293), 1,
      anon_sym_DQUOTE,
    STATE(439), 1,
      sym_comment,
  [19195] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1295), 1,
      anon_sym_BQUOTE,
    STATE(440), 1,
      sym_comment,
  [19208] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1297), 1,
      anon_sym_DQUOTE,
    STATE(441), 1,
      sym_comment,
  [19221] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    STATE(442), 1,
      sym_comment,
  [19234] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1301), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      sym_comment,
  [19247] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1167), 1,
      anon_sym_RBRACK,
    STATE(444), 1,
      sym_comment,
  [19260] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1205), 1,
      anon_sym_RBRACK,
    STATE(445), 1,
      sym_comment,
  [19273] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1303), 1,
      anon_sym_LPAREN,
    STATE(446), 1,
      sym_comment,
  [19286] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1305), 1,
      anon_sym_LPAREN,
    STATE(447), 1,
      sym_comment,
  [19299] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      sym_comment,
  [19312] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(923), 1,
      anon_sym_RBRACK,
    STATE(449), 1,
      sym_comment,
  [19325] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1240), 1,
      anon_sym_RBRACK,
    STATE(450), 1,
      sym_comment,
  [19338] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_LBRACK,
    STATE(451), 1,
      sym_comment,
  [19351] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(452), 1,
      sym_comment,
  [19364] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      sym_comment,
  [19377] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
    STATE(454), 1,
      sym_comment,
  [19390] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1315), 1,
      anon_sym_COLON,
    STATE(455), 1,
      sym_comment,
  [19403] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1317), 1,
      aux_sym__date_token2,
    STATE(456), 1,
      sym_comment,
  [19416] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
    STATE(457), 1,
      sym_comment,
  [19429] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1321), 1,
      anon_sym_COLON,
    STATE(458), 1,
      sym_comment,
  [19442] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1323), 1,
      anon_sym_COLON,
    STATE(459), 1,
      sym_comment,
  [19455] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1325), 1,
      anon_sym_EQ,
    STATE(460), 1,
      sym_comment,
  [19468] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1327), 1,
      anon_sym_LBRACK,
    STATE(461), 1,
      sym_comment,
  [19481] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1329), 1,
      anon_sym_BQUOTE,
    STATE(462), 1,
      sym_comment,
  [19494] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1331), 1,
      anon_sym_LPAREN,
    STATE(463), 1,
      sym_comment,
  [19507] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1333), 1,
      sym__natural_number,
    STATE(464), 1,
      sym_comment,
  [19520] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1123), 1,
      sym__natural_number,
    STATE(465), 1,
      sym_comment,
  [19533] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1335), 1,
      anon_sym_DQUOTE,
    STATE(466), 1,
      sym_comment,
  [19546] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1337), 1,
      anon_sym_SQUOTE,
    STATE(467), 1,
      sym_comment,
  [19559] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1339), 1,
      sym__identifier_dot,
    STATE(468), 1,
      sym_comment,
  [19572] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1341), 1,
      aux_sym__date_token2,
    STATE(469), 1,
      sym_comment,
  [19585] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1343), 1,
      anon_sym_BQUOTE,
    STATE(470), 1,
      sym_comment,
  [19598] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(471), 1,
      sym_comment,
  [19611] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1345), 1,
      sym__natural_number,
    STATE(472), 1,
      sym_comment,
  [19624] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1347), 1,
      sym__natural_number,
    STATE(473), 1,
      sym_comment,
  [19637] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1349), 1,
      anon_sym_DQUOTE,
    STATE(474), 1,
      sym_comment,
  [19650] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1351), 1,
      anon_sym_SQUOTE,
    STATE(475), 1,
      sym_comment,
  [19663] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1353), 1,
      aux_sym__date_token2,
    STATE(476), 1,
      sym_comment,
  [19676] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1355), 1,
      aux_sym__date_token2,
    STATE(477), 1,
      sym_comment,
  [19689] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1357), 1,
      anon_sym_BQUOTE,
    STATE(478), 1,
      sym_comment,
  [19702] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1359), 1,
      aux_sym__date_token2,
    STATE(479), 1,
      sym_comment,
  [19715] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1361), 1,
      sym__natural_number,
    STATE(480), 1,
      sym_comment,
  [19728] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1363), 1,
      sym__natural_number,
    STATE(481), 1,
      sym_comment,
  [19741] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1365), 1,
      anon_sym_DQUOTE,
    STATE(482), 1,
      sym_comment,
  [19754] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1367), 1,
      anon_sym_SQUOTE,
    STATE(483), 1,
      sym_comment,
  [19767] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1369), 1,
      anon_sym_BQUOTE,
    STATE(484), 1,
      sym_comment,
  [19780] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(927), 1,
      anon_sym_RBRACK,
    STATE(485), 1,
      sym_comment,
  [19793] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1371), 1,
      sym__natural_number,
    STATE(486), 1,
      sym_comment,
  [19806] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1373), 1,
      sym__natural_number,
    STATE(487), 1,
      sym_comment,
  [19819] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1375), 1,
      anon_sym_DQUOTE,
    STATE(488), 1,
      sym_comment,
  [19832] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1377), 1,
      anon_sym_SQUOTE,
    STATE(489), 1,
      sym_comment,
  [19845] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1379), 1,
      anon_sym_BQUOTE,
    STATE(490), 1,
      sym_comment,
  [19858] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1381), 1,
      anon_sym_RBRACK,
    STATE(491), 1,
      sym_comment,
  [19871] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1383), 1,
      anon_sym_DQUOTE,
    STATE(492), 1,
      sym_comment,
  [19884] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1385), 1,
      anon_sym_BQUOTE,
    STATE(493), 1,
      sym_comment,
  [19897] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1387), 1,
      anon_sym_BQUOTE,
    STATE(494), 1,
      sym_comment,
  [19910] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1389), 1,
      anon_sym_BQUOTE,
    STATE(495), 1,
      sym_comment,
  [19923] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1391), 1,
      sym__identifier_dot,
    STATE(496), 1,
      sym_comment,
  [19936] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1393), 1,
      aux_sym__double_quote_string_token1,
    STATE(497), 1,
      sym_comment,
  [19949] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1395), 1,
      aux_sym__single_quote_string_token1,
    STATE(498), 1,
      sym_comment,
  [19962] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(499), 1,
      sym_comment,
  [19975] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1397), 1,
      anon_sym_DASH,
    STATE(500), 1,
      sym_comment,
  [19988] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1399), 1,
      sym__identifier_dot,
    STATE(501), 1,
      sym_comment,
  [20001] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1401), 1,
      aux_sym__double_quote_string_token1,
    STATE(502), 1,
      sym_comment,
  [20014] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1403), 1,
      aux_sym__single_quote_string_token1,
    STATE(503), 1,
      sym_comment,
  [20027] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1405), 1,
      anon_sym_DASH,
    STATE(504), 1,
      sym_comment,
  [20040] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1407), 1,
      sym__identifier_dot,
    STATE(505), 1,
      sym_comment,
  [20053] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1409), 1,
      aux_sym__double_quote_string_token1,
    STATE(506), 1,
      sym_comment,
  [20066] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1411), 1,
      aux_sym__single_quote_string_token1,
    STATE(507), 1,
      sym_comment,
  [20079] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1413), 1,
      sym__identifier_dot,
    STATE(508), 1,
      sym_comment,
  [20092] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1415), 1,
      aux_sym__double_quote_string_token1,
    STATE(509), 1,
      sym_comment,
  [20105] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1417), 1,
      aux_sym__single_quote_string_token1,
    STATE(510), 1,
      sym_comment,
  [20118] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1419), 1,
      sym__identifier_dot,
    STATE(511), 1,
      sym_comment,
  [20131] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_POUND,
    ACTIONS(1421), 1,
      aux_sym__double_quote_string_token1,
    STATE(512), 1,
      sym_comment,
  [20144] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1423), 1,
      sym__identifier_dot,
    STATE(513), 1,
      sym_comment,
  [20157] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1425), 1,
      sym__identifier_dot,
    STATE(514), 1,
      sym_comment,
  [20170] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1427), 1,
      sym__identifier_dot,
    STATE(515), 1,
      sym_comment,
  [20183] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1429), 1,
      ts_builtin_sym_end,
    STATE(516), 1,
      sym_comment,
  [20196] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1431), 1,
      anon_sym_LPAREN,
    STATE(517), 1,
      sym_comment,
  [20209] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1433), 1,
      anon_sym_COLON,
    STATE(518), 1,
      sym_comment,
  [20222] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1435), 1,
      anon_sym_DASH,
    STATE(519), 1,
      sym_comment,
  [20235] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1437), 1,
      aux_sym__date_token2,
    STATE(520), 1,
      sym_comment,
  [20248] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1439), 1,
      anon_sym_LPAREN,
    STATE(521), 1,
      sym_comment,
  [20261] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1441), 1,
      anon_sym_RPAREN,
    STATE(522), 1,
      sym_comment,
  [20274] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1443), 1,
      anon_sym_DASH,
    STATE(523), 1,
      sym_comment,
  [20287] = 1,
    ACTIONS(1445), 1,
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
  [SMALL_STATE(10)] = 974,
  [SMALL_STATE(11)] = 1094,
  [SMALL_STATE(12)] = 1186,
  [SMALL_STATE(13)] = 1305,
  [SMALL_STATE(14)] = 1417,
  [SMALL_STATE(15)] = 1529,
  [SMALL_STATE(16)] = 1643,
  [SMALL_STATE(17)] = 1755,
  [SMALL_STATE(18)] = 1871,
  [SMALL_STATE(19)] = 1983,
  [SMALL_STATE(20)] = 2095,
  [SMALL_STATE(21)] = 2207,
  [SMALL_STATE(22)] = 2319,
  [SMALL_STATE(23)] = 2432,
  [SMALL_STATE(24)] = 2541,
  [SMALL_STATE(25)] = 2598,
  [SMALL_STATE(26)] = 2707,
  [SMALL_STATE(27)] = 2816,
  [SMALL_STATE(28)] = 2925,
  [SMALL_STATE(29)] = 3034,
  [SMALL_STATE(30)] = 3143,
  [SMALL_STATE(31)] = 3252,
  [SMALL_STATE(32)] = 3361,
  [SMALL_STATE(33)] = 3474,
  [SMALL_STATE(34)] = 3583,
  [SMALL_STATE(35)] = 3694,
  [SMALL_STATE(36)] = 3803,
  [SMALL_STATE(37)] = 3862,
  [SMALL_STATE(38)] = 3971,
  [SMALL_STATE(39)] = 4030,
  [SMALL_STATE(40)] = 4139,
  [SMALL_STATE(41)] = 4249,
  [SMALL_STATE(42)] = 4355,
  [SMALL_STATE(43)] = 4461,
  [SMALL_STATE(44)] = 4565,
  [SMALL_STATE(45)] = 4669,
  [SMALL_STATE(46)] = 4723,
  [SMALL_STATE(47)] = 4829,
  [SMALL_STATE(48)] = 4883,
  [SMALL_STATE(49)] = 4937,
  [SMALL_STATE(50)] = 4994,
  [SMALL_STATE(51)] = 5055,
  [SMALL_STATE(52)] = 5160,
  [SMALL_STATE(53)] = 5265,
  [SMALL_STATE(54)] = 5368,
  [SMALL_STATE(55)] = 5425,
  [SMALL_STATE(56)] = 5479,
  [SMALL_STATE(57)] = 5581,
  [SMALL_STATE(58)] = 5683,
  [SMALL_STATE(59)] = 5783,
  [SMALL_STATE(60)] = 5883,
  [SMALL_STATE(61)] = 5983,
  [SMALL_STATE(62)] = 6083,
  [SMALL_STATE(63)] = 6183,
  [SMALL_STATE(64)] = 6285,
  [SMALL_STATE(65)] = 6385,
  [SMALL_STATE(66)] = 6485,
  [SMALL_STATE(67)] = 6587,
  [SMALL_STATE(68)] = 6689,
  [SMALL_STATE(69)] = 6775,
  [SMALL_STATE(70)] = 6875,
  [SMALL_STATE(71)] = 6977,
  [SMALL_STATE(72)] = 7061,
  [SMALL_STATE(73)] = 7161,
  [SMALL_STATE(74)] = 7261,
  [SMALL_STATE(75)] = 7314,
  [SMALL_STATE(76)] = 7365,
  [SMALL_STATE(77)] = 7418,
  [SMALL_STATE(78)] = 7471,
  [SMALL_STATE(79)] = 7522,
  [SMALL_STATE(80)] = 7605,
  [SMALL_STATE(81)] = 7656,
  [SMALL_STATE(82)] = 7707,
  [SMALL_STATE(83)] = 7760,
  [SMALL_STATE(84)] = 7811,
  [SMALL_STATE(85)] = 7862,
  [SMALL_STATE(86)] = 7915,
  [SMALL_STATE(87)] = 7966,
  [SMALL_STATE(88)] = 8016,
  [SMALL_STATE(89)] = 8066,
  [SMALL_STATE(90)] = 8116,
  [SMALL_STATE(91)] = 8166,
  [SMALL_STATE(92)] = 8216,
  [SMALL_STATE(93)] = 8266,
  [SMALL_STATE(94)] = 8316,
  [SMALL_STATE(95)] = 8366,
  [SMALL_STATE(96)] = 8416,
  [SMALL_STATE(97)] = 8466,
  [SMALL_STATE(98)] = 8516,
  [SMALL_STATE(99)] = 8566,
  [SMALL_STATE(100)] = 8616,
  [SMALL_STATE(101)] = 8666,
  [SMALL_STATE(102)] = 8716,
  [SMALL_STATE(103)] = 8770,
  [SMALL_STATE(104)] = 8822,
  [SMALL_STATE(105)] = 8872,
  [SMALL_STATE(106)] = 8930,
  [SMALL_STATE(107)] = 8990,
  [SMALL_STATE(108)] = 9052,
  [SMALL_STATE(109)] = 9102,
  [SMALL_STATE(110)] = 9152,
  [SMALL_STATE(111)] = 9202,
  [SMALL_STATE(112)] = 9252,
  [SMALL_STATE(113)] = 9302,
  [SMALL_STATE(114)] = 9364,
  [SMALL_STATE(115)] = 9444,
  [SMALL_STATE(116)] = 9526,
  [SMALL_STATE(117)] = 9588,
  [SMALL_STATE(118)] = 9647,
  [SMALL_STATE(119)] = 9708,
  [SMALL_STATE(120)] = 9755,
  [SMALL_STATE(121)] = 9798,
  [SMALL_STATE(122)] = 9867,
  [SMALL_STATE(123)] = 9936,
  [SMALL_STATE(124)] = 9981,
  [SMALL_STATE(125)] = 10026,
  [SMALL_STATE(126)] = 10071,
  [SMALL_STATE(127)] = 10114,
  [SMALL_STATE(128)] = 10178,
  [SMALL_STATE(129)] = 10220,
  [SMALL_STATE(130)] = 10286,
  [SMALL_STATE(131)] = 10328,
  [SMALL_STATE(132)] = 10370,
  [SMALL_STATE(133)] = 10412,
  [SMALL_STATE(134)] = 10454,
  [SMALL_STATE(135)] = 10496,
  [SMALL_STATE(136)] = 10538,
  [SMALL_STATE(137)] = 10580,
  [SMALL_STATE(138)] = 10622,
  [SMALL_STATE(139)] = 10664,
  [SMALL_STATE(140)] = 10706,
  [SMALL_STATE(141)] = 10747,
  [SMALL_STATE(142)] = 10792,
  [SMALL_STATE(143)] = 10833,
  [SMALL_STATE(144)] = 10888,
  [SMALL_STATE(145)] = 10933,
  [SMALL_STATE(146)] = 10976,
  [SMALL_STATE(147)] = 11016,
  [SMALL_STATE(148)] = 11057,
  [SMALL_STATE(149)] = 11098,
  [SMALL_STATE(150)] = 11137,
  [SMALL_STATE(151)] = 11180,
  [SMALL_STATE(152)] = 11249,
  [SMALL_STATE(153)] = 11290,
  [SMALL_STATE(154)] = 11353,
  [SMALL_STATE(155)] = 11424,
  [SMALL_STATE(156)] = 11463,
  [SMALL_STATE(157)] = 11501,
  [SMALL_STATE(158)] = 11539,
  [SMALL_STATE(159)] = 11577,
  [SMALL_STATE(160)] = 11615,
  [SMALL_STATE(161)] = 11675,
  [SMALL_STATE(162)] = 11713,
  [SMALL_STATE(163)] = 11773,
  [SMALL_STATE(164)] = 11831,
  [SMALL_STATE(165)] = 11869,
  [SMALL_STATE(166)] = 11907,
  [SMALL_STATE(167)] = 11945,
  [SMALL_STATE(168)] = 11983,
  [SMALL_STATE(169)] = 12021,
  [SMALL_STATE(170)] = 12059,
  [SMALL_STATE(171)] = 12097,
  [SMALL_STATE(172)] = 12135,
  [SMALL_STATE(173)] = 12172,
  [SMALL_STATE(174)] = 12209,
  [SMALL_STATE(175)] = 12246,
  [SMALL_STATE(176)] = 12287,
  [SMALL_STATE(177)] = 12322,
  [SMALL_STATE(178)] = 12357,
  [SMALL_STATE(179)] = 12392,
  [SMALL_STATE(180)] = 12427,
  [SMALL_STATE(181)] = 12462,
  [SMALL_STATE(182)] = 12503,
  [SMALL_STATE(183)] = 12538,
  [SMALL_STATE(184)] = 12573,
  [SMALL_STATE(185)] = 12608,
  [SMALL_STATE(186)] = 12643,
  [SMALL_STATE(187)] = 12678,
  [SMALL_STATE(188)] = 12713,
  [SMALL_STATE(189)] = 12749,
  [SMALL_STATE(190)] = 12785,
  [SMALL_STATE(191)] = 12818,
  [SMALL_STATE(192)] = 12851,
  [SMALL_STATE(193)] = 12884,
  [SMALL_STATE(194)] = 12917,
  [SMALL_STATE(195)] = 12950,
  [SMALL_STATE(196)] = 12983,
  [SMALL_STATE(197)] = 13016,
  [SMALL_STATE(198)] = 13049,
  [SMALL_STATE(199)] = 13082,
  [SMALL_STATE(200)] = 13115,
  [SMALL_STATE(201)] = 13148,
  [SMALL_STATE(202)] = 13181,
  [SMALL_STATE(203)] = 13214,
  [SMALL_STATE(204)] = 13247,
  [SMALL_STATE(205)] = 13280,
  [SMALL_STATE(206)] = 13313,
  [SMALL_STATE(207)] = 13345,
  [SMALL_STATE(208)] = 13377,
  [SMALL_STATE(209)] = 13409,
  [SMALL_STATE(210)] = 13441,
  [SMALL_STATE(211)] = 13473,
  [SMALL_STATE(212)] = 13505,
  [SMALL_STATE(213)] = 13537,
  [SMALL_STATE(214)] = 13569,
  [SMALL_STATE(215)] = 13601,
  [SMALL_STATE(216)] = 13633,
  [SMALL_STATE(217)] = 13665,
  [SMALL_STATE(218)] = 13697,
  [SMALL_STATE(219)] = 13729,
  [SMALL_STATE(220)] = 13761,
  [SMALL_STATE(221)] = 13793,
  [SMALL_STATE(222)] = 13825,
  [SMALL_STATE(223)] = 13861,
  [SMALL_STATE(224)] = 13893,
  [SMALL_STATE(225)] = 13925,
  [SMALL_STATE(226)] = 13957,
  [SMALL_STATE(227)] = 14003,
  [SMALL_STATE(228)] = 14035,
  [SMALL_STATE(229)] = 14067,
  [SMALL_STATE(230)] = 14099,
  [SMALL_STATE(231)] = 14131,
  [SMALL_STATE(232)] = 14163,
  [SMALL_STATE(233)] = 14195,
  [SMALL_STATE(234)] = 14227,
  [SMALL_STATE(235)] = 14259,
  [SMALL_STATE(236)] = 14291,
  [SMALL_STATE(237)] = 14323,
  [SMALL_STATE(238)] = 14355,
  [SMALL_STATE(239)] = 14387,
  [SMALL_STATE(240)] = 14419,
  [SMALL_STATE(241)] = 14451,
  [SMALL_STATE(242)] = 14483,
  [SMALL_STATE(243)] = 14515,
  [SMALL_STATE(244)] = 14547,
  [SMALL_STATE(245)] = 14578,
  [SMALL_STATE(246)] = 14611,
  [SMALL_STATE(247)] = 14648,
  [SMALL_STATE(248)] = 14684,
  [SMALL_STATE(249)] = 14716,
  [SMALL_STATE(250)] = 14748,
  [SMALL_STATE(251)] = 14796,
  [SMALL_STATE(252)] = 14826,
  [SMALL_STATE(253)] = 14874,
  [SMALL_STATE(254)] = 14906,
  [SMALL_STATE(255)] = 14954,
  [SMALL_STATE(256)] = 15002,
  [SMALL_STATE(257)] = 15034,
  [SMALL_STATE(258)] = 15064,
  [SMALL_STATE(259)] = 15112,
  [SMALL_STATE(260)] = 15142,
  [SMALL_STATE(261)] = 15176,
  [SMALL_STATE(262)] = 15224,
  [SMALL_STATE(263)] = 15253,
  [SMALL_STATE(264)] = 15294,
  [SMALL_STATE(265)] = 15323,
  [SMALL_STATE(266)] = 15354,
  [SMALL_STATE(267)] = 15383,
  [SMALL_STATE(268)] = 15412,
  [SMALL_STATE(269)] = 15441,
  [SMALL_STATE(270)] = 15470,
  [SMALL_STATE(271)] = 15499,
  [SMALL_STATE(272)] = 15528,
  [SMALL_STATE(273)] = 15557,
  [SMALL_STATE(274)] = 15586,
  [SMALL_STATE(275)] = 15615,
  [SMALL_STATE(276)] = 15656,
  [SMALL_STATE(277)] = 15686,
  [SMALL_STATE(278)] = 15714,
  [SMALL_STATE(279)] = 15754,
  [SMALL_STATE(280)] = 15784,
  [SMALL_STATE(281)] = 15822,
  [SMALL_STATE(282)] = 15868,
  [SMALL_STATE(283)] = 15904,
  [SMALL_STATE(284)] = 15944,
  [SMALL_STATE(285)] = 15974,
  [SMALL_STATE(286)] = 16014,
  [SMALL_STATE(287)] = 16044,
  [SMALL_STATE(288)] = 16074,
  [SMALL_STATE(289)] = 16111,
  [SMALL_STATE(290)] = 16148,
  [SMALL_STATE(291)] = 16174,
  [SMALL_STATE(292)] = 16209,
  [SMALL_STATE(293)] = 16246,
  [SMALL_STATE(294)] = 16283,
  [SMALL_STATE(295)] = 16317,
  [SMALL_STATE(296)] = 16351,
  [SMALL_STATE(297)] = 16385,
  [SMALL_STATE(298)] = 16419,
  [SMALL_STATE(299)] = 16453,
  [SMALL_STATE(300)] = 16485,
  [SMALL_STATE(301)] = 16516,
  [SMALL_STATE(302)] = 16547,
  [SMALL_STATE(303)] = 16578,
  [SMALL_STATE(304)] = 16609,
  [SMALL_STATE(305)] = 16644,
  [SMALL_STATE(306)] = 16675,
  [SMALL_STATE(307)] = 16707,
  [SMALL_STATE(308)] = 16739,
  [SMALL_STATE(309)] = 16771,
  [SMALL_STATE(310)] = 16803,
  [SMALL_STATE(311)] = 16829,
  [SMALL_STATE(312)] = 16861,
  [SMALL_STATE(313)] = 16888,
  [SMALL_STATE(314)] = 16919,
  [SMALL_STATE(315)] = 16944,
  [SMALL_STATE(316)] = 16971,
  [SMALL_STATE(317)] = 16992,
  [SMALL_STATE(318)] = 17021,
  [SMALL_STATE(319)] = 17041,
  [SMALL_STATE(320)] = 17065,
  [SMALL_STATE(321)] = 17085,
  [SMALL_STATE(322)] = 17109,
  [SMALL_STATE(323)] = 17129,
  [SMALL_STATE(324)] = 17157,
  [SMALL_STATE(325)] = 17177,
  [SMALL_STATE(326)] = 17199,
  [SMALL_STATE(327)] = 17219,
  [SMALL_STATE(328)] = 17239,
  [SMALL_STATE(329)] = 17265,
  [SMALL_STATE(330)] = 17282,
  [SMALL_STATE(331)] = 17303,
  [SMALL_STATE(332)] = 17322,
  [SMALL_STATE(333)] = 17347,
  [SMALL_STATE(334)] = 17370,
  [SMALL_STATE(335)] = 17393,
  [SMALL_STATE(336)] = 17418,
  [SMALL_STATE(337)] = 17441,
  [SMALL_STATE(338)] = 17464,
  [SMALL_STATE(339)] = 17483,
  [SMALL_STATE(340)] = 17500,
  [SMALL_STATE(341)] = 17519,
  [SMALL_STATE(342)] = 17542,
  [SMALL_STATE(343)] = 17567,
  [SMALL_STATE(344)] = 17586,
  [SMALL_STATE(345)] = 17607,
  [SMALL_STATE(346)] = 17626,
  [SMALL_STATE(347)] = 17645,
  [SMALL_STATE(348)] = 17664,
  [SMALL_STATE(349)] = 17689,
  [SMALL_STATE(350)] = 17705,
  [SMALL_STATE(351)] = 17727,
  [SMALL_STATE(352)] = 17747,
  [SMALL_STATE(353)] = 17763,
  [SMALL_STATE(354)] = 17779,
  [SMALL_STATE(355)] = 17801,
  [SMALL_STATE(356)] = 17821,
  [SMALL_STATE(357)] = 17841,
  [SMALL_STATE(358)] = 17861,
  [SMALL_STATE(359)] = 17877,
  [SMALL_STATE(360)] = 17893,
  [SMALL_STATE(361)] = 17909,
  [SMALL_STATE(362)] = 17929,
  [SMALL_STATE(363)] = 17945,
  [SMALL_STATE(364)] = 17961,
  [SMALL_STATE(365)] = 17977,
  [SMALL_STATE(366)] = 17993,
  [SMALL_STATE(367)] = 18011,
  [SMALL_STATE(368)] = 18031,
  [SMALL_STATE(369)] = 18047,
  [SMALL_STATE(370)] = 18064,
  [SMALL_STATE(371)] = 18083,
  [SMALL_STATE(372)] = 18100,
  [SMALL_STATE(373)] = 18119,
  [SMALL_STATE(374)] = 18138,
  [SMALL_STATE(375)] = 18157,
  [SMALL_STATE(376)] = 18176,
  [SMALL_STATE(377)] = 18191,
  [SMALL_STATE(378)] = 18210,
  [SMALL_STATE(379)] = 18229,
  [SMALL_STATE(380)] = 18248,
  [SMALL_STATE(381)] = 18267,
  [SMALL_STATE(382)] = 18284,
  [SMALL_STATE(383)] = 18303,
  [SMALL_STATE(384)] = 18322,
  [SMALL_STATE(385)] = 18339,
  [SMALL_STATE(386)] = 18358,
  [SMALL_STATE(387)] = 18377,
  [SMALL_STATE(388)] = 18396,
  [SMALL_STATE(389)] = 18411,
  [SMALL_STATE(390)] = 18430,
  [SMALL_STATE(391)] = 18447,
  [SMALL_STATE(392)] = 18466,
  [SMALL_STATE(393)] = 18485,
  [SMALL_STATE(394)] = 18504,
  [SMALL_STATE(395)] = 18523,
  [SMALL_STATE(396)] = 18542,
  [SMALL_STATE(397)] = 18559,
  [SMALL_STATE(398)] = 18578,
  [SMALL_STATE(399)] = 18595,
  [SMALL_STATE(400)] = 18614,
  [SMALL_STATE(401)] = 18629,
  [SMALL_STATE(402)] = 18646,
  [SMALL_STATE(403)] = 18665,
  [SMALL_STATE(404)] = 18684,
  [SMALL_STATE(405)] = 18701,
  [SMALL_STATE(406)] = 18716,
  [SMALL_STATE(407)] = 18732,
  [SMALL_STATE(408)] = 18746,
  [SMALL_STATE(409)] = 18760,
  [SMALL_STATE(410)] = 18776,
  [SMALL_STATE(411)] = 18792,
  [SMALL_STATE(412)] = 18808,
  [SMALL_STATE(413)] = 18822,
  [SMALL_STATE(414)] = 18838,
  [SMALL_STATE(415)] = 18854,
  [SMALL_STATE(416)] = 18870,
  [SMALL_STATE(417)] = 18886,
  [SMALL_STATE(418)] = 18900,
  [SMALL_STATE(419)] = 18914,
  [SMALL_STATE(420)] = 18928,
  [SMALL_STATE(421)] = 18944,
  [SMALL_STATE(422)] = 18958,
  [SMALL_STATE(423)] = 18974,
  [SMALL_STATE(424)] = 18987,
  [SMALL_STATE(425)] = 19000,
  [SMALL_STATE(426)] = 19013,
  [SMALL_STATE(427)] = 19026,
  [SMALL_STATE(428)] = 19039,
  [SMALL_STATE(429)] = 19052,
  [SMALL_STATE(430)] = 19065,
  [SMALL_STATE(431)] = 19078,
  [SMALL_STATE(432)] = 19091,
  [SMALL_STATE(433)] = 19104,
  [SMALL_STATE(434)] = 19117,
  [SMALL_STATE(435)] = 19130,
  [SMALL_STATE(436)] = 19143,
  [SMALL_STATE(437)] = 19156,
  [SMALL_STATE(438)] = 19169,
  [SMALL_STATE(439)] = 19182,
  [SMALL_STATE(440)] = 19195,
  [SMALL_STATE(441)] = 19208,
  [SMALL_STATE(442)] = 19221,
  [SMALL_STATE(443)] = 19234,
  [SMALL_STATE(444)] = 19247,
  [SMALL_STATE(445)] = 19260,
  [SMALL_STATE(446)] = 19273,
  [SMALL_STATE(447)] = 19286,
  [SMALL_STATE(448)] = 19299,
  [SMALL_STATE(449)] = 19312,
  [SMALL_STATE(450)] = 19325,
  [SMALL_STATE(451)] = 19338,
  [SMALL_STATE(452)] = 19351,
  [SMALL_STATE(453)] = 19364,
  [SMALL_STATE(454)] = 19377,
  [SMALL_STATE(455)] = 19390,
  [SMALL_STATE(456)] = 19403,
  [SMALL_STATE(457)] = 19416,
  [SMALL_STATE(458)] = 19429,
  [SMALL_STATE(459)] = 19442,
  [SMALL_STATE(460)] = 19455,
  [SMALL_STATE(461)] = 19468,
  [SMALL_STATE(462)] = 19481,
  [SMALL_STATE(463)] = 19494,
  [SMALL_STATE(464)] = 19507,
  [SMALL_STATE(465)] = 19520,
  [SMALL_STATE(466)] = 19533,
  [SMALL_STATE(467)] = 19546,
  [SMALL_STATE(468)] = 19559,
  [SMALL_STATE(469)] = 19572,
  [SMALL_STATE(470)] = 19585,
  [SMALL_STATE(471)] = 19598,
  [SMALL_STATE(472)] = 19611,
  [SMALL_STATE(473)] = 19624,
  [SMALL_STATE(474)] = 19637,
  [SMALL_STATE(475)] = 19650,
  [SMALL_STATE(476)] = 19663,
  [SMALL_STATE(477)] = 19676,
  [SMALL_STATE(478)] = 19689,
  [SMALL_STATE(479)] = 19702,
  [SMALL_STATE(480)] = 19715,
  [SMALL_STATE(481)] = 19728,
  [SMALL_STATE(482)] = 19741,
  [SMALL_STATE(483)] = 19754,
  [SMALL_STATE(484)] = 19767,
  [SMALL_STATE(485)] = 19780,
  [SMALL_STATE(486)] = 19793,
  [SMALL_STATE(487)] = 19806,
  [SMALL_STATE(488)] = 19819,
  [SMALL_STATE(489)] = 19832,
  [SMALL_STATE(490)] = 19845,
  [SMALL_STATE(491)] = 19858,
  [SMALL_STATE(492)] = 19871,
  [SMALL_STATE(493)] = 19884,
  [SMALL_STATE(494)] = 19897,
  [SMALL_STATE(495)] = 19910,
  [SMALL_STATE(496)] = 19923,
  [SMALL_STATE(497)] = 19936,
  [SMALL_STATE(498)] = 19949,
  [SMALL_STATE(499)] = 19962,
  [SMALL_STATE(500)] = 19975,
  [SMALL_STATE(501)] = 19988,
  [SMALL_STATE(502)] = 20001,
  [SMALL_STATE(503)] = 20014,
  [SMALL_STATE(504)] = 20027,
  [SMALL_STATE(505)] = 20040,
  [SMALL_STATE(506)] = 20053,
  [SMALL_STATE(507)] = 20066,
  [SMALL_STATE(508)] = 20079,
  [SMALL_STATE(509)] = 20092,
  [SMALL_STATE(510)] = 20105,
  [SMALL_STATE(511)] = 20118,
  [SMALL_STATE(512)] = 20131,
  [SMALL_STATE(513)] = 20144,
  [SMALL_STATE(514)] = 20157,
  [SMALL_STATE(515)] = 20170,
  [SMALL_STATE(516)] = 20183,
  [SMALL_STATE(517)] = 20196,
  [SMALL_STATE(518)] = 20209,
  [SMALL_STATE(519)] = 20222,
  [SMALL_STATE(520)] = 20235,
  [SMALL_STATE(521)] = 20248,
  [SMALL_STATE(522)] = 20261,
  [SMALL_STATE(523)] = 20274,
  [SMALL_STATE(524)] = 20287,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 7),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 7),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(104),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(56),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(351),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(434),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(432),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(430),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(410),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(428),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(409),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(48),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(48),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(426),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(501),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(86),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(354),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(48),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(139),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(361),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(506),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(503),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(137),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(137),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(472),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(511),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(126),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 6),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 19),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 19),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(157),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(356),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(512),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(510),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(158),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(158),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(486),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(515),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(155),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 8),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 8),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(137),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(137),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 11),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 11),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(53),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(28),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(29),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(451),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(309),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(311),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(313),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(20),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(342),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(446),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(146),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(158),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(158),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(274),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(357),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(509),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(507),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(264),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(264),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(480),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(513),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(259),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(27),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(14),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 23),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 23),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 14),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 14),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 2),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 6),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 6),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 1),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2, .production_id = 9),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2, .production_id = 9),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 4),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 4),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 30),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 30),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 31),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 31),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__self_join, 4),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 5),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 3),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 7),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 7),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 8),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 6),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 6),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 1),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 5),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 6),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 4),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 4),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 7),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 5),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 9),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 9),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_append, 2, .production_id = 1),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append, 2, .production_id = 1),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4, .production_id = 14),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4, .production_id = 14),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 4),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 4),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2, .production_id = 1),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2, .production_id = 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_keywords, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_keywords, 1),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(264),
  [958] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(264),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [991] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(348),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(397),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(374),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(392),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1017] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(451),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(309),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(311),
  [1026] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(319),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(416),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1062] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(324),
  [1065] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(324),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1090] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(518),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1097] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(496),
  [1108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(364),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(362),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(46),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(40),
  [1172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(417),
  [1201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(42),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(57),
  [1233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(317),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(5),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1429] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
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
