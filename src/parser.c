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
#define STATE_COUNT 539
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 204
#define ALIAS_COUNT 0
#define TOKEN_COUNT 117
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 36

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
  sym_keyword_internal = 45,
  sym_keyword_module = 46,
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
  anon_sym_COMMA = 70,
  anon_sym_RPAREN = 71,
  anon_sym_DASH_GT = 72,
  anon_sym_DOT = 73,
  anon_sym_LBRACE = 74,
  anon_sym_RBRACE = 75,
  anon_sym_EQ_GT = 76,
  anon_sym_DASH = 77,
  anon_sym_PLUS = 78,
  anon_sym_EQ_EQ = 79,
  anon_sym_DQUOTE = 80,
  aux_sym__double_quote_string_token1 = 81,
  anon_sym_SQUOTE = 82,
  aux_sym__single_quote_string_token1 = 83,
  aux_sym__inner_triple_quotes_token1 = 84,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 85,
  anon_sym_f_DQUOTE = 86,
  anon_sym_f_DQUOTE_DQUOTE_DQUOTE = 87,
  anon_sym_s_DQUOTE = 88,
  anon_sym_s_DQUOTE_DQUOTE_DQUOTE = 89,
  sym__natural_number = 90,
  anon_sym__ = 91,
  anon_sym_BQUOTE = 92,
  sym__identifier = 93,
  sym__identifier_dot = 94,
  anon_sym_DOT_DOT = 95,
  anon_sym_STAR = 96,
  anon_sym_SLASH = 97,
  anon_sym_SLASH_SLASH = 98,
  anon_sym_BANG_EQ = 99,
  anon_sym_GT = 100,
  anon_sym_GT_EQ = 101,
  anon_sym_LT = 102,
  anon_sym_LT_EQ = 103,
  anon_sym_QMARK_QMARK = 104,
  anon_sym_AMP_AMP = 105,
  anon_sym_PIPE_PIPE = 106,
  aux_sym__date_token1 = 107,
  aux_sym__date_token2 = 108,
  anon_sym_AT = 109,
  aux_sym__time_token1 = 110,
  anon_sym_T = 111,
  anon_sym_Z = 112,
  anon_sym_POUND = 113,
  aux_sym_comment_token1 = 114,
  sym_bang = 115,
  sym_pipe = 116,
  sym_program = 117,
  sym_prql = 118,
  sym_target = 119,
  sym_pipeline = 120,
  sym_variable = 121,
  sym_function_definition = 122,
  sym_parameter = 123,
  sym__call_parameter = 124,
  sym_function_call = 125,
  sym_module_call = 126,
  sym_from_text = 127,
  sym_loop = 128,
  sym_transforms = 129,
  sym_from = 130,
  sym__table_selection = 131,
  sym__table_reference = 132,
  sym_derives = 133,
  sym__tuples = 134,
  sym_append = 135,
  sym_filter = 136,
  sym__boolean_expression = 137,
  sym_case = 138,
  sym_case_condition = 139,
  sym_aggregate = 140,
  sym__agg_keywords = 141,
  sym_aggregate_operation = 142,
  sym__aggregate_func = 143,
  sym_sorts = 144,
  sym__sort_instruction = 145,
  sym_direction = 146,
  sym_takes = 147,
  sym_window = 148,
  sym_window_definitions = 149,
  sym__window_definition = 150,
  sym_group = 151,
  sym_joins = 152,
  sym__join_definition = 153,
  sym_conditions = 154,
  sym__self_join = 155,
  sym_select = 156,
  sym_term = 157,
  sym__expression = 158,
  sym_literal = 159,
  sym_f_string = 160,
  sym_s_string = 161,
  sym__double_quote_string = 162,
  sym__single_quote_string = 163,
  aux_sym__inner_triple_quotes = 164,
  sym__triple_quote_string = 165,
  sym__double_f_string = 166,
  sym__triple_f_string = 167,
  sym__double_s_string = 168,
  sym__triple_s_string = 169,
  sym_literal_string = 170,
  aux_sym__friendly_number = 171,
  sym_integer = 172,
  sym_decimal_number = 173,
  sym_field = 174,
  sym__alias_identifier = 175,
  sym_identifier = 176,
  sym_range = 177,
  sym__agg_rhs_assignment = 178,
  sym_assignment = 179,
  sym_binary_expression = 180,
  sym__date = 181,
  sym_date = 182,
  sym__time = 183,
  sym_time = 184,
  sym_timestamp = 185,
  sym_timezone = 186,
  sym_comment = 187,
  aux_sym_program_repeat1 = 188,
  aux_sym_program_repeat2 = 189,
  aux_sym_variable_repeat1 = 190,
  aux_sym_function_definition_repeat1 = 191,
  aux_sym_function_call_repeat1 = 192,
  aux_sym_module_call_repeat1 = 193,
  aux_sym_transforms_repeat1 = 194,
  aux_sym__tuples_repeat1 = 195,
  aux_sym_case_repeat1 = 196,
  aux_sym_case_repeat2 = 197,
  aux_sym_aggregate_repeat1 = 198,
  aux_sym_sorts_repeat1 = 199,
  aux_sym_window_definitions_repeat1 = 200,
  aux_sym_group_repeat1 = 201,
  aux_sym_group_repeat2 = 202,
  aux_sym_conditions_repeat1 = 203,
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
  [sym_keyword_internal] = "keyword_internal",
  [sym_keyword_module] = "keyword_module",
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
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_BQUOTE] = "`",
  [sym__identifier] = "_identifier",
  [sym__identifier_dot] = "_identifier_dot",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
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
  [sym_module_call] = "module_call",
  [sym_from_text] = "from_text",
  [sym_loop] = "loop",
  [sym_transforms] = "transforms",
  [sym_from] = "from",
  [sym__table_selection] = "_table_selection",
  [sym__table_reference] = "_table_reference",
  [sym_derives] = "derives",
  [sym__tuples] = "_tuples",
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
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_module_call_repeat1] = "module_call_repeat1",
  [aux_sym_transforms_repeat1] = "transforms_repeat1",
  [aux_sym__tuples_repeat1] = "_tuples_repeat1",
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
  [sym_keyword_internal] = sym_keyword_internal,
  [sym_keyword_module] = sym_keyword_module,
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym__identifier] = sym__identifier,
  [sym__identifier_dot] = sym__identifier_dot,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
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
  [sym_module_call] = sym_module_call,
  [sym_from_text] = sym_from_text,
  [sym_loop] = sym_loop,
  [sym_transforms] = sym_transforms,
  [sym_from] = sym_from,
  [sym__table_selection] = sym__table_selection,
  [sym__table_reference] = sym__table_reference,
  [sym_derives] = sym_derives,
  [sym__tuples] = sym__tuples,
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
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_module_call_repeat1] = aux_sym_module_call_repeat1,
  [aux_sym_transforms_repeat1] = aux_sym_transforms_repeat1,
  [aux_sym__tuples_repeat1] = aux_sym__tuples_repeat1,
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
  [sym_keyword_internal] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_module] = {
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
  [anon_sym_COMMA] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_SLASH_SLASH] = {
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
  [sym_module_call] = {
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
  [sym__tuples] = {
    .visible = false,
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
  [aux_sym_variable_repeat1] = {
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
  [aux_sym_module_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transforms_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tuples_repeat1] = {
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
  field_module = 6,
  field_name = 7,
  field_operation = 8,
  field_operator = 9,
  field_predicate = 10,
  field_result = 11,
  field_right = 12,
  field_submodule = 13,
  field_table = 14,
  field_table_reference = 15,
  field_target = 16,
  field_till = 17,
  field_value = 18,
  field_version = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_default] = "default",
  [field_from] = "from",
  [field_left] = "left",
  [field_logic] = "logic",
  [field_module] = "module",
  [field_name] = "name",
  [field_operation] = "operation",
  [field_operator] = "operator",
  [field_predicate] = "predicate",
  [field_result] = "result",
  [field_right] = "right",
  [field_submodule] = "submodule",
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
  [25] = {.index = 40, .length = 2},
  [26] = {.index = 42, .length = 1},
  [27] = {.index = 43, .length = 3},
  [28] = {.index = 46, .length = 3},
  [29] = {.index = 49, .length = 3},
  [30] = {.index = 52, .length = 3},
  [31] = {.index = 55, .length = 1},
  [32] = {.index = 56, .length = 2},
  [33] = {.index = 58, .length = 1},
  [34] = {.index = 59, .length = 2},
  [35] = {.index = 61, .length = 1},
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
    {field_module, 0},
    {field_submodule, 2},
  [40] =
    {field_operation, 0},
    {field_operation, 1},
  [42] =
    {field_value, 0, .inherited = true},
  [43] =
    {field_module, 0},
    {field_submodule, 2},
    {field_submodule, 3, .inherited = true},
  [46] =
    {field_left, 1},
    {field_operator, 2},
    {field_right, 3},
  [49] =
    {field_alias, 0},
    {field_operator, 1},
    {field_operator, 3},
  [52] =
    {field_alias, 0},
    {field_operation, 3, .inherited = true},
    {field_operator, 1},
  [55] =
    {field_submodule, 1},
  [56] =
    {field_submodule, 0, .inherited = true},
    {field_submodule, 1, .inherited = true},
  [58] =
    {field_value, 2},
  [59] =
    {field_default, 0},
    {field_result, 2},
  [61] =
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
  [10] = 10,
  [11] = 5,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 13,
  [25] = 23,
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
  [55] = 40,
  [56] = 56,
  [57] = 57,
  [58] = 5,
  [59] = 59,
  [60] = 38,
  [61] = 61,
  [62] = 62,
  [63] = 40,
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
  [79] = 38,
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
  [92] = 92,
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
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 82,
  [120] = 62,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 38,
  [125] = 122,
  [126] = 126,
  [127] = 127,
  [128] = 18,
  [129] = 22,
  [130] = 40,
  [131] = 16,
  [132] = 95,
  [133] = 38,
  [134] = 42,
  [135] = 97,
  [136] = 22,
  [137] = 59,
  [138] = 16,
  [139] = 139,
  [140] = 113,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 40,
  [145] = 81,
  [146] = 146,
  [147] = 102,
  [148] = 18,
  [149] = 96,
  [150] = 42,
  [151] = 38,
  [152] = 126,
  [153] = 16,
  [154] = 18,
  [155] = 40,
  [156] = 22,
  [157] = 127,
  [158] = 68,
  [159] = 96,
  [160] = 141,
  [161] = 95,
  [162] = 81,
  [163] = 102,
  [164] = 142,
  [165] = 97,
  [166] = 62,
  [167] = 146,
  [168] = 143,
  [169] = 59,
  [170] = 82,
  [171] = 171,
  [172] = 139,
  [173] = 113,
  [174] = 42,
  [175] = 40,
  [176] = 176,
  [177] = 38,
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
  [238] = 122,
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
  [252] = 38,
  [253] = 253,
  [254] = 16,
  [255] = 22,
  [256] = 40,
  [257] = 18,
  [258] = 258,
  [259] = 253,
  [260] = 260,
  [261] = 127,
  [262] = 262,
  [263] = 253,
  [264] = 264,
  [265] = 265,
  [266] = 95,
  [267] = 267,
  [268] = 268,
  [269] = 113,
  [270] = 270,
  [271] = 102,
  [272] = 272,
  [273] = 96,
  [274] = 274,
  [275] = 42,
  [276] = 276,
  [277] = 146,
  [278] = 97,
  [279] = 279,
  [280] = 280,
  [281] = 59,
  [282] = 280,
  [283] = 141,
  [284] = 81,
  [285] = 285,
  [286] = 139,
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
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 59,
  [318] = 318,
  [319] = 319,
  [320] = 18,
  [321] = 16,
  [322] = 322,
  [323] = 22,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 42,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 67,
  [337] = 18,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 81,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 16,
  [354] = 22,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 40,
  [359] = 38,
  [360] = 360,
  [361] = 361,
  [362] = 102,
  [363] = 96,
  [364] = 97,
  [365] = 361,
  [366] = 361,
  [367] = 42,
  [368] = 368,
  [369] = 95,
  [370] = 370,
  [371] = 113,
  [372] = 372,
  [373] = 373,
  [374] = 361,
  [375] = 375,
  [376] = 361,
  [377] = 361,
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
  [398] = 395,
  [399] = 399,
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
  [412] = 59,
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
  [447] = 438,
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
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 467,
  [478] = 463,
  [479] = 438,
  [480] = 446,
  [481] = 445,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 467,
  [486] = 463,
  [487] = 483,
  [488] = 488,
  [489] = 446,
  [490] = 445,
  [491] = 491,
  [492] = 492,
  [493] = 467,
  [494] = 463,
  [495] = 495,
  [496] = 438,
  [497] = 446,
  [498] = 445,
  [499] = 467,
  [500] = 463,
  [501] = 501,
  [502] = 438,
  [503] = 446,
  [504] = 445,
  [505] = 467,
  [506] = 506,
  [507] = 446,
  [508] = 467,
  [509] = 467,
  [510] = 467,
  [511] = 492,
  [512] = 461,
  [513] = 460,
  [514] = 442,
  [515] = 472,
  [516] = 492,
  [517] = 461,
  [518] = 460,
  [519] = 519,
  [520] = 492,
  [521] = 461,
  [522] = 460,
  [523] = 492,
  [524] = 461,
  [525] = 460,
  [526] = 492,
  [527] = 461,
  [528] = 492,
  [529] = 492,
  [530] = 492,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 535,
  [537] = 537,
  [538] = 538,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(511);
      if (lookahead == '!') ADVANCE(923);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '/') ADVANCE(898);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '<') ADVANCE(903);
      if (lookahead == '=') ADVANCE(616);
      if (lookahead == '>') ADVANCE(901);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '@') ADVANCE(911);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(30);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'J') ADVANCE(163);
      if (lookahead == 'L') ADVANCE(31);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(211);
      if (lookahead == 'P') ADVANCE(171);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(913);
      if (lookahead == 'V') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == 'Z') ADVANCE(915);
      if (lookahead == '_') ADVANCE(647);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'j') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 'n') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(409);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == 'v') ADVANCE(286);
      if (lookahead == 'w') ADVANCE(319);
      if (lookahead == '{') ADVANCE(622);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(504)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '/') ADVANCE(898);
      if (lookahead == '<') ADVANCE(903);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(901);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(778);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(483)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '/') ADVANCE(898);
      if (lookahead == '<') ADVANCE(903);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(901);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(693);
      if (lookahead == 'D') ADVANCE(685);
      if (lookahead == 'F') ADVANCE(654);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(720);
      if (lookahead == 'J') ADVANCE(729);
      if (lookahead == 'L') ADVANCE(725);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'R') ADVANCE(683);
      if (lookahead == 'S') ADVANCE(686);
      if (lookahead == 'T') ADVANCE(659);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 'g') ADVANCE(863);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == 'j') ADVANCE(852);
      if (lookahead == 'l') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(481)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(922);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '@') ADVANCE(911);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 's') ADVANCE(652);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '{') ADVANCE(622);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '}') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(482)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(778);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '}') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(485)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '@') ADVANCE(911);
      if (lookahead == 'A') ADVANCE(766);
      if (lookahead == 'C') ADVANCE(722);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'M') ADVANCE(656);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'R') ADVANCE(658);
      if (lookahead == 'S') ADVANCE(747);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == 'c') ADVANCE(845);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'm') ADVANCE(779);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 'r') ADVANCE(781);
      if (lookahead == 's') ADVANCE(651);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '}') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(479)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '@') ADVANCE(911);
      if (lookahead == 'A') ADVANCE(766);
      if (lookahead == 'C') ADVANCE(660);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'M') ADVANCE(656);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'S') ADVANCE(747);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == 'c') ADVANCE(783);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'm') ADVANCE(779);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 's') ADVANCE(651);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(480)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '@') ADVANCE(911);
      if (lookahead == 'A') ADVANCE(766);
      if (lookahead == 'C') ADVANCE(728);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'M') ADVANCE(656);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'S') ADVANCE(747);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == 'c') ADVANCE(851);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'm') ADVANCE(779);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 's') ADVANCE(651);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(495)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'A') ADVANCE(693);
      if (lookahead == 'D') ADVANCE(685);
      if (lookahead == 'F') ADVANCE(654);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(720);
      if (lookahead == 'J') ADVANCE(729);
      if (lookahead == 'L') ADVANCE(725);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'R') ADVANCE(683);
      if (lookahead == 'S') ADVANCE(686);
      if (lookahead == 'T') ADVANCE(659);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 'g') ADVANCE(863);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == 'j') ADVANCE(852);
      if (lookahead == 'l') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(484)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(642);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == 'q') ADVANCE(342);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(360);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(643);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(645);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(641);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == 'F') ADVANCE(742);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(865);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(487)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(910);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == '{') ADVANCE(622);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '}') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(486)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(490)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(489)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == 'S') ADVANCE(701);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 's') ADVANCE(824);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(488)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(491)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(910);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(494)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 22:
      if (lookahead == '&') ADVANCE(906);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(235);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(896);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(900);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(628);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(628);
      if (lookahead == '>') ADVANCE(624);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(620);
      END_STATE();
    case 29:
      if (lookahead == '?') ADVANCE(905);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(187);
      if (lookahead == 'O') ADVANCE(213);
      if (lookahead == 'S') ADVANCE(217);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'E') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(157);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(166);
      if (lookahead == 'I') ADVANCE(138);
      if (lookahead == 'O') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(115);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead == 'R') ADVANCE(159);
      if (lookahead == 'U') ADVANCE(124);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'R') ADVANCE(159);
      if (lookahead == 'U') ADVANCE(137);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'R') ADVANCE(215);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead == 'E') ADVANCE(135);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(126);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'T') ADVANCE(592);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(200);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(207);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(152);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(86);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(590);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(201);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(204);
      END_STATE();
    case 49:
      if (lookahead == 'C') ADVANCE(205);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(564);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(570);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(539);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(111);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(156);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(216);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(107);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(135);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(127);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(537);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(573);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(526);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(533);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(535);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(518);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(589);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(541);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(545);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(522);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(157);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(223);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(176);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(218);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == 'I') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(131);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == 'O') ADVANCE(181);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(179);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(178);
      if (lookahead == 'G') ADVANCE(557);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(173);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(202);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(175);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(193);
      if (lookahead == 'O') ADVANCE(157);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 90:
      if (lookahead == 'E') ADVANCE(151);
      END_STATE();
    case 91:
      if (lookahead == 'F') ADVANCE(195);
      if (lookahead == 'T') ADVANCE(592);
      END_STATE();
    case 92:
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == 'P') ADVANCE(169);
      if (lookahead == 'V') ADVANCE(81);
      END_STATE();
    case 93:
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'P') ADVANCE(169);
      END_STATE();
    case 94:
      if (lookahead == 'G') ADVANCE(563);
      if (lookahead == 'S') ADVANCE(194);
      END_STATE();
    case 95:
      if (lookahead == 'G') ADVANCE(102);
      END_STATE();
    case 96:
      if (lookahead == 'G') ADVANCE(581);
      END_STATE();
    case 97:
      if (lookahead == 'G') ADVANCE(583);
      END_STATE();
    case 98:
      if (lookahead == 'G') ADVANCE(182);
      END_STATE();
    case 99:
      if (lookahead == 'G') ADVANCE(85);
      END_STATE();
    case 100:
      if (lookahead == 'G') ADVANCE(70);
      END_STATE();
    case 101:
      if (lookahead == 'G') ADVANCE(43);
      END_STATE();
    case 102:
      if (lookahead == 'H') ADVANCE(199);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(219);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(147);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(140);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(146);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(149);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead == 'R') ADVANCE(159);
      if (lookahead == 'U') ADVANCE(124);
      END_STATE();
    case 109:
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'R') ADVANCE(159);
      if (lookahead == 'U') ADVANCE(137);
      END_STATE();
    case 110:
      if (lookahead == 'I') ADVANCE(154);
      END_STATE();
    case 111:
      if (lookahead == 'I') ADVANCE(191);
      END_STATE();
    case 112:
      if (lookahead == 'I') ADVANCE(161);
      END_STATE();
    case 113:
      if (lookahead == 'K') ADVANCE(567);
      END_STATE();
    case 114:
      if (lookahead == 'K') ADVANCE(64);
      END_STATE();
    case 115:
      if (lookahead == 'K') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 'L') ADVANCE(571);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(208);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(208);
      if (lookahead == 'R') ADVANCE(189);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(578);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(584);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(594);
      END_STATE();
    case 122:
      if (lookahead == 'L') ADVANCE(588);
      END_STATE();
    case 123:
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 124:
      if (lookahead == 'L') ADVANCE(119);
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 125:
      if (lookahead == 'L') ADVANCE(120);
      END_STATE();
    case 126:
      if (lookahead == 'L') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(150);
      if (lookahead == 'W') ADVANCE(186);
      END_STATE();
    case 127:
      if (lookahead == 'L') ADVANCE(130);
      if (lookahead == 'W') ADVANCE(185);
      END_STATE();
    case 128:
      if (lookahead == 'L') ADVANCE(68);
      END_STATE();
    case 129:
      if (lookahead == 'L') ADVANCE(190);
      END_STATE();
    case 130:
      if (lookahead == 'L') ADVANCE(106);
      END_STATE();
    case 131:
      if (lookahead == 'M') ADVANCE(559);
      END_STATE();
    case 132:
      if (lookahead == 'M') ADVANCE(512);
      END_STATE();
    case 133:
      if (lookahead == 'M') ADVANCE(45);
      END_STATE();
    case 134:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 135:
      if (lookahead == 'M') ADVANCE(164);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(579);
      END_STATE();
    case 137:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 138:
      if (lookahead == 'N') ADVANCE(547);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(113);
      END_STATE();
    case 140:
      if (lookahead == 'N') ADVANCE(529);
      END_STATE();
    case 141:
      if (lookahead == 'N') ADVANCE(613);
      END_STATE();
    case 142:
      if (lookahead == 'N') ADVANCE(595);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(153);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(89);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(214);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(96);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 148:
      if (lookahead == 'N') ADVANCE(197);
      END_STATE();
    case 149:
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 150:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 151:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 152:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 153:
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 154:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 155:
      if (lookahead == 'N') ADVANCE(210);
      END_STATE();
    case 156:
      if (lookahead == 'O') ADVANCE(221);
      END_STATE();
    case 157:
      if (lookahead == 'O') ADVANCE(167);
      END_STATE();
    case 158:
      if (lookahead == 'O') ADVANCE(212);
      END_STATE();
    case 159:
      if (lookahead == 'O') ADVANCE(132);
      END_STATE();
    case 160:
      if (lookahead == 'O') ADVANCE(141);
      END_STATE();
    case 161:
      if (lookahead == 'O') ADVANCE(142);
      END_STATE();
    case 162:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 163:
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'S') ADVANCE(160);
      END_STATE();
    case 164:
      if (lookahead == 'O') ADVANCE(220);
      END_STATE();
    case 165:
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 166:
      if (lookahead == 'P') ADVANCE(572);
      if (lookahead == 'X') ADVANCE(549);
      END_STATE();
    case 167:
      if (lookahead == 'P') ADVANCE(586);
      END_STATE();
    case 168:
      if (lookahead == 'P') ADVANCE(520);
      END_STATE();
    case 169:
      if (lookahead == 'P') ADVANCE(90);
      END_STATE();
    case 170:
      if (lookahead == 'Q') ADVANCE(121);
      END_STATE();
    case 171:
      if (lookahead == 'R') ADVANCE(170);
      END_STATE();
    case 172:
      if (lookahead == 'R') ADVANCE(575);
      END_STATE();
    case 173:
      if (lookahead == 'R') ADVANCE(144);
      END_STATE();
    case 174:
      if (lookahead == 'R') ADVANCE(516);
      END_STATE();
    case 175:
      if (lookahead == 'R') ADVANCE(569);
      END_STATE();
    case 176:
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 177:
      if (lookahead == 'R') ADVANCE(158);
      END_STATE();
    case 178:
      if (lookahead == 'R') ADVANCE(42);
      END_STATE();
    case 179:
      if (lookahead == 'R') ADVANCE(188);
      END_STATE();
    case 180:
      if (lookahead == 'R') ADVANCE(134);
      END_STATE();
    case 181:
      if (lookahead == 'R') ADVANCE(196);
      END_STATE();
    case 182:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 183:
      if (lookahead == 'R') ADVANCE(192);
      END_STATE();
    case 184:
      if (lookahead == 'S') ADVANCE(217);
      END_STATE();
    case 185:
      if (lookahead == 'S') ADVANCE(582);
      END_STATE();
    case 186:
      if (lookahead == 'S') ADVANCE(582);
      if (lookahead == '_') ADVANCE(145);
      END_STATE();
    case 187:
      if (lookahead == 'S') ADVANCE(62);
      END_STATE();
    case 188:
      if (lookahead == 'S') ADVANCE(112);
      END_STATE();
    case 189:
      if (lookahead == 'S') ADVANCE(198);
      END_STATE();
    case 190:
      if (lookahead == 'S') ADVANCE(66);
      END_STATE();
    case 191:
      if (lookahead == 'S') ADVANCE(209);
      END_STATE();
    case 192:
      if (lookahead == 'S') ADVANCE(89);
      END_STATE();
    case 193:
      if (lookahead == 'T') ADVANCE(592);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(566);
      END_STATE();
    case 195:
      if (lookahead == 'T') ADVANCE(576);
      END_STATE();
    case 196:
      if (lookahead == 'T') ADVANCE(524);
      END_STATE();
    case 197:
      if (lookahead == 'T') ADVANCE(553);
      END_STATE();
    case 198:
      if (lookahead == 'T') ADVANCE(565);
      END_STATE();
    case 199:
      if (lookahead == 'T') ADVANCE(577);
      END_STATE();
    case 200:
      if (lookahead == 'T') ADVANCE(611);
      END_STATE();
    case 201:
      if (lookahead == 'T') ADVANCE(531);
      END_STATE();
    case 202:
      if (lookahead == 'T') ADVANCE(596);
      END_STATE();
    case 203:
      if (lookahead == 'T') ADVANCE(609);
      END_STATE();
    case 204:
      if (lookahead == 'T') ADVANCE(543);
      END_STATE();
    case 205:
      if (lookahead == 'T') ADVANCE(561);
      END_STATE();
    case 206:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 207:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 208:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 209:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 210:
      if (lookahead == 'T') ADVANCE(87);
      END_STATE();
    case 211:
      if (lookahead == 'U') ADVANCE(125);
      END_STATE();
    case 212:
      if (lookahead == 'U') ADVANCE(168);
      END_STATE();
    case 213:
      if (lookahead == 'U') ADVANCE(148);
      END_STATE();
    case 214:
      if (lookahead == 'U') ADVANCE(133);
      END_STATE();
    case 215:
      if (lookahead == 'U') ADVANCE(65);
      END_STATE();
    case 216:
      if (lookahead == 'U') ADVANCE(128);
      END_STATE();
    case 217:
      if (lookahead == 'V') ADVANCE(612);
      END_STATE();
    case 218:
      if (lookahead == 'V') ADVANCE(555);
      END_STATE();
    case 219:
      if (lookahead == 'V') ADVANCE(67);
      END_STATE();
    case 220:
      if (lookahead == 'V') ADVANCE(69);
      END_STATE();
    case 221:
      if (lookahead == 'W') ADVANCE(528);
      END_STATE();
    case 222:
      if (lookahead == 'X') ADVANCE(165);
      END_STATE();
    case 223:
      if (lookahead == 'X') ADVANCE(203);
      END_STATE();
    case 224:
      if (lookahead == '_') ADVANCE(375);
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(442);
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(338);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'b') ADVANCE(323);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'd') ADVANCE(461);
      if (lookahead == 'g') ADVANCE(292);
      if (lookahead == 'h') ADVANCE(331);
      if (lookahead == 'm') ADVANCE(430);
      if (lookahead == 'p') ADVANCE(398);
      if (lookahead == 's') ADVANCE(382);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 242:
      if (lookahead == 'b') ADVANCE(608);
      END_STATE();
    case 243:
      if (lookahead == 'b') ADVANCE(295);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(590);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(601);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 248:
      if (lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 249:
      if (lookahead == 'c') ADVANCE(450);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(451);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(564);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(570);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(539);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(388);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(466);
      END_STATE();
    case 260:
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 261:
      if (lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == 'q') ADVANCE(342);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(417);
      if (lookahead == 'g') ADVANCE(557);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 301:
      if (lookahead == 'f') ADVANCE(442);
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 302:
      if (lookahead == 'f') ADVANCE(351);
      END_STATE();
    case 303:
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead == 'p') ADVANCE(404);
      if (lookahead == 'v') ADVANCE(288);
      END_STATE();
    case 304:
      if (lookahead == 'g') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(404);
      END_STATE();
    case 305:
      if (lookahead == 'g') ADVANCE(563);
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 306:
      if (lookahead == 'g') ADVANCE(315);
      END_STATE();
    case 307:
      if (lookahead == 'g') ADVANCE(581);
      END_STATE();
    case 308:
      if (lookahead == 'g') ADVANCE(583);
      END_STATE();
    case 309:
      if (lookahead == 'g') ADVANCE(405);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(293);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(240);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(423);
      END_STATE();
    case 315:
      if (lookahead == 'h') ADVANCE(445);
      END_STATE();
    case 316:
      if (lookahead == 'h') ADVANCE(394);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(598);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(471);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == 'u') ADVANCE(352);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == 'u') ADVANCE(367);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(435);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(455);
      END_STATE();
    case 333:
      if (lookahead == 'k') ADVANCE(567);
      END_STATE();
    case 334:
      if (lookahead == 'k') ADVANCE(316);
      END_STATE();
    case 335:
      if (lookahead == 'k') ADVANCE(266);
      END_STATE();
    case 336:
      if (lookahead == 'k') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 337:
      if (lookahead == 'k') ADVANCE(254);
      END_STATE();
    case 338:
      if (lookahead == 'k') ADVANCE(276);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(571);
      END_STATE();
    case 340:
      if (lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(578);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(584);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(594);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 347:
      if (lookahead == 'l') ADVANCE(603);
      END_STATE();
    case 348:
      if (lookahead == 'l') ADVANCE(604);
      END_STATE();
    case 349:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 350:
      if (lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 352:
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 353:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 354:
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 355:
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(379);
      if (lookahead == 'w') ADVANCE(224);
      END_STATE();
    case 356:
      if (lookahead == 'l') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(426);
      END_STATE();
    case 357:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 358:
      if (lookahead == 'l') ADVANCE(433);
      END_STATE();
    case 359:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 360:
      if (lookahead == 'm') ADVANCE(559);
      END_STATE();
    case 361:
      if (lookahead == 'm') ADVANCE(243);
      END_STATE();
    case 362:
      if (lookahead == 'm') ADVANCE(513);
      END_STATE();
    case 363:
      if (lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 364:
      if (lookahead == 'm') ADVANCE(399);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(547);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(529);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(613);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(595);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(432);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(307);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead == 'q') ADVANCE(354);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 384:
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 385:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 386:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 387:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(472);
      END_STATE();
    case 400:
      if (lookahead == 'p') ADVANCE(572);
      if (lookahead == 'x') ADVANCE(549);
      END_STATE();
    case 401:
      if (lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 402:
      if (lookahead == 'p') ADVANCE(586);
      END_STATE();
    case 403:
      if (lookahead == 'p') ADVANCE(520);
      END_STATE();
    case 404:
      if (lookahead == 'p') ADVANCE(300);
      END_STATE();
    case 405:
      if (lookahead == 'q') ADVANCE(468);
      END_STATE();
    case 406:
      if (lookahead == 'q') ADVANCE(345);
      END_STATE();
    case 407:
      if (lookahead == 'q') ADVANCE(347);
      END_STATE();
    case 408:
      if (lookahead == 'q') ADVANCE(348);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 418:
      if (lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 419:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 422:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 423:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 424:
      if (lookahead == 'r') ADVANCE(438);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(605);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(437);
      if (lookahead == 'y') ADVANCE(439);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(457);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(277);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(576);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(524);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(577);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(531);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 457:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 458:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 460:
      if (lookahead == 'u') ADVANCE(353);
      END_STATE();
    case 461:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 462:
      if (lookahead == 'u') ADVANCE(403);
      END_STATE();
    case 463:
      if (lookahead == 'u') ADVANCE(378);
      END_STATE();
    case 464:
      if (lookahead == 'u') ADVANCE(361);
      END_STATE();
    case 465:
      if (lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 466:
      if (lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 467:
      if (lookahead == 'u') ADVANCE(436);
      END_STATE();
    case 468:
      if (lookahead == 'u') ADVANCE(296);
      END_STATE();
    case 469:
      if (lookahead == 'v') ADVANCE(612);
      END_STATE();
    case 470:
      if (lookahead == 'v') ADVANCE(555);
      END_STATE();
    case 471:
      if (lookahead == 'v') ADVANCE(269);
      END_STATE();
    case 472:
      if (lookahead == 'v') ADVANCE(271);
      END_STATE();
    case 473:
      if (lookahead == 'v') ADVANCE(273);
      END_STATE();
    case 474:
      if (lookahead == 'w') ADVANCE(528);
      END_STATE();
    case 475:
      if (lookahead == 'w') ADVANCE(302);
      END_STATE();
    case 476:
      if (lookahead == 'x') ADVANCE(401);
      END_STATE();
    case 477:
      if (lookahead == 'x') ADVANCE(449);
      END_STATE();
    case 478:
      if (lookahead == 'y') ADVANCE(599);
      END_STATE();
    case 479:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(479)
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '@') ADVANCE(911);
      if (lookahead == 'A') ADVANCE(766);
      if (lookahead == 'C') ADVANCE(722);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'M') ADVANCE(656);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'R') ADVANCE(658);
      if (lookahead == 'S') ADVANCE(747);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == 'c') ADVANCE(845);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'm') ADVANCE(779);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 'r') ADVANCE(781);
      if (lookahead == 's') ADVANCE(651);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '}') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 480:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(480)
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '@') ADVANCE(911);
      if (lookahead == 'A') ADVANCE(766);
      if (lookahead == 'C') ADVANCE(660);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'M') ADVANCE(656);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'S') ADVANCE(747);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == 'c') ADVANCE(783);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'm') ADVANCE(779);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 's') ADVANCE(651);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '|') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 481:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(481)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '/') ADVANCE(898);
      if (lookahead == '<') ADVANCE(903);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(901);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(693);
      if (lookahead == 'D') ADVANCE(685);
      if (lookahead == 'F') ADVANCE(654);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(720);
      if (lookahead == 'J') ADVANCE(729);
      if (lookahead == 'L') ADVANCE(725);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'R') ADVANCE(683);
      if (lookahead == 'S') ADVANCE(686);
      if (lookahead == 'T') ADVANCE(659);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 'g') ADVANCE(863);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == 'j') ADVANCE(852);
      if (lookahead == 'l') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead == '|') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 482:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(482)
      if (lookahead == '!') ADVANCE(922);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '@') ADVANCE(911);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 's') ADVANCE(652);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '{') ADVANCE(622);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '}') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 483:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(483)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '/') ADVANCE(898);
      if (lookahead == '<') ADVANCE(903);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(901);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(778);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 484:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(484)
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'A') ADVANCE(693);
      if (lookahead == 'D') ADVANCE(685);
      if (lookahead == 'F') ADVANCE(654);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(720);
      if (lookahead == 'J') ADVANCE(729);
      if (lookahead == 'L') ADVANCE(725);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'R') ADVANCE(683);
      if (lookahead == 'S') ADVANCE(686);
      if (lookahead == 'T') ADVANCE(659);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 'g') ADVANCE(863);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == 'j') ADVANCE(852);
      if (lookahead == 'l') ADVANCE(848);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead == '|') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 485:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(485)
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(778);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '}') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 486:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(486)
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == '{') ADVANCE(622);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '}') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 487:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(487)
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == 'F') ADVANCE(742);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(865);
      if (lookahead == '|') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(910);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 488:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(488)
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == 'S') ADVANCE(701);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 's') ADVANCE(824);
      if (lookahead == '|') ADVANCE(924);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 489:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(489)
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == '|') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 490:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(490)
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == '|') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 491:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(491)
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == '|') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(910);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 492:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(639);
      if (lookahead == '"') ADVANCE(638);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead != 0) ADVANCE(637);
      END_STATE();
    case 493:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(640);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead != 0) ADVANCE(637);
      END_STATE();
    case 494:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(494)
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 495:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(495)
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '@') ADVANCE(911);
      if (lookahead == 'A') ADVANCE(766);
      if (lookahead == 'C') ADVANCE(728);
      if (lookahead == 'F') ADVANCE(655);
      if (lookahead == 'M') ADVANCE(656);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'S') ADVANCE(747);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(888);
      if (lookahead == 'c') ADVANCE(851);
      if (lookahead == 'f') ADVANCE(650);
      if (lookahead == 'm') ADVANCE(779);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 's') ADVANCE(651);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '|') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 496:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(912);
      END_STATE();
    case 497:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(908);
      END_STATE();
    case 498:
      if (eof) ADVANCE(511);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '/') ADVANCE(898);
      if (lookahead == '<') ADVANCE(903);
      if (lookahead == '=') ADVANCE(615);
      if (lookahead == '>') ADVANCE(901);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(693);
      if (lookahead == 'D') ADVANCE(685);
      if (lookahead == 'F') ADVANCE(653);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(720);
      if (lookahead == 'J') ADVANCE(729);
      if (lookahead == 'L') ADVANCE(687);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'R') ADVANCE(683);
      if (lookahead == 'S') ADVANCE(686);
      if (lookahead == 'T') ADVANCE(659);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(776);
      if (lookahead == 'g') ADVANCE(863);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == 'j') ADVANCE(852);
      if (lookahead == 'l') ADVANCE(810);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(506)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 499:
      if (eof) ADVANCE(511);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '/') ADVANCE(898);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '<') ADVANCE(903);
      if (lookahead == '=') ADVANCE(616);
      if (lookahead == '>') ADVANCE(901);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(155);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(914);
      if (lookahead == 'Z') ADVANCE(915);
      if (lookahead == '_') ADVANCE(647);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'j') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(507)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      END_STATE();
    case 500:
      if (eof) ADVANCE(511);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '/') ADVANCE(898);
      if (lookahead == '<') ADVANCE(903);
      if (lookahead == '=') ADVANCE(615);
      if (lookahead == '>') ADVANCE(901);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(155);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'j') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(509)
      END_STATE();
    case 501:
      if (eof) ADVANCE(511);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '=') ADVANCE(614);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(155);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'N') ADVANCE(211);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == '_') ADVANCE(647);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'j') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'n') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == 'w') ADVANCE(319);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '}') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(510)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      END_STATE();
    case 502:
      if (eof) ADVANCE(511);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'A') ADVANCE(693);
      if (lookahead == 'D') ADVANCE(685);
      if (lookahead == 'F') ADVANCE(653);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(720);
      if (lookahead == 'J') ADVANCE(729);
      if (lookahead == 'L') ADVANCE(687);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'R') ADVANCE(683);
      if (lookahead == 'S') ADVANCE(686);
      if (lookahead == 'T') ADVANCE(659);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(776);
      if (lookahead == 'g') ADVANCE(863);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == 'j') ADVANCE(852);
      if (lookahead == 'l') ADVANCE(810);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(508)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 503:
      if (eof) ADVANCE(511);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '=') ADVANCE(614);
      if (lookahead == '@') ADVANCE(911);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'C') ADVANCE(184);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'F') ADVANCE(108);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(143);
      if (lookahead == 'J') ADVANCE(163);
      if (lookahead == 'L') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(171);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'V') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == '_') ADVANCE(647);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'f') ADVANCE(327);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == 'j') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(409);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == 'v') ADVANCE(286);
      if (lookahead == 'w') ADVANCE(319);
      if (lookahead == '{') ADVANCE(622);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '}') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(505)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      END_STATE();
    case 504:
      if (eof) ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(504)
      if (lookahead == '!') ADVANCE(923);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(626);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '/') ADVANCE(898);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '<') ADVANCE(903);
      if (lookahead == '=') ADVANCE(616);
      if (lookahead == '>') ADVANCE(901);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '@') ADVANCE(911);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(30);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'J') ADVANCE(163);
      if (lookahead == 'L') ADVANCE(31);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(211);
      if (lookahead == 'P') ADVANCE(171);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(913);
      if (lookahead == 'V') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == 'Z') ADVANCE(915);
      if (lookahead == '_') ADVANCE(647);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == 'j') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == 'n') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(409);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == 'v') ADVANCE(286);
      if (lookahead == 'w') ADVANCE(319);
      if (lookahead == '{') ADVANCE(622);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      END_STATE();
    case 505:
      if (eof) ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(505)
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '=') ADVANCE(614);
      if (lookahead == '@') ADVANCE(911);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'C') ADVANCE(184);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(222);
      if (lookahead == 'F') ADVANCE(108);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(143);
      if (lookahead == 'J') ADVANCE(163);
      if (lookahead == 'L') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(171);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'V') ADVANCE(80);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == '_') ADVANCE(647);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'f') ADVANCE(327);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == 'j') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(409);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == 'v') ADVANCE(286);
      if (lookahead == 'w') ADVANCE(319);
      if (lookahead == '{') ADVANCE(622);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '}') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      END_STATE();
    case 506:
      if (eof) ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(506)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '/') ADVANCE(898);
      if (lookahead == '<') ADVANCE(903);
      if (lookahead == '=') ADVANCE(615);
      if (lookahead == '>') ADVANCE(901);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(693);
      if (lookahead == 'D') ADVANCE(685);
      if (lookahead == 'F') ADVANCE(653);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(720);
      if (lookahead == 'J') ADVANCE(729);
      if (lookahead == 'L') ADVANCE(687);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'R') ADVANCE(683);
      if (lookahead == 'S') ADVANCE(686);
      if (lookahead == 'T') ADVANCE(659);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(776);
      if (lookahead == 'g') ADVANCE(863);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == 'j') ADVANCE(852);
      if (lookahead == 'l') ADVANCE(810);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 507:
      if (eof) ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(507)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '/') ADVANCE(898);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == '<') ADVANCE(903);
      if (lookahead == '=') ADVANCE(616);
      if (lookahead == '>') ADVANCE(901);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(155);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(914);
      if (lookahead == 'Z') ADVANCE(915);
      if (lookahead == '_') ADVANCE(647);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'j') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      END_STATE();
    case 508:
      if (eof) ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(508)
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == ':') ADVANCE(597);
      if (lookahead == 'A') ADVANCE(693);
      if (lookahead == 'D') ADVANCE(685);
      if (lookahead == 'F') ADVANCE(653);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(720);
      if (lookahead == 'J') ADVANCE(729);
      if (lookahead == 'L') ADVANCE(687);
      if (lookahead == 'N') ADVANCE(762);
      if (lookahead == 'R') ADVANCE(683);
      if (lookahead == 'S') ADVANCE(686);
      if (lookahead == 'T') ADVANCE(659);
      if (lookahead == '_') ADVANCE(648);
      if (lookahead == '`') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(776);
      if (lookahead == 'g') ADVANCE(863);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == 'j') ADVANCE(852);
      if (lookahead == 'l') ADVANCE(810);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(782);
      if (lookahead == '|') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 509:
      if (eof) ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(509)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == '*') ADVANCE(897);
      if (lookahead == '+') ADVANCE(627);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '/') ADVANCE(898);
      if (lookahead == '<') ADVANCE(903);
      if (lookahead == '=') ADVANCE(615);
      if (lookahead == '>') ADVANCE(901);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(155);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(328);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'j') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '|') ADVANCE(925);
      END_STATE();
    case 510:
      if (eof) ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(510)
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '\'') ADVANCE(633);
      if (lookahead == '(') ADVANCE(617);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == ',') ADVANCE(618);
      if (lookahead == '-') ADVANCE(625);
      if (lookahead == '.') ADVANCE(621);
      if (lookahead == '=') ADVANCE(614);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(75);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'G') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(155);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(88);
      if (lookahead == 'N') ADVANCE(211);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == 'W') ADVANCE(104);
      if (lookahead == '_') ADVANCE(647);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(230);
      if (lookahead == 'g') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'j') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'n') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == 'w') ADVANCE(319);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead == '}') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(206);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(453);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_keyword_case);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_keyword_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_keyword_append);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_keyword_append);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_keyword_remove);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_keyword_remove);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_keyword_intersect);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_keyword_intersect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(53);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(256);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_keyword_lag);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_keyword_lead);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_keyword_first);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_keyword_last);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_keyword_rank);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_keyword_rank);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_keyword_row_number);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_keyword_round);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_keyword_all);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_keyword_map);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_keyword_loop);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_keyword_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_keyword_internal);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_keyword_module);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_keyword_from_text);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_keyword_from_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_keyword_format);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_keyword_csv);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_keyword_json);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(628);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(628);
      if (lookahead == '>') ADVANCE(624);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(620);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(918);
      if (lookahead == '|') ADVANCE(927);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(632);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      if (lookahead == '#') ADVANCE(918);
      if (lookahead == '|') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(632);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(632);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '#') ADVANCE(919);
      if (lookahead == '|') ADVANCE(928);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(636);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(635);
      if (lookahead == '#') ADVANCE(919);
      if (lookahead == '|') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(639);
      if (lookahead == '"') ADVANCE(638);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead != 0) ADVANCE(637);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(640);
      if (lookahead == '#') ADVANCE(916);
      if (lookahead == '|') ADVANCE(924);
      if (lookahead != 0) ADVANCE(637);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(642);
      if (lookahead == 'a') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(644);
      if (lookahead == 't') ADVANCE(791);
      if (lookahead == 'u') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(704);
      if (lookahead == 'I') ADVANCE(708);
      if (lookahead == 'R') ADVANCE(724);
      if (lookahead == 'U') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(704);
      if (lookahead == 'I') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(770);
      if (lookahead == 'I') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(703);
      if (lookahead == 'R') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(745);
      if (lookahead == 'O') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(735);
      if (lookahead == 'G') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(707);
      if (lookahead == 'O') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(750);
      if (lookahead == 'O') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(696);
      if (lookahead == 'P') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(668);
      if (lookahead == 'U') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(827);
      if (lookahead == 'i') ADVANCE(831);
      if (lookahead == 'r') ADVANCE(847);
      if (lookahead == 'u') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(827);
      if (lookahead == 'i') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(892);
      if (lookahead == 'i') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(826);
      if (lookahead == 'r') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == 'o') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(858);
      if (lookahead == 'g') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(830);
      if (lookahead == 'o') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(871);
      if (lookahead == 'o') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(819);
      if (lookahead == 'p') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(894);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__identifier_dot);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(899);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(902);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(904);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(909);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(115);
      if (lookahead == 'R') ADVANCE(215);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(921);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(632);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(636);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '|') ADVANCE(926);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(921);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(921);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_bang);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(900);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_pipe);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead == '|') ADVANCE(907);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(921);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(632);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(636);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 503},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 498},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 499},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 499},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 499},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
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
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 498},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 498},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 499},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 499},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 499},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 499},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 499},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 499},
  [60] = {.lex_state = 499},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 502},
  [63] = {.lex_state = 499},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 499},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 499},
  [68] = {.lex_state = 499},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 499},
  [78] = {.lex_state = 499},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 499},
  [82] = {.lex_state = 502},
  [83] = {.lex_state = 499},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 499},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 499},
  [90] = {.lex_state = 499},
  [91] = {.lex_state = 499},
  [92] = {.lex_state = 499},
  [93] = {.lex_state = 499},
  [94] = {.lex_state = 499},
  [95] = {.lex_state = 499},
  [96] = {.lex_state = 499},
  [97] = {.lex_state = 499},
  [98] = {.lex_state = 499},
  [99] = {.lex_state = 499},
  [100] = {.lex_state = 499},
  [101] = {.lex_state = 499},
  [102] = {.lex_state = 499},
  [103] = {.lex_state = 499},
  [104] = {.lex_state = 499},
  [105] = {.lex_state = 499},
  [106] = {.lex_state = 499},
  [107] = {.lex_state = 499},
  [108] = {.lex_state = 499},
  [109] = {.lex_state = 499},
  [110] = {.lex_state = 499},
  [111] = {.lex_state = 499},
  [112] = {.lex_state = 499},
  [113] = {.lex_state = 499},
  [114] = {.lex_state = 499},
  [115] = {.lex_state = 499},
  [116] = {.lex_state = 499},
  [117] = {.lex_state = 499},
  [118] = {.lex_state = 499},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 499},
  [122] = {.lex_state = 500},
  [123] = {.lex_state = 503},
  [124] = {.lex_state = 502},
  [125] = {.lex_state = 500},
  [126] = {.lex_state = 503},
  [127] = {.lex_state = 502},
  [128] = {.lex_state = 502},
  [129] = {.lex_state = 502},
  [130] = {.lex_state = 502},
  [131] = {.lex_state = 502},
  [132] = {.lex_state = 502},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 502},
  [135] = {.lex_state = 502},
  [136] = {.lex_state = 503},
  [137] = {.lex_state = 502},
  [138] = {.lex_state = 503},
  [139] = {.lex_state = 502},
  [140] = {.lex_state = 502},
  [141] = {.lex_state = 502},
  [142] = {.lex_state = 503},
  [143] = {.lex_state = 503},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 502},
  [146] = {.lex_state = 502},
  [147] = {.lex_state = 502},
  [148] = {.lex_state = 503},
  [149] = {.lex_state = 502},
  [150] = {.lex_state = 503},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 503},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 503},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 503},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 503},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 503},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 501},
  [176] = {.lex_state = 503},
  [177] = {.lex_state = 501},
  [178] = {.lex_state = 503},
  [179] = {.lex_state = 503},
  [180] = {.lex_state = 503},
  [181] = {.lex_state = 503},
  [182] = {.lex_state = 503},
  [183] = {.lex_state = 503},
  [184] = {.lex_state = 503},
  [185] = {.lex_state = 503},
  [186] = {.lex_state = 503},
  [187] = {.lex_state = 503},
  [188] = {.lex_state = 503},
  [189] = {.lex_state = 503},
  [190] = {.lex_state = 503},
  [191] = {.lex_state = 503},
  [192] = {.lex_state = 503},
  [193] = {.lex_state = 503},
  [194] = {.lex_state = 503},
  [195] = {.lex_state = 503},
  [196] = {.lex_state = 503},
  [197] = {.lex_state = 503},
  [198] = {.lex_state = 503},
  [199] = {.lex_state = 503},
  [200] = {.lex_state = 503},
  [201] = {.lex_state = 503},
  [202] = {.lex_state = 503},
  [203] = {.lex_state = 503},
  [204] = {.lex_state = 503},
  [205] = {.lex_state = 503},
  [206] = {.lex_state = 503},
  [207] = {.lex_state = 503},
  [208] = {.lex_state = 503},
  [209] = {.lex_state = 503},
  [210] = {.lex_state = 503},
  [211] = {.lex_state = 503},
  [212] = {.lex_state = 503},
  [213] = {.lex_state = 503},
  [214] = {.lex_state = 503},
  [215] = {.lex_state = 503},
  [216] = {.lex_state = 503},
  [217] = {.lex_state = 503},
  [218] = {.lex_state = 503},
  [219] = {.lex_state = 503},
  [220] = {.lex_state = 503},
  [221] = {.lex_state = 503},
  [222] = {.lex_state = 503},
  [223] = {.lex_state = 503},
  [224] = {.lex_state = 503},
  [225] = {.lex_state = 503},
  [226] = {.lex_state = 503},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 503},
  [229] = {.lex_state = 503},
  [230] = {.lex_state = 503},
  [231] = {.lex_state = 503},
  [232] = {.lex_state = 503},
  [233] = {.lex_state = 503},
  [234] = {.lex_state = 503},
  [235] = {.lex_state = 503},
  [236] = {.lex_state = 503},
  [237] = {.lex_state = 503},
  [238] = {.lex_state = 498},
  [239] = {.lex_state = 503},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 503},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 503},
  [244] = {.lex_state = 499},
  [245] = {.lex_state = 498},
  [246] = {.lex_state = 498},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 498},
  [249] = {.lex_state = 498},
  [250] = {.lex_state = 498},
  [251] = {.lex_state = 498},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 501},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 498},
  [259] = {.lex_state = 501},
  [260] = {.lex_state = 501},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 498},
  [263] = {.lex_state = 501},
  [264] = {.lex_state = 501},
  [265] = {.lex_state = 501},
  [266] = {.lex_state = 4},
  [267] = {.lex_state = 498},
  [268] = {.lex_state = 498},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 498},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 498},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 498},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 498},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 498},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 498},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 498},
  [288] = {.lex_state = 498},
  [289] = {.lex_state = 503},
  [290] = {.lex_state = 498},
  [291] = {.lex_state = 503},
  [292] = {.lex_state = 503},
  [293] = {.lex_state = 503},
  [294] = {.lex_state = 503},
  [295] = {.lex_state = 503},
  [296] = {.lex_state = 503},
  [297] = {.lex_state = 503},
  [298] = {.lex_state = 503},
  [299] = {.lex_state = 503},
  [300] = {.lex_state = 503},
  [301] = {.lex_state = 503},
  [302] = {.lex_state = 503},
  [303] = {.lex_state = 503},
  [304] = {.lex_state = 503},
  [305] = {.lex_state = 503},
  [306] = {.lex_state = 16},
  [307] = {.lex_state = 16},
  [308] = {.lex_state = 503},
  [309] = {.lex_state = 16},
  [310] = {.lex_state = 503},
  [311] = {.lex_state = 16},
  [312] = {.lex_state = 503},
  [313] = {.lex_state = 16},
  [314] = {.lex_state = 501},
  [315] = {.lex_state = 15},
  [316] = {.lex_state = 19},
  [317] = {.lex_state = 503},
  [318] = {.lex_state = 501},
  [319] = {.lex_state = 501},
  [320] = {.lex_state = 18},
  [321] = {.lex_state = 18},
  [322] = {.lex_state = 503},
  [323] = {.lex_state = 18},
  [324] = {.lex_state = 501},
  [325] = {.lex_state = 503},
  [326] = {.lex_state = 503},
  [327] = {.lex_state = 503},
  [328] = {.lex_state = 503},
  [329] = {.lex_state = 17},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 503},
  [332] = {.lex_state = 17},
  [333] = {.lex_state = 503},
  [334] = {.lex_state = 503},
  [335] = {.lex_state = 503},
  [336] = {.lex_state = 17},
  [337] = {.lex_state = 501},
  [338] = {.lex_state = 16},
  [339] = {.lex_state = 503},
  [340] = {.lex_state = 503},
  [341] = {.lex_state = 503},
  [342] = {.lex_state = 503},
  [343] = {.lex_state = 503},
  [344] = {.lex_state = 17},
  [345] = {.lex_state = 503},
  [346] = {.lex_state = 16},
  [347] = {.lex_state = 503},
  [348] = {.lex_state = 503},
  [349] = {.lex_state = 503},
  [350] = {.lex_state = 503},
  [351] = {.lex_state = 503},
  [352] = {.lex_state = 16},
  [353] = {.lex_state = 501},
  [354] = {.lex_state = 501},
  [355] = {.lex_state = 503},
  [356] = {.lex_state = 16},
  [357] = {.lex_state = 503},
  [358] = {.lex_state = 17},
  [359] = {.lex_state = 17},
  [360] = {.lex_state = 503},
  [361] = {.lex_state = 501},
  [362] = {.lex_state = 17},
  [363] = {.lex_state = 17},
  [364] = {.lex_state = 17},
  [365] = {.lex_state = 501},
  [366] = {.lex_state = 501},
  [367] = {.lex_state = 501},
  [368] = {.lex_state = 16},
  [369] = {.lex_state = 17},
  [370] = {.lex_state = 503},
  [371] = {.lex_state = 17},
  [372] = {.lex_state = 17},
  [373] = {.lex_state = 503},
  [374] = {.lex_state = 501},
  [375] = {.lex_state = 16},
  [376] = {.lex_state = 501},
  [377] = {.lex_state = 501},
  [378] = {.lex_state = 503},
  [379] = {.lex_state = 503},
  [380] = {.lex_state = 503},
  [381] = {.lex_state = 20},
  [382] = {.lex_state = 503},
  [383] = {.lex_state = 503},
  [384] = {.lex_state = 16},
  [385] = {.lex_state = 503},
  [386] = {.lex_state = 503},
  [387] = {.lex_state = 503},
  [388] = {.lex_state = 503},
  [389] = {.lex_state = 492},
  [390] = {.lex_state = 17},
  [391] = {.lex_state = 503},
  [392] = {.lex_state = 503},
  [393] = {.lex_state = 503},
  [394] = {.lex_state = 503},
  [395] = {.lex_state = 503},
  [396] = {.lex_state = 492},
  [397] = {.lex_state = 503},
  [398] = {.lex_state = 503},
  [399] = {.lex_state = 503},
  [400] = {.lex_state = 503},
  [401] = {.lex_state = 503},
  [402] = {.lex_state = 16},
  [403] = {.lex_state = 492},
  [404] = {.lex_state = 503},
  [405] = {.lex_state = 503},
  [406] = {.lex_state = 16},
  [407] = {.lex_state = 503},
  [408] = {.lex_state = 16},
  [409] = {.lex_state = 17},
  [410] = {.lex_state = 503},
  [411] = {.lex_state = 503},
  [412] = {.lex_state = 17},
  [413] = {.lex_state = 503},
  [414] = {.lex_state = 492},
  [415] = {.lex_state = 16},
  [416] = {.lex_state = 503},
  [417] = {.lex_state = 16},
  [418] = {.lex_state = 503},
  [419] = {.lex_state = 503},
  [420] = {.lex_state = 493},
  [421] = {.lex_state = 503},
  [422] = {.lex_state = 503},
  [423] = {.lex_state = 503},
  [424] = {.lex_state = 503},
  [425] = {.lex_state = 503},
  [426] = {.lex_state = 503},
  [427] = {.lex_state = 503},
  [428] = {.lex_state = 503},
  [429] = {.lex_state = 493},
  [430] = {.lex_state = 16},
  [431] = {.lex_state = 493},
  [432] = {.lex_state = 16},
  [433] = {.lex_state = 492},
  [434] = {.lex_state = 16},
  [435] = {.lex_state = 503},
  [436] = {.lex_state = 5},
  [437] = {.lex_state = 503},
  [438] = {.lex_state = 503},
  [439] = {.lex_state = 503},
  [440] = {.lex_state = 503},
  [441] = {.lex_state = 503},
  [442] = {.lex_state = 503},
  [443] = {.lex_state = 920},
  [444] = {.lex_state = 5},
  [445] = {.lex_state = 503},
  [446] = {.lex_state = 5},
  [447] = {.lex_state = 503},
  [448] = {.lex_state = 5},
  [449] = {.lex_state = 503},
  [450] = {.lex_state = 503},
  [451] = {.lex_state = 503},
  [452] = {.lex_state = 503},
  [453] = {.lex_state = 503},
  [454] = {.lex_state = 503},
  [455] = {.lex_state = 503},
  [456] = {.lex_state = 5},
  [457] = {.lex_state = 503},
  [458] = {.lex_state = 630},
  [459] = {.lex_state = 630},
  [460] = {.lex_state = 634},
  [461] = {.lex_state = 630},
  [462] = {.lex_state = 503},
  [463] = {.lex_state = 503},
  [464] = {.lex_state = 503},
  [465] = {.lex_state = 503},
  [466] = {.lex_state = 503},
  [467] = {.lex_state = 503},
  [468] = {.lex_state = 503},
  [469] = {.lex_state = 503},
  [470] = {.lex_state = 503},
  [471] = {.lex_state = 503},
  [472] = {.lex_state = 503},
  [473] = {.lex_state = 15},
  [474] = {.lex_state = 503},
  [475] = {.lex_state = 503},
  [476] = {.lex_state = 503},
  [477] = {.lex_state = 503},
  [478] = {.lex_state = 503},
  [479] = {.lex_state = 503},
  [480] = {.lex_state = 5},
  [481] = {.lex_state = 503},
  [482] = {.lex_state = 503},
  [483] = {.lex_state = 15},
  [484] = {.lex_state = 503},
  [485] = {.lex_state = 503},
  [486] = {.lex_state = 503},
  [487] = {.lex_state = 15},
  [488] = {.lex_state = 503},
  [489] = {.lex_state = 5},
  [490] = {.lex_state = 503},
  [491] = {.lex_state = 15},
  [492] = {.lex_state = 21},
  [493] = {.lex_state = 503},
  [494] = {.lex_state = 503},
  [495] = {.lex_state = 503},
  [496] = {.lex_state = 503},
  [497] = {.lex_state = 5},
  [498] = {.lex_state = 503},
  [499] = {.lex_state = 503},
  [500] = {.lex_state = 503},
  [501] = {.lex_state = 503},
  [502] = {.lex_state = 503},
  [503] = {.lex_state = 5},
  [504] = {.lex_state = 503},
  [505] = {.lex_state = 503},
  [506] = {.lex_state = 503},
  [507] = {.lex_state = 5},
  [508] = {.lex_state = 503},
  [509] = {.lex_state = 503},
  [510] = {.lex_state = 503},
  [511] = {.lex_state = 21},
  [512] = {.lex_state = 630},
  [513] = {.lex_state = 634},
  [514] = {.lex_state = 503},
  [515] = {.lex_state = 503},
  [516] = {.lex_state = 21},
  [517] = {.lex_state = 630},
  [518] = {.lex_state = 634},
  [519] = {.lex_state = 503},
  [520] = {.lex_state = 21},
  [521] = {.lex_state = 630},
  [522] = {.lex_state = 634},
  [523] = {.lex_state = 21},
  [524] = {.lex_state = 630},
  [525] = {.lex_state = 634},
  [526] = {.lex_state = 21},
  [527] = {.lex_state = 630},
  [528] = {.lex_state = 21},
  [529] = {.lex_state = 21},
  [530] = {.lex_state = 21},
  [531] = {.lex_state = 503},
  [532] = {.lex_state = 503},
  [533] = {.lex_state = 5},
  [534] = {.lex_state = 503},
  [535] = {.lex_state = 15},
  [536] = {.lex_state = 15},
  [537] = {.lex_state = 15},
  [538] = {(TSStateId)(-1)},
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
    [sym_keyword_internal] = ACTIONS(1),
    [sym_keyword_module] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
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
    [sym_program] = STATE(531),
    [sym_prql] = STATE(333),
    [sym_pipeline] = STATE(345),
    [sym_variable] = STATE(345),
    [sym_function_definition] = STATE(345),
    [sym_from_text] = STATE(126),
    [sym_from] = STATE(126),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(289),
    [aux_sym_program_repeat2] = STATE(294),
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
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(2), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(61), 1,
      sym__agg_keywords,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(246), 1,
      sym_binary_expression,
    STATE(287), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    ACTIONS(25), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(418), 3,
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
    STATE(92), 7,
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
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(61), 1,
      sym__agg_keywords,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(250), 1,
      sym_binary_expression,
    STATE(287), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    ACTIONS(25), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(423), 3,
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
    STATE(92), 7,
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
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(61), 1,
      sym__agg_keywords,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(250), 1,
      sym_binary_expression,
    STATE(287), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    ACTIONS(25), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(423), 3,
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
    STATE(92), 7,
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
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      sym__natural_number,
    ACTIONS(79), 1,
      anon_sym__,
    ACTIONS(81), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      sym__identifier,
    STATE(5), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_function_call_repeat1,
    STATE(127), 1,
      sym_identifier,
    STATE(128), 1,
      aux_sym__friendly_number,
    STATE(141), 1,
      sym__call_parameter,
    STATE(145), 1,
      sym_integer,
    STATE(146), 1,
      sym_literal,
    STATE(132), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(140), 2,
      sym_literal_string,
      sym_decimal_number,
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
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 19,
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
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [484] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(27), 1,
      sym_keyword_count_distinct,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(6), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(61), 1,
      sym__agg_keywords,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(250), 1,
      sym_binary_expression,
    STATE(287), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    ACTIONS(25), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(423), 3,
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
    STATE(92), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [609] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
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
    STATE(7), 1,
      sym_comment,
    STATE(11), 1,
      sym_identifier,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(80), 1,
      sym__agg_keywords,
    STATE(81), 1,
      sym_integer,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(117), 1,
      sym__expression,
    STATE(192), 1,
      sym__agg_rhs_assignment,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(180), 2,
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
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [731] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
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
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym_identifier,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(80), 1,
      sym__agg_keywords,
    STATE(81), 1,
      sym_integer,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(117), 1,
      sym__expression,
    STATE(192), 1,
      sym__agg_rhs_assignment,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(180), 2,
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
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [853] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
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
    STATE(5), 1,
      sym_identifier,
    STATE(9), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(80), 1,
      sym__agg_keywords,
    STATE(81), 1,
      sym_integer,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(117), 1,
      sym__expression,
    STATE(192), 1,
      sym__agg_rhs_assignment,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(180), 2,
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
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [975] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    STATE(10), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym_identifier,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(80), 1,
      sym__agg_keywords,
    STATE(81), 1,
      sym_integer,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(272), 1,
      sym__expression,
    STATE(282), 1,
      sym_binary_expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(469), 1,
      sym_function_call,
    STATE(470), 1,
      sym__agg_rhs_assignment,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
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
    STATE(92), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1095] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      sym__natural_number,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(113), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      sym__identifier,
    STATE(11), 1,
      sym_comment,
    STATE(120), 1,
      aux_sym_function_call_repeat1,
    STATE(154), 1,
      aux_sym__friendly_number,
    STATE(157), 1,
      sym_identifier,
    STATE(160), 1,
      sym__call_parameter,
    STATE(162), 1,
      sym_integer,
    STATE(167), 1,
      sym_literal,
    STATE(161), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(173), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(101), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(65), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 15,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [1189] = 36,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(20), 1,
      aux_sym_case_repeat1,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(227), 1,
      sym_case_condition,
    STATE(270), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym_literal,
    STATE(290), 1,
      sym__expression,
    STATE(393), 1,
      aux_sym_case_repeat2,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1308] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(125), 1,
      sym__expression,
    STATE(209), 1,
      sym_assignment,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(215), 2,
      sym__tuples,
      sym_term,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1418] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(14), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(20), 1,
      aux_sym_case_repeat1,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(227), 1,
      sym_case_condition,
    STATE(270), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym_literal,
    STATE(290), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1532] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(209), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(215), 2,
      sym__tuples,
      sym_term,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1642] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(129), 2,
      sym__natural_number,
      anon_sym__,
    STATE(16), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(127), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [1700] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(411), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1812] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(18), 1,
      sym_comment,
    ACTIONS(51), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(138), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(136), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [1872] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(19), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1984] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_DASH,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(164), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(176), 1,
      sym__natural_number,
    ACTIONS(179), 1,
      anon_sym__,
    ACTIONS(182), 1,
      anon_sym_BQUOTE,
    ACTIONS(185), 1,
      sym__identifier,
    ACTIONS(188), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(227), 1,
      sym_case_condition,
    STATE(270), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym_literal,
    STATE(290), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    ACTIONS(150), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym_comment,
      aux_sym_case_repeat1,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(144), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2096] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(21), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(410), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2208] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(22), 1,
      sym_comment,
    ACTIONS(51), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(199), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [2268] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_bang,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(23), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(122), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(226), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2380] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(24), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(122), 1,
      sym__expression,
    STATE(209), 1,
      sym_assignment,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(215), 2,
      sym__tuples,
      sym_term,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2490] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_bang,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(25), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(125), 1,
      sym__expression,
    STATE(184), 1,
      sym_assignment,
    STATE(226), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2602] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_case_repeat1,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(26), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(227), 1,
      sym_case_condition,
    STATE(270), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym_literal,
    STATE(290), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2718] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(27), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(380), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2830] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_case_repeat1,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(28), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(227), 1,
      sym_case_condition,
    STATE(270), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym_literal,
    STATE(290), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2943] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(29), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(428), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3052] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(30), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(424), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3161] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_case_repeat1,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(31), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(227), 1,
      sym_case_condition,
    STATE(270), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym_literal,
    STATE(290), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3274] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 1,
      anon_sym_EQ_EQ,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(32), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(248), 1,
      sym_binary_expression,
    STATE(290), 1,
      sym__expression,
    STATE(454), 1,
      sym__self_join,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3385] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(33), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(428), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3494] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(34), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(424), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3603] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(35), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(455), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3712] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(424), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3821] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(37), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(428), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3930] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(38), 1,
      sym_comment,
    ACTIONS(237), 17,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(239), 24,
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
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [3985] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(39), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(424), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4094] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(40), 1,
      sym_comment,
    ACTIONS(243), 17,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 24,
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
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [4149] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(41), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(424), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4258] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(42), 1,
      sym_comment,
    ACTIONS(251), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(249), 36,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      sym__natural_number,
      anon_sym__,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [4313] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(532), 1,
      sym_term,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4419] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      anon_sym_DOT,
    STATE(44), 1,
      sym_comment,
    ACTIONS(255), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [4477] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(14), 1,
      aux_sym_case_repeat1,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(45), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(227), 1,
      sym_case_condition,
    STATE(270), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym_literal,
    STATE(290), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4587] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(46), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(262), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4691] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(47), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(428), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4797] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(269), 1,
      anon_sym_DOT,
    STATE(48), 1,
      sym_comment,
    ACTIONS(265), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [4855] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(49), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(184), 1,
      sym_assignment,
    STATE(238), 1,
      sym__expression,
    STATE(424), 1,
      sym_term,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4961] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(277), 1,
      anon_sym_Z,
    STATE(50), 1,
      sym_comment,
    STATE(101), 1,
      sym_timezone,
    STATE(537), 1,
      sym_direction,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(273), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(271), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5023] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(51), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(262), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5127] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(283), 1,
      anon_sym_DOT,
    STATE(52), 1,
      sym_comment,
    ACTIONS(281), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [5182] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(53), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(121), 1,
      sym__expression,
    STATE(219), 1,
      sym__boolean_expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5285] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(116), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5385] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(55), 1,
      sym_comment,
    ACTIONS(243), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 20,
      sym_keyword_filter,
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
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [5437] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(56), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(274), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5537] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(276), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5637] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(289), 1,
      anon_sym_DOT,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      sym__natural_number,
    ACTIONS(297), 1,
      anon_sym__,
    ACTIONS(299), 1,
      anon_sym_BQUOTE,
    ACTIONS(301), 1,
      sym__identifier,
    STATE(58), 1,
      sym_comment,
    STATE(166), 1,
      aux_sym_function_call_repeat1,
    STATE(257), 1,
      aux_sym__friendly_number,
    STATE(261), 1,
      sym_identifier,
    STATE(277), 1,
      sym_literal,
    STATE(283), 1,
      sym__call_parameter,
    STATE(284), 1,
      sym_integer,
    STATE(266), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(269), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(67), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(287), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(65), 15,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5721] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(59), 1,
      sym_comment,
    ACTIONS(305), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(303), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5773] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(60), 1,
      sym_comment,
    ACTIONS(239), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [5825] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(61), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(251), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5925] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      sym__natural_number,
    ACTIONS(79), 1,
      anon_sym__,
    ACTIONS(81), 1,
      anon_sym_BQUOTE,
    ACTIONS(83), 1,
      sym__identifier,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(311), 1,
      anon_sym_DASH,
    STATE(62), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_function_call_repeat1,
    STATE(127), 1,
      sym_identifier,
    STATE(128), 1,
      aux_sym__friendly_number,
    STATE(141), 1,
      sym__call_parameter,
    STATE(145), 1,
      sym_integer,
    STATE(146), 1,
      sym_literal,
    STATE(132), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(140), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(69), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(309), 16,
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
  [6011] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(63), 1,
      sym_comment,
    ACTIONS(245), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(243), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6063] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(64), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(268), 1,
      sym__expression,
    STATE(282), 1,
      sym_binary_expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6165] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(65), 1,
      sym_comment,
    ACTIONS(281), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [6217] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(66), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(267), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6319] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(317), 1,
      sym__natural_number,
    STATE(67), 1,
      sym_comment,
    ACTIONS(315), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(313), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6373] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(68), 1,
      sym_comment,
    ACTIONS(321), 6,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(319), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6425] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(109), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6525] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(70), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(115), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6625] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(90), 1,
      sym__expression,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6725] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(108), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6825] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(73), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(107), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6925] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(106), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7025] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(75), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(105), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7125] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(76), 1,
      sym_comment,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(94), 1,
      sym__expression,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7225] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(327), 1,
      anon_sym_DOT,
    STATE(77), 1,
      sym_comment,
    ACTIONS(325), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(323), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7279] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(333), 1,
      anon_sym_T,
    STATE(78), 1,
      sym_comment,
    ACTIONS(331), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7333] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(79), 1,
      sym_comment,
    ACTIONS(237), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(239), 20,
      sym_keyword_filter,
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
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [7385] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(80), 1,
      sym_comment,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7485] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(339), 1,
      anon_sym_DOT,
    STATE(81), 1,
      sym_comment,
    ACTIONS(337), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7539] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      anon_sym_DOT,
    ACTIONS(351), 1,
      anon_sym_DASH,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      anon_sym_SQUOTE,
    ACTIONS(360), 1,
      sym__natural_number,
    ACTIONS(363), 1,
      anon_sym__,
    ACTIONS(366), 1,
      anon_sym_BQUOTE,
    ACTIONS(369), 1,
      sym__identifier,
    STATE(127), 1,
      sym_identifier,
    STATE(128), 1,
      aux_sym__friendly_number,
    STATE(141), 1,
      sym__call_parameter,
    STATE(145), 1,
      sym_integer,
    STATE(146), 1,
      sym_literal,
    STATE(82), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(132), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(140), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(345), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(343), 16,
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
  [7623] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(372), 1,
      anon_sym_DOT,
    STATE(83), 1,
      sym_comment,
    ACTIONS(67), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7677] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym_comment,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(280), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7779] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(85), 1,
      sym_comment,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(290), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(244), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7881] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(86), 1,
      sym_comment,
    ACTIONS(376), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [7933] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(87), 1,
      sym_comment,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(258), 1,
      sym_binary_expression,
    STATE(290), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8035] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      sym__natural_number,
    ACTIONS(53), 1,
      anon_sym__,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(57), 1,
      sym__identifier,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym__double_quote_string,
    STATE(81), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(88), 1,
      sym_comment,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(285), 1,
      sym_binary_expression,
    STATE(288), 1,
      sym__expression,
    STATE(456), 1,
      sym__alias_identifier,
    STATE(100), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(104), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(113), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(21), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(92), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8137] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(89), 1,
      sym_comment,
    ACTIONS(265), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_Z,
  [8189] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      sym_comment,
    ACTIONS(380), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 29,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8248] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(91), 1,
      sym_comment,
    ACTIONS(392), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8299] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(92), 1,
      sym_comment,
    ACTIONS(396), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8350] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(93), 1,
      sym_comment,
    ACTIONS(400), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8401] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      sym_comment,
    ACTIONS(380), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8454] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(95), 1,
      sym_comment,
    ACTIONS(325), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(323), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8505] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(96), 1,
      sym_comment,
    ACTIONS(404), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8556] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(97), 1,
      sym_comment,
    ACTIONS(315), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(313), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8607] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(98), 1,
      sym_comment,
    ACTIONS(408), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8658] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(99), 1,
      sym_comment,
    ACTIONS(412), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8709] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(100), 1,
      sym_comment,
    ACTIONS(416), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8760] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(101), 1,
      sym_comment,
    ACTIONS(420), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8811] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(102), 1,
      sym_comment,
    ACTIONS(424), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8862] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(103), 1,
      sym_comment,
    ACTIONS(428), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8913] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(104), 1,
      sym_comment,
    ACTIONS(432), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8964] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(105), 1,
      sym_comment,
    ACTIONS(380), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9015] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    STATE(106), 1,
      sym_comment,
    ACTIONS(380), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 28,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9076] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    STATE(107), 1,
      sym_comment,
    ACTIONS(380), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9131] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(380), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 29,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_EQ_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9188] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    STATE(109), 1,
      sym_comment,
    ACTIONS(380), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(378), 22,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_PIPE_PIPE,
  [9257] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(110), 1,
      sym_comment,
    ACTIONS(446), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9308] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(111), 1,
      sym_comment,
    ACTIONS(450), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9359] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(112), 1,
      sym_comment,
    ACTIONS(454), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9410] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(113), 1,
      sym_comment,
    ACTIONS(337), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9461] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(114), 1,
      sym_comment,
    ACTIONS(458), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9512] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    STATE(115), 1,
      sym_comment,
    ACTIONS(380), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(378), 24,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9577] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    STATE(116), 1,
      sym_comment,
    ACTIONS(380), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(378), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9644] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(462), 1,
      sym_keyword_from,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    STATE(117), 1,
      sym_comment,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [9713] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(468), 1,
      sym_keyword_from,
    STATE(118), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [9782] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(473), 1,
      anon_sym_DOT,
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
      anon_sym_BQUOTE,
    ACTIONS(494), 1,
      sym__identifier,
    STATE(154), 1,
      aux_sym__friendly_number,
    STATE(157), 1,
      sym_identifier,
    STATE(160), 1,
      sym__call_parameter,
    STATE(162), 1,
      sym_integer,
    STATE(167), 1,
      sym_literal,
    ACTIONS(341), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(119), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(161), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(173), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(470), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(343), 12,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9863] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      sym__natural_number,
    ACTIONS(111), 1,
      anon_sym__,
    ACTIONS(113), 1,
      anon_sym_BQUOTE,
    ACTIONS(115), 1,
      sym__identifier,
    ACTIONS(497), 1,
      anon_sym_DASH,
    STATE(119), 1,
      aux_sym_function_call_repeat1,
    STATE(120), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym__friendly_number,
    STATE(157), 1,
      sym_identifier,
    STATE(160), 1,
      sym__call_parameter,
    STATE(162), 1,
      sym_integer,
    STATE(167), 1,
      sym_literal,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(161), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(173), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(101), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(309), 12,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9946] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(501), 1,
      sym_keyword_from,
    STATE(121), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(499), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10013] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
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
    STATE(122), 1,
      sym_comment,
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
  [10081] = 18,
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
    STATE(123), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_transforms_repeat1,
    STATE(340), 1,
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
    STATE(228), 10,
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
  [10150] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(124), 1,
      sym_comment,
    ACTIONS(237), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
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
  [10193] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(533), 1,
      anon_sym_EQ,
    STATE(125), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 14,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10256] = 18,
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
    ACTIONS(537), 1,
      sym_keyword_from,
    STATE(126), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_transforms_repeat1,
    STATE(322), 1,
      sym_transforms,
    ACTIONS(529), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(535), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(228), 10,
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
  [10325] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(543), 1,
      anon_sym_COLON,
    STATE(127), 1,
      sym_comment,
    ACTIONS(539), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
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
  [10370] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(128), 1,
      sym_comment,
    STATE(131), 1,
      aux_sym__friendly_number,
    ACTIONS(136), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(138), 21,
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
  [10415] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(129), 1,
      sym_comment,
    STATE(131), 1,
      aux_sym__friendly_number,
    ACTIONS(197), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(199), 21,
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
  [10460] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(130), 1,
      sym_comment,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(245), 21,
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
  [10503] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(545), 1,
      sym__natural_number,
    ACTIONS(548), 1,
      anon_sym__,
    STATE(131), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
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
  [10550] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(132), 1,
      sym_comment,
    ACTIONS(323), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(325), 21,
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
  [10592] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(133), 1,
      sym_comment,
    ACTIONS(239), 8,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 20,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [10634] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(134), 1,
      sym_comment,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
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
  [10676] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(135), 1,
      sym_comment,
    ACTIONS(313), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(315), 21,
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
  [10718] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(199), 1,
      sym_keyword_from,
    STATE(136), 1,
      sym_comment,
    STATE(138), 1,
      aux_sym__friendly_number,
    ACTIONS(551), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(197), 24,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [10764] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(137), 1,
      sym_comment,
    ACTIONS(303), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(305), 21,
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
  [10806] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(127), 1,
      sym_keyword_from,
    ACTIONS(553), 2,
      sym__natural_number,
      anon_sym__,
    STATE(138), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(125), 24,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [10850] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(139), 1,
      sym_comment,
    ACTIONS(556), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(558), 21,
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
  [10892] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(140), 1,
      sym_comment,
    ACTIONS(335), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(337), 21,
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
  [10934] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(141), 1,
      sym_comment,
    ACTIONS(560), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(562), 21,
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
  [10976] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(566), 1,
      sym_keyword_from,
    ACTIONS(568), 1,
      sym_keyword_filter,
    ACTIONS(571), 1,
      sym_keyword_derive,
    ACTIONS(574), 1,
      sym_keyword_group,
    ACTIONS(577), 1,
      sym_keyword_aggregate,
    ACTIONS(580), 1,
      sym_keyword_sort,
    ACTIONS(583), 1,
      sym_keyword_take,
    ACTIONS(586), 1,
      sym_keyword_join,
    ACTIONS(589), 1,
      sym_keyword_select,
    ACTIONS(595), 1,
      sym_keyword_loop,
    STATE(142), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(592), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(564), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(228), 10,
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
  [11040] = 17,
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
    ACTIONS(600), 1,
      sym_keyword_from,
    STATE(142), 1,
      aux_sym_transforms_repeat1,
    STATE(143), 1,
      sym_comment,
    ACTIONS(529), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(598), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(228), 10,
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
  [11106] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(144), 1,
      sym_comment,
    ACTIONS(245), 8,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(243), 20,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [11148] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(145), 1,
      sym_comment,
    ACTIONS(335), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(337), 21,
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
  [11190] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(146), 1,
      sym_comment,
    ACTIONS(539), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
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
  [11232] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(147), 1,
      sym_comment,
    ACTIONS(422), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
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
  [11274] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(138), 1,
      sym_keyword_from,
    STATE(138), 1,
      aux_sym__friendly_number,
    STATE(148), 1,
      sym_comment,
    ACTIONS(551), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(136), 24,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [11320] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(149), 1,
      sym_comment,
    ACTIONS(402), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(404), 21,
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
  [11362] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(251), 1,
      sym_keyword_from,
    STATE(150), 1,
      sym_comment,
    ACTIONS(249), 26,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym__natural_number,
      anon_sym__,
      anon_sym_DOT_DOT,
  [11403] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(151), 1,
      sym_comment,
    ACTIONS(237), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
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
  [11443] = 17,
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
    ACTIONS(602), 1,
      sym_keyword_derive,
    ACTIONS(604), 1,
      sym_keyword_select,
    STATE(152), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_transforms_repeat1,
    STATE(322), 1,
      sym_transforms,
    ACTIONS(535), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(529), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(228), 10,
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
  [11507] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(606), 1,
      sym__natural_number,
    ACTIONS(609), 1,
      anon_sym__,
    STATE(153), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(125), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
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
  [11551] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(153), 1,
      aux_sym__friendly_number,
    STATE(154), 1,
      sym_comment,
    ACTIONS(136), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(138), 17,
      sym_keyword_filter,
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
  [11593] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(155), 1,
      sym_comment,
    ACTIONS(243), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(245), 17,
      sym_keyword_filter,
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
  [11633] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(153), 1,
      aux_sym__friendly_number,
    STATE(156), 1,
      sym_comment,
    ACTIONS(197), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(199), 17,
      sym_keyword_filter,
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
  [11675] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(612), 1,
      anon_sym_COLON,
    STATE(157), 1,
      sym_comment,
    ACTIONS(539), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
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
  [11717] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(321), 1,
      sym_keyword_from,
    STATE(158), 1,
      sym_comment,
    ACTIONS(319), 24,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [11756] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(159), 1,
      sym_comment,
    ACTIONS(402), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(404), 17,
      sym_keyword_filter,
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
  [11795] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(160), 1,
      sym_comment,
    ACTIONS(560), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(562), 17,
      sym_keyword_filter,
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
  [11834] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(161), 1,
      sym_comment,
    ACTIONS(323), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(325), 17,
      sym_keyword_filter,
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
  [11873] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(162), 1,
      sym_comment,
    ACTIONS(335), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(337), 17,
      sym_keyword_filter,
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
  [11912] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(163), 1,
      sym_comment,
    ACTIONS(422), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
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
  [11951] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(568), 1,
      sym_keyword_filter,
    ACTIONS(574), 1,
      sym_keyword_group,
    ACTIONS(577), 1,
      sym_keyword_aggregate,
    ACTIONS(580), 1,
      sym_keyword_sort,
    ACTIONS(583), 1,
      sym_keyword_take,
    ACTIONS(586), 1,
      sym_keyword_join,
    ACTIONS(595), 1,
      sym_keyword_loop,
    ACTIONS(614), 1,
      sym_keyword_derive,
    ACTIONS(617), 1,
      sym_keyword_select,
    ACTIONS(564), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(164), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(592), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(228), 10,
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
  [12010] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(165), 1,
      sym_comment,
    ACTIONS(313), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(315), 17,
      sym_keyword_filter,
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
  [12049] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(289), 1,
      anon_sym_DOT,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      sym__natural_number,
    ACTIONS(297), 1,
      anon_sym__,
    ACTIONS(299), 1,
      anon_sym_BQUOTE,
    ACTIONS(301), 1,
      sym__identifier,
    ACTIONS(620), 1,
      anon_sym_DASH,
    STATE(166), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym_function_call_repeat1,
    STATE(257), 1,
      aux_sym__friendly_number,
    STATE(261), 1,
      sym_identifier,
    STATE(277), 1,
      sym_literal,
    STATE(283), 1,
      sym__call_parameter,
    STATE(284), 1,
      sym_integer,
    STATE(266), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(269), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(287), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(307), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [12120] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(167), 1,
      sym_comment,
    ACTIONS(539), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
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
  [12159] = 16,
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
    ACTIONS(602), 1,
      sym_keyword_derive,
    ACTIONS(604), 1,
      sym_keyword_select,
    STATE(164), 1,
      aux_sym_transforms_repeat1,
    STATE(168), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(529), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(228), 10,
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
  [12220] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(169), 1,
      sym_comment,
    ACTIONS(303), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(305), 17,
      sym_keyword_filter,
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
  [12259] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(625), 1,
      anon_sym_DOT,
    ACTIONS(628), 1,
      anon_sym_DASH,
    ACTIONS(631), 1,
      anon_sym_DQUOTE,
    ACTIONS(634), 1,
      anon_sym_SQUOTE,
    ACTIONS(637), 1,
      sym__natural_number,
    ACTIONS(640), 1,
      anon_sym__,
    ACTIONS(643), 1,
      anon_sym_BQUOTE,
    ACTIONS(646), 1,
      sym__identifier,
    STATE(257), 1,
      aux_sym__friendly_number,
    STATE(261), 1,
      sym_identifier,
    STATE(277), 1,
      sym_literal,
    STATE(283), 1,
      sym__call_parameter,
    STATE(284), 1,
      sym_integer,
    STATE(170), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(266), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(269), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(622), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(341), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [12328] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(331), 1,
      sym_keyword_from,
    STATE(171), 1,
      sym_comment,
    ACTIONS(329), 24,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [12367] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(172), 1,
      sym_comment,
    ACTIONS(556), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(558), 17,
      sym_keyword_filter,
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
  [12406] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(173), 1,
      sym_comment,
    ACTIONS(335), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(337), 17,
      sym_keyword_filter,
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
  [12445] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(174), 1,
      sym_comment,
    ACTIONS(249), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
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
  [12484] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(245), 1,
      sym_keyword_from,
    STATE(175), 1,
      sym_comment,
    ACTIONS(243), 23,
      ts_builtin_sym_end,
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
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [12522] = 16,
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
    ACTIONS(602), 1,
      sym_keyword_derive,
    ACTIONS(604), 1,
      sym_keyword_select,
    STATE(168), 1,
      aux_sym_transforms_repeat1,
    STATE(176), 1,
      sym_comment,
    STATE(465), 1,
      sym_transforms,
    ACTIONS(529), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(228), 10,
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
  [12582] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(239), 1,
      sym_keyword_from,
    STATE(177), 1,
      sym_comment,
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
      sym_keyword_loop,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [12620] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(651), 1,
      sym_keyword_from,
    STATE(178), 1,
      sym_comment,
    ACTIONS(649), 23,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12658] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(655), 1,
      sym_keyword_from,
    ACTIONS(657), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_comment,
    STATE(207), 1,
      sym_conditions,
    ACTIONS(653), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12697] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(661), 1,
      sym_keyword_from,
    STATE(180), 1,
      sym_comment,
    ACTIONS(659), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [12732] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(665), 1,
      sym_keyword_from,
    STATE(181), 1,
      sym_comment,
    ACTIONS(663), 20,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [12767] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(669), 1,
      sym_keyword_from,
    STATE(182), 1,
      sym_comment,
    ACTIONS(667), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [12802] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(673), 1,
      sym_keyword_from,
    STATE(183), 1,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [12837] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(184), 1,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [12872] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(657), 1,
      anon_sym_LPAREN,
    ACTIONS(677), 1,
      sym_keyword_from,
    STATE(185), 1,
      sym_comment,
    STATE(234), 1,
      sym_conditions,
    ACTIONS(675), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12911] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(681), 1,
      sym_keyword_from,
    STATE(186), 1,
      sym_comment,
    ACTIONS(679), 20,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [12946] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(685), 1,
      sym_keyword_from,
    STATE(187), 1,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [12981] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(689), 1,
      sym_keyword_from,
    STATE(188), 1,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13016] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(693), 1,
      sym_keyword_from,
    STATE(189), 1,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13051] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(697), 1,
      sym_keyword_from,
    ACTIONS(699), 1,
      anon_sym_EQ,
    STATE(190), 1,
      sym_comment,
    ACTIONS(695), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13088] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(703), 1,
      sym_keyword_from,
    STATE(191), 1,
      sym_comment,
    ACTIONS(701), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13123] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(707), 1,
      sym_keyword_from,
    STATE(192), 1,
      sym_comment,
    ACTIONS(705), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13158] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(711), 1,
      sym_keyword_from,
    ACTIONS(713), 1,
      anon_sym_DOT_DOT,
    STATE(193), 1,
      sym_comment,
    ACTIONS(709), 19,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13195] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(717), 1,
      sym_keyword_from,
    STATE(194), 1,
      sym_comment,
    ACTIONS(715), 19,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13229] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(721), 1,
      sym_keyword_from,
    STATE(195), 1,
      sym_comment,
    ACTIONS(719), 19,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13263] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(725), 1,
      sym_keyword_from,
    STATE(196), 1,
      sym_comment,
    ACTIONS(723), 19,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13297] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(711), 1,
      sym_keyword_from,
    STATE(197), 1,
      sym_comment,
    ACTIONS(709), 19,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13331] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(729), 1,
      sym_keyword_from,
    STATE(198), 1,
      sym_comment,
    ACTIONS(727), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13365] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(697), 1,
      sym_keyword_from,
    STATE(199), 1,
      sym_comment,
    ACTIONS(695), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13399] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(733), 1,
      sym_keyword_from,
    STATE(200), 1,
      sym_comment,
    ACTIONS(731), 19,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13433] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(737), 1,
      sym_keyword_from,
    STATE(201), 1,
      sym_comment,
    ACTIONS(735), 19,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13467] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(741), 1,
      sym_keyword_from,
    STATE(202), 1,
      sym_comment,
    ACTIONS(739), 19,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13501] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(745), 1,
      sym_keyword_from,
    STATE(203), 1,
      sym_comment,
    ACTIONS(743), 19,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13535] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(749), 1,
      sym_keyword_from,
    STATE(204), 1,
      sym_comment,
    ACTIONS(747), 19,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13569] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(753), 1,
      sym_keyword_from,
    STATE(205), 1,
      sym_comment,
    ACTIONS(751), 19,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13603] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(757), 1,
      sym_keyword_from,
    STATE(206), 1,
      sym_comment,
    ACTIONS(755), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13637] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(761), 1,
      sym_keyword_from,
    STATE(207), 1,
      sym_comment,
    ACTIONS(759), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13670] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(765), 1,
      sym_keyword_from,
    STATE(208), 1,
      sym_comment,
    ACTIONS(763), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13703] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(209), 1,
      sym_comment,
    ACTIONS(503), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13736] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(769), 1,
      sym_keyword_from,
    STATE(210), 1,
      sym_comment,
    ACTIONS(767), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13769] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(773), 1,
      sym_keyword_from,
    STATE(211), 1,
      sym_comment,
    ACTIONS(771), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13802] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(777), 1,
      sym_keyword_from,
    STATE(212), 1,
      sym_comment,
    ACTIONS(775), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13835] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(781), 1,
      sym_keyword_from,
    STATE(213), 1,
      sym_comment,
    ACTIONS(779), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13868] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(785), 1,
      sym_keyword_from,
    STATE(214), 1,
      sym_comment,
    ACTIONS(783), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13901] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(789), 1,
      sym_keyword_from,
    STATE(215), 1,
      sym_comment,
    ACTIONS(787), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13934] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(793), 1,
      sym_keyword_from,
    STATE(216), 1,
      sym_comment,
    ACTIONS(791), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13967] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(797), 1,
      sym_keyword_from,
    STATE(217), 1,
      sym_comment,
    ACTIONS(795), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14000] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(801), 1,
      sym_keyword_from,
    STATE(218), 1,
      sym_comment,
    ACTIONS(799), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14033] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(805), 1,
      sym_keyword_from,
    STATE(219), 1,
      sym_comment,
    ACTIONS(803), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14066] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(809), 1,
      sym_keyword_from,
    STATE(220), 1,
      sym_comment,
    ACTIONS(807), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14099] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(813), 1,
      sym_keyword_from,
    STATE(221), 1,
      sym_comment,
    ACTIONS(811), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14132] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(817), 1,
      sym_keyword_from,
    STATE(222), 1,
      sym_comment,
    ACTIONS(815), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14165] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(821), 1,
      sym_keyword_from,
    STATE(223), 1,
      sym_comment,
    ACTIONS(819), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14198] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(825), 1,
      sym_keyword_from,
    STATE(224), 1,
      sym_comment,
    ACTIONS(823), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14231] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(829), 1,
      sym_keyword_from,
    STATE(225), 1,
      sym_comment,
    ACTIONS(827), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14264] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(833), 1,
      sym_keyword_from,
    STATE(226), 1,
      sym_comment,
    ACTIONS(831), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14297] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(227), 1,
      sym_comment,
    ACTIONS(835), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(837), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [14330] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(841), 1,
      sym_keyword_from,
    STATE(228), 1,
      sym_comment,
    ACTIONS(839), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14363] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(845), 1,
      sym_keyword_from,
    STATE(229), 1,
      sym_comment,
    ACTIONS(843), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14396] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(849), 1,
      sym_keyword_from,
    STATE(230), 1,
      sym_comment,
    ACTIONS(847), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14429] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(853), 1,
      sym_keyword_from,
    STATE(231), 1,
      sym_comment,
    ACTIONS(851), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14462] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(857), 1,
      sym_keyword_from,
    STATE(232), 1,
      sym_comment,
    ACTIONS(855), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14495] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(861), 1,
      sym_keyword_from,
    STATE(233), 1,
      sym_comment,
    ACTIONS(859), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14528] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(865), 1,
      sym_keyword_from,
    STATE(234), 1,
      sym_comment,
    ACTIONS(863), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14561] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(869), 1,
      sym_keyword_from,
    STATE(235), 1,
      sym_comment,
    ACTIONS(867), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14594] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(873), 1,
      sym_keyword_from,
    STATE(236), 1,
      sym_comment,
    ACTIONS(871), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14627] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(877), 1,
      sym_keyword_from,
    STATE(237), 1,
      sym_comment,
    ACTIONS(875), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14660] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(879), 1,
      anon_sym_EQ,
    STATE(238), 1,
      sym_comment,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14713] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(883), 1,
      sym_keyword_from,
    STATE(239), 1,
      sym_comment,
    ACTIONS(881), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14746] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(240), 1,
      sym_comment,
    ACTIONS(885), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(887), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [14779] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(891), 1,
      sym_keyword_from,
    STATE(241), 1,
      sym_comment,
    ACTIONS(889), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14812] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(242), 1,
      sym_comment,
    ACTIONS(893), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(895), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [14845] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(899), 1,
      sym_keyword_from,
    STATE(243), 1,
      sym_comment,
    ACTIONS(897), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [14878] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(903), 1,
      sym_keyword_from,
    STATE(244), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(901), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    ACTIONS(394), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14915] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(245), 1,
      sym_comment,
    STATE(401), 1,
      aux_sym__tuples_repeat1,
    ACTIONS(450), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14949] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_comment,
    STATE(387), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(396), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [14987] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(247), 1,
      sym_comment,
    ACTIONS(909), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(911), 10,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [15018] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym_comment,
    STATE(379), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(396), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15055] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(249), 1,
      sym_comment,
    ACTIONS(450), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15086] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(250), 1,
      sym_comment,
    ACTIONS(917), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(396), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15119] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    STATE(251), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(919), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15167] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(252), 1,
      sym_comment,
    ACTIONS(239), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(237), 11,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [15197] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(311), 1,
      anon_sym_DASH,
    STATE(128), 1,
      aux_sym__friendly_number,
    STATE(139), 1,
      sym_literal,
    STATE(145), 1,
      sym_integer,
    STATE(253), 1,
      sym_comment,
    ACTIONS(77), 2,
      sym__natural_number,
      anon_sym__,
    STATE(132), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(140), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(921), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15245] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(923), 1,
      sym__natural_number,
    ACTIONS(926), 1,
      anon_sym__,
    STATE(254), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(127), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym__identifier,
    ACTIONS(125), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [15279] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(254), 1,
      aux_sym__friendly_number,
    STATE(255), 1,
      sym_comment,
    ACTIONS(199), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(197), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [15311] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(256), 1,
      sym_comment,
    ACTIONS(245), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(243), 11,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [15341] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(254), 1,
      aux_sym__friendly_number,
    STATE(257), 1,
      sym_comment,
    ACTIONS(138), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(136), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [15373] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(258), 1,
      sym_comment,
    ACTIONS(929), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(396), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15405] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(289), 1,
      anon_sym_DOT,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(620), 1,
      anon_sym_DASH,
    STATE(257), 1,
      aux_sym__friendly_number,
    STATE(259), 1,
      sym_comment,
    STATE(284), 1,
      sym_integer,
    STATE(286), 1,
      sym_literal,
    ACTIONS(295), 2,
      sym__natural_number,
      anon_sym__,
    STATE(266), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(269), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(931), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15453] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(935), 1,
      anon_sym_DOT,
    ACTIONS(937), 1,
      anon_sym_DASH,
    ACTIONS(939), 1,
      anon_sym_DQUOTE,
    ACTIONS(941), 1,
      anon_sym_SQUOTE,
    STATE(260), 1,
      sym_comment,
    STATE(320), 1,
      aux_sym__friendly_number,
    STATE(344), 1,
      sym_integer,
    STATE(409), 1,
      sym_literal,
    ACTIONS(943), 2,
      sym__natural_number,
      anon_sym__,
    STATE(369), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(371), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(933), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15501] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(945), 1,
      anon_sym_COLON,
    STATE(261), 1,
      sym_comment,
    ACTIONS(541), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(539), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [15533] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    STATE(262), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(947), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15581] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DASH,
    STATE(154), 1,
      aux_sym__friendly_number,
    STATE(162), 1,
      sym_integer,
    STATE(172), 1,
      sym_literal,
    STATE(263), 1,
      sym_comment,
    ACTIONS(109), 2,
      sym__natural_number,
      anon_sym__,
    STATE(161), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(173), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(949), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15629] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(935), 1,
      anon_sym_DOT,
    ACTIONS(941), 1,
      anon_sym_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_DASH,
    ACTIONS(953), 1,
      anon_sym_DQUOTE,
    STATE(264), 1,
      sym_comment,
    STATE(337), 1,
      aux_sym__friendly_number,
    STATE(344), 1,
      sym_integer,
    STATE(462), 1,
      sym_literal,
    ACTIONS(955), 2,
      sym__natural_number,
      anon_sym__,
    STATE(369), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(371), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(933), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15677] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(935), 1,
      anon_sym_DOT,
    ACTIONS(941), 1,
      anon_sym_SQUOTE,
    ACTIONS(951), 1,
      anon_sym_DASH,
    ACTIONS(953), 1,
      anon_sym_DQUOTE,
    STATE(265), 1,
      sym_comment,
    STATE(337), 1,
      aux_sym__friendly_number,
    STATE(344), 1,
      sym_integer,
    STATE(464), 1,
      sym_literal,
    ACTIONS(955), 2,
      sym__natural_number,
      anon_sym__,
    STATE(369), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(371), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(933), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [15725] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(266), 1,
      sym_comment,
    ACTIONS(325), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(323), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [15754] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15785] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    ACTIONS(961), 1,
      anon_sym_AMP_AMP,
    ACTIONS(963), 1,
      anon_sym_PIPE_PIPE,
    STATE(268), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15832] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(269), 1,
      sym_comment,
    ACTIONS(337), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(335), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [15861] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(965), 1,
      anon_sym_EQ_GT,
    STATE(270), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [15892] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(271), 1,
      sym_comment,
    ACTIONS(424), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(422), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [15921] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    ACTIONS(961), 1,
      anon_sym_AMP_AMP,
    ACTIONS(963), 1,
      anon_sym_PIPE_PIPE,
    STATE(272), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15968] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(273), 1,
      sym_comment,
    ACTIONS(404), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(402), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [15997] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    STATE(274), 1,
      sym_comment,
    ACTIONS(378), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16042] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(275), 1,
      sym_comment,
    ACTIONS(251), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(249), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16071] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    STATE(276), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 3,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16114] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(277), 1,
      sym_comment,
    ACTIONS(541), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(539), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16143] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(278), 1,
      sym_comment,
    ACTIONS(315), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(313), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16172] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(967), 1,
      anon_sym_EQ_GT,
    STATE(279), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16203] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16234] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(281), 1,
      sym_comment,
    ACTIONS(305), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(303), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16263] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(282), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 12,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16292] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(283), 1,
      sym_comment,
    ACTIONS(562), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(560), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16321] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(284), 1,
      sym_comment,
    ACTIONS(337), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(335), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16350] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [16381] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(286), 1,
      sym_comment,
    ACTIONS(558), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(556), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [16410] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(879), 1,
      anon_sym_EQ,
    STATE(287), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16457] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(961), 1,
      anon_sym_AMP_AMP,
    ACTIONS(963), 1,
      anon_sym_PIPE_PIPE,
    STATE(288), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16501] = 14,
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
    STATE(289), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_program_repeat2,
    STATE(308), 1,
      aux_sym_program_repeat1,
    STATE(333), 1,
      sym_prql,
    STATE(126), 2,
      sym_from_text,
      sym_from,
    STATE(345), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16547] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      anon_sym_PLUS,
    ACTIONS(386), 1,
      anon_sym_STAR,
    ACTIONS(388), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(440), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(442), 1,
      anon_sym_AMP_AMP,
    ACTIONS(464), 1,
      anon_sym_PIPE_PIPE,
    STATE(290), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [16591] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(291), 1,
      sym_comment,
    STATE(326), 1,
      sym_target,
    ACTIONS(975), 11,
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
  [16617] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(977), 1,
      ts_builtin_sym_end,
    ACTIONS(979), 1,
      sym_keyword_from,
    ACTIONS(982), 1,
      sym_keyword_func,
    ACTIONS(985), 1,
      sym_keyword_let,
    ACTIONS(988), 1,
      sym_keyword_from_text,
    STATE(126), 2,
      sym_from_text,
      sym_from,
    STATE(292), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(345), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16652] = 11,
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
    ACTIONS(991), 1,
      ts_builtin_sym_end,
    STATE(292), 1,
      aux_sym_program_repeat2,
    STATE(293), 1,
      sym_comment,
    STATE(126), 2,
      sym_from_text,
      sym_from,
    STATE(345), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16689] = 11,
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
    STATE(292), 1,
      aux_sym_program_repeat2,
    STATE(294), 1,
      sym_comment,
    STATE(126), 2,
      sym_from_text,
      sym_from,
    STATE(345), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [16726] = 10,
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
    ACTIONS(993), 1,
      sym_keyword_window,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      sym_comment,
    STATE(297), 1,
      aux_sym_group_repeat2,
    STATE(347), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16760] = 10,
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
    ACTIONS(993), 1,
      sym_keyword_window,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      sym_comment,
    STATE(297), 1,
      aux_sym_group_repeat2,
    STATE(347), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16794] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(999), 1,
      sym_keyword_aggregate,
    ACTIONS(1002), 1,
      sym_keyword_sort,
    ACTIONS(1005), 1,
      sym_keyword_take,
    ACTIONS(1008), 1,
      sym_keyword_window,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    STATE(297), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(347), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16826] = 10,
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
    ACTIONS(993), 1,
      sym_keyword_window,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_group_repeat2,
    STATE(298), 1,
      sym_comment,
    STATE(347), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16860] = 10,
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
    ACTIONS(993), 1,
      sym_keyword_window,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_group_repeat2,
    STATE(299), 1,
      sym_comment,
    STATE(347), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16894] = 10,
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
    ACTIONS(993), 1,
      sym_keyword_window,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_group_repeat2,
    STATE(300), 1,
      sym_comment,
    STATE(347), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16928] = 9,
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
    ACTIONS(993), 1,
      sym_keyword_window,
    STATE(295), 1,
      aux_sym_group_repeat2,
    STATE(301), 1,
      sym_comment,
    STATE(347), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16959] = 9,
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
    ACTIONS(993), 1,
      sym_keyword_window,
    STATE(296), 1,
      aux_sym_group_repeat2,
    STATE(302), 1,
      sym_comment,
    STATE(347), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16990] = 9,
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
    ACTIONS(993), 1,
      sym_keyword_window,
    STATE(299), 1,
      aux_sym_group_repeat2,
    STATE(303), 1,
      sym_comment,
    STATE(347), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17021] = 9,
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
    ACTIONS(993), 1,
      sym_keyword_window,
    STATE(298), 1,
      aux_sym_group_repeat2,
    STATE(304), 1,
      sym_comment,
    STATE(347), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17052] = 9,
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
    ACTIONS(993), 1,
      sym_keyword_window,
    STATE(300), 1,
      aux_sym_group_repeat2,
    STATE(305), 1,
      sym_comment,
    STATE(347), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [17083] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1019), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_RBRACE,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      sym__identifier,
    STATE(186), 1,
      sym_identifier,
    STATE(306), 1,
      sym_comment,
    STATE(384), 1,
      sym_direction,
    STATE(416), 1,
      sym__sort_instruction,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [17118] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      sym__identifier,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_identifier,
    STATE(307), 1,
      sym_comment,
    STATE(384), 1,
      sym_direction,
    STATE(421), 1,
      sym__sort_instruction,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [17150] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1031), 1,
      sym_keyword_from,
    ACTIONS(1033), 1,
      sym_keyword_prql,
    STATE(333), 1,
      sym_prql,
    STATE(308), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1029), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17176] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      sym__identifier,
    ACTIONS(1036), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_identifier,
    STATE(309), 1,
      sym_comment,
    STATE(384), 1,
      sym_direction,
    STATE(421), 1,
      sym__sort_instruction,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [17208] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1038), 1,
      anon_sym_DASH,
    ACTIONS(1040), 1,
      anon_sym_AT,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(193), 1,
      sym_integer,
    STATE(197), 1,
      sym_range,
    STATE(310), 1,
      sym_comment,
    STATE(452), 1,
      sym_date,
    ACTIONS(551), 2,
      sym__natural_number,
      anon_sym__,
  [17240] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      sym__identifier,
    ACTIONS(1042), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_identifier,
    STATE(196), 1,
      sym__sort_instruction,
    STATE(311), 1,
      sym_comment,
    STATE(384), 1,
      sym_direction,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [17272] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1038), 1,
      anon_sym_DASH,
    ACTIONS(1040), 1,
      anon_sym_AT,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(312), 1,
      sym_comment,
    STATE(357), 1,
      sym_integer,
    STATE(370), 1,
      sym_range,
    STATE(452), 1,
      sym_date,
    ACTIONS(551), 2,
      sym__natural_number,
      anon_sym__,
  [17304] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      sym__identifier,
    STATE(186), 1,
      sym_identifier,
    STATE(313), 1,
      sym_comment,
    STATE(384), 1,
      sym_direction,
    STATE(421), 1,
      sym__sort_instruction,
    ACTIONS(275), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [17333] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1046), 1,
      sym_keyword_from,
    ACTIONS(1048), 1,
      anon_sym_DOT,
    STATE(314), 2,
      sym_comment,
      aux_sym_module_call_repeat1,
    ACTIONS(1044), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17356] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1051), 1,
      sym_keyword_from_text,
    ACTIONS(1053), 1,
      anon_sym_LPAREN,
    ACTIONS(1055), 1,
      sym__identifier,
    STATE(123), 1,
      sym_from_text,
    STATE(315), 1,
      sym_comment,
    STATE(343), 1,
      sym_module_call,
    STATE(448), 1,
      sym_identifier,
  [17387] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1055), 1,
      sym__identifier,
    ACTIONS(1057), 1,
      sym_keyword_side,
    STATE(185), 1,
      sym__table_selection,
    STATE(190), 1,
      sym_identifier,
    STATE(206), 1,
      sym__table_reference,
    STATE(316), 1,
      sym_comment,
    STATE(346), 1,
      sym__join_definition,
  [17418] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(305), 1,
      sym_keyword_from,
    STATE(317), 1,
      sym_comment,
    ACTIONS(303), 6,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
      anon_sym_COMMA,
  [17439] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1061), 1,
      sym_keyword_from,
    ACTIONS(1063), 1,
      anon_sym_DOT,
    STATE(314), 1,
      aux_sym_module_call_repeat1,
    STATE(318), 1,
      sym_comment,
    ACTIONS(1059), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17464] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1063), 1,
      anon_sym_DOT,
    ACTIONS(1067), 1,
      sym_keyword_from,
    STATE(318), 1,
      aux_sym_module_call_repeat1,
    STATE(319), 1,
      sym_comment,
    ACTIONS(1065), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17489] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(138), 1,
      sym__identifier,
    ACTIONS(943), 1,
      sym__natural_number,
    ACTIONS(1069), 1,
      anon_sym__,
    STATE(320), 1,
      sym_comment,
    STATE(321), 1,
      aux_sym__friendly_number,
    ACTIONS(136), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [17516] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(127), 1,
      sym__identifier,
    ACTIONS(1071), 1,
      sym__natural_number,
    ACTIONS(1074), 1,
      anon_sym__,
    STATE(321), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [17541] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1079), 1,
      sym_keyword_from,
    STATE(322), 1,
      sym_comment,
    ACTIONS(1077), 6,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17562] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(199), 1,
      sym__identifier,
    ACTIONS(943), 1,
      sym__natural_number,
    ACTIONS(1069), 1,
      anon_sym__,
    STATE(321), 1,
      aux_sym__friendly_number,
    STATE(323), 1,
      sym_comment,
    ACTIONS(197), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [17589] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1083), 1,
      sym_keyword_from,
    STATE(324), 1,
      sym_comment,
    ACTIONS(1081), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_DOT,
  [17609] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1088), 1,
      anon_sym_LPAREN,
    STATE(373), 1,
      sym__window_definition,
    STATE(325), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1085), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17631] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1092), 1,
      sym_keyword_from,
    STATE(326), 1,
      sym_comment,
    ACTIONS(1090), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17651] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(327), 1,
      sym_comment,
    STATE(335), 1,
      aux_sym_window_definitions_repeat1,
    STATE(373), 1,
      sym__window_definition,
    STATE(506), 1,
      sym_window_definitions,
    ACTIONS(1094), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17675] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1098), 1,
      sym_keyword_from,
    STATE(328), 1,
      sym_comment,
    ACTIONS(1096), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17695] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1100), 1,
      anon_sym_DASH_GT,
    ACTIONS(1102), 1,
      anon_sym_BQUOTE,
    ACTIONS(1104), 1,
      sym__identifier,
    STATE(329), 1,
      sym_comment,
    STATE(332), 1,
      aux_sym_function_definition_repeat1,
    STATE(372), 1,
      sym_identifier,
    STATE(390), 1,
      sym_parameter,
  [17723] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(330), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym__,
      sym__identifier,
    ACTIONS(249), 4,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym__natural_number,
      anon_sym_BQUOTE,
  [17743] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      sym_comment,
    STATE(407), 1,
      sym_pipeline,
    STATE(152), 2,
      sym_from_text,
      sym_from,
  [17769] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1108), 1,
      anon_sym_DASH_GT,
    ACTIONS(1110), 1,
      anon_sym_BQUOTE,
    ACTIONS(1113), 1,
      sym__identifier,
    STATE(372), 1,
      sym_identifier,
    STATE(390), 1,
      sym_parameter,
    STATE(332), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [17795] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1118), 1,
      sym_keyword_from,
    STATE(333), 1,
      sym_comment,
    ACTIONS(1116), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17815] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1122), 1,
      sym_keyword_from,
    STATE(334), 1,
      sym_comment,
    ACTIONS(1120), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [17835] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1124), 1,
      anon_sym_LPAREN,
    STATE(325), 1,
      aux_sym_window_definitions_repeat1,
    STATE(335), 1,
      sym_comment,
    STATE(373), 1,
      sym__window_definition,
    ACTIONS(1094), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [17859] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1126), 1,
      sym__natural_number,
    STATE(336), 1,
      sym_comment,
    ACTIONS(313), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17878] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(337), 1,
      sym_comment,
    STATE(353), 1,
      aux_sym__friendly_number,
    ACTIONS(136), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(955), 2,
      sym__natural_number,
      anon_sym__,
  [17899] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      sym__identifier,
    STATE(190), 1,
      sym_identifier,
    STATE(206), 1,
      sym__table_reference,
    STATE(213), 1,
      sym__table_selection,
    STATE(338), 1,
      sym_comment,
  [17924] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1038), 1,
      anon_sym_DASH,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(178), 1,
      sym_integer,
    STATE(339), 1,
      sym_comment,
    ACTIONS(551), 2,
      sym__natural_number,
      anon_sym__,
  [17947] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1130), 1,
      sym_keyword_from,
    STATE(340), 1,
      sym_comment,
    ACTIONS(1128), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17966] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1132), 1,
      anon_sym_DASH,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(65), 1,
      sym_integer,
    STATE(341), 1,
      sym_comment,
    ACTIONS(51), 2,
      sym__natural_number,
      anon_sym__,
  [17989] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1132), 1,
      anon_sym_DASH,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(89), 1,
      sym_integer,
    STATE(342), 1,
      sym_comment,
    ACTIONS(51), 2,
      sym__natural_number,
      anon_sym__,
  [18012] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(511), 1,
      sym_keyword_from,
    STATE(343), 1,
      sym_comment,
    ACTIONS(509), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [18031] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1134), 1,
      anon_sym_DOT,
    STATE(344), 1,
      sym_comment,
    ACTIONS(335), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18050] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1138), 1,
      sym_keyword_from,
    STATE(345), 1,
      sym_comment,
    ACTIONS(1136), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [18069] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      sym__identifier,
    STATE(179), 1,
      sym__table_selection,
    STATE(190), 1,
      sym_identifier,
    STATE(206), 1,
      sym__table_reference,
    STATE(346), 1,
      sym_comment,
  [18094] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(347), 1,
      sym_comment,
    ACTIONS(1140), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [18111] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(348), 1,
      sym_comment,
    ACTIONS(1142), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [18128] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(349), 1,
      sym_comment,
    STATE(426), 1,
      sym_pipeline,
    STATE(152), 2,
      sym_from_text,
      sym_from,
  [18151] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1146), 1,
      sym_keyword_from,
    STATE(350), 1,
      sym_comment,
    ACTIONS(1144), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [18170] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1132), 1,
      anon_sym_DASH,
    STATE(18), 1,
      aux_sym__friendly_number,
    STATE(86), 1,
      sym_integer,
    STATE(351), 1,
      sym_comment,
    ACTIONS(51), 2,
      sym__natural_number,
      anon_sym__,
  [18193] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1102), 1,
      anon_sym_BQUOTE,
    ACTIONS(1104), 1,
      sym__identifier,
    STATE(329), 1,
      aux_sym_function_definition_repeat1,
    STATE(352), 1,
      sym_comment,
    STATE(372), 1,
      sym_identifier,
    STATE(390), 1,
      sym_parameter,
  [18218] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(1148), 2,
      sym__natural_number,
      anon_sym__,
    STATE(353), 2,
      aux_sym__friendly_number,
      sym_comment,
  [18237] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(353), 1,
      aux_sym__friendly_number,
    STATE(354), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(955), 2,
      sym__natural_number,
      anon_sym__,
  [18258] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1153), 1,
      sym_keyword_from,
    STATE(355), 1,
      sym_comment,
    ACTIONS(1151), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [18277] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      sym__identifier,
    STATE(190), 1,
      sym_identifier,
    STATE(206), 1,
      sym__table_reference,
    STATE(237), 1,
      sym__table_selection,
    STATE(356), 1,
      sym_comment,
  [18302] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(713), 1,
      anon_sym_DOT_DOT,
    STATE(357), 1,
      sym_comment,
    ACTIONS(1155), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [18321] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(358), 1,
      sym_comment,
    ACTIONS(243), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18337] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(359), 1,
      sym_comment,
    ACTIONS(237), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18353] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(360), 1,
      sym_comment,
    ACTIONS(1157), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [18369] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1159), 1,
      anon_sym_DOT,
    STATE(129), 1,
      aux_sym__friendly_number,
    STATE(361), 1,
      sym_comment,
    ACTIONS(77), 2,
      sym__natural_number,
      anon_sym__,
  [18389] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(362), 1,
      sym_comment,
    ACTIONS(422), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18405] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(363), 1,
      sym_comment,
    ACTIONS(402), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18421] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(364), 1,
      sym_comment,
    ACTIONS(313), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18437] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1161), 1,
      anon_sym_DOT,
    STATE(323), 1,
      aux_sym__friendly_number,
    STATE(365), 1,
      sym_comment,
    ACTIONS(943), 2,
      sym__natural_number,
      anon_sym__,
  [18457] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1161), 1,
      anon_sym_DOT,
    STATE(354), 1,
      aux_sym__friendly_number,
    STATE(366), 1,
      sym_comment,
    ACTIONS(955), 2,
      sym__natural_number,
      anon_sym__,
  [18477] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(367), 1,
      sym_comment,
    ACTIONS(249), 4,
      anon_sym_COMMA,
      anon_sym_DOT,
      sym__natural_number,
      anon_sym__,
  [18493] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      sym__identifier,
    STATE(198), 1,
      sym__table_reference,
    STATE(199), 1,
      sym_identifier,
    STATE(368), 1,
      sym_comment,
  [18515] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(369), 1,
      sym_comment,
    ACTIONS(323), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18531] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(370), 1,
      sym_comment,
    ACTIONS(1155), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [18547] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(371), 1,
      sym_comment,
    ACTIONS(335), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18563] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1163), 1,
      anon_sym_COLON,
    STATE(372), 1,
      sym_comment,
    ACTIONS(1165), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18581] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(373), 1,
      sym_comment,
    ACTIONS(1167), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [18597] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1169), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym__friendly_number,
    STATE(374), 1,
      sym_comment,
    ACTIONS(51), 2,
      sym__natural_number,
      anon_sym__,
  [18617] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1171), 1,
      aux_sym__date_token1,
    ACTIONS(1173), 1,
      aux_sym__time_token1,
    STATE(78), 1,
      sym__date,
    STATE(93), 1,
      sym__time,
    STATE(375), 1,
      sym_comment,
  [18639] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1175), 1,
      anon_sym_DOT,
    STATE(156), 1,
      aux_sym__friendly_number,
    STATE(376), 1,
      sym_comment,
    ACTIONS(109), 2,
      sym__natural_number,
      anon_sym__,
  [18659] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1177), 1,
      anon_sym_DOT,
    STATE(255), 1,
      aux_sym__friendly_number,
    STATE(377), 1,
      sym_comment,
    ACTIONS(295), 2,
      sym__natural_number,
      anon_sym__,
  [18679] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    ACTIONS(1179), 1,
      anon_sym_COMMA,
    STATE(378), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [18696] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    ACTIONS(1182), 1,
      anon_sym_RPAREN,
    STATE(379), 1,
      sym_comment,
    STATE(394), 1,
      aux_sym_conditions_repeat1,
  [18715] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(1184), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      sym_comment,
    STATE(413), 1,
      aux_sym_group_repeat1,
  [18734] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(381), 1,
      sym_comment,
    ACTIONS(1186), 3,
      anon_sym_BQUOTE,
      sym__identifier,
      aux_sym__date_token2,
  [18749] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_RBRACE,
    STATE(382), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [18766] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(1184), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      aux_sym_group_repeat1,
    STATE(383), 1,
      sym_comment,
  [18785] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      sym__identifier,
    STATE(181), 1,
      sym_identifier,
    STATE(384), 1,
      sym_comment,
  [18804] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(1193), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      sym_comment,
    STATE(392), 1,
      aux_sym__tuples_repeat1,
  [18823] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    ACTIONS(1195), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      sym_comment,
    STATE(397), 1,
      aux_sym_sorts_repeat1,
  [18842] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      aux_sym_aggregate_repeat1,
    STATE(387), 1,
      sym_comment,
  [18861] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1199), 1,
      anon_sym_COMMA,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      sym_comment,
    STATE(404), 1,
      aux_sym_variable_repeat1,
  [18880] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1203), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1205), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    STATE(389), 1,
      sym_comment,
    STATE(396), 1,
      aux_sym__inner_triple_quotes,
  [18899] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(390), 1,
      sym_comment,
    ACTIONS(1209), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [18914] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      aux_sym_group_repeat1,
    STATE(391), 1,
      sym_comment,
  [18933] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    ACTIONS(1216), 1,
      anon_sym_RBRACE,
    STATE(392), 2,
      sym_comment,
      aux_sym__tuples_repeat1,
  [18950] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      sym_comment,
    STATE(399), 1,
      aux_sym_case_repeat2,
  [18969] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    ACTIONS(1220), 1,
      anon_sym_COMMA,
    STATE(394), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [18986] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(22), 1,
      aux_sym__friendly_number,
    STATE(395), 1,
      sym_comment,
    ACTIONS(51), 2,
      sym__natural_number,
      anon_sym__,
  [19003] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1223), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1226), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(396), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [19020] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1231), 1,
      anon_sym_RBRACE,
    STATE(397), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [19037] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(136), 1,
      aux_sym__friendly_number,
    STATE(398), 1,
      sym_comment,
    ACTIONS(551), 2,
      sym__natural_number,
      anon_sym__,
  [19054] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(1233), 1,
      anon_sym_COMMA,
    STATE(399), 2,
      sym_comment,
      aux_sym_case_repeat2,
  [19071] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1236), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      anon_sym_RBRACE,
    STATE(391), 1,
      aux_sym_group_repeat1,
    STATE(400), 1,
      sym_comment,
  [19090] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      aux_sym__tuples_repeat1,
    STATE(401), 1,
      sym_comment,
  [19109] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      sym__identifier,
    STATE(324), 1,
      sym_identifier,
    STATE(402), 1,
      sym_comment,
  [19128] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1203), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1244), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(396), 1,
      aux_sym__inner_triple_quotes,
    STATE(403), 1,
      sym_comment,
  [19147] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1246), 1,
      anon_sym_COMMA,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    STATE(404), 2,
      sym_comment,
      aux_sym_variable_repeat1,
  [19164] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1251), 1,
      sym_keyword_format,
    ACTIONS(1253), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(221), 1,
      sym__triple_quote_string,
    STATE(405), 1,
      sym_comment,
  [19183] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      sym__identifier,
    STATE(319), 1,
      sym_identifier,
    STATE(406), 1,
      sym_comment,
  [19202] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1199), 1,
      anon_sym_COMMA,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    STATE(388), 1,
      aux_sym_variable_repeat1,
    STATE(407), 1,
      sym_comment,
  [19221] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1023), 1,
      anon_sym_BQUOTE,
    ACTIONS(1025), 1,
      sym__identifier,
    STATE(408), 1,
      sym_comment,
    STATE(484), 1,
      sym_identifier,
  [19240] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(409), 1,
      sym_comment,
    ACTIONS(1257), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [19255] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1259), 1,
      anon_sym_COMMA,
    ACTIONS(1261), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      aux_sym__tuples_repeat1,
    STATE(410), 1,
      sym_comment,
  [19274] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(1263), 1,
      anon_sym_COMMA,
    STATE(383), 1,
      aux_sym_group_repeat1,
    STATE(411), 1,
      sym_comment,
  [19293] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(412), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [19308] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      aux_sym_group_repeat1,
    STATE(413), 1,
      sym_comment,
  [19327] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1203), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1267), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(396), 1,
      aux_sym__inner_triple_quotes,
    STATE(414), 1,
      sym_comment,
  [19346] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1102), 1,
      anon_sym_BQUOTE,
    ACTIONS(1104), 1,
      sym__identifier,
    STATE(352), 1,
      sym_identifier,
    STATE(415), 1,
      sym_comment,
  [19365] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1269), 1,
      anon_sym_COMMA,
    ACTIONS(1271), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      aux_sym_sorts_repeat1,
    STATE(416), 1,
      sym_comment,
  [19384] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(55), 1,
      anon_sym_BQUOTE,
    ACTIONS(1273), 1,
      sym__identifier,
    STATE(103), 1,
      sym_identifier,
    STATE(417), 1,
      sym_comment,
  [19403] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    STATE(387), 1,
      aux_sym_aggregate_repeat1,
    STATE(418), 1,
      sym_comment,
  [19422] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1253), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(236), 1,
      sym__triple_quote_string,
    STATE(419), 1,
      sym_comment,
  [19438] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1203), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    STATE(389), 1,
      aux_sym__inner_triple_quotes,
    STATE(420), 1,
      sym_comment,
  [19454] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(421), 1,
      sym_comment,
    ACTIONS(1231), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [19468] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1275), 1,
      sym_keyword_version,
    ACTIONS(1277), 1,
      sym_keyword_target,
    STATE(422), 1,
      sym_comment,
  [19484] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(423), 1,
      sym_comment,
    ACTIONS(917), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [19498] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(424), 1,
      sym_comment,
    ACTIONS(1191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [19512] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1040), 1,
      anon_sym_AT,
    STATE(178), 1,
      sym_date,
    STATE(425), 1,
      sym_comment,
  [19528] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(426), 1,
      sym_comment,
    ACTIONS(1249), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [19542] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1279), 1,
      sym_keyword_derive,
    STATE(427), 1,
      sym_comment,
    STATE(466), 1,
      sym_derives,
  [19558] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(428), 1,
      sym_comment,
    ACTIONS(1216), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [19572] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1203), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    STATE(403), 1,
      aux_sym__inner_triple_quotes,
    STATE(429), 1,
      sym_comment,
  [19588] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1281), 1,
      aux_sym__time_token1,
    STATE(50), 1,
      sym__time,
    STATE(430), 1,
      sym_comment,
  [19604] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1203), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    STATE(414), 1,
      aux_sym__inner_triple_quotes,
    STATE(431), 1,
      sym_comment,
  [19620] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1283), 1,
      aux_sym__date_token1,
    STATE(171), 1,
      sym__date,
    STATE(432), 1,
      sym_comment,
  [19636] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    STATE(433), 1,
      sym_comment,
    ACTIONS(1285), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [19650] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(434), 1,
      sym_comment,
    ACTIONS(1287), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [19664] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    STATE(435), 1,
      sym_comment,
    ACTIONS(1289), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [19678] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(953), 1,
      anon_sym_DQUOTE,
    STATE(328), 1,
      sym__double_quote_string,
    STATE(436), 1,
      sym_comment,
  [19694] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1291), 1,
      anon_sym_LPAREN,
    STATE(437), 1,
      sym_comment,
  [19707] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1293), 1,
      sym__natural_number,
    STATE(438), 1,
      sym_comment,
  [19720] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1295), 1,
      anon_sym_LPAREN,
    STATE(439), 1,
      sym_comment,
  [19733] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1238), 1,
      anon_sym_RBRACE,
    STATE(440), 1,
      sym_comment,
  [19746] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1261), 1,
      anon_sym_RBRACE,
    STATE(441), 1,
      sym_comment,
  [19759] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1297), 1,
      anon_sym_DASH,
    STATE(442), 1,
      sym_comment,
  [19772] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1299), 1,
      aux_sym_comment_token1,
    STATE(443), 1,
      sym_comment,
  [19785] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1301), 1,
      anon_sym_DQUOTE,
    STATE(444), 1,
      sym_comment,
  [19798] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1303), 1,
      anon_sym_SQUOTE,
    STATE(445), 1,
      sym_comment,
  [19811] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1305), 1,
      anon_sym_DQUOTE,
    STATE(446), 1,
      sym_comment,
  [19824] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(317), 1,
      sym__natural_number,
    STATE(447), 1,
      sym_comment,
  [19837] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1307), 1,
      anon_sym_DOT,
    STATE(448), 1,
      sym_comment,
  [19850] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_LBRACE,
    STATE(449), 1,
      sym_comment,
  [19863] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1311), 1,
      anon_sym_LBRACE,
    STATE(450), 1,
      sym_comment,
  [19876] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1313), 1,
      anon_sym_COLON,
    STATE(451), 1,
      sym_comment,
  [19889] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1315), 1,
      anon_sym_DOT_DOT,
    STATE(452), 1,
      sym_comment,
  [19902] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1317), 1,
      anon_sym_LPAREN,
    STATE(453), 1,
      sym_comment,
  [19915] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    STATE(454), 1,
      sym_comment,
  [19928] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
    STATE(455), 1,
      sym_comment,
  [19941] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1321), 1,
      anon_sym_DOT,
    STATE(456), 1,
      sym_comment,
  [19954] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(457), 1,
      sym_comment,
  [19967] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1323), 1,
      aux_sym__double_quote_string_token1,
    STATE(458), 1,
      sym_comment,
  [19980] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1325), 1,
      aux_sym__double_quote_string_token1,
    STATE(459), 1,
      sym_comment,
  [19993] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1327), 1,
      aux_sym__single_quote_string_token1,
    STATE(460), 1,
      sym_comment,
  [20006] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1329), 1,
      aux_sym__double_quote_string_token1,
    STATE(461), 1,
      sym_comment,
  [20019] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1331), 1,
      anon_sym_COMMA,
    STATE(462), 1,
      sym_comment,
  [20032] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1333), 1,
      sym__natural_number,
    STATE(463), 1,
      sym_comment,
  [20045] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1335), 1,
      anon_sym_COMMA,
    STATE(464), 1,
      sym_comment,
  [20058] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    STATE(465), 1,
      sym_comment,
  [20071] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    STATE(466), 1,
      sym_comment,
  [20084] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1341), 1,
      anon_sym_BQUOTE,
    STATE(467), 1,
      sym_comment,
  [20097] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1343), 1,
      anon_sym_LPAREN,
    STATE(468), 1,
      sym_comment,
  [20110] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    STATE(469), 1,
      sym_comment,
  [20123] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
    STATE(470), 1,
      sym_comment,
  [20136] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1349), 1,
      anon_sym_LPAREN,
    STATE(471), 1,
      sym_comment,
  [20149] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1351), 1,
      anon_sym_DASH,
    STATE(472), 1,
      sym_comment,
  [20162] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1353), 1,
      aux_sym__date_token2,
    STATE(473), 1,
      sym_comment,
  [20175] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1355), 1,
      anon_sym_LBRACE,
    STATE(474), 1,
      sym_comment,
  [20188] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1357), 1,
      anon_sym_COLON,
    STATE(475), 1,
      sym_comment,
  [20201] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1359), 1,
      anon_sym_COLON,
    STATE(476), 1,
      sym_comment,
  [20214] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1361), 1,
      anon_sym_BQUOTE,
    STATE(477), 1,
      sym_comment,
  [20227] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1363), 1,
      sym__natural_number,
    STATE(478), 1,
      sym_comment,
  [20240] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1126), 1,
      sym__natural_number,
    STATE(479), 1,
      sym_comment,
  [20253] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1365), 1,
      anon_sym_DQUOTE,
    STATE(480), 1,
      sym_comment,
  [20266] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1367), 1,
      anon_sym_SQUOTE,
    STATE(481), 1,
      sym_comment,
  [20279] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1369), 1,
      anon_sym_COLON,
    STATE(482), 1,
      sym_comment,
  [20292] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1371), 1,
      aux_sym__date_token2,
    STATE(483), 1,
      sym_comment,
  [20305] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1373), 1,
      anon_sym_EQ,
    STATE(484), 1,
      sym_comment,
  [20318] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1375), 1,
      anon_sym_BQUOTE,
    STATE(485), 1,
      sym_comment,
  [20331] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1377), 1,
      sym__natural_number,
    STATE(486), 1,
      sym_comment,
  [20344] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1379), 1,
      aux_sym__date_token2,
    STATE(487), 1,
      sym_comment,
  [20357] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    STATE(488), 1,
      sym_comment,
  [20370] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1381), 1,
      anon_sym_DQUOTE,
    STATE(489), 1,
      sym_comment,
  [20383] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1383), 1,
      anon_sym_SQUOTE,
    STATE(490), 1,
      sym_comment,
  [20396] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1385), 1,
      aux_sym__date_token2,
    STATE(491), 1,
      sym_comment,
  [20409] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1387), 1,
      sym__identifier_dot,
    STATE(492), 1,
      sym_comment,
  [20422] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1389), 1,
      anon_sym_BQUOTE,
    STATE(493), 1,
      sym_comment,
  [20435] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1391), 1,
      sym__natural_number,
    STATE(494), 1,
      sym_comment,
  [20448] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1271), 1,
      anon_sym_RBRACE,
    STATE(495), 1,
      sym_comment,
  [20461] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1393), 1,
      sym__natural_number,
    STATE(496), 1,
      sym_comment,
  [20474] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1395), 1,
      anon_sym_DQUOTE,
    STATE(497), 1,
      sym_comment,
  [20487] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1397), 1,
      anon_sym_SQUOTE,
    STATE(498), 1,
      sym_comment,
  [20500] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1399), 1,
      anon_sym_BQUOTE,
    STATE(499), 1,
      sym_comment,
  [20513] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1401), 1,
      sym__natural_number,
    STATE(500), 1,
      sym_comment,
  [20526] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(501), 1,
      sym_comment,
  [20539] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1403), 1,
      sym__natural_number,
    STATE(502), 1,
      sym_comment,
  [20552] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1405), 1,
      anon_sym_DQUOTE,
    STATE(503), 1,
      sym_comment,
  [20565] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1407), 1,
      anon_sym_SQUOTE,
    STATE(504), 1,
      sym_comment,
  [20578] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1409), 1,
      anon_sym_BQUOTE,
    STATE(505), 1,
      sym_comment,
  [20591] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1411), 1,
      anon_sym_LPAREN,
    STATE(506), 1,
      sym_comment,
  [20604] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1413), 1,
      anon_sym_DQUOTE,
    STATE(507), 1,
      sym_comment,
  [20617] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1415), 1,
      anon_sym_BQUOTE,
    STATE(508), 1,
      sym_comment,
  [20630] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1417), 1,
      anon_sym_BQUOTE,
    STATE(509), 1,
      sym_comment,
  [20643] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1419), 1,
      anon_sym_BQUOTE,
    STATE(510), 1,
      sym_comment,
  [20656] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1421), 1,
      sym__identifier_dot,
    STATE(511), 1,
      sym_comment,
  [20669] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1423), 1,
      aux_sym__double_quote_string_token1,
    STATE(512), 1,
      sym_comment,
  [20682] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1425), 1,
      aux_sym__single_quote_string_token1,
    STATE(513), 1,
      sym_comment,
  [20695] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1427), 1,
      anon_sym_DASH,
    STATE(514), 1,
      sym_comment,
  [20708] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1429), 1,
      anon_sym_DASH,
    STATE(515), 1,
      sym_comment,
  [20721] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1431), 1,
      sym__identifier_dot,
    STATE(516), 1,
      sym_comment,
  [20734] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1433), 1,
      aux_sym__double_quote_string_token1,
    STATE(517), 1,
      sym_comment,
  [20747] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1435), 1,
      aux_sym__single_quote_string_token1,
    STATE(518), 1,
      sym_comment,
  [20760] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(519), 1,
      sym_comment,
  [20773] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1437), 1,
      sym__identifier_dot,
    STATE(520), 1,
      sym_comment,
  [20786] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1439), 1,
      aux_sym__double_quote_string_token1,
    STATE(521), 1,
      sym_comment,
  [20799] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1441), 1,
      aux_sym__single_quote_string_token1,
    STATE(522), 1,
      sym_comment,
  [20812] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1443), 1,
      sym__identifier_dot,
    STATE(523), 1,
      sym_comment,
  [20825] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1445), 1,
      aux_sym__double_quote_string_token1,
    STATE(524), 1,
      sym_comment,
  [20838] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1447), 1,
      aux_sym__single_quote_string_token1,
    STATE(525), 1,
      sym_comment,
  [20851] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1449), 1,
      sym__identifier_dot,
    STATE(526), 1,
      sym_comment,
  [20864] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1207), 1,
      anon_sym_POUND,
    ACTIONS(1451), 1,
      aux_sym__double_quote_string_token1,
    STATE(527), 1,
      sym_comment,
  [20877] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1453), 1,
      sym__identifier_dot,
    STATE(528), 1,
      sym_comment,
  [20890] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1455), 1,
      sym__identifier_dot,
    STATE(529), 1,
      sym_comment,
  [20903] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1457), 1,
      sym__identifier_dot,
    STATE(530), 1,
      sym_comment,
  [20916] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1459), 1,
      ts_builtin_sym_end,
    STATE(531), 1,
      sym_comment,
  [20929] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1461), 1,
      anon_sym_RPAREN,
    STATE(532), 1,
      sym_comment,
  [20942] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1463), 1,
      anon_sym_DQUOTE,
    STATE(533), 1,
      sym_comment,
  [20955] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1465), 1,
      anon_sym_COLON,
    STATE(534), 1,
      sym_comment,
  [20968] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1467), 1,
      aux_sym__date_token2,
    STATE(535), 1,
      sym_comment,
  [20981] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1469), 1,
      aux_sym__date_token2,
    STATE(536), 1,
      sym_comment,
  [20994] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_pipe,
    ACTIONS(1471), 1,
      aux_sym__date_token2,
    STATE(537), 1,
      sym_comment,
  [21007] = 1,
    ACTIONS(1473), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 131,
  [SMALL_STATE(4)] = 259,
  [SMALL_STATE(5)] = 387,
  [SMALL_STATE(6)] = 484,
  [SMALL_STATE(7)] = 609,
  [SMALL_STATE(8)] = 731,
  [SMALL_STATE(9)] = 853,
  [SMALL_STATE(10)] = 975,
  [SMALL_STATE(11)] = 1095,
  [SMALL_STATE(12)] = 1189,
  [SMALL_STATE(13)] = 1308,
  [SMALL_STATE(14)] = 1418,
  [SMALL_STATE(15)] = 1532,
  [SMALL_STATE(16)] = 1642,
  [SMALL_STATE(17)] = 1700,
  [SMALL_STATE(18)] = 1812,
  [SMALL_STATE(19)] = 1872,
  [SMALL_STATE(20)] = 1984,
  [SMALL_STATE(21)] = 2096,
  [SMALL_STATE(22)] = 2208,
  [SMALL_STATE(23)] = 2268,
  [SMALL_STATE(24)] = 2380,
  [SMALL_STATE(25)] = 2490,
  [SMALL_STATE(26)] = 2602,
  [SMALL_STATE(27)] = 2718,
  [SMALL_STATE(28)] = 2830,
  [SMALL_STATE(29)] = 2943,
  [SMALL_STATE(30)] = 3052,
  [SMALL_STATE(31)] = 3161,
  [SMALL_STATE(32)] = 3274,
  [SMALL_STATE(33)] = 3385,
  [SMALL_STATE(34)] = 3494,
  [SMALL_STATE(35)] = 3603,
  [SMALL_STATE(36)] = 3712,
  [SMALL_STATE(37)] = 3821,
  [SMALL_STATE(38)] = 3930,
  [SMALL_STATE(39)] = 3985,
  [SMALL_STATE(40)] = 4094,
  [SMALL_STATE(41)] = 4149,
  [SMALL_STATE(42)] = 4258,
  [SMALL_STATE(43)] = 4313,
  [SMALL_STATE(44)] = 4419,
  [SMALL_STATE(45)] = 4477,
  [SMALL_STATE(46)] = 4587,
  [SMALL_STATE(47)] = 4691,
  [SMALL_STATE(48)] = 4797,
  [SMALL_STATE(49)] = 4855,
  [SMALL_STATE(50)] = 4961,
  [SMALL_STATE(51)] = 5023,
  [SMALL_STATE(52)] = 5127,
  [SMALL_STATE(53)] = 5182,
  [SMALL_STATE(54)] = 5285,
  [SMALL_STATE(55)] = 5385,
  [SMALL_STATE(56)] = 5437,
  [SMALL_STATE(57)] = 5537,
  [SMALL_STATE(58)] = 5637,
  [SMALL_STATE(59)] = 5721,
  [SMALL_STATE(60)] = 5773,
  [SMALL_STATE(61)] = 5825,
  [SMALL_STATE(62)] = 5925,
  [SMALL_STATE(63)] = 6011,
  [SMALL_STATE(64)] = 6063,
  [SMALL_STATE(65)] = 6165,
  [SMALL_STATE(66)] = 6217,
  [SMALL_STATE(67)] = 6319,
  [SMALL_STATE(68)] = 6373,
  [SMALL_STATE(69)] = 6425,
  [SMALL_STATE(70)] = 6525,
  [SMALL_STATE(71)] = 6625,
  [SMALL_STATE(72)] = 6725,
  [SMALL_STATE(73)] = 6825,
  [SMALL_STATE(74)] = 6925,
  [SMALL_STATE(75)] = 7025,
  [SMALL_STATE(76)] = 7125,
  [SMALL_STATE(77)] = 7225,
  [SMALL_STATE(78)] = 7279,
  [SMALL_STATE(79)] = 7333,
  [SMALL_STATE(80)] = 7385,
  [SMALL_STATE(81)] = 7485,
  [SMALL_STATE(82)] = 7539,
  [SMALL_STATE(83)] = 7623,
  [SMALL_STATE(84)] = 7677,
  [SMALL_STATE(85)] = 7779,
  [SMALL_STATE(86)] = 7881,
  [SMALL_STATE(87)] = 7933,
  [SMALL_STATE(88)] = 8035,
  [SMALL_STATE(89)] = 8137,
  [SMALL_STATE(90)] = 8189,
  [SMALL_STATE(91)] = 8248,
  [SMALL_STATE(92)] = 8299,
  [SMALL_STATE(93)] = 8350,
  [SMALL_STATE(94)] = 8401,
  [SMALL_STATE(95)] = 8454,
  [SMALL_STATE(96)] = 8505,
  [SMALL_STATE(97)] = 8556,
  [SMALL_STATE(98)] = 8607,
  [SMALL_STATE(99)] = 8658,
  [SMALL_STATE(100)] = 8709,
  [SMALL_STATE(101)] = 8760,
  [SMALL_STATE(102)] = 8811,
  [SMALL_STATE(103)] = 8862,
  [SMALL_STATE(104)] = 8913,
  [SMALL_STATE(105)] = 8964,
  [SMALL_STATE(106)] = 9015,
  [SMALL_STATE(107)] = 9076,
  [SMALL_STATE(108)] = 9131,
  [SMALL_STATE(109)] = 9188,
  [SMALL_STATE(110)] = 9257,
  [SMALL_STATE(111)] = 9308,
  [SMALL_STATE(112)] = 9359,
  [SMALL_STATE(113)] = 9410,
  [SMALL_STATE(114)] = 9461,
  [SMALL_STATE(115)] = 9512,
  [SMALL_STATE(116)] = 9577,
  [SMALL_STATE(117)] = 9644,
  [SMALL_STATE(118)] = 9713,
  [SMALL_STATE(119)] = 9782,
  [SMALL_STATE(120)] = 9863,
  [SMALL_STATE(121)] = 9946,
  [SMALL_STATE(122)] = 10013,
  [SMALL_STATE(123)] = 10081,
  [SMALL_STATE(124)] = 10150,
  [SMALL_STATE(125)] = 10193,
  [SMALL_STATE(126)] = 10256,
  [SMALL_STATE(127)] = 10325,
  [SMALL_STATE(128)] = 10370,
  [SMALL_STATE(129)] = 10415,
  [SMALL_STATE(130)] = 10460,
  [SMALL_STATE(131)] = 10503,
  [SMALL_STATE(132)] = 10550,
  [SMALL_STATE(133)] = 10592,
  [SMALL_STATE(134)] = 10634,
  [SMALL_STATE(135)] = 10676,
  [SMALL_STATE(136)] = 10718,
  [SMALL_STATE(137)] = 10764,
  [SMALL_STATE(138)] = 10806,
  [SMALL_STATE(139)] = 10850,
  [SMALL_STATE(140)] = 10892,
  [SMALL_STATE(141)] = 10934,
  [SMALL_STATE(142)] = 10976,
  [SMALL_STATE(143)] = 11040,
  [SMALL_STATE(144)] = 11106,
  [SMALL_STATE(145)] = 11148,
  [SMALL_STATE(146)] = 11190,
  [SMALL_STATE(147)] = 11232,
  [SMALL_STATE(148)] = 11274,
  [SMALL_STATE(149)] = 11320,
  [SMALL_STATE(150)] = 11362,
  [SMALL_STATE(151)] = 11403,
  [SMALL_STATE(152)] = 11443,
  [SMALL_STATE(153)] = 11507,
  [SMALL_STATE(154)] = 11551,
  [SMALL_STATE(155)] = 11593,
  [SMALL_STATE(156)] = 11633,
  [SMALL_STATE(157)] = 11675,
  [SMALL_STATE(158)] = 11717,
  [SMALL_STATE(159)] = 11756,
  [SMALL_STATE(160)] = 11795,
  [SMALL_STATE(161)] = 11834,
  [SMALL_STATE(162)] = 11873,
  [SMALL_STATE(163)] = 11912,
  [SMALL_STATE(164)] = 11951,
  [SMALL_STATE(165)] = 12010,
  [SMALL_STATE(166)] = 12049,
  [SMALL_STATE(167)] = 12120,
  [SMALL_STATE(168)] = 12159,
  [SMALL_STATE(169)] = 12220,
  [SMALL_STATE(170)] = 12259,
  [SMALL_STATE(171)] = 12328,
  [SMALL_STATE(172)] = 12367,
  [SMALL_STATE(173)] = 12406,
  [SMALL_STATE(174)] = 12445,
  [SMALL_STATE(175)] = 12484,
  [SMALL_STATE(176)] = 12522,
  [SMALL_STATE(177)] = 12582,
  [SMALL_STATE(178)] = 12620,
  [SMALL_STATE(179)] = 12658,
  [SMALL_STATE(180)] = 12697,
  [SMALL_STATE(181)] = 12732,
  [SMALL_STATE(182)] = 12767,
  [SMALL_STATE(183)] = 12802,
  [SMALL_STATE(184)] = 12837,
  [SMALL_STATE(185)] = 12872,
  [SMALL_STATE(186)] = 12911,
  [SMALL_STATE(187)] = 12946,
  [SMALL_STATE(188)] = 12981,
  [SMALL_STATE(189)] = 13016,
  [SMALL_STATE(190)] = 13051,
  [SMALL_STATE(191)] = 13088,
  [SMALL_STATE(192)] = 13123,
  [SMALL_STATE(193)] = 13158,
  [SMALL_STATE(194)] = 13195,
  [SMALL_STATE(195)] = 13229,
  [SMALL_STATE(196)] = 13263,
  [SMALL_STATE(197)] = 13297,
  [SMALL_STATE(198)] = 13331,
  [SMALL_STATE(199)] = 13365,
  [SMALL_STATE(200)] = 13399,
  [SMALL_STATE(201)] = 13433,
  [SMALL_STATE(202)] = 13467,
  [SMALL_STATE(203)] = 13501,
  [SMALL_STATE(204)] = 13535,
  [SMALL_STATE(205)] = 13569,
  [SMALL_STATE(206)] = 13603,
  [SMALL_STATE(207)] = 13637,
  [SMALL_STATE(208)] = 13670,
  [SMALL_STATE(209)] = 13703,
  [SMALL_STATE(210)] = 13736,
  [SMALL_STATE(211)] = 13769,
  [SMALL_STATE(212)] = 13802,
  [SMALL_STATE(213)] = 13835,
  [SMALL_STATE(214)] = 13868,
  [SMALL_STATE(215)] = 13901,
  [SMALL_STATE(216)] = 13934,
  [SMALL_STATE(217)] = 13967,
  [SMALL_STATE(218)] = 14000,
  [SMALL_STATE(219)] = 14033,
  [SMALL_STATE(220)] = 14066,
  [SMALL_STATE(221)] = 14099,
  [SMALL_STATE(222)] = 14132,
  [SMALL_STATE(223)] = 14165,
  [SMALL_STATE(224)] = 14198,
  [SMALL_STATE(225)] = 14231,
  [SMALL_STATE(226)] = 14264,
  [SMALL_STATE(227)] = 14297,
  [SMALL_STATE(228)] = 14330,
  [SMALL_STATE(229)] = 14363,
  [SMALL_STATE(230)] = 14396,
  [SMALL_STATE(231)] = 14429,
  [SMALL_STATE(232)] = 14462,
  [SMALL_STATE(233)] = 14495,
  [SMALL_STATE(234)] = 14528,
  [SMALL_STATE(235)] = 14561,
  [SMALL_STATE(236)] = 14594,
  [SMALL_STATE(237)] = 14627,
  [SMALL_STATE(238)] = 14660,
  [SMALL_STATE(239)] = 14713,
  [SMALL_STATE(240)] = 14746,
  [SMALL_STATE(241)] = 14779,
  [SMALL_STATE(242)] = 14812,
  [SMALL_STATE(243)] = 14845,
  [SMALL_STATE(244)] = 14878,
  [SMALL_STATE(245)] = 14915,
  [SMALL_STATE(246)] = 14949,
  [SMALL_STATE(247)] = 14987,
  [SMALL_STATE(248)] = 15018,
  [SMALL_STATE(249)] = 15055,
  [SMALL_STATE(250)] = 15086,
  [SMALL_STATE(251)] = 15119,
  [SMALL_STATE(252)] = 15167,
  [SMALL_STATE(253)] = 15197,
  [SMALL_STATE(254)] = 15245,
  [SMALL_STATE(255)] = 15279,
  [SMALL_STATE(256)] = 15311,
  [SMALL_STATE(257)] = 15341,
  [SMALL_STATE(258)] = 15373,
  [SMALL_STATE(259)] = 15405,
  [SMALL_STATE(260)] = 15453,
  [SMALL_STATE(261)] = 15501,
  [SMALL_STATE(262)] = 15533,
  [SMALL_STATE(263)] = 15581,
  [SMALL_STATE(264)] = 15629,
  [SMALL_STATE(265)] = 15677,
  [SMALL_STATE(266)] = 15725,
  [SMALL_STATE(267)] = 15754,
  [SMALL_STATE(268)] = 15785,
  [SMALL_STATE(269)] = 15832,
  [SMALL_STATE(270)] = 15861,
  [SMALL_STATE(271)] = 15892,
  [SMALL_STATE(272)] = 15921,
  [SMALL_STATE(273)] = 15968,
  [SMALL_STATE(274)] = 15997,
  [SMALL_STATE(275)] = 16042,
  [SMALL_STATE(276)] = 16071,
  [SMALL_STATE(277)] = 16114,
  [SMALL_STATE(278)] = 16143,
  [SMALL_STATE(279)] = 16172,
  [SMALL_STATE(280)] = 16203,
  [SMALL_STATE(281)] = 16234,
  [SMALL_STATE(282)] = 16263,
  [SMALL_STATE(283)] = 16292,
  [SMALL_STATE(284)] = 16321,
  [SMALL_STATE(285)] = 16350,
  [SMALL_STATE(286)] = 16381,
  [SMALL_STATE(287)] = 16410,
  [SMALL_STATE(288)] = 16457,
  [SMALL_STATE(289)] = 16501,
  [SMALL_STATE(290)] = 16547,
  [SMALL_STATE(291)] = 16591,
  [SMALL_STATE(292)] = 16617,
  [SMALL_STATE(293)] = 16652,
  [SMALL_STATE(294)] = 16689,
  [SMALL_STATE(295)] = 16726,
  [SMALL_STATE(296)] = 16760,
  [SMALL_STATE(297)] = 16794,
  [SMALL_STATE(298)] = 16826,
  [SMALL_STATE(299)] = 16860,
  [SMALL_STATE(300)] = 16894,
  [SMALL_STATE(301)] = 16928,
  [SMALL_STATE(302)] = 16959,
  [SMALL_STATE(303)] = 16990,
  [SMALL_STATE(304)] = 17021,
  [SMALL_STATE(305)] = 17052,
  [SMALL_STATE(306)] = 17083,
  [SMALL_STATE(307)] = 17118,
  [SMALL_STATE(308)] = 17150,
  [SMALL_STATE(309)] = 17176,
  [SMALL_STATE(310)] = 17208,
  [SMALL_STATE(311)] = 17240,
  [SMALL_STATE(312)] = 17272,
  [SMALL_STATE(313)] = 17304,
  [SMALL_STATE(314)] = 17333,
  [SMALL_STATE(315)] = 17356,
  [SMALL_STATE(316)] = 17387,
  [SMALL_STATE(317)] = 17418,
  [SMALL_STATE(318)] = 17439,
  [SMALL_STATE(319)] = 17464,
  [SMALL_STATE(320)] = 17489,
  [SMALL_STATE(321)] = 17516,
  [SMALL_STATE(322)] = 17541,
  [SMALL_STATE(323)] = 17562,
  [SMALL_STATE(324)] = 17589,
  [SMALL_STATE(325)] = 17609,
  [SMALL_STATE(326)] = 17631,
  [SMALL_STATE(327)] = 17651,
  [SMALL_STATE(328)] = 17675,
  [SMALL_STATE(329)] = 17695,
  [SMALL_STATE(330)] = 17723,
  [SMALL_STATE(331)] = 17743,
  [SMALL_STATE(332)] = 17769,
  [SMALL_STATE(333)] = 17795,
  [SMALL_STATE(334)] = 17815,
  [SMALL_STATE(335)] = 17835,
  [SMALL_STATE(336)] = 17859,
  [SMALL_STATE(337)] = 17878,
  [SMALL_STATE(338)] = 17899,
  [SMALL_STATE(339)] = 17924,
  [SMALL_STATE(340)] = 17947,
  [SMALL_STATE(341)] = 17966,
  [SMALL_STATE(342)] = 17989,
  [SMALL_STATE(343)] = 18012,
  [SMALL_STATE(344)] = 18031,
  [SMALL_STATE(345)] = 18050,
  [SMALL_STATE(346)] = 18069,
  [SMALL_STATE(347)] = 18094,
  [SMALL_STATE(348)] = 18111,
  [SMALL_STATE(349)] = 18128,
  [SMALL_STATE(350)] = 18151,
  [SMALL_STATE(351)] = 18170,
  [SMALL_STATE(352)] = 18193,
  [SMALL_STATE(353)] = 18218,
  [SMALL_STATE(354)] = 18237,
  [SMALL_STATE(355)] = 18258,
  [SMALL_STATE(356)] = 18277,
  [SMALL_STATE(357)] = 18302,
  [SMALL_STATE(358)] = 18321,
  [SMALL_STATE(359)] = 18337,
  [SMALL_STATE(360)] = 18353,
  [SMALL_STATE(361)] = 18369,
  [SMALL_STATE(362)] = 18389,
  [SMALL_STATE(363)] = 18405,
  [SMALL_STATE(364)] = 18421,
  [SMALL_STATE(365)] = 18437,
  [SMALL_STATE(366)] = 18457,
  [SMALL_STATE(367)] = 18477,
  [SMALL_STATE(368)] = 18493,
  [SMALL_STATE(369)] = 18515,
  [SMALL_STATE(370)] = 18531,
  [SMALL_STATE(371)] = 18547,
  [SMALL_STATE(372)] = 18563,
  [SMALL_STATE(373)] = 18581,
  [SMALL_STATE(374)] = 18597,
  [SMALL_STATE(375)] = 18617,
  [SMALL_STATE(376)] = 18639,
  [SMALL_STATE(377)] = 18659,
  [SMALL_STATE(378)] = 18679,
  [SMALL_STATE(379)] = 18696,
  [SMALL_STATE(380)] = 18715,
  [SMALL_STATE(381)] = 18734,
  [SMALL_STATE(382)] = 18749,
  [SMALL_STATE(383)] = 18766,
  [SMALL_STATE(384)] = 18785,
  [SMALL_STATE(385)] = 18804,
  [SMALL_STATE(386)] = 18823,
  [SMALL_STATE(387)] = 18842,
  [SMALL_STATE(388)] = 18861,
  [SMALL_STATE(389)] = 18880,
  [SMALL_STATE(390)] = 18899,
  [SMALL_STATE(391)] = 18914,
  [SMALL_STATE(392)] = 18933,
  [SMALL_STATE(393)] = 18950,
  [SMALL_STATE(394)] = 18969,
  [SMALL_STATE(395)] = 18986,
  [SMALL_STATE(396)] = 19003,
  [SMALL_STATE(397)] = 19020,
  [SMALL_STATE(398)] = 19037,
  [SMALL_STATE(399)] = 19054,
  [SMALL_STATE(400)] = 19071,
  [SMALL_STATE(401)] = 19090,
  [SMALL_STATE(402)] = 19109,
  [SMALL_STATE(403)] = 19128,
  [SMALL_STATE(404)] = 19147,
  [SMALL_STATE(405)] = 19164,
  [SMALL_STATE(406)] = 19183,
  [SMALL_STATE(407)] = 19202,
  [SMALL_STATE(408)] = 19221,
  [SMALL_STATE(409)] = 19240,
  [SMALL_STATE(410)] = 19255,
  [SMALL_STATE(411)] = 19274,
  [SMALL_STATE(412)] = 19293,
  [SMALL_STATE(413)] = 19308,
  [SMALL_STATE(414)] = 19327,
  [SMALL_STATE(415)] = 19346,
  [SMALL_STATE(416)] = 19365,
  [SMALL_STATE(417)] = 19384,
  [SMALL_STATE(418)] = 19403,
  [SMALL_STATE(419)] = 19422,
  [SMALL_STATE(420)] = 19438,
  [SMALL_STATE(421)] = 19454,
  [SMALL_STATE(422)] = 19468,
  [SMALL_STATE(423)] = 19484,
  [SMALL_STATE(424)] = 19498,
  [SMALL_STATE(425)] = 19512,
  [SMALL_STATE(426)] = 19528,
  [SMALL_STATE(427)] = 19542,
  [SMALL_STATE(428)] = 19558,
  [SMALL_STATE(429)] = 19572,
  [SMALL_STATE(430)] = 19588,
  [SMALL_STATE(431)] = 19604,
  [SMALL_STATE(432)] = 19620,
  [SMALL_STATE(433)] = 19636,
  [SMALL_STATE(434)] = 19650,
  [SMALL_STATE(435)] = 19664,
  [SMALL_STATE(436)] = 19678,
  [SMALL_STATE(437)] = 19694,
  [SMALL_STATE(438)] = 19707,
  [SMALL_STATE(439)] = 19720,
  [SMALL_STATE(440)] = 19733,
  [SMALL_STATE(441)] = 19746,
  [SMALL_STATE(442)] = 19759,
  [SMALL_STATE(443)] = 19772,
  [SMALL_STATE(444)] = 19785,
  [SMALL_STATE(445)] = 19798,
  [SMALL_STATE(446)] = 19811,
  [SMALL_STATE(447)] = 19824,
  [SMALL_STATE(448)] = 19837,
  [SMALL_STATE(449)] = 19850,
  [SMALL_STATE(450)] = 19863,
  [SMALL_STATE(451)] = 19876,
  [SMALL_STATE(452)] = 19889,
  [SMALL_STATE(453)] = 19902,
  [SMALL_STATE(454)] = 19915,
  [SMALL_STATE(455)] = 19928,
  [SMALL_STATE(456)] = 19941,
  [SMALL_STATE(457)] = 19954,
  [SMALL_STATE(458)] = 19967,
  [SMALL_STATE(459)] = 19980,
  [SMALL_STATE(460)] = 19993,
  [SMALL_STATE(461)] = 20006,
  [SMALL_STATE(462)] = 20019,
  [SMALL_STATE(463)] = 20032,
  [SMALL_STATE(464)] = 20045,
  [SMALL_STATE(465)] = 20058,
  [SMALL_STATE(466)] = 20071,
  [SMALL_STATE(467)] = 20084,
  [SMALL_STATE(468)] = 20097,
  [SMALL_STATE(469)] = 20110,
  [SMALL_STATE(470)] = 20123,
  [SMALL_STATE(471)] = 20136,
  [SMALL_STATE(472)] = 20149,
  [SMALL_STATE(473)] = 20162,
  [SMALL_STATE(474)] = 20175,
  [SMALL_STATE(475)] = 20188,
  [SMALL_STATE(476)] = 20201,
  [SMALL_STATE(477)] = 20214,
  [SMALL_STATE(478)] = 20227,
  [SMALL_STATE(479)] = 20240,
  [SMALL_STATE(480)] = 20253,
  [SMALL_STATE(481)] = 20266,
  [SMALL_STATE(482)] = 20279,
  [SMALL_STATE(483)] = 20292,
  [SMALL_STATE(484)] = 20305,
  [SMALL_STATE(485)] = 20318,
  [SMALL_STATE(486)] = 20331,
  [SMALL_STATE(487)] = 20344,
  [SMALL_STATE(488)] = 20357,
  [SMALL_STATE(489)] = 20370,
  [SMALL_STATE(490)] = 20383,
  [SMALL_STATE(491)] = 20396,
  [SMALL_STATE(492)] = 20409,
  [SMALL_STATE(493)] = 20422,
  [SMALL_STATE(494)] = 20435,
  [SMALL_STATE(495)] = 20448,
  [SMALL_STATE(496)] = 20461,
  [SMALL_STATE(497)] = 20474,
  [SMALL_STATE(498)] = 20487,
  [SMALL_STATE(499)] = 20500,
  [SMALL_STATE(500)] = 20513,
  [SMALL_STATE(501)] = 20526,
  [SMALL_STATE(502)] = 20539,
  [SMALL_STATE(503)] = 20552,
  [SMALL_STATE(504)] = 20565,
  [SMALL_STATE(505)] = 20578,
  [SMALL_STATE(506)] = 20591,
  [SMALL_STATE(507)] = 20604,
  [SMALL_STATE(508)] = 20617,
  [SMALL_STATE(509)] = 20630,
  [SMALL_STATE(510)] = 20643,
  [SMALL_STATE(511)] = 20656,
  [SMALL_STATE(512)] = 20669,
  [SMALL_STATE(513)] = 20682,
  [SMALL_STATE(514)] = 20695,
  [SMALL_STATE(515)] = 20708,
  [SMALL_STATE(516)] = 20721,
  [SMALL_STATE(517)] = 20734,
  [SMALL_STATE(518)] = 20747,
  [SMALL_STATE(519)] = 20760,
  [SMALL_STATE(520)] = 20773,
  [SMALL_STATE(521)] = 20786,
  [SMALL_STATE(522)] = 20799,
  [SMALL_STATE(523)] = 20812,
  [SMALL_STATE(524)] = 20825,
  [SMALL_STATE(525)] = 20838,
  [SMALL_STATE(526)] = 20851,
  [SMALL_STATE(527)] = 20864,
  [SMALL_STATE(528)] = 20877,
  [SMALL_STATE(529)] = 20890,
  [SMALL_STATE(530)] = 20903,
  [SMALL_STATE(531)] = 20916,
  [SMALL_STATE(532)] = 20929,
  [SMALL_STATE(533)] = 20942,
  [SMALL_STATE(534)] = 20955,
  [SMALL_STATE(535)] = 20968,
  [SMALL_STATE(536)] = 20981,
  [SMALL_STATE(537)] = 20994,
  [SMALL_STATE(538)] = 21007,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 7),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 7),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(42),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(113),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(84),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(463),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(374),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(461),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(460),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(459),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(431),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(458),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(429),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(42),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(42),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(516),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(60),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(375),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 6),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(140),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(486),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(361),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(521),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(518),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(134),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(134),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(526),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(124),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 19),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 19),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 25),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 25),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(173),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(500),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(376),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(527),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(525),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(174),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(174),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(530),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(151),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 8),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 8),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 11),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 11),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(134),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(134),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(150),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 33),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 33),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 26),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 26),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(53),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(24),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(35),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(474),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(311),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(310),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(316),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(23),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(356),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(468),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(174),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(174),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(13),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(25),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(269),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(494),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(377),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(524),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(522),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(275),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(275),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(528),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(252),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 23),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 23),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 14),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 14),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 2),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 4),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 4),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 6),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 6),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2, .production_id = 9),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2, .production_id = 9),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 1),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 29),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 29),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 30),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 30),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4, .production_id = 14),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4, .production_id = 14),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 6),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 6),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2, .production_id = 1),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2, .production_id = 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 7),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 7),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 6),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 6),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 3),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 3),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 2),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 7),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 7),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 4),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 4),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 1),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 5),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 5),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 5),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 9),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 9),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_append, 2, .production_id = 1),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append, 2, .production_id = 1),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 4),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 4),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 35),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 35),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 4),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 4),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 34),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 34),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_keywords, 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_keywords, 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(275),
  [926] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(275),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 2),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [979] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(338),
  [982] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(415),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(408),
  [988] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(405),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(474),
  [1002] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(311),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(310),
  [1008] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(327),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1031] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1033] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(422),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 32),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 32),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 32), SHIFT_REPEAT(402),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_call, 4, .production_id = 27),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_call, 4, .production_id = 27),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_call, 3, .production_id = 24),
  [1067] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_call, 3, .production_id = 24),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(330),
  [1074] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(330),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1079] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 31),
  [1083] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 31),
  [1085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(534),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1098] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(511),
  [1113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(359),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(367),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 7, .production_id = 11),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 7, .production_id = 11),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(6),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(49),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuples_repeat1, 2), SHIFT_REPEAT(47),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuples_repeat1, 2),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(87),
  [1223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(433),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(313),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(45),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(349),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [1435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [1441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1459] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 2),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
